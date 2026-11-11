#include <webmania_cpp/webmania.hpp>
#include <cassert>
#include <dirent.h>
#include <errno.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sys/wait.h>
#include <thread>
#include <type_traits>
using namespace webmania;
static int entries(const char*p){DIR*d=opendir(p);assert(d);int n=0;dirent*e;while((e=readdir(d)))if(std::string(e->d_name)!="."&&std::string(e->d_name)!="..")++n;closedir(d);return n;}
template<class F>static void wrong_variant(F&&call){bool failed=false;try{call();}catch(const std::logic_error&){failed=true;}assert(failed);}
static void print_file(const FileResponse&file){auto bytes=file.bytes();auto independent=file.bytes();assert(bytes==independent);if(!bytes.empty()){auto original=independent[0];bytes[0]^=255;assert(independent[0]==original);bytes[0]^=255;}std::cout<<"{\"kind\":\"file\",\"status\":"<<file.status()<<",\"media_type\":"<<Scalar::text(file.media_type()).to_json()<<",\"file_kind\":"<<Scalar::text(file.kind()).to_json()<<",\"bytes_hex\":\"";constexpr char hex[]="0123456789abcdef";for(auto b:bytes)std::cout<<hex[b>>4]<<hex[b&15];std::cout<<"\"}";}
int main(int argc,char**argv){try{
  if(argc!=8)return 90;
  static_assert(!std::is_copy_constructible_v<FileOrRedirect>);static_assert(!std::is_copy_constructible_v<api2_emitter_files::NfsePdfPending>);
  static_assert(std::is_same_v<decltype(std::declval<const FileOrRedirect&>().pending()),api2_emitter_files::NfsePdfPending>);
  const int fds=entries("/proc/self/fd"),tasks=entries("/proc/self/task");
  {
    const std::string op=argv[1],mode=argv[2],control=argv[7];Config config;config.base_url(argv[3]);config.trust_file_origin(argv[3]);config.worker_path(argv[5]);config.timeout(std::chrono::milliseconds(std::stoi(argv[6])));
    std::ifstream ca(argv[4]);config.ca_pem(std::string(std::istreambuf_iterator<char>(ca),{}));ca.close();
    std::optional<IssuerToken> credential;if(mode=="issuer")credential.emplace("SyntheticIssuerForCAlpha3");
    auto client=credential?EmitterFilesClient(*credential,config):EmitterFilesClient(config);NfeFilesClient reports(config);
    auto auth=mode=="issuer"?FileAuth::issuer():mode=="document_token"?FileAuth::document_token("SyntheticDocumentForCAlpha3"):mode=="capability"?FileAuth::public_report():FileAuth::anonymous();
    Cancel cancel;if(control=="pre")cancel.request();std::optional<std::thread> stopper;
    if(control=="cancel")stopper.emplace([token=cancel.share()]()mutable{char c=0;std::cin.get(c);token.request();});
    try{
      const std::string id="ce2fc70d-3c76-4a9f-8123-012345678901";std::optional<FileOrRedirect> result;std::optional<FileResponse> file;
      if(op=="nfse")result.emplace(client.get_nfse_pdf(id,auth,&cancel));
      else if(op=="rps")file.emplace(client.get_nfse_rps_pdf(id,auth,&cancel));
      else if(op=="cte")file.emplace(client.get_cte_pdf(id,auth,&cancel));
      else if(op=="correction")file.emplace(client.get_cte_correction_pdf(id,auth,&cancel));
      else if(op=="mdfe")file.emplace(client.get_mdfe_pdf(id,auth,&cancel));
      else if(op=="nfcom")file.emplace(client.get_nfcom_pdf(id,auth,&cancel));
      else if(op=="dce")file.emplace(client.get_dce_pdf(id,auth,&cancel));
      else if(op=="xml")file.emplace(client.get_nfse_xml(id,auth,&cancel));
      else if(op=="report")file.emplace(reports.download_report(id,auth,&cancel));
      else throw std::invalid_argument("Unknown fixture operation.");
      std::cout<<"{\"ok\":true,\"result\":";
      if(result&&result->result_kind()==FileResultKind::pending){
        assert(result->is_pending()&&!result->is_redirect()&&!result->file());wrong_variant([&]{result->reveal_location();});assert(result->pending_status()==200&&result->pending_media_type()=="application/json");
        auto a=result->pending();auto b=result->pending();result.reset();a.set_msg("Changed owned copy");assert(b.get_msg().value()!="Changed owned copy");
        auto moved=std::move(a);wrong_variant([&]{a.to_json();});assert(moved.get_msg().value()=="Changed owned copy");
        std::cout<<"{\"kind\":\"pending\",\"status\":200,\"media_type\":\"application/json\",\"value\":"<<b.to_json()<<'}';
      }else if(result&&result->result_kind()==FileResultKind::redirect){
        assert(result->is_redirect()&&!result->is_pending()&&!result->file());wrong_variant([&]{result->pending();});wrong_variant([&]{result->pending_status();});wrong_variant([&]{result->pending_media_type();});std::cout<<"{\"kind\":\"redirect\",\"protected_location\":"<<Scalar::text(result->reveal_location()).to_json()<<'}';
      }else{
        if(result){assert(result->result_kind()==FileResultKind::file&&!result->is_pending()&&!result->is_redirect());wrong_variant([&]{result->pending();});wrong_variant([&]{result->pending_status();});wrong_variant([&]{result->pending_media_type();});wrong_variant([&]{result->reveal_location();});file.emplace(std::move(result->file()).value());result.reset();}
        assert(file);print_file(*file);
      }
      std::cout<<'}';
    }catch(const Error&e){std::cout<<"{\"ok\":false,\"kind\":"<<Scalar::text(e.kind()).to_json()<<",\"unknown\":"<<(e.outcome_unknown()?"true":"false")<<'}';}
    if(stopper)stopper->join();
  }
  int status=0;errno=0;assert(waitpid(-1,&status,WNOHANG)==-1&&errno==ECHILD);assert(entries("/proc/self/fd")==fds);assert(entries("/proc/self/task")==tasks);return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 94;}}
