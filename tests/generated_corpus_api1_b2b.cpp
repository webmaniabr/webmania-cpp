#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api1_b2b(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api1_b2b::B2bError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_success();if(field.has_value())model.set_success(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::B2bError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::B2bError";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::ResellerCreateCompaniesRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::ResellerCreateCompaniesRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCompanyCredentials::from_json("{\"consumer_key\":\"INERT_TEST_PLACEHOLDER\",\"consumer_secret\":\"INERT_TEST_PLACEHOLDER\",\"access_token\":\"INERT_TEST_PLACEHOLDER\",\"access_token_secret\":\"INERT_TEST_PLACEHOLDER\",\"bearer_access_token\":\"\",\"bearer_access_token_status\":\"pending\",\"bearer_access_token_pending\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_consumer_key();if(field.has_value())model.set_consumer_key(field.value());}
{auto field=model.get_consumer_secret();if(field.has_value())model.set_consumer_secret(field.value());}
{auto field=model.get_access_token();if(field.has_value())model.set_access_token(field.value());}
{auto field=model.get_access_token_secret();if(field.has_value())model.set_access_token_secret(field.value());}
{auto field=model.get_bearer_access_token();if(field.has_value())model.set_bearer_access_token(field.value());}
{auto field=model.get_bearer_access_token_status();if(field.has_value())model.set_bearer_access_token_status(field.value());}
{auto field=model.get_bearer_access_token_pending();if(field.has_value())model.set_bearer_access_token_pending(field.value());}
{auto field=model.get_direct_link_login();if(field.has_value())model.set_direct_link_login(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::ResellerCompanyCredentials getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::ResellerCompanyCredentials";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreatedCompany::from_json("{\"id\":1,\"consumer_key\":\"INERT_TEST_PLACEHOLDER\",\"consumer_secret\":\"INERT_TEST_PLACEHOLDER\",\"access_token\":\"INERT_TEST_PLACEHOLDER\",\"access_token_secret\":\"INERT_TEST_PLACEHOLDER\",\"bearer_access_token\":\"\",\"bearer_access_token_status\":\"pending\",\"bearer_access_token_pending\":true,\"future_field\":{\"preserved\":true}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_consumer_key();if(field.has_value())model.set_consumer_key(field.value());}
{auto field=model.get_consumer_secret();if(field.has_value())model.set_consumer_secret(field.value());}
{auto field=model.get_access_token();if(field.has_value())model.set_access_token(field.value());}
{auto field=model.get_access_token_secret();if(field.has_value())model.set_access_token_secret(field.value());}
{auto field=model.get_bearer_access_token();if(field.has_value())model.set_bearer_access_token(field.value());}
{auto field=model.get_bearer_access_token_status();if(field.has_value())model.set_bearer_access_token_status(field.value());}
{auto field=model.get_bearer_access_token_pending();if(field.has_value())model.set_bearer_access_token_pending(field.value());}
{auto field=model.get_direct_link_login();if(field.has_value())model.set_direct_link_login(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_bearer_access_token_recovery_queued();if(field.has_value())model.set_bearer_access_token_recovery_queued(field.value());}
{auto field=model.get_bearer_access_token_recovery_queue_status();if(field.has_value())model.set_bearer_access_token_recovery_queue_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::ResellerCreatedCompany getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::ResellerCreatedCompany";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCompany::from_json("{\"id\":1,\"cnpj\":\"\",\"razao_social\":null,\"credenciais\":{\"consumer_key\":\"INERT_TEST_PLACEHOLDER\",\"consumer_secret\":\"INERT_TEST_PLACEHOLDER\",\"access_token\":\"INERT_TEST_PLACEHOLDER\",\"access_token_secret\":\"INERT_TEST_PLACEHOLDER\",\"bearer_access_token\":\"\",\"bearer_access_token_status\":\"pending\",\"bearer_access_token_pending\":true}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_unidade_empresa();if(field.has_value())model.set_unidade_empresa(field.value());}
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_credenciais();if(field.has_value())model.set_credenciais(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::ResellerCompany getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::ResellerCompany";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCompanyProcessedRequests::from_json("{\"cnpj\":\"00000000000000\",\"notas_processadas\":12}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_notas_processadas();if(field.has_value())model.set_notas_processadas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::ResellerCompanyProcessedRequests getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::ResellerCompanyProcessedRequests";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerProcessedRequests::from_json("{\"total_notas_processadas\":0,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_notas_processadas();if(field.has_value())model.set_total_notas_processadas(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::ResellerProcessedRequests getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::ResellerProcessedRequests";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::B2bFunctionalError::from_json("{\"error\":\"Synthetic functional error\",\"success\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_success();if(field.has_value())model.set_success(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::B2bFunctionalError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::B2bFunctionalError";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::B2bV1GetProcessedRequestsQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_mes();if(field.has_value())model.set_mes(field.value());}
{auto field=model.get_ano();if(field.has_value())model.set_ano(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_b2b::B2bV1GetProcessedRequestsQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_b2b::B2bV1GetProcessedRequestsQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-0 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"b2b:reseller-quantity-0";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"b2b:reseller-quantity-1";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":100}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-100 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"b2b:reseller-quantity-100";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":101}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-101 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"b2b:reseller-quantity-101";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":\"3\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-3-text getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"b2b:reseller-quantity-3-text";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":1.5}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-1_5 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"b2b:reseller-quantity-1_5";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerCreateCompaniesRequest::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-quantity-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"b2b:reseller-quantity-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerProcessedRequests::from_json("{\"total_notas_processadas\":0,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_notas_processadas();if(field.has_value())model.set_total_notas_processadas(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-counts-empty-companies getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"b2b:reseller-counts-empty-companies";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerProcessedRequests::from_json("{\"total_notas_processadas\":12,\"empresas\":[{\"cnpj\":\"00000000000000\",\"notas_processadas\":12}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_notas_processadas();if(field.has_value())model.set_total_notas_processadas(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-counts-not-http-call-count getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"b2b:reseller-counts-not-http-call-count";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_b2b::ResellerProcessedRequests::from_json("{\"total_notas_processadas\":-1,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"b2b:reseller-counts-negative-invalid getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"b2b:reseller-counts-negative-invalid";return -1;}++checked;}
return checked;}
