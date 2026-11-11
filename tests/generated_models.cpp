#include <webmania_cpp/webmania.hpp>
#include <iostream>
int corpus_api1_b2b(const webmania::Config&);
int corpus_api1_files(const webmania::Config&);
int corpus_api1_fiscal(const webmania::Config&);
int corpus_api2_cte_issuance(const webmania::Config&);
int corpus_api2_dce_issuance(const webmania::Config&);
int corpus_api2_emitter_files(const webmania::Config&);
int corpus_api2_emitter_reads(const webmania::Config&);
int corpus_api2_mdfe_issuance(const webmania::Config&);
int corpus_api2_monitor_documents(const webmania::Config&);
int corpus_api2_monitor_management(const webmania::Config&);
int corpus_api2_monitor_reads(const webmania::Config&);
int corpus_api2_nfcom_issuance(const webmania::Config&);
int corpus_api2_nfse_issuance(const webmania::Config&);
int corpus_api2_reports(const webmania::Config&);
int main(int argc,char**argv){if(argc!=2)return 90;webmania::Config cfg;cfg.worker_path(argv[1]);int total=0;
{int count=corpus_api1_b2b(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api1_files(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api1_fiscal(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_cte_issuance(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_dce_issuance(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_emitter_files(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_emitter_reads(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_mdfe_issuance(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_monitor_documents(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_monitor_management(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_monitor_reads(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_nfcom_issuance(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_nfse_issuance(cfg);if(count<0)return 1;total+=count;}
{int count=corpus_api2_reports(cfg);if(count<0)return 1;total+=count;}
std::cout<<"C++ nominal corpus: "<<total<<" model/semantic cases PASS\n";return 0;}
