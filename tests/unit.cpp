#include <webmania_cpp/webmania.hpp>
#include <cassert>
#include <iostream>
#include <type_traits>
using namespace webmania;
static int checks;
#define CHECK(x) do{if(!(x))throw std::runtime_error(#x);++checks;}while(false)
int main(int argc,char**argv){try{
  CHECK(argc==2);Config config;config.worker_path(argv[1]);
  static_assert(!std::is_copy_constructible_v<api1_fiscal::NfeDocument>);
  static_assert(std::is_nothrow_move_constructible_v<api1_fiscal::NfeDocument>);
  static_assert(!std::is_same_v<api1_fiscal::NfeDocument,api1_fiscal::NfeIssueRequest>);
  for(auto lexeme:{"9007199254740993","9223372036854775807","-9223372036854775808","1.2300e-50","-0.000","1e4095","1e-4097"}){
    auto n=Number::parse(lexeme);CHECK(n.lexeme()==lexeme);CHECK(n.clone().lexeme()==lexeme);
  }
  for(auto invalid:{"NaN","1e4096","01","+1","1.","1e-4098"}){bool failed=false;try{auto n=Number::parse(invalid);(void)n;}catch(const std::invalid_argument&){failed=true;}CHECK(failed);}
  for(auto invalid:{"{\"x\":1,\"x\":2}","[1,]","\"\\ud800\"","{\"a\\u0000b\":1,\"a\\u0000b\":2}"}){bool failed=false;try{auto j=Json::parse(invalid);(void)j;}catch(const std::invalid_argument&){failed=true;}CHECK(failed);}
  auto nul=std::string("a\0b",3);
  auto json=Json::parse("{\"a\\u0000b\":\"c\\u0000d\"}");CHECK(json.clone().to_json()==json.to_json());
  Map map;map.set(nul,json);CHECK(map.size()==1);CHECK(map.key_at(0)==nul);CHECK(map.get(nul)->to_json()==json.to_json());CHECK(map.clone().get(nul)->to_json()==json.to_json());
  api1_fiscal::NfeDocument doc;CHECK(doc.presence_motivo()==Presence::missing);CHECK(doc.get_motivo().presence()==Presence::missing);
  doc.set_uuid("00000000-0000-4000-8000-000000000001");doc.set_status("aprovado");doc.set_motivo(nul);CHECK(doc.get_motivo().value()==nul);doc.unset_motivo();CHECK(!doc.get_motivo().has_value());
  auto number=Number::parse("9007199254740993.00100");auto scalar=Scalar::number(number);doc.set_nfe(scalar);CHECK(doc.get_nfe().value().to_json()==number.lexeme());doc.unset_nfe();
  auto exact=Json::parse("1.00e-20");bool collision=false;try{doc.set_extension("uuid",exact);}catch(const Error&e){collision=e.code()==WM_INVALID;}CHECK(collision);doc.set_extension(nul,exact);CHECK(doc.get_extension(nul)->to_json()=="1.00e-20");CHECK(!doc.get_extension("uuid"));
  auto null_union=api1_fiscal::NfeDocumentLog::from_Null();doc.set_log(null_union);CHECK(doc.presence_log()==Presence::null);CHECK(doc.get_log().presence()==Presence::null);auto got=std::move(doc.get_log()).value();got.get_Null(config);doc.validate(config);
  auto clone=doc.validated_clone(config);CHECK(clone.get_uuid().value()==doc.get_uuid().value());CHECK(clone.get_extension(nul)->to_json()=="1.00e-20");auto serialized=clone.to_json();auto moved=std::move(clone);CHECK(moved.to_json()==serialized);bool moved_failed=false;try{clone.to_json();}catch(const std::logic_error&){moved_failed=true;}CHECK(moved_failed);
  arrays::Api1FiscalApi1FiscalNfeDocument list;list.append(doc);CHECK(list.size()==1);auto copied=std::move(list.at(0)).value();doc.set_status("other");CHECK(copied.get_status().value()=="aprovado");CHECK(list.at(1).presence()==Presence::missing);
  arrays::Api1FilesChar strings;strings.append(nul);CHECK(strings.at(0).value()==nul);
  auto text_union=api1_files::Api1ErrorError::from_Text(nul);CHECK(text_union.get_Text(config)==nul);
  auto integral=api1_fiscal::NfeCertificateValidity::from_json("{\"expiration\":1.00e2}",config);CHECK(integral.get_expiration().value()==100);
  CHECK(version()=="0.1.0-alpha.6");CHECK(c_version()=="0.1.0-alpha.7");
  api1_fiscal::TaxClassListItem tax;CHECK(tax.presence_type()==Presence::missing);tax.set_type(nul);CHECK(tax.get_type().value()==nul);CHECK(tax.presence_type()==Presence::present);
  bool type_collision=false;try{tax.set_extension("type",exact);}catch(const Error&e){type_collision=e.code()==WM_INVALID;}CHECK(type_collision);tax.set_extension("TYPE",exact);CHECK(tax.get_extension("TYPE")->to_json()==exact.to_json());
  auto tax_copy=tax.validated_clone(config);CHECK(tax.presence_type()==Presence::present);CHECK(tax_copy.get_type().value()==nul);
  api1_b2b::ResellerCompany company;CHECK(company.get_cnpj().presence()==Presence::missing);company.set_cnpj_null();CHECK(company.get_cnpj().presence()==Presence::null);company.set_cnpj(nul);CHECK(company.get_cnpj().value()==nul);company.unset_cnpj();CHECK(company.get_cnpj().presence()==Presence::missing);
  api2_monitor_reads::MonitorListCompaniesQuery bad_query;bad_query.set_page(0);bool failed=false;try{bad_query.validate(config);}catch(const Error&e){failed=e.kind()=="validation";CHECK(e.status()==0);CHECK(!e.outcome_unknown());CHECK(e.reveal_location().empty());CHECK(!e.reveal_recovery());CHECK(std::string(e.what()).find("synthetic")==std::string::npos);}CHECK(failed);
  Cancel token;auto shared=token.share();shared.request();CHECK(token.requested());int calls=0;
  auto cancelled=bounded_poll<Number>([&](const Cancel*){++calls;return Number::parse("1");},[](const Number&){return false;},{3,std::chrono::milliseconds(100),{}},&token);CHECK(calls==0);CHECK(cancelled.reason==StopReason::cancelled);
  auto limited=bounded_pages<Number>([&](const Cancel*){++calls;return Number::parse("1");},[](const Number&){return true;},{3,std::chrono::milliseconds(100),{}});CHECK(calls==3);CHECK(limited.attempts.size()==3);CHECK(limited.reason==StopReason::limit);
  auto completed=bounded_poll<Number>([](const Cancel*){return Number::parse("2");},[](const Number&v){return v.lexeme()=="2";});CHECK(completed.reason==StopReason::complete);CHECK(completed.attempts.size()==1);
  auto errors=bounded_poll<Number>([](const Cancel*)->Number{throw Error(nullptr,WM_INVALID);},[](const Number&){return false;});CHECK(errors.reason==StopReason::error);CHECK(errors.attempts.size()==1);CHECK(errors.attempts[0].error->code()==WM_INVALID);
  auto deadline=bounded_poll<Number>([](const Cancel*){return Number::parse("2");},[](const Number&){return false;},{3,std::chrono::milliseconds(1),std::chrono::milliseconds::max()});CHECK(deadline.reason==StopReason::deadline);CHECK(deadline.attempts.size()<=1);
  bool finite=false;try{bounded_poll<Number>([](const Cancel*){return Number::parse("2");},[](const Number&){return false;},{0,std::chrono::milliseconds(1),{}});}catch(const std::invalid_argument&){finite=true;}CHECK(finite);
  bool credential_nul=false;try{IssuerToken invalid(nul);}catch(const std::invalid_argument&){credential_nul=true;}CHECK(credential_nul);
  NfeFilesClient no_auth(config);api1_files::NfeDownloadIbsCbsEventXmlQuery query;auto auth=FileAuth::anonymous();auto moved_client=std::move(no_auth);auto moved_query=std::move(query);auto moved_auth=std::move(auth);(void)moved_client;(void)moved_query;(void)moved_auth;bool blocked=false;try{no_auth.download_ibs_cbs_event_xml(nul,query,auth);}catch(const Error&e){blocked=e.kind()=="capability";}CHECK(blocked);
  std::cout<<"C++ typed model/ownership/helper checks: "<<checks<<" PASS\n";return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
