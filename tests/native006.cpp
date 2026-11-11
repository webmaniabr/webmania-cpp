#include <webmania_cpp/webmania.hpp>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <dirent.h>
#include <iostream>
#include <string>
#include <sys/wait.h>
using namespace webmania;
static int entries(const char* path){auto*d=opendir(path);if(!d)std::abort();int n=0;while(auto*e=readdir(d))if(std::string(e->d_name)!="."&&std::string(e->d_name)!="..")++n;closedir(d);return n;}
int main(int argc,char**argv){
 if(argc!=7||version()!="0.1.0-alpha.6"||c_version()!="0.1.0-alpha.7")return 90;
 const int fds=entries("/proc/self/fd"),tasks=entries("/proc/self/task");
 {
 Config cfg;cfg.base_url(argv[1]);cfg.trust_file_origin(argv[1]);cfg.worker_path(argv[2]);cfg.timeout(std::chrono::milliseconds(std::stoi(argv[4])));cfg.max_response_bytes(std::stoi(argv[3]));
 CompanyCredentials creds("InertC6Key","InertC6Secret","InertC6Access","InertC6AccessSecret");NfeClient client(creds,cfg);NfeFilesClient files(cfg);Cancel cancel;
 const std::string control=argv[5];std::thread thread;if(control=="cancel")thread=std::thread([token=cancel.share()]{(void)getchar();token.request();});if(control=="pre")cancel.request();
 try{
 const std::string uuid="00000000-0000-4000-8000-000000000006";
 if(std::string(argv[6])=="xml"){api1_files::NfeDownloadXmlQuery query;auto auth=FileAuth::document_token("InertC6Document");auto file=files.download_xml(uuid,query,auth,&cancel);std::cout<<"{\"ok\":true,\"kind\":"<<Scalar::text(file.kind()).to_json()<<",\"bytes\":"<<file.bytes().size()<<"}";}
 else{api1_fiscal::NfeCancelRequest body;body.set_uuid(uuid);body.set_motivo("Ordinary synthetic C6 cancellation context.");auto result=client.cancel_document(body,&cancel);(void)result;return 91;}
 }catch(const Error&e){auto recovery=e.reveal_recovery();std::cout<<"{\"ok\":false,\"kind\":"<<Scalar::text(e.kind()).to_json()<<",\"status\":"<<e.status()<<",\"unknown\":"<<(e.outcome_unknown()?"true":"false")<<",\"message\":"<<Scalar::text(e.what()).to_json()<<",\"recovery\":"<<(recovery?recovery->to_json():"null")<<"}";}
 if(thread.joinable())thread.join();
 }
 if(entries("/proc/self/fd")!=fds||entries("/proc/self/task")!=tasks)return 92;
 int status=0;errno=0;
 if(waitpid(-1,&status,WNOHANG)!=-1||errno!=ECHILD)return 93;
 return 0;
}
