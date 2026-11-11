#include <webmania_cpp/webmania.hpp>
#include <iostream>
#include <stdexcept>
using namespace webmania;
static unsigned checked=0;
static void check(bool condition){++checked;if(!condition)throw std::runtime_error("wire check");}
int main(int argc,char**argv){
  if(argc!=2)return 90;
  Config config;config.worker_path(argv[1]);
  using Group=api2_nfcom_issuance::NfcomDocumentedGroup2114;
  Group group;std::string key("key\0tail",8);
  group.set_substituicao_chave_nfcom_substituida(key);
  group.set_substituicao_motivo("01");
  Map reference;reference.set("modelo",Json::parse("21"));reference.set(std::string("k\0*",3),Json::parse("\"v\\u0000*\""));
  group.set_substituicao_nf_referenciada(reference);
  group.set_extension("substituicao_motivo",Json::parse("\"extra\""));
  check(group.presence_substituicao_chave_nfcom_substituida()==Presence::present);
  check(group.presence_substituicao_motivo()==Presence::present);
  check(group.presence_substituicao_nf_referenciada()==Presence::present);
  group.set_extension("substituicao_chave_nfcom_substituida",Json::parse("false"));
  group.set_extension("substituicao_nf_referenciada",Json::parse("42"));
  auto encoded=group.to_json();
  check(encoded.find("substituicao.chave_nfcom_substituida")!=std::string::npos);
  check(encoded.find("substituicao.motivo")!=std::string::npos);
  check(encoded.find("substituicao.nf_referenciada.*")!=std::string::npos);
  auto clone=Group::from_json(encoded,config);
  check(clone.get_substituicao_chave_nfcom_substituida().value()==key);
  check(clone.get_substituicao_motivo().value()=="01");
  check(clone.get_substituicao_nf_referenciada().value().get("modelo")->to_json()=="21");
  check(clone.get_extension("substituicao_motivo")->to_json()=="\"extra\"");
  check(clone.get_extension("substituicao_chave_nfcom_substituida")->to_json()=="false");
  check(clone.get_extension("substituicao_nf_referenciada")->to_json()=="42");
  check(clone.get_substituicao_nf_referenciada().value().get(std::string("k\0*",3))->to_json()=="\"v\\u0000*\"");
  clone.unset_substituicao_chave_nfcom_substituida();
  clone.unset_substituicao_motivo();clone.unset_substituicao_nf_referenciada();
  check(clone.presence_substituicao_chave_nfcom_substituida()==Presence::missing);
  check(clone.presence_substituicao_motivo()==Presence::missing);
  check(clone.presence_substituicao_nf_referenciada()==Presence::missing);
  for(const char* name:{"substituicao.chave_nfcom_substituida","substituicao.motivo","substituicao.nf_referenciada.*"}){
    bool refused=false;try{clone.set_extension(name,Json::parse("null"));}catch(const Error&){refused=true;}check(refused);
  }
  bool refused=false;try{auto wrong=Group::from_json("{\"substituicao.motivo\":false}",config);(void)wrong;}catch(const Error&){refused=true;}check(refused);
  check(version()=="0.1.0-alpha.6");check(c_version()=="0.1.0-alpha.7");
  std::cout<<"C++ C5 wire aliases "<<checked<<" checks PASS HTTP=0\n";
}
