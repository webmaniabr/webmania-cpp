#include <webmania_cpp/webmania.hpp>
#include <cerrno>
#include <cstdio>
#include <dirent.h>
#include <iostream>
#include <sys/wait.h>
using namespace webmania;
static void check(bool test){if(!test)throw std::runtime_error("Lifetime control failed.");}
static int count(const char*path){auto*d=opendir(path);check(d);int n=0;while(auto*e=readdir(d))if(std::string_view(e->d_name)!="."&&std::string_view(e->d_name)!="..")++n;closedir(d);return n;}
int main(int argc,char**argv){try{
  check(argc==4);std::string mode=argv[1];Config config;config.worker_path(argv[3]);config.base_url(argv[2]);if(mode=="timeout")config.timeout(std::chrono::milliseconds(100));
  std::unique_ptr<std::FILE,decltype(&std::fclose)> sentinel(std::fopen("/tmp/webmania-cpp-sentinel","w+"),&std::fclose);check(static_cast<bool>(sentinel));
  // Original facade, credential and config are destroyed before using the shared client.
  auto client=[&]{CompanyCredentials credentials("synthetic-company-key","synthetic-secret","synthetic-token","synthetic-secret2");NfeClient original(credentials,config);return original.share();}();
  api1_fiscal::NfeCancelRequest body;bool invalid=mode=="invalid";
  if(!invalid){body.set_uuid("00000000-0000-4000-8000-000000000001");body.set_motivo("Motivo sintetico de cancelamento");}
  auto cancel=[] {Cancel original;return original.share();}();if(mode=="pre")cancel.request();
  auto fds=count("/proc/self/fd");auto tasks=count("/proc/self/task");bool threaded=mode=="cancel";std::thread reader;
  if(threaded)reader=std::thread([token=cancel.share()]{std::cin.get();token.request();});
  int repetitions=invalid?64:1;
  for(int i=0;i<repetitions;++i){bool failed=false;try{auto result=client.cancel_document(body,&cancel);(void)result;}catch(const Error&e){failed=true;check(e.kind()==(invalid?"validation":mode=="timeout"?"timeout":"cancelled"));check(std::string_view(e.what()).find("00000000-0000-4000-8000-000000000001")==std::string_view::npos);check(std::string_view(e.what()).find("synthetic")==std::string_view::npos);bool sent=threaded||mode=="timeout";check(e.outcome_unknown()==sent);auto recovery=e.reveal_recovery();check(recovery.has_value()==sent);if(recovery)check(recovery->to_json().find("00000000-0000-4000-8000-000000000001")!=std::string::npos);}check(failed);if(invalid){check(count("/proc/self/fd")==fds);check(count("/proc/self/task")==tasks);int status=0;errno=0;check(waitpid(-1,&status,WNOHANG)==-1&&errno==ECHILD);}}
  if(threaded){reader.join();}
  check(count("/proc/self/fd")==fds);check(count("/proc/self/task")==tasks);int status=0;errno=0;check(waitpid(-1,&status,WNOHANG)==-1&&errno==ECHILD);
  std::cout<<"C++ lifetime "<<mode<<": "<<repetitions<<" calls, immediate fd/task/child baseline PASS\n";return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
