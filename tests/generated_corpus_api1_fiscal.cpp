#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api1_fiscal(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api1_fiscal::Api1Error::from_json("{\"error\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_code();if(field.has_value())model.set_code(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Api1Error getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Api1Error";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Api1ErrorError::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Api1ErrorError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Api1ErrorError";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Api1ErrorLogVariant1::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Api1ErrorLogVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Api1ErrorLogVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Api1ErrorLog::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Api1ErrorLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Api1ErrorLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::SefazLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
{auto field=model.get_nProt();if(field.has_value())model.set_nProt(field.value());}
{auto field=model.get_tpAmb();if(field.has_value())model.set_tpAmb(field.value());}
{auto field=model.get_dhRecbto();if(field.has_value())model.set_dhRecbto(field.value());}
{auto field=model.get_chNFe();if(field.has_value())model.set_chNFe(field.value());}
{auto field=model.get_verAplic();if(field.has_value())model.set_verAplic(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::SefazLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::SefazLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::SefazLogEventoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
{auto field=model.get_nProt();if(field.has_value())model.set_nProt(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::SefazLogEventoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::SefazLogEventoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::SefazLogEventoVariant1Item::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
{auto field=model.get_nProt();if(field.has_value())model.set_nProt(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::SefazLogEventoVariant1Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::SefazLogEventoVariant1Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::SefazLogEvento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::SefazLogEvento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::SefazLogEvento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"new_provider_state\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nfe();if(field.has_value())model.set_nfe(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_recibo();if(field.has_value())model.set_recibo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_epec();if(field.has_value())model.set_epec(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_danfe();if(field.has_value())model.set_danfe(field.value());}
{auto field=model.get_danfe_simples();if(field.has_value())model.set_danfe_simples(field.value());}
{auto field=model.get_danfe_etiqueta();if(field.has_value())model.set_danfe_etiqueta(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_log_cancelamento();if(field.has_value())model.set_log_cancelamento(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_dacce();if(field.has_value())model.set_dacce(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeDocument getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeDocument";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeDocumentLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeDocumentLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeDocumentLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeDocumentLogCancelamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeDocumentLogCancelamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeDocumentLogCancelamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeEventResult::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_dacce();if(field.has_value())model.set_dacce(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeEventResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeEventResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeEventResultLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeEventResultLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeEventResultLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCancelResult::from_json("{\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeCancelResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeCancelResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCancelResultLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeCancelResultLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeCancelResultLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeVoidResult::from_json("{\"xml\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeVoidResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeVoidResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeVoidResultLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeVoidResultLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeVoidResultLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCertificateValidity::from_json("{\"expiration\":25,\"future_field\":\"preserved\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_expiration();if(field.has_value())model.set_expiration(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeCertificateValidity getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeCertificateValidity";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeSefazStatus::from_json("{\"status\":\"online\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeSefazStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeSefazStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeLookupRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeLookupRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeLookupRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCorrectionRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"correcao\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeCorrectionRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeCorrectionRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeManifestationRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"evento\":\"210240\",\"justificativa\":\"The goods were never delivered.\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCancelRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"motivo\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nfce_referenciada();if(field.has_value())model.set_nfce_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeCancelRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeCancelRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeVoidRequest::from_json("{\"sequencia\":\"00000000\",\"motivo\":\"00000000-0000-4000-8000-000000000001\",\"ambiente\":1,\"serie\":\"0\",\"modelo\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_ver_aplic();if(field.has_value())model.set_ver_aplic(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeVoidRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeVoidRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventItem::from_json("{\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.00\",\"data_pagamento\":\"2026-10-25\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_pagamento();if(field.has_value())model.set_indicador_pagamento(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_data_pagamento();if(field.has_value())model.set_data_pagamento(field.value());}
{auto field=model.get_cnpj_transacional_pag();if(field.has_value())model.set_cnpj_transacional_pag(field.value());}
{auto field=model.get_uf_pagamento();if(field.has_value())model.set_uf_pagamento(field.value());}
{auto field=model.get_cnpj_instituicao_financeira();if(field.has_value())model.set_cnpj_instituicao_financeira(field.value());}
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_cnpj_beneficiario();if(field.has_value())model.set_cnpj_beneficiario(field.value());}
{auto field=model.get_uf_beneficiario();if(field.has_value())model.set_uf_beneficiario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfePaymentEventItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfePaymentEventItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"pagamento\":{\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.00\",\"data_pagamento\":\"2026-10-25\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_pagamentos();if(field.has_value())model.set_pagamentos(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfePaymentEventRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfePaymentEventRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventCancelRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfePaymentEventCancelRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfePaymentEventCancelRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventCancelRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIbsCbsEventCancelRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIbsCbsEventCancelRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassDeleteRequest::from_json("{\"referencia\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassDeleteRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassDeleteRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassDeleteRequestReferencia::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassDeleteRequestReferencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassDeleteRequestReferencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassDeleteItem::from_json("{\"referencia\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassDeleteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassDeleteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassNoResults::from_json("{\"msg\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassNoResults getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassNoResults";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListItem::from_json("{\"type\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_tributos_federais();if(field.has_value())model.set_tributos_federais(field.value());}
{auto field=model.get_tributos_estaduais();if(field.has_value())model.set_tributos_estaduais(field.value());}
{auto field=model.get_type();if(field.has_value())model.set_type(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_updated_date();if(field.has_value())model.set_updated_date(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListIcms::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_nao_contribuinte();if(field.has_value())model.set_nao_contribuinte(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota_importacao();if(field.has_value())model.set_aliquota_importacao(field.value());}
{auto field=model.get_aliquota_credito();if(field.has_value())model.set_aliquota_credito(field.value());}
{auto field=model.get_aliquota_reducao_destino();if(field.has_value())model.set_aliquota_reducao_destino(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_st();if(field.has_value())model.set_aliquota_st(field.value());}
{auto field=model.get_aliquota_fcp();if(field.has_value())model.set_aliquota_fcp(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_aliquota_diferimento_fcp();if(field.has_value())model.set_aliquota_diferimento_fcp(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
{auto field=model.get_aliquota_efetiva_icms();if(field.has_value())model.set_aliquota_efetiva_icms(field.value());}
{auto field=model.get_aliquota_efetiva_icms_st();if(field.has_value())model.set_aliquota_efetiva_icms_st(field.value());}
{auto field=model.get_codigo_beneficio_reducao_bc();if(field.has_value())model.set_codigo_beneficio_reducao_bc(field.value());}
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
{auto field=model.get_motivo_desoneracao_st();if(field.has_value())model.set_motivo_desoneracao_st(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListStateRate::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListStateRate getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListStateRate";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListStateRatesVariant0Item::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListStateRatesVariant0Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListStateRatesVariant0Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListStateRates::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListStateRates getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListStateRates";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G043::from_json("{\"estado\":\"sy\",\"codigo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G043 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G043";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListIcmsPresumedCredit::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_beneficio_fiscal();if(field.has_value())model.set_codigo_beneficio_fiscal(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListIcmsPresumedCredit getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListIcmsPresumedCredit";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListItemIcms::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListItemIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListItemIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListIpi::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_codigo_enquadramento();if(field.has_value())model.set_codigo_enquadramento(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListIpi getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListIpi";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListPis::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListPis getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListPis";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListItemPis::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListItemPis getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListItemPis";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListCofins::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListCofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListCofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListItemCofins::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListItemCofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListItemCofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListIssqn::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_exigibilidade();if(field.has_value())model.set_exigibilidade(field.value());}
{auto field=model.get_item_servico();if(field.has_value())model.set_item_servico(field.value());}
{auto field=model.get_incentivo_fiscal();if(field.has_value())model.set_incentivo_fiscal(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListIssqn getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListIssqn";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListIbsCbsDeferral::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListIbsCbsDeferral getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListIbsCbsDeferral";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListPresumedCredit::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListPresumedCredit getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListPresumedCredit";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassListItemIbsCbs::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassListItemIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassListItemIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G002::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nfe();if(field.has_value())model.set_nfe(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_recibo();if(field.has_value())model.set_recibo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_epec();if(field.has_value())model.set_epec(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_danfe();if(field.has_value())model.set_danfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_log_cancelamento();if(field.has_value())model.set_log_cancelamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G002 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G002";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G002Log::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G002Log getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G002Log";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIssueRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIssueRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCustomer::from_json("{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_suframa();if(field.has_value())model.set_suframa(field.value());}
{auto field=model.get_substituto_tributario();if(field.has_value())model.set_substituto_tributario(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_contribuinte();if(field.has_value())model.set_contribuinte(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_cod_pais();if(field.has_value())model.set_cod_pais(field.value());}
{auto field=model.get_nome_pais();if(field.has_value())model.set_nome_pais(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeCustomer getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeCustomer";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeProduct::from_json("{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_quantidade_tributavel();if(field.has_value())model.set_quantidade_tributavel(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_unidade_tributavel();if(field.has_value())model.set_unidade_tributavel(field.value());}
{auto field=model.get_peso();if(field.has_value())model.set_peso(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_subtotal();if(field.has_value())model.set_subtotal(field.value());}
{auto field=model.get_subtotal_tributavel();if(field.has_value())model.set_subtotal_tributavel(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_ind_valor_total();if(field.has_value())model.set_ind_valor_total(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_dfe_referenciado();if(field.has_value())model.set_dfe_referenciado(field.value());}
{auto field=model.get_cest();if(field.has_value())model.set_cest(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_ind_escala();if(field.has_value())model.set_ind_escala(field.value());}
{auto field=model.get_cnpj_fabricante();if(field.has_value())model.set_cnpj_fabricante(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_gtin_tributavel();if(field.has_value())model.set_gtin_tributavel(field.value());}
{auto field=model.get_cod_barras();if(field.has_value())model.set_cod_barras(field.value());}
{auto field=model.get_cod_barras_tributavel();if(field.has_value())model.set_cod_barras_tributavel(field.value());}
{auto field=model.get_nve();if(field.has_value())model.set_nve(field.value());}
{auto field=model.get_nrecopi();if(field.has_value())model.set_nrecopi(field.value());}
{auto field=model.get_ativo_permanente();if(field.has_value())model.set_ativo_permanente(field.value());}
{auto field=model.get_veiculo_usado();if(field.has_value())model.set_veiculo_usado(field.value());}
{auto field=model.get_ex_ipi();if(field.has_value())model.set_ex_ipi(field.value());}
{auto field=model.get_combustiveis();if(field.has_value())model.set_combustiveis(field.value());}
{auto field=model.get_medicamento();if(field.has_value())model.set_medicamento(field.value());}
{auto field=model.get_armamentos();if(field.has_value())model.set_armamentos(field.value());}
{auto field=model.get_veiculos_novos();if(field.has_value())model.set_veiculos_novos(field.value());}
{auto field=model.get_rastro();if(field.has_value())model.set_rastro(field.value());}
{auto field=model.get_drawback();if(field.has_value())model.set_drawback(field.value());}
{auto field=model.get_reg_exportacao();if(field.has_value())model.set_reg_exportacao(field.value());}
{auto field=model.get_nfe_exportacao();if(field.has_value())model.set_nfe_exportacao(field.value());}
{auto field=model.get_qtd_exportacao();if(field.has_value())model.set_qtd_exportacao(field.value());}
{auto field=model.get_ndoc_importacao();if(field.has_value())model.set_ndoc_importacao(field.value());}
{auto field=model.get_ddoc_importacao();if(field.has_value())model.set_ddoc_importacao(field.value());}
{auto field=model.get_local_desembaraco();if(field.has_value())model.set_local_desembaraco(field.value());}
{auto field=model.get_uf_desembaraco();if(field.has_value())model.set_uf_desembaraco(field.value());}
{auto field=model.get_data_desembaraco();if(field.has_value())model.set_data_desembaraco(field.value());}
{auto field=model.get_via_transporte();if(field.has_value())model.set_via_transporte(field.value());}
{auto field=model.get_intermediacao();if(field.has_value())model.set_intermediacao(field.value());}
{auto field=model.get_adicao();if(field.has_value())model.set_adicao(field.value());}
{auto field=model.get_seq_adicao();if(field.has_value())model.set_seq_adicao(field.value());}
{auto field=model.get_fabricante();if(field.has_value())model.set_fabricante(field.value());}
{auto field=model.get_desc_di();if(field.has_value())model.set_desc_di(field.value());}
{auto field=model.get_afrmm();if(field.has_value())model.set_afrmm(field.value());}
{auto field=model.get_cnpj_terceiro();if(field.has_value())model.set_cnpj_terceiro(field.value());}
{auto field=model.get_cpf_terceiro();if(field.has_value())model.set_cpf_terceiro(field.value());}
{auto field=model.get_uf_terceiro();if(field.has_value())model.set_uf_terceiro(field.value());}
{auto field=model.get_cod_exportador();if(field.has_value())model.set_cod_exportador(field.value());}
{auto field=model.get_nfci();if(field.has_value())model.set_nfci(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeProduct getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeProduct";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G069::from_json("{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_retencao_tributos();if(field.has_value())model.set_retencao_tributos(field.value());}
{auto field=model.get_importacao();if(field.has_value())model.set_importacao(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G069 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G069";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIcms::from_json("{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_fcp();if(field.has_value())model.set_aliquota_fcp(field.value());}
{auto field=model.get_aliquota_interestadual();if(field.has_value())model.set_aliquota_interestadual(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota_importacao();if(field.has_value())model.set_aliquota_importacao(field.value());}
{auto field=model.get_industria();if(field.has_value())model.set_industria(field.value());}
{auto field=model.get_majoracao();if(field.has_value())model.set_majoracao(field.value());}
{auto field=model.get_bc_icms();if(field.has_value())model.set_bc_icms(field.value());}
{auto field=model.get_bc_icms_st();if(field.has_value())model.set_bc_icms_st(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_aliquota_credito();if(field.has_value())model.set_aliquota_credito(field.value());}
{auto field=model.get_aliquota_st();if(field.has_value())model.set_aliquota_st(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
{auto field=model.get_bc_st_retido();if(field.has_value())model.set_bc_st_retido(field.value());}
{auto field=model.get_aliquota_st_retido();if(field.has_value())model.set_aliquota_st_retido(field.value());}
{auto field=model.get_valor_st_retido();if(field.has_value())model.set_valor_st_retido(field.value());}
{auto field=model.get_valor_icms_substituto();if(field.has_value())model.set_valor_icms_substituto(field.value());}
{auto field=model.get_valor_fcp_retido();if(field.has_value())model.set_valor_fcp_retido(field.value());}
{auto field=model.get_aliquota_fcp_retido();if(field.has_value())model.set_aliquota_fcp_retido(field.value());}
{auto field=model.get_aliquota_bc_efetivo();if(field.has_value())model.set_aliquota_bc_efetivo(field.value());}
{auto field=model.get_aliquota_icms_efetivo();if(field.has_value())model.set_aliquota_icms_efetivo(field.value());}
{auto field=model.get_difal_antecipacao();if(field.has_value())model.set_difal_antecipacao(field.value());}
{auto field=model.get_codigo_beneficio_reducao_bc();if(field.has_value())model.set_codigo_beneficio_reducao_bc(field.value());}
{auto field=model.get_pauta_fiscal();if(field.has_value())model.set_pauta_fiscal(field.value());}
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
{auto field=model.get_motivo_desoneracao_st();if(field.has_value())model.set_motivo_desoneracao_st(field.value());}
{auto field=model.get_quantidade_retencao();if(field.has_value())model.set_quantidade_retencao(field.value());}
{auto field=model.get_aliquota_retencao();if(field.has_value())model.set_aliquota_retencao(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_motivo_reducao();if(field.has_value())model.set_motivo_reducao(field.value());}
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
{auto field=model.get_aliquota_diferimento_fcp();if(field.has_value())model.set_aliquota_diferimento_fcp(field.value());}
{auto field=model.get_bc_st_dest();if(field.has_value())model.set_bc_st_dest(field.value());}
{auto field=model.get_valor_st_dest();if(field.has_value())model.set_valor_st_dest(field.value());}
{auto field=model.get_valor_operacao();if(field.has_value())model.set_valor_operacao(field.value());}
{auto field=model.get_codigo_beneficio_fiscal();if(field.has_value())model.set_codigo_beneficio_fiscal(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G091::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_beneficio_fiscal();if(field.has_value())model.set_codigo_beneficio_fiscal(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G091 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G091";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G092::from_json("{\"situacao_tributaria\":\"sy\",\"codigo_enquadramento\":0,\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_codigo_enquadramento();if(field.has_value())model.set_codigo_enquadramento(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_percentual_devolvido();if(field.has_value())model.set_percentual_devolvido(field.value());}
{auto field=model.get_ipi_devolvido();if(field.has_value())model.set_ipi_devolvido(field.value());}
{auto field=model.get_codigo_selo();if(field.has_value())model.set_codigo_selo(field.value());}
{auto field=model.get_qtd_selo();if(field.has_value())model.set_qtd_selo(field.value());}
{auto field=model.get_bc_ipi();if(field.has_value())model.set_bc_ipi(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G092 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G092";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G093::from_json("{\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_majoracao();if(field.has_value())model.set_majoracao(field.value());}
{auto field=model.get_bc_pis();if(field.has_value())model.set_bc_pis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G093 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G093";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G094::from_json("{\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_majoracao();if(field.has_value())model.set_majoracao(field.value());}
{auto field=model.get_bc_cofins();if(field.has_value())model.set_bc_cofins(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G094 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G094";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G095::from_json("{\"codigo_cfop\":\"synt\",\"exigibilidade\":0,\"item_servico\":\"synth\",\"incentivo_fiscal\":\"s\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_exigibilidade();if(field.has_value())model.set_exigibilidade(field.value());}
{auto field=model.get_item_servico();if(field.has_value())model.set_item_servico(field.value());}
{auto field=model.get_incentivo_fiscal();if(field.has_value())model.set_incentivo_fiscal(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_deducao();if(field.has_value())model.set_deducao(field.value());}
{auto field=model.get_retencoes();if(field.has_value())model.set_retencoes(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_processo();if(field.has_value())model.set_processo(field.value());}
{auto field=model.get_cnae();if(field.has_value())model.set_cnae(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G095 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G095";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G096::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_pis();if(field.has_value())model.set_valor_pis(field.value());}
{auto field=model.get_valor_cofins();if(field.has_value())model.set_valor_cofins(field.value());}
{auto field=model.get_valor_csll();if(field.has_value())model.set_valor_csll(field.value());}
{auto field=model.get_bc_irrf();if(field.has_value())model.set_bc_irrf(field.value());}
{auto field=model.get_valor_irrf();if(field.has_value())model.set_valor_irrf(field.value());}
{auto field=model.get_bc_previdencia();if(field.has_value())model.set_bc_previdencia(field.value());}
{auto field=model.get_valor_previdencia();if(field.has_value())model.set_valor_previdencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G096 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G096";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G097::from_json("{\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_iof();if(field.has_value())model.set_iof(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G097 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G097";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G100::from_json("{\"situacao_tributaria\":\"syn\",\"classificacao_tributaria\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_tributacao_monofasica();if(field.has_value())model.set_tributacao_monofasica(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_transferencia_credito();if(field.has_value())model.set_transferencia_credito(field.value());}
{auto field=model.get_ajuste_competencia();if(field.has_value())model.set_ajuste_competencia(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G100 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G100";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G101::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G101 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G101";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G102::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G102 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G102";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G103::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_percentual_devolvido();if(field.has_value())model.set_percentual_devolvido(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_alc_zfm_cbs();if(field.has_value())model.set_alc_zfm_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G103 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G103";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G104::from_json("{\"tipo_aplicacao\":\"s\",\"aliquota_efetiva_referencia\":\"0\",\"valor_efetivo_referencia\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_aplicacao();if(field.has_value())model.set_tipo_aplicacao(field.value());}
{auto field=model.get_numero_processo_suframa();if(field.has_value())model.set_numero_processo_suframa(field.value());}
{auto field=model.get_aliquota_efetiva_referencia();if(field.has_value())model.set_aliquota_efetiva_referencia(field.value());}
{auto field=model.get_valor_efetivo_referencia();if(field.has_value())model.set_valor_efetivo_referencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G104 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G104";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G105::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_quantidade_bc_retencao();if(field.has_value())model.set_quantidade_bc_retencao(field.value());}
{auto field=model.get_aliquota_ibs_retencao();if(field.has_value())model.set_aliquota_ibs_retencao(field.value());}
{auto field=model.get_aliquota_cbs_retencao();if(field.has_value())model.set_aliquota_cbs_retencao(field.value());}
{auto field=model.get_quantidade_bc_retido();if(field.has_value())model.set_quantidade_bc_retido(field.value());}
{auto field=model.get_aliquota_ibs_retido();if(field.has_value())model.set_aliquota_ibs_retido(field.value());}
{auto field=model.get_aliquota_cbs_retido();if(field.has_value())model.set_aliquota_cbs_retido(field.value());}
{auto field=model.get_aliquota_diferimento_ibs();if(field.has_value())model.set_aliquota_diferimento_ibs(field.value());}
{auto field=model.get_aliquota_diferimento_cbs();if(field.has_value())model.set_aliquota_diferimento_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G105 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G105";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G106::from_json("{\"classificacao\":\"sy\",\"bc\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G106 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G106";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G108::from_json("{\"valor_ibs\":\"0\",\"valor_cbs\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G108 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G108";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G109::from_json("{\"competencia_apuracao\":\"synthet\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_competencia_apuracao();if(field.has_value())model.set_competencia_apuracao(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G109 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G109";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G110::from_json("{\"valor_ibs\":\"0\",\"valor_cbs\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G110 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G110";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G015::from_json("{\"chave\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"item\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G015 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G015";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G016::from_json("{\"codigo_anp\":\"synthetic\",\"descricao_anp\":\"synthetic\",\"uf_consumo\":\"sy\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_anp();if(field.has_value())model.set_codigo_anp(field.value());}
{auto field=model.get_descricao_anp();if(field.has_value())model.set_descricao_anp(field.value());}
{auto field=model.get_uf_consumo();if(field.has_value())model.set_uf_consumo(field.value());}
{auto field=model.get_percentual_glp();if(field.has_value())model.set_percentual_glp(field.value());}
{auto field=model.get_percentual_gnn();if(field.has_value())model.set_percentual_gnn(field.value());}
{auto field=model.get_percentual_gni();if(field.has_value())model.set_percentual_gni(field.value());}
{auto field=model.get_percentual_biodiesel();if(field.has_value())model.set_percentual_biodiesel(field.value());}
{auto field=model.get_partida();if(field.has_value())model.set_partida(field.value());}
{auto field=model.get_codif();if(field.has_value())model.set_codif(field.value());}
{auto field=model.get_qtd_temperatura();if(field.has_value())model.set_qtd_temperatura(field.value());}
{auto field=model.get_bc_cide();if(field.has_value())model.set_bc_cide(field.value());}
{auto field=model.get_valor_cide();if(field.has_value())model.set_valor_cide(field.value());}
{auto field=model.get_bico();if(field.has_value())model.set_bico(field.value());}
{auto field=model.get_bomba();if(field.has_value())model.set_bomba(field.value());}
{auto field=model.get_tanque();if(field.has_value())model.set_tanque(field.value());}
{auto field=model.get_encerrante_inicio();if(field.has_value())model.set_encerrante_inicio(field.value());}
{auto field=model.get_encerrante_final();if(field.has_value())model.set_encerrante_final(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G016 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G016";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G017::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_importacao();if(field.has_value())model.set_indicador_importacao(field.value());}
{auto field=model.get_uf_origem();if(field.has_value())model.set_uf_origem(field.value());}
{auto field=model.get_percentual_originario();if(field.has_value())model.set_percentual_originario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G017 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G017";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G018::from_json("{\"codigo_anvisa\":\"synthetic\",\"pmc\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_anvisa();if(field.has_value())model.set_codigo_anvisa(field.value());}
{auto field=model.get_pmc();if(field.has_value())model.set_pmc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G018 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G018";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G019::from_json("{\"tipo\":0,\"serie_arma\":\"synthetic\",\"serie_cano\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_serie_arma();if(field.has_value())model.set_serie_arma(field.value());}
{auto field=model.get_serie_cano();if(field.has_value())model.set_serie_cano(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G019 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G019";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G020::from_json("{\"tipo_operacao\":0,\"chassi\":\"syntheticaaaaaaaa\",\"cor\":\"synt\",\"cor_descricao\":\"synthetic\",\"cv\":\"synt\",\"cilindrada\":\"synt\",\"peso_liquido\":0,\"peso_bruto\":0,\"serie\":\"synthetic\",\"tipo_combustivel\":0,\"numero_motor\":\"synthetic\",\"cmt\":\"0\",\"dist\":\"synt\",\"ano_modelo\":\"synt\",\"ano_fabricacao\":\"synt\",\"tipo_pintura\":\"s\",\"tipo_veiculo\":0,\"especie_veiculo\":0,\"vin\":\"s\",\"condicao_veiculo\":0,\"marca_modelo\":\"synthetic\",\"cor_denatran\":0,\"lotacao\":0,\"restricao\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_chassi();if(field.has_value())model.set_chassi(field.value());}
{auto field=model.get_cor();if(field.has_value())model.set_cor(field.value());}
{auto field=model.get_cor_descricao();if(field.has_value())model.set_cor_descricao(field.value());}
{auto field=model.get_cv();if(field.has_value())model.set_cv(field.value());}
{auto field=model.get_cilindrada();if(field.has_value())model.set_cilindrada(field.value());}
{auto field=model.get_peso_liquido();if(field.has_value())model.set_peso_liquido(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_tipo_combustivel();if(field.has_value())model.set_tipo_combustivel(field.value());}
{auto field=model.get_numero_motor();if(field.has_value())model.set_numero_motor(field.value());}
{auto field=model.get_cmt();if(field.has_value())model.set_cmt(field.value());}
{auto field=model.get_dist();if(field.has_value())model.set_dist(field.value());}
{auto field=model.get_ano_modelo();if(field.has_value())model.set_ano_modelo(field.value());}
{auto field=model.get_ano_fabricacao();if(field.has_value())model.set_ano_fabricacao(field.value());}
{auto field=model.get_tipo_pintura();if(field.has_value())model.set_tipo_pintura(field.value());}
{auto field=model.get_tipo_veiculo();if(field.has_value())model.set_tipo_veiculo(field.value());}
{auto field=model.get_especie_veiculo();if(field.has_value())model.set_especie_veiculo(field.value());}
{auto field=model.get_vin();if(field.has_value())model.set_vin(field.value());}
{auto field=model.get_condicao_veiculo();if(field.has_value())model.set_condicao_veiculo(field.value());}
{auto field=model.get_marca_modelo();if(field.has_value())model.set_marca_modelo(field.value());}
{auto field=model.get_cor_denatran();if(field.has_value())model.set_cor_denatran(field.value());}
{auto field=model.get_lotacao();if(field.has_value())model.set_lotacao(field.value());}
{auto field=model.get_restricao();if(field.has_value())model.set_restricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G020 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G020";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G014::from_json("{\"lote\":\"synthetic\",\"quantidade\":\"0\",\"data_fabricacao\":\"synthetica\",\"data_validade\":\"synthetica\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_lote();if(field.has_value())model.set_lote(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_data_fabricacao();if(field.has_value())model.set_data_fabricacao(field.value());}
{auto field=model.get_data_validade();if(field.has_value())model.set_data_validade(field.value());}
{auto field=model.get_codigo_agregacao();if(field.has_value())model.set_codigo_agregacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G014 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G014";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrder::from_json("{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_presenca();if(field.has_value())model.set_presenca(field.value());}
{auto field=model.get_intermediador();if(field.has_value())model.set_intermediador(field.value());}
{auto field=model.get_cnpj_intermediador();if(field.has_value())model.set_cnpj_intermediador(field.value());}
{auto field=model.get_id_intermediador();if(field.has_value())model.set_id_intermediador(field.value());}
{auto field=model.get_modalidade_frete();if(field.has_value())model.set_modalidade_frete(field.value());}
{auto field=model.get_frete();if(field.has_value())model.set_frete(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_despesas_acessorias();if(field.has_value())model.set_despesas_acessorias(field.value());}
{auto field=model.get_despesas_aduaneiras();if(field.has_value())model.set_despesas_aduaneiras(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_observacoes_contribuinte();if(field.has_value())model.set_observacoes_contribuinte(field.value());}
{auto field=model.get_pedido_compra();if(field.has_value())model.set_pedido_compra(field.value());}
{auto field=model.get_contrato();if(field.has_value())model.set_contrato(field.value());}
{auto field=model.get_nota_empenho();if(field.has_value())model.set_nota_empenho(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_data_pagamento();if(field.has_value())model.set_data_pagamento(field.value());}
{auto field=model.get_cnpj_transacional_pag();if(field.has_value())model.set_cnpj_transacional_pag(field.value());}
{auto field=model.get_uf_estabelecimento_pag();if(field.has_value())model.set_uf_estabelecimento_pag(field.value());}
{auto field=model.get_tipo_integracao();if(field.has_value())model.set_tipo_integracao(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_cnpj_credenciadora();if(field.has_value())model.set_cnpj_credenciadora(field.value());}
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_cnpj_beneficiario();if(field.has_value())model.set_cnpj_beneficiario(field.value());}
{auto field=model.get_id_terminal_pag();if(field.has_value())model.set_id_terminal_pag(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrder getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrder";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeContributorObservation::from_json("{\"campo\":\"synthetic\",\"texto\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_texto();if(field.has_value())model.set_texto(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeContributorObservation getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeContributorObservation";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderPagamento::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderFormaPagamento::from_json("\"01\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderFormaPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderFormaPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderDescPagamento::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderDescPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderDescPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderDataPagamento::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderDataPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderDataPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderCnpjTransacionalPag::from_json("\"00000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderCnpjTransacionalPag getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderCnpjTransacionalPag";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderUfEstabelecimentoPag::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderUfEstabelecimentoPag getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderUfEstabelecimentoPag";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderTipoIntegracao::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderTipoIntegracao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderTipoIntegracao";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderValorPagamento::from_json("\"0.10\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderValorPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderValorPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderCnpjCredenciadora::from_json("\"00000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderCnpjCredenciadora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderCnpjCredenciadora";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderBandeira::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderBandeira getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderBandeira";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderAutorizacao::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderAutorizacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderAutorizacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderCnpjBeneficiario::from_json("\"00000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderCnpjBeneficiario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderCnpjBeneficiario";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeOrderIdTerminalPag::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeOrderIdTerminalPag getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeOrderIdTerminalPag";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeTransport::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_volume();if(field.has_value())model.set_volume(field.value());}
{auto field=model.get_especie();if(field.has_value())model.set_especie(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
{auto field=model.get_peso_liquido();if(field.has_value())model.set_peso_liquido(field.value());}
{auto field=model.get_marca();if(field.has_value())model.set_marca(field.value());}
{auto field=model.get_numeracao();if(field.has_value())model.set_numeracao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_reboque();if(field.has_value())model.set_reboque(field.value());}
{auto field=model.get_entrega();if(field.has_value())model.set_entrega(field.value());}
{auto field=model.get_retirada();if(field.has_value())model.set_retirada(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_uf_veiculo();if(field.has_value())model.set_uf_veiculo(field.value());}
{auto field=model.get_rntc();if(field.has_value())model.set_rntc(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeTransport getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeTransport";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G025::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_uf_veiculo();if(field.has_value())model.set_uf_veiculo(field.value());}
{auto field=model.get_rntc();if(field.has_value())model.set_rntc(field.value());}
{auto field=model.get_vagao();if(field.has_value())model.set_vagao(field.value());}
{auto field=model.get_balsa();if(field.has_value())model.set_balsa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G025 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G025";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G026::from_json("{\"endereco\":\"Endereco sintetico\",\"numero\":\"1\",\"bairro\":\"Bairro sintetico\",\"cidade\":\"Cidade sintetica\",\"nome_estrangeiro\":\"Pessoa sintetica\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_cod_pais();if(field.has_value())model.set_cod_pais(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G026 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G026";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G027::from_json("{\"endereco\":\"Endereco sintetico\",\"numero\":\"1\",\"bairro\":\"Bairro sintetico\",\"cidade\":\"Cidade sintetica\",\"nome_estrangeiro\":\"Pessoa sintetica\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_cod_pais();if(field.has_value())model.set_cod_pais(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G027 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G027";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G028::from_json("{\"numero\":\"synthetic\",\"valor\":\"0\",\"desconto\":\"0\",\"valor_liquido\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_valor_liquido();if(field.has_value())model.set_valor_liquido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G028 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G028";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G029::from_json("{\"vencimento\":\"synthetica\",\"valor\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_vencimento();if(field.has_value())model.set_vencimento(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G029 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G029";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G030::from_json("{\"uf_embarque\":\"sy\",\"local_embarque\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uf_embarque();if(field.has_value())model.set_uf_embarque(field.value());}
{auto field=model.get_local_embarque();if(field.has_value())model.set_local_embarque(field.value());}
{auto field=model.get_local_despacho();if(field.has_value())model.set_local_despacho(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G030 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G030";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G031::from_json("{\"guia_transito\":{\"tipo\":0,\"uf\":\"sy\",\"numero\":\"synthetic\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_defensivos();if(field.has_value())model.set_defensivos(field.value());}
{auto field=model.get_guia_transito();if(field.has_value())model.set_guia_transito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G031 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G031";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G032::from_json("{\"numero_receituario\":\"synthetic\",\"cpf_responsavel_tecnico\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero_receituario();if(field.has_value())model.set_numero_receituario(field.value());}
{auto field=model.get_cpf_responsavel_tecnico();if(field.has_value())model.set_cpf_responsavel_tecnico(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G032 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G032";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G033::from_json("{\"tipo\":0,\"uf\":\"sy\",\"numero\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G033 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G033";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G034::from_json("{\"tipo_ente_governamental\":\"s\",\"percentual_redutor\":\"0\",\"tipo_operacao_governamental\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_ente_governamental();if(field.has_value())model.set_tipo_ente_governamental(field.value());}
{auto field=model.get_percentual_redutor();if(field.has_value())model.set_percentual_redutor(field.value());}
{auto field=model.get_tipo_operacao_governamental();if(field.has_value())model.set_tipo_operacao_governamental(field.value());}
{auto field=model.get_dfes_anteriores();if(field.has_value())model.set_dfes_anteriores(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G034 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G034";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequestNfeReferenciada::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIssueRequestNfeReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIssueRequestNfeReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequestCteReferenciada::from_json("\"00000000000000000000000000000000000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIssueRequestCteReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIssueRequestCteReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G006::from_json("{\"modelo\":\"sy\",\"n_ecf\":\"synthetic\",\"n_coo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_n_ecf();if(field.has_value())model.set_n_ecf(field.value());}
{auto field=model.get_n_coo();if(field.has_value())model.set_n_coo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G006 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G006";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequestEcfReferenciada::from_json("{\"modelo\":\"sy\",\"n_ecf\":\"synthetic\",\"n_coo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIssueRequestEcfReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIssueRequestEcfReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G007::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G007 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G007";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequestNfRuralReferenciada::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIssueRequestNfRuralReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIssueRequestNfRuralReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G068::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_contato();if(field.has_value())model.set_contato(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_id_csrt();if(field.has_value())model.set_id_csrt(field.value());}
{auto field=model.get_csrt();if(field.has_value())model.set_csrt(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G068 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G068";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G002LogCancelamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G002LogCancelamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G002LogCancelamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G003::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G003 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G003";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G004::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G004 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G004";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G005::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G005 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G005";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G005NfeReferenciada::from_json("\"00000000000000000000000000000000000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G005NfeReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G005NfeReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G005CteReferenciada::from_json("\"00000000000000000000000000000000000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G005CteReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G005CteReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G005EcfReferenciada::from_json("{\"modelo\":\"sy\",\"n_ecf\":\"synthetic\",\"n_coo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G005EcfReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G005EcfReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G005NfRuralReferenciada::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G005NfRuralReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G005NfRuralReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G008::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G008 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G008";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G009::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_suframa();if(field.has_value())model.set_suframa(field.value());}
{auto field=model.get_substituto_tributario();if(field.has_value())model.set_substituto_tributario(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_contribuinte();if(field.has_value())model.set_contribuinte(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G009 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G009";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G010::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_cod_pais();if(field.has_value())model.set_cod_pais(field.value());}
{auto field=model.get_nome_pais();if(field.has_value())model.set_nome_pais(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G010 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G010";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G011::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_quantidade_tributavel();if(field.has_value())model.set_quantidade_tributavel(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_unidade_tributavel();if(field.has_value())model.set_unidade_tributavel(field.value());}
{auto field=model.get_peso();if(field.has_value())model.set_peso(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_subtotal();if(field.has_value())model.set_subtotal(field.value());}
{auto field=model.get_subtotal_tributavel();if(field.has_value())model.set_subtotal_tributavel(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_ind_valor_total();if(field.has_value())model.set_ind_valor_total(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_dfe_referenciado();if(field.has_value())model.set_dfe_referenciado(field.value());}
{auto field=model.get_cest();if(field.has_value())model.set_cest(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_ind_escala();if(field.has_value())model.set_ind_escala(field.value());}
{auto field=model.get_cnpj_fabricante();if(field.has_value())model.set_cnpj_fabricante(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_gtin_tributavel();if(field.has_value())model.set_gtin_tributavel(field.value());}
{auto field=model.get_cod_barras();if(field.has_value())model.set_cod_barras(field.value());}
{auto field=model.get_cod_barras_tributavel();if(field.has_value())model.set_cod_barras_tributavel(field.value());}
{auto field=model.get_nve();if(field.has_value())model.set_nve(field.value());}
{auto field=model.get_nrecopi();if(field.has_value())model.set_nrecopi(field.value());}
{auto field=model.get_ativo_permanente();if(field.has_value())model.set_ativo_permanente(field.value());}
{auto field=model.get_veiculo_usado();if(field.has_value())model.set_veiculo_usado(field.value());}
{auto field=model.get_ex_ipi();if(field.has_value())model.set_ex_ipi(field.value());}
{auto field=model.get_combustiveis();if(field.has_value())model.set_combustiveis(field.value());}
{auto field=model.get_medicamento();if(field.has_value())model.set_medicamento(field.value());}
{auto field=model.get_armamentos();if(field.has_value())model.set_armamentos(field.value());}
{auto field=model.get_veiculos_novos();if(field.has_value())model.set_veiculos_novos(field.value());}
{auto field=model.get_rastro();if(field.has_value())model.set_rastro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G011 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G011";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G012::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_drawback();if(field.has_value())model.set_drawback(field.value());}
{auto field=model.get_reg_exportacao();if(field.has_value())model.set_reg_exportacao(field.value());}
{auto field=model.get_nfe_exportacao();if(field.has_value())model.set_nfe_exportacao(field.value());}
{auto field=model.get_qtd_exportacao();if(field.has_value())model.set_qtd_exportacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G012 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G012";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G013::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_subtotal();if(field.has_value())model.set_subtotal(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_ndoc_importacao();if(field.has_value())model.set_ndoc_importacao(field.value());}
{auto field=model.get_ddoc_importacao();if(field.has_value())model.set_ddoc_importacao(field.value());}
{auto field=model.get_local_desembaraco();if(field.has_value())model.set_local_desembaraco(field.value());}
{auto field=model.get_uf_desembaraco();if(field.has_value())model.set_uf_desembaraco(field.value());}
{auto field=model.get_data_desembaraco();if(field.has_value())model.set_data_desembaraco(field.value());}
{auto field=model.get_via_transporte();if(field.has_value())model.set_via_transporte(field.value());}
{auto field=model.get_intermediacao();if(field.has_value())model.set_intermediacao(field.value());}
{auto field=model.get_adicao();if(field.has_value())model.set_adicao(field.value());}
{auto field=model.get_seq_adicao();if(field.has_value())model.set_seq_adicao(field.value());}
{auto field=model.get_fabricante();if(field.has_value())model.set_fabricante(field.value());}
{auto field=model.get_desc_di();if(field.has_value())model.set_desc_di(field.value());}
{auto field=model.get_afrmm();if(field.has_value())model.set_afrmm(field.value());}
{auto field=model.get_cnpj_terceiro();if(field.has_value())model.set_cnpj_terceiro(field.value());}
{auto field=model.get_cpf_terceiro();if(field.has_value())model.set_cpf_terceiro(field.value());}
{auto field=model.get_uf_terceiro();if(field.has_value())model.set_uf_terceiro(field.value());}
{auto field=model.get_cod_exportador();if(field.has_value())model.set_cod_exportador(field.value());}
{auto field=model.get_nfci();if(field.has_value())model.set_nfci(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G013 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G013";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G021::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_presenca();if(field.has_value())model.set_presenca(field.value());}
{auto field=model.get_intermediador();if(field.has_value())model.set_intermediador(field.value());}
{auto field=model.get_cnpj_intermediador();if(field.has_value())model.set_cnpj_intermediador(field.value());}
{auto field=model.get_id_intermediador();if(field.has_value())model.set_id_intermediador(field.value());}
{auto field=model.get_modalidade_frete();if(field.has_value())model.set_modalidade_frete(field.value());}
{auto field=model.get_frete();if(field.has_value())model.set_frete(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_despesas_acessorias();if(field.has_value())model.set_despesas_acessorias(field.value());}
{auto field=model.get_despesas_aduaneiras();if(field.has_value())model.set_despesas_aduaneiras(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_observacoes_contribuinte();if(field.has_value())model.set_observacoes_contribuinte(field.value());}
{auto field=model.get_pedido_compra();if(field.has_value())model.set_pedido_compra(field.value());}
{auto field=model.get_contrato();if(field.has_value())model.set_contrato(field.value());}
{auto field=model.get_nota_empenho();if(field.has_value())model.set_nota_empenho(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G021 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G021";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_data_pagamento();if(field.has_value())model.set_data_pagamento(field.value());}
{auto field=model.get_cnpj_transacional_pag();if(field.has_value())model.set_cnpj_transacional_pag(field.value());}
{auto field=model.get_uf_estabelecimento_pag();if(field.has_value())model.set_uf_estabelecimento_pag(field.value());}
{auto field=model.get_tipo_integracao();if(field.has_value())model.set_tipo_integracao(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_cnpj_credenciadora();if(field.has_value())model.set_cnpj_credenciadora(field.value());}
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_cnpj_beneficiario();if(field.has_value())model.set_cnpj_beneficiario(field.value());}
{auto field=model.get_id_terminal_pag();if(field.has_value())model.set_id_terminal_pag(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022Pagamento::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022Pagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022Pagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022FormaPagamento::from_json("\"01\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022FormaPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022FormaPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022DescPagamento::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022DescPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022DescPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022DataPagamento::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022DataPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022DataPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022CnpjTransacionalPag::from_json("\"00000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022CnpjTransacionalPag getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022CnpjTransacionalPag";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022UfEstabelecimentoPag::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022UfEstabelecimentoPag getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022UfEstabelecimentoPag";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022TipoIntegracao::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022TipoIntegracao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022TipoIntegracao";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022ValorPagamento::from_json("\"0\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022ValorPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022ValorPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022CnpjCredenciadora::from_json("\"00000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022CnpjCredenciadora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022CnpjCredenciadora";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022Bandeira::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022Bandeira getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022Bandeira";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022Autorizacao::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022Autorizacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022Autorizacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022CnpjBeneficiario::from_json("\"00000000000000\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022CnpjBeneficiario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022CnpjBeneficiario";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G022IdTerminalPag::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G022IdTerminalPag getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G022IdTerminalPag";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G023::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_volume();if(field.has_value())model.set_volume(field.value());}
{auto field=model.get_especie();if(field.has_value())model.set_especie(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
{auto field=model.get_peso_liquido();if(field.has_value())model.set_peso_liquido(field.value());}
{auto field=model.get_marca();if(field.has_value())model.set_marca(field.value());}
{auto field=model.get_numeracao();if(field.has_value())model.set_numeracao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_reboque();if(field.has_value())model.set_reboque(field.value());}
{auto field=model.get_entrega();if(field.has_value())model.set_entrega(field.value());}
{auto field=model.get_retirada();if(field.has_value())model.set_retirada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G023 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G023";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G024::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_uf_veiculo();if(field.has_value())model.set_uf_veiculo(field.value());}
{auto field=model.get_rntc();if(field.has_value())model.set_rntc(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G024 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G024";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G035::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G035 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G035";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G037::from_json("{\"tipo_tributacao\":\"synthetic\",\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"codigo_cfop\":\"synt\",\"situacao_tributaria\":\"syn\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_nao_contribuinte();if(field.has_value())model.set_nao_contribuinte(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota_importacao();if(field.has_value())model.set_aliquota_importacao(field.value());}
{auto field=model.get_aliquota_credito();if(field.has_value())model.set_aliquota_credito(field.value());}
{auto field=model.get_aliquota_reducao_destino();if(field.has_value())model.set_aliquota_reducao_destino(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota_icms();if(field.has_value())model.set_aliquota_icms(field.value());}
{auto field=model.get_aliquota_icms_st();if(field.has_value())model.set_aliquota_icms_st(field.value());}
{auto field=model.get_aliquota_fcp();if(field.has_value())model.set_aliquota_fcp(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_aliquota_diferimento_fcp();if(field.has_value())model.set_aliquota_diferimento_fcp(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
{auto field=model.get_aliquota_efetiva_icms();if(field.has_value())model.set_aliquota_efetiva_icms(field.value());}
{auto field=model.get_aliquota_efetiva_icms_st();if(field.has_value())model.set_aliquota_efetiva_icms_st(field.value());}
{auto field=model.get_codigo_beneficio_reducao_bc();if(field.has_value())model.set_codigo_beneficio_reducao_bc(field.value());}
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
{auto field=model.get_motivo_desoneracao_st();if(field.has_value())model.set_motivo_desoneracao_st(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G037 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G037";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G038::from_json("{\"estado\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G038 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G038";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G039::from_json("{\"estado\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G039 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G039";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G040::from_json("{\"estado\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G040 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G040";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G041::from_json("{\"estado\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G041 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G041";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G042::from_json("{\"estado\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G042 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G042";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G044::from_json("{\"estado\":\"sy\",\"codigo_beneficio_fiscal\":\"syntheti\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_beneficio_fiscal();if(field.has_value())model.set_codigo_beneficio_fiscal(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G044 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G044";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G045::from_json("{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"codigo_enquadramento\":\"syn\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_codigo_enquadramento();if(field.has_value())model.set_codigo_enquadramento(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G045 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G045";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G046::from_json("{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G046 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G046";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G047::from_json("{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G047 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G047";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G048::from_json("{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"codigo_cfop\":\"synt\",\"exigibilidade\":\"s\",\"item_servico\":\"synth\",\"incentivo_fiscal\":\"s\",\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_exigibilidade();if(field.has_value())model.set_exigibilidade(field.value());}
{auto field=model.get_item_servico();if(field.has_value())model.set_item_servico(field.value());}
{auto field=model.get_incentivo_fiscal();if(field.has_value())model.set_incentivo_fiscal(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G048 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G048";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G049::from_json("{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"syn\",\"classificacao_tributaria\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_tipo_pessoa();if(field.has_value())model.set_tipo_pessoa(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G049 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G049";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G050::from_json("{\"aliquota_diferimento\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G050 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G050";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G051::from_json("{\"classificacao\":\"1\",\"aliquota_ibs\":\"0\",\"aliquota_cbs\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G051 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G051";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G052::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G052 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G052";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G053::from_json("{\"situacao_tributaria\":\"syn\",\"classificacao_tributaria\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G053 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G053";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G054::from_json("{\"aliquota_diferimento\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G054 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G054";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G055::from_json("{\"codigo_servico\":\"synth\",\"natureza_operacao\":\"s\",\"exigibilidade_iss\":\"s\",\"iss_retido\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G055 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G055";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G056::from_json("{\"codigo_cnae\":\"synthet\",\"local_prestacao\":\"s\",\"iss_retido\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_cep_local_prestacao();if(field.has_value())model.set_cep_local_prestacao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G056 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G056";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G057::from_json("{\"codigo_servico\":\"synth\",\"tipo_tributacao\":\"s\",\"iss_retido\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G057 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G057";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G058::from_json("{\"cfps\":[],\"id_cnae\":\"synth\",\"situacao_tributaria\":\"sy\",\"iss_retido\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cfps();if(field.has_value())model.set_cfps(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G058 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G058";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G059::from_json("{\"cenario\":\"s\",\"codigo_cfps\":\"synt\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_codigo_cfps();if(field.has_value())model.set_codigo_cfps(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G059 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G059";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G060::from_json("{\"codigo_servico\":\"synth\",\"regime_recolhimento\":\"sy\",\"forma_recolhimento\":\"sy\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_regime_recolhimento();if(field.has_value())model.set_regime_recolhimento(field.value());}
{auto field=model.get_forma_recolhimento();if(field.has_value())model.set_forma_recolhimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G060 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G060";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G061::from_json("{\"codigo_servico\":\"synth\",\"iss_retido\":\"s\",\"tributacao\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G061 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G061";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G062::from_json("{\"cenario\":0,\"exigibilidade_iss\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cenario();if(field.has_value())model.set_cenario(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_deducoes();if(field.has_value())model.set_deducoes(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G062 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G062";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G063::from_json("{\"codigo_servico\":\"synth\",\"iss_retido\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G063 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G063";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G064::from_json("{\"tipo_emissao\":\"s\",\"codigo_servico\":\"synthe\",\"tributacao_iss\":0,\"retencao_iss\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_emissao();if(field.has_value())model.set_tipo_emissao(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tipo_imunidade();if(field.has_value())model.set_tipo_imunidade(field.value());}
{auto field=model.get_retencao_iss();if(field.has_value())model.set_retencao_iss(field.value());}
{auto field=model.get_cst_pis_cofins();if(field.has_value())model.set_cst_pis_cofins(field.value());}
{auto field=model.get_retencao_pis_cofins();if(field.has_value())model.set_retencao_pis_cofins(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G064 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G064";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G065::from_json("{\"situacao_tributaria\":\"syn\",\"classificacao_tributaria\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G065 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G065";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G066::from_json("{\"codigo_servico\":\"synth\",\"tributacao\":0,\"iss_retido\":\"s\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G066 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G066";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G067::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G067 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G067";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G067Referencia::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G067Referencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G067Referencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G070::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_fcp();if(field.has_value())model.set_aliquota_fcp(field.value());}
{auto field=model.get_aliquota_interestadual();if(field.has_value())model.set_aliquota_interestadual(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota_importacao();if(field.has_value())model.set_aliquota_importacao(field.value());}
{auto field=model.get_industria();if(field.has_value())model.set_industria(field.value());}
{auto field=model.get_majoracao();if(field.has_value())model.set_majoracao(field.value());}
{auto field=model.get_bc_icms();if(field.has_value())model.set_bc_icms(field.value());}
{auto field=model.get_bc_icms_st();if(field.has_value())model.set_bc_icms_st(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G070 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G070";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G071::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_credito();if(field.has_value())model.set_aliquota_credito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G071 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G071";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G072::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_st();if(field.has_value())model.set_aliquota_st(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota_credito();if(field.has_value())model.set_aliquota_credito(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G072 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G072";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G073::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_st();if(field.has_value())model.set_aliquota_st(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G073 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G073";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G074::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bc_st_retido();if(field.has_value())model.set_bc_st_retido(field.value());}
{auto field=model.get_aliquota_st_retido();if(field.has_value())model.set_aliquota_st_retido(field.value());}
{auto field=model.get_valor_st_retido();if(field.has_value())model.set_valor_st_retido(field.value());}
{auto field=model.get_valor_icms_substituto();if(field.has_value())model.set_valor_icms_substituto(field.value());}
{auto field=model.get_valor_fcp_retido();if(field.has_value())model.set_valor_fcp_retido(field.value());}
{auto field=model.get_aliquota_fcp_retido();if(field.has_value())model.set_aliquota_fcp_retido(field.value());}
{auto field=model.get_aliquota_bc_efetivo();if(field.has_value())model.set_aliquota_bc_efetivo(field.value());}
{auto field=model.get_aliquota_icms_efetivo();if(field.has_value())model.set_aliquota_icms_efetivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G074 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G074";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G075::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_fcp();if(field.has_value())model.set_aliquota_fcp(field.value());}
{auto field=model.get_aliquota_interestadual();if(field.has_value())model.set_aliquota_interestadual(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota_importacao();if(field.has_value())model.set_aliquota_importacao(field.value());}
{auto field=model.get_industria();if(field.has_value())model.set_industria(field.value());}
{auto field=model.get_majoracao();if(field.has_value())model.set_majoracao(field.value());}
{auto field=model.get_difal_antecipacao();if(field.has_value())model.set_difal_antecipacao(field.value());}
{auto field=model.get_codigo_beneficio_reducao_bc();if(field.has_value())model.set_codigo_beneficio_reducao_bc(field.value());}
{auto field=model.get_bc_icms();if(field.has_value())model.set_bc_icms(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
{auto field=model.get_bc_icms_st();if(field.has_value())model.set_bc_icms_st(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G075 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G075";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G076::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pauta_fiscal();if(field.has_value())model.set_pauta_fiscal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G076 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G076";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G077::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G077 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G077";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G078::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_st();if(field.has_value())model.set_aliquota_st(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
{auto field=model.get_motivo_desoneracao_st();if(field.has_value())model.set_motivo_desoneracao_st(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G078 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G078";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G079::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_retencao();if(field.has_value())model.set_quantidade_retencao(field.value());}
{auto field=model.get_aliquota_retencao();if(field.has_value())model.set_aliquota_retencao(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_motivo_reducao();if(field.has_value())model.set_motivo_reducao(field.value());}
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G079 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G079";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G080::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G080 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G080";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G081::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G081 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G081";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G082::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G082 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G082";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G083::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_aliquota_diferimento_fcp();if(field.has_value())model.set_aliquota_diferimento_fcp(field.value());}
{auto field=model.get_codigo_beneficio_reducao_bc();if(field.has_value())model.set_codigo_beneficio_reducao_bc(field.value());}
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G083 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G083";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G084::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G084 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G084";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G085::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bc_st_retido();if(field.has_value())model.set_bc_st_retido(field.value());}
{auto field=model.get_aliquota_st_retido();if(field.has_value())model.set_aliquota_st_retido(field.value());}
{auto field=model.get_valor_st_retido();if(field.has_value())model.set_valor_st_retido(field.value());}
{auto field=model.get_bc_st_dest();if(field.has_value())model.set_bc_st_dest(field.value());}
{auto field=model.get_valor_st_dest();if(field.has_value())model.set_valor_st_dest(field.value());}
{auto field=model.get_valor_fcp_retido();if(field.has_value())model.set_valor_fcp_retido(field.value());}
{auto field=model.get_aliquota_fcp_retido();if(field.has_value())model.set_aliquota_fcp_retido(field.value());}
{auto field=model.get_aliquota_bc_efetivo();if(field.has_value())model.set_aliquota_bc_efetivo(field.value());}
{auto field=model.get_aliquota_icms_efetivo();if(field.has_value())model.set_aliquota_icms_efetivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G085 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G085";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G086::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G086 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G086";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G087::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_st();if(field.has_value())model.set_aliquota_st(field.value());}
{auto field=model.get_aliquota_fcp_st();if(field.has_value())model.set_aliquota_fcp_st(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_reducao_st();if(field.has_value())model.set_aliquota_reducao_st(field.value());}
{auto field=model.get_motivo_desoneracao();if(field.has_value())model.set_motivo_desoneracao(field.value());}
{auto field=model.get_motivo_desoneracao_st();if(field.has_value())model.set_motivo_desoneracao_st(field.value());}
{auto field=model.get_deducao_desoneracao();if(field.has_value())model.set_deducao_desoneracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G087 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G087";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G088::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G088 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G088";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G089::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pauta_fiscal();if(field.has_value())model.set_pauta_fiscal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G089 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G089";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G090::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_operacao();if(field.has_value())model.set_valor_operacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G090 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G090";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G111::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_volume();if(field.has_value())model.set_volume(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G111 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G111";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G112::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
{auto field=model.get_valor_icms_st();if(field.has_value())model.set_valor_icms_st(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G112 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G112";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G113::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_documento_adicao();if(field.has_value())model.set_documento_adicao(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G113 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G113";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeComplementProduct::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_quantidade_tributavel();if(field.has_value())model.set_quantidade_tributavel(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_unidade_tributavel();if(field.has_value())model.set_unidade_tributavel(field.value());}
{auto field=model.get_peso();if(field.has_value())model.set_peso(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_subtotal();if(field.has_value())model.set_subtotal(field.value());}
{auto field=model.get_subtotal_tributavel();if(field.has_value())model.set_subtotal_tributavel(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_ind_valor_total();if(field.has_value())model.set_ind_valor_total(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_dfe_referenciado();if(field.has_value())model.set_dfe_referenciado(field.value());}
{auto field=model.get_cest();if(field.has_value())model.set_cest(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_ind_escala();if(field.has_value())model.set_ind_escala(field.value());}
{auto field=model.get_cnpj_fabricante();if(field.has_value())model.set_cnpj_fabricante(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_gtin_tributavel();if(field.has_value())model.set_gtin_tributavel(field.value());}
{auto field=model.get_cod_barras();if(field.has_value())model.set_cod_barras(field.value());}
{auto field=model.get_cod_barras_tributavel();if(field.has_value())model.set_cod_barras_tributavel(field.value());}
{auto field=model.get_nve();if(field.has_value())model.set_nve(field.value());}
{auto field=model.get_nrecopi();if(field.has_value())model.set_nrecopi(field.value());}
{auto field=model.get_ativo_permanente();if(field.has_value())model.set_ativo_permanente(field.value());}
{auto field=model.get_veiculo_usado();if(field.has_value())model.set_veiculo_usado(field.value());}
{auto field=model.get_ex_ipi();if(field.has_value())model.set_ex_ipi(field.value());}
{auto field=model.get_combustiveis();if(field.has_value())model.set_combustiveis(field.value());}
{auto field=model.get_medicamento();if(field.has_value())model.set_medicamento(field.value());}
{auto field=model.get_armamentos();if(field.has_value())model.set_armamentos(field.value());}
{auto field=model.get_veiculos_novos();if(field.has_value())model.set_veiculos_novos(field.value());}
{auto field=model.get_rastro();if(field.has_value())model.set_rastro(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeComplementProduct getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeComplementProduct";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeComplementTaxes::from_json("{\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"base_calculo\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_icms_st();if(field.has_value())model.set_icms_st(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeComplementTaxes getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeComplementTaxes";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G115::from_json("{\"codigo_cfop\":\"synt\",\"situacao_tributaria\":\"synt\",\"bc_icms\":\"0\",\"valor_icms\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_bc_icms();if(field.has_value())model.set_bc_icms(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
{auto field=model.get_valor_operacao();if(field.has_value())model.set_valor_operacao(field.value());}
{auto field=model.get_valor_fcp();if(field.has_value())model.set_valor_fcp(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G115 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G115";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G116::from_json("{\"codigo_cfop\":\"synt\",\"situacao_tributaria\":\"synt\",\"bc_icms_st\":\"0\",\"valor_icms_st\":\"0\",\"aliquota_mva\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_bc_icms_st();if(field.has_value())model.set_bc_icms_st(field.value());}
{auto field=model.get_valor_icms_st();if(field.has_value())model.set_valor_icms_st(field.value());}
{auto field=model.get_valor_fcp_st();if(field.has_value())model.set_valor_fcp_st(field.value());}
{auto field=model.get_aliquota_mva();if(field.has_value())model.set_aliquota_mva(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G116 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G116";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G117::from_json("{\"codigo_cfop\":\"synt\",\"bc_ipi\":\"0\",\"valor_ipi\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_bc_ipi();if(field.has_value())model.set_bc_ipi(field.value());}
{auto field=model.get_valor_ipi();if(field.has_value())model.set_valor_ipi(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G117 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G117";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G118::from_json("{\"codigo_cfop\":\"synt\",\"exigibilidade\":0,\"item_servico\":\"synth\",\"incentivo_fiscal\":\"s\",\"bc_issqn\":\"0\",\"valor_issqn\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_exigibilidade();if(field.has_value())model.set_exigibilidade(field.value());}
{auto field=model.get_item_servico();if(field.has_value())model.set_item_servico(field.value());}
{auto field=model.get_incentivo_fiscal();if(field.has_value())model.set_incentivo_fiscal(field.value());}
{auto field=model.get_bc_issqn();if(field.has_value())model.set_bc_issqn(field.value());}
{auto field=model.get_valor_issqn();if(field.has_value())model.set_valor_issqn(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G118 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G118";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeComplementIbsCbs::from_json("{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"base_calculo\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_tributacao_monofasica();if(field.has_value())model.set_tributacao_monofasica(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_transferencia_credito();if(field.has_value())model.set_transferencia_credito(field.value());}
{auto field=model.get_ajuste_competencia();if(field.has_value())model.set_ajuste_competencia(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeComplementIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeComplementIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G119::from_json("{\"ndoc_importacao\":\"syntheticaaaaaa\",\"ddoc_importacao\":\"synthetica\",\"uf_desembaraco\":\"sy\",\"local_desembaraco\":\"synthetic\",\"data_desembaraco\":\"synthetica\",\"via_transporte\":\"synthetic\",\"intermediacao\":\"synthetic\",\"fabricante\":\"synthetic\",\"adicao\":\"synthetic\",\"seq_adicao\":\"synth\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ndoc_importacao();if(field.has_value())model.set_ndoc_importacao(field.value());}
{auto field=model.get_ddoc_importacao();if(field.has_value())model.set_ddoc_importacao(field.value());}
{auto field=model.get_uf_desembaraco();if(field.has_value())model.set_uf_desembaraco(field.value());}
{auto field=model.get_local_desembaraco();if(field.has_value())model.set_local_desembaraco(field.value());}
{auto field=model.get_data_desembaraco();if(field.has_value())model.set_data_desembaraco(field.value());}
{auto field=model.get_via_transporte();if(field.has_value())model.set_via_transporte(field.value());}
{auto field=model.get_intermediacao();if(field.has_value())model.set_intermediacao(field.value());}
{auto field=model.get_fabricante();if(field.has_value())model.set_fabricante(field.value());}
{auto field=model.get_adicao();if(field.has_value())model.set_adicao(field.value());}
{auto field=model.get_seq_adicao();if(field.has_value())model.set_seq_adicao(field.value());}
{auto field=model.get_afrmm();if(field.has_value())model.set_afrmm(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G119 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G119";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G114::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_subtotal();if(field.has_value())model.set_subtotal(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_gtin_tributavel();if(field.has_value())model.set_gtin_tributavel(field.value());}
{auto field=model.get_cod_barras();if(field.has_value())model.set_cod_barras(field.value());}
{auto field=model.get_cod_barras_tributavel();if(field.has_value())model.set_cod_barras_tributavel(field.value());}
{auto field=model.get_unidade_tributavel();if(field.has_value())model.set_unidade_tributavel(field.value());}
{auto field=model.get_subtotal_tributavel();if(field.has_value())model.set_subtotal_tributavel(field.value());}
{auto field=model.get_quantidade_tributavel();if(field.has_value())model.set_quantidade_tributavel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G114 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G114";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G114Impostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G114Impostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G114Impostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G120::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G120 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G120";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G120NfeReferenciada::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G120NfeReferenciada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G120NfeReferenciada";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G121::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G121 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G121";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G122::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_dfe_referenciado();if(field.has_value())model.set_dfe_referenciado(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G122 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G122";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G122DfeReferenciado::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G122DfeReferenciado getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G122DfeReferenciado";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G123::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G123 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G123";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G124::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G124 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G124";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G125::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G125 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G125";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G127::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G127 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G127";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G127ControleEstoque::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G127ControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G127ControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G128::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G128 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G128";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G128ControleEstoque::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_perecimento();if(field.has_value())model.set_quantidade_perecimento(field.value());}
{auto field=model.get_unidade_perecimento();if(field.has_value())model.set_unidade_perecimento(field.value());}
{auto field=model.get_valor_ibs_estorno();if(field.has_value())model.set_valor_ibs_estorno(field.value());}
{auto field=model.get_valor_cbs_estorno();if(field.has_value())model.set_valor_cbs_estorno(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G128ControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G128ControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G129::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G129 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G129";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G129ControleEstoque::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_nao_fornecida();if(field.has_value())model.set_quantidade_nao_fornecida(field.value());}
{auto field=model.get_unidade_nao_fornecida();if(field.has_value())model.set_unidade_nao_fornecida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G129ControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G129ControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G130::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G130 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G130";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G131::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G131 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G131";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G131CreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G131CreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G131CreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G132::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G132 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G132";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G132ControleEstoque::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_perecimento();if(field.has_value())model.set_quantidade_perecimento(field.value());}
{auto field=model.get_unidade_perecimento();if(field.has_value())model.set_unidade_perecimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G132ControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G132ControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G133::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_aceitacao();if(field.has_value())model.set_indicador_aceitacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G133 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G133";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G134::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G134 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G134";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G134ControleEstoque::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_imobilizada();if(field.has_value())model.set_quantidade_imobilizada(field.value());}
{auto field=model.get_unidade_imobilizada();if(field.has_value())model.set_unidade_imobilizada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G134ControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G134ControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G135::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G135 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G135";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G135ControleEstoque::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_combustivel();if(field.has_value())model.set_quantidade_combustivel(field.value());}
{auto field=model.get_unidade_combustivel();if(field.has_value())model.set_unidade_combustivel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G135ControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G135ControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G136::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_credito_ibs();if(field.has_value())model.set_valor_credito_ibs(field.value());}
{auto field=model.get_valor_credito_cbs();if(field.has_value())model.set_valor_credito_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G136 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G136";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G137::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G137 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G137";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G138::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_pagamentos();if(field.has_value())model.set_pagamentos(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G138 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G138";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G139::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_pagamento();if(field.has_value())model.set_indicador_pagamento(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_data_pagamento();if(field.has_value())model.set_data_pagamento(field.value());}
{auto field=model.get_cnpj_transacional_pag();if(field.has_value())model.set_cnpj_transacional_pag(field.value());}
{auto field=model.get_uf_pagamento();if(field.has_value())model.set_uf_pagamento(field.value());}
{auto field=model.get_cnpj_instituicao_financeira();if(field.has_value())model.set_cnpj_instituicao_financeira(field.value());}
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_cnpj_beneficiario();if(field.has_value())model.set_cnpj_beneficiario(field.value());}
{auto field=model.get_uf_beneficiario();if(field.has_value())model.set_uf_beneficiario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G139 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G139";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G140::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G140 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G140";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G141::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G141 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G141";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G142::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nfce_referenciada();if(field.has_value())model.set_nfce_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G142 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G142";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G143::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G143 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G143";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G144::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_inicio();if(field.has_value())model.set_data_inicio(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_numero_inicio();if(field.has_value())model.set_numero_inicio(field.value());}
{auto field=model.get_numero_final();if(field.has_value())model.set_numero_final(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_separar_pdf();if(field.has_value())model.set_separar_pdf(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G144 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G144";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G145::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_regime_tributario();if(field.has_value())model.set_regime_tributario(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_unidade_empresa();if(field.has_value())model.set_unidade_empresa(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_conta_bancaria_banco();if(field.has_value())model.set_conta_bancaria_banco(field.value());}
{auto field=model.get_conta_bancaria_agencia();if(field.has_value())model.set_conta_bancaria_agencia(field.value());}
{auto field=model.get_conta_bancaria_numero();if(field.has_value())model.set_conta_bancaria_numero(field.value());}
{auto field=model.get_conta_bancaria_digito();if(field.has_value())model.set_conta_bancaria_digito(field.value());}
{auto field=model.get_contabilidade();if(field.has_value())model.set_contabilidade(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_logomarca();if(field.has_value())model.set_logomarca(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G145 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G145";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G146::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G146 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G146";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G147::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nfe_serie();if(field.has_value())model.set_nfe_serie(field.value());}
{auto field=model.get_nfe_numero();if(field.has_value())model.set_nfe_numero(field.value());}
{auto field=model.get_nfe_numero_dev();if(field.has_value())model.set_nfe_numero_dev(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_cnae_issqn();if(field.has_value())model.set_cnae_issqn(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G147 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G147";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G148::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nfce_serie();if(field.has_value())model.set_nfce_serie(field.value());}
{auto field=model.get_nfce_numero();if(field.has_value())model.set_nfce_numero(field.value());}
{auto field=model.get_nfce_id_csc();if(field.has_value())model.set_nfce_id_csc(field.value());}
{auto field=model.get_nfce_codigo_csc();if(field.has_value())model.set_nfce_codigo_csc(field.value());}
{auto field=model.get_nfce_numero_dev();if(field.has_value())model.set_nfce_numero_dev(field.value());}
{auto field=model.get_nfce_id_csc_dev();if(field.has_value())model.set_nfce_id_csc_dev(field.value());}
{auto field=model.get_nfce_codigo_csc_dev();if(field.has_value())model.set_nfce_codigo_csc_dev(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G148 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G148";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G149::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cte_serie();if(field.has_value())model.set_cte_serie(field.value());}
{auto field=model.get_cte_number();if(field.has_value())model.set_cte_number(field.value());}
{auto field=model.get_cte_number_dev();if(field.has_value())model.set_cte_number_dev(field.value());}
{auto field=model.get_cte_os_serie();if(field.has_value())model.set_cte_os_serie(field.value());}
{auto field=model.get_cte_os_number();if(field.has_value())model.set_cte_os_number(field.value());}
{auto field=model.get_cte_os_number_dev();if(field.has_value())model.set_cte_os_number_dev(field.value());}
{auto field=model.get_taf_cte_os();if(field.has_value())model.set_taf_cte_os(field.value());}
{auto field=model.get_registro_estadual_cte_os();if(field.has_value())model.set_registro_estadual_cte_os(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G149 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G149";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G150::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_dce_serie();if(field.has_value())model.set_dce_serie(field.value());}
{auto field=model.get_dce_numero();if(field.has_value())model.set_dce_numero(field.value());}
{auto field=model.get_dce_numero_dev();if(field.has_value())model.set_dce_numero_dev(field.value());}
{auto field=model.get_tipo_emissor_dce();if(field.has_value())model.set_tipo_emissor_dce(field.value());}
{auto field=model.get_numero_site_autorizador();if(field.has_value())model.set_numero_site_autorizador(field.value());}
{auto field=model.get_site_marketplace();if(field.has_value())model.set_site_marketplace(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G150 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G150";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G151::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nfse_rps_serie();if(field.has_value())model.set_nfse_rps_serie(field.value());}
{auto field=model.get_nfse_rps_numero();if(field.has_value())model.set_nfse_rps_numero(field.value());}
{auto field=model.get_cnae();if(field.has_value())model.set_cnae(field.value());}
{auto field=model.get_nfse_login();if(field.has_value())model.set_nfse_login(field.value());}
{auto field=model.get_nfse_password();if(field.has_value())model.set_nfse_password(field.value());}
{auto field=model.get_nfse_token();if(field.has_value())model.set_nfse_token(field.value());}
{auto field=model.get_regime_apuracao_sn();if(field.has_value())model.set_regime_apuracao_sn(field.value());}
{auto field=model.get_regime_especial_nacional();if(field.has_value())model.set_regime_especial_nacional(field.value());}
{auto field=model.get_regime_especial_municipal();if(field.has_value())model.set_regime_especial_municipal(field.value());}
{auto field=model.get_nfse_lote_rps_numero();if(field.has_value())model.set_nfse_lote_rps_numero(field.value());}
{auto field=model.get_nfse_rps_numero_dev();if(field.has_value())model.set_nfse_rps_numero_dev(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G151 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G151";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G151Cnae::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G151Cnae getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G151Cnae";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G152::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_certificado();if(field.has_value())model.set_certificado(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G152 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G152";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G153::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_partilha_icms_contribuinte();if(field.has_value())model.set_partilha_icms_contribuinte(field.value());}
{auto field=model.get_partilha_icms_isento();if(field.has_value())model.set_partilha_icms_isento(field.value());}
{auto field=model.get_orientacao_danfe();if(field.has_value())model.set_orientacao_danfe(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_icms_ref_sp();if(field.has_value())model.set_icms_ref_sp(field.value());}
{auto field=model.get_refeicoes_sp();if(field.has_value())model.set_refeicoes_sp(field.value());}
{auto field=model.get_icms_ref_df();if(field.has_value())model.set_icms_ref_df(field.value());}
{auto field=model.get_exclusao_icms_pis_cofins();if(field.has_value())model.set_exclusao_icms_pis_cofins(field.value());}
{auto field=model.get_exclusao_difal_pis_cofins();if(field.has_value())model.set_exclusao_difal_pis_cofins(field.value());}
{auto field=model.get_deduzir_desconto_ipi();if(field.has_value())model.set_deduzir_desconto_ipi(field.value());}
{auto field=model.get_base_calculo_ipi_sem_frete();if(field.has_value())model.set_base_calculo_ipi_sem_frete(field.value());}
{auto field=model.get_email_automatico_nfse();if(field.has_value())model.set_email_automatico_nfse(field.value());}
{auto field=model.get_ativar_epec();if(field.has_value())model.set_ativar_epec(field.value());}
{auto field=model.get_ocultar_total_etiqueta();if(field.has_value())model.set_ocultar_total_etiqueta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::G153 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::G153";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfe55IssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Nfe55IssueRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Nfe55IssueRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfe55Customer::from_json("{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_suframa();if(field.has_value())model.set_suframa(field.value());}
{auto field=model.get_substituto_tributario();if(field.has_value())model.set_substituto_tributario(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_contribuinte();if(field.has_value())model.set_contribuinte(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_cod_pais();if(field.has_value())model.set_cod_pais(field.value());}
{auto field=model.get_nome_pais();if(field.has_value())model.set_nome_pais(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Nfe55Customer getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Nfe55Customer";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfce65IssueRequest::from_json("{\"modelo\":2,\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::Nfce65IssueRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::Nfce65IssueRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeReturnRequest::from_json("{\"classe_imposto\":\"synthetic\",\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":1,\"natureza_operacao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_volume();if(field.has_value())model.set_volume(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ver_aplic();if(field.has_value())model.set_ver_aplic(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeReturnRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeReturnRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeAdjustmentRequest::from_json("{\"operacao\":0,\"natureza_operacao\":\"synthetic\",\"codigo_cfop\":\"5102\",\"ambiente\":1,\"cliente\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
{auto field=model.get_valor_icms_st();if(field.has_value())model.set_valor_icms_st(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeAdjustmentRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeAdjustmentRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeComplementRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"operacao\":1,\"natureza_operacao\":\"Synthetic complement\",\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"impostos\":{\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"base_calculo\":0}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_documento_adicao();if(field.has_value())model.set_documento_adicao(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeComplementRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeComplementRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeProductTaxClass::from_json("{\"descricao\":\"synthetic\",\"icms\":[{\"tipo_tributacao\":\"synthetic\",\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"codigo_cfop\":\"synthetic\",\"situacao_tributaria\":\"syn\"}],\"ipi\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"codigo_enquadramento\":\"syn\",\"aliquota\":\"0\"}],\"pis\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}],\"cofins\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_tributos_federais();if(field.has_value())model.set_tributos_federais(field.value());}
{auto field=model.get_tributos_estaduais();if(field.has_value())model.set_tributos_estaduais(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeProductTaxClass getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeProductTaxClass";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider55::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider55 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider55";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider56::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_cep_local_prestacao();if(field.has_value())model.set_cep_local_prestacao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider56 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider56";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider57::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider57 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider57";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider58::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_cfps();if(field.has_value())model.set_cfps(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider58 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider58";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider60::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_regime_recolhimento();if(field.has_value())model.set_regime_recolhimento(field.value());}
{auto field=model.get_forma_recolhimento();if(field.has_value())model.set_forma_recolhimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider60 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider60";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider61::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider61 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider61";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider63::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider63 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider63";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider64::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_tipo_emissao();if(field.has_value())model.set_tipo_emissao(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tipo_imunidade();if(field.has_value())model.set_tipo_imunidade(field.value());}
{auto field=model.get_retencao_iss();if(field.has_value())model.set_retencao_iss(field.value());}
{auto field=model.get_cst_pis_cofins();if(field.has_value())model.set_cst_pis_cofins(field.value());}
{auto field=model.get_retencao_pis_cofins();if(field.has_value())model.set_retencao_pis_cofins(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider64 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider64";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseTaxClassProvider66::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_responsavel_retencao();if(field.has_value())model.set_responsavel_retencao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseTaxClassProvider66 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseTaxClassProvider66";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfseServiceTaxClass::from_json("{\"descricao\":\"synthetic\",\"tipo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfseServiceTaxClass getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfseServiceTaxClass";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomCommunicationTaxClass::from_json("{\"tipo\":\"nfcom\",\"descricao\":\"Controlled communication class\",\"codigo_classificacao\":\"100101\",\"icms\":{\"situacao_tributaria\":\"40\"},\"pis\":{\"situacao_tributaria\":\"06\"},\"cofins\":{\"situacao_tributaria\":\"06\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_codigo_classificacao();if(field.has_value())model.set_codigo_classificacao(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_fust();if(field.has_value())model.set_fust(field.value());}
{auto field=model.get_funttel();if(field.has_value())model.set_funttel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfcomCommunicationTaxClass getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfcomCommunicationTaxClass";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomClassIcms::from_json("{\"situacao_tributaria\":\"40\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_aliquota_fcp();if(field.has_value())model.set_aliquota_fcp(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfcomClassIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfcomClassIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomClassPisCofins::from_json("{\"situacao_tributaria\":\"06\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfcomClassPisCofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfcomClassPisCofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomClassContribution::from_json("{\"aliquota\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfcomClassContribution getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfcomClassContribution";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalTaxClassRequestVariant3Item::from_json("{\"descricao\":\"synthetic\",\"icms\":[{\"tipo_tributacao\":\"synthetic\",\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"codigo_cfop\":\"synthetic\",\"situacao_tributaria\":\"syn\"}],\"ipi\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"codigo_enquadramento\":\"syn\",\"aliquota\":\"0\"}],\"pis\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}],\"cofins\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalTaxClassRequestVariant3Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalTaxClassRequestVariant3Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalTaxClassRequest::from_json("{\"descricao\":\"synthetic\",\"icms\":[{\"tipo_tributacao\":\"synthetic\",\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"codigo_cfop\":\"synthetic\",\"situacao_tributaria\":\"syn\"}],\"ipi\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"codigo_enquadramento\":\"syn\",\"aliquota\":\"0\"}],\"pis\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}],\"cofins\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalTaxClassRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalTaxClassRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::TaxClassCreatedResult::from_json("{\"referencia\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::TaxClassCreatedResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::TaxClassCreatedResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequest::from_json("{\"cnae\":null}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_regime_tributario();if(field.has_value())model.set_regime_tributario(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_unidade_empresa();if(field.has_value())model.set_unidade_empresa(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_conta_bancaria_banco();if(field.has_value())model.set_conta_bancaria_banco(field.value());}
{auto field=model.get_conta_bancaria_agencia();if(field.has_value())model.set_conta_bancaria_agencia(field.value());}
{auto field=model.get_conta_bancaria_numero();if(field.has_value())model.set_conta_bancaria_numero(field.value());}
{auto field=model.get_conta_bancaria_digito();if(field.has_value())model.set_conta_bancaria_digito(field.value());}
{auto field=model.get_contabilidade();if(field.has_value())model.set_contabilidade(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_logomarca();if(field.has_value())model.set_logomarca(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nfe_serie();if(field.has_value())model.set_nfe_serie(field.value());}
{auto field=model.get_nfe_numero();if(field.has_value())model.set_nfe_numero(field.value());}
{auto field=model.get_nfe_numero_dev();if(field.has_value())model.set_nfe_numero_dev(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_cnae_issqn();if(field.has_value())model.set_cnae_issqn(field.value());}
{auto field=model.get_nfce_serie();if(field.has_value())model.set_nfce_serie(field.value());}
{auto field=model.get_nfce_numero();if(field.has_value())model.set_nfce_numero(field.value());}
{auto field=model.get_nfce_id_csc();if(field.has_value())model.set_nfce_id_csc(field.value());}
{auto field=model.get_nfce_codigo_csc();if(field.has_value())model.set_nfce_codigo_csc(field.value());}
{auto field=model.get_nfce_numero_dev();if(field.has_value())model.set_nfce_numero_dev(field.value());}
{auto field=model.get_nfce_id_csc_dev();if(field.has_value())model.set_nfce_id_csc_dev(field.value());}
{auto field=model.get_nfce_codigo_csc_dev();if(field.has_value())model.set_nfce_codigo_csc_dev(field.value());}
{auto field=model.get_cte_serie();if(field.has_value())model.set_cte_serie(field.value());}
{auto field=model.get_cte_number();if(field.has_value())model.set_cte_number(field.value());}
{auto field=model.get_cte_number_dev();if(field.has_value())model.set_cte_number_dev(field.value());}
{auto field=model.get_cte_os_serie();if(field.has_value())model.set_cte_os_serie(field.value());}
{auto field=model.get_cte_os_number();if(field.has_value())model.set_cte_os_number(field.value());}
{auto field=model.get_cte_os_number_dev();if(field.has_value())model.set_cte_os_number_dev(field.value());}
{auto field=model.get_taf_cte_os();if(field.has_value())model.set_taf_cte_os(field.value());}
{auto field=model.get_registro_estadual_cte_os();if(field.has_value())model.set_registro_estadual_cte_os(field.value());}
{auto field=model.get_dce_serie();if(field.has_value())model.set_dce_serie(field.value());}
{auto field=model.get_dce_numero();if(field.has_value())model.set_dce_numero(field.value());}
{auto field=model.get_dce_numero_dev();if(field.has_value())model.set_dce_numero_dev(field.value());}
{auto field=model.get_tipo_emissor_dce();if(field.has_value())model.set_tipo_emissor_dce(field.value());}
{auto field=model.get_numero_site_autorizador();if(field.has_value())model.set_numero_site_autorizador(field.value());}
{auto field=model.get_site_marketplace();if(field.has_value())model.set_site_marketplace(field.value());}
{auto field=model.get_nfse_rps_serie();if(field.has_value())model.set_nfse_rps_serie(field.value());}
{auto field=model.get_nfse_rps_numero();if(field.has_value())model.set_nfse_rps_numero(field.value());}
{auto field=model.get_cnae();if(field.has_value())model.set_cnae(field.value());}
{auto field=model.get_nfse_login();if(field.has_value())model.set_nfse_login(field.value());}
{auto field=model.get_nfse_password();if(field.has_value())model.set_nfse_password(field.value());}
{auto field=model.get_nfse_token();if(field.has_value())model.set_nfse_token(field.value());}
{auto field=model.get_regime_apuracao_sn();if(field.has_value())model.set_regime_apuracao_sn(field.value());}
{auto field=model.get_regime_especial_nacional();if(field.has_value())model.set_regime_especial_nacional(field.value());}
{auto field=model.get_regime_especial_municipal();if(field.has_value())model.set_regime_especial_municipal(field.value());}
{auto field=model.get_nfse_lote_rps_numero();if(field.has_value())model.set_nfse_lote_rps_numero(field.value());}
{auto field=model.get_nfse_rps_numero_dev();if(field.has_value())model.set_nfse_rps_numero_dev(field.value());}
{auto field=model.get_certificado();if(field.has_value())model.set_certificado(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_partilha_icms_contribuinte();if(field.has_value())model.set_partilha_icms_contribuinte(field.value());}
{auto field=model.get_partilha_icms_isento();if(field.has_value())model.set_partilha_icms_isento(field.value());}
{auto field=model.get_orientacao_danfe();if(field.has_value())model.set_orientacao_danfe(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_icms_ref_sp();if(field.has_value())model.set_icms_ref_sp(field.value());}
{auto field=model.get_refeicoes_sp();if(field.has_value())model.set_refeicoes_sp(field.value());}
{auto field=model.get_icms_ref_df();if(field.has_value())model.set_icms_ref_df(field.value());}
{auto field=model.get_exclusao_icms_pis_cofins();if(field.has_value())model.set_exclusao_icms_pis_cofins(field.value());}
{auto field=model.get_exclusao_difal_pis_cofins();if(field.has_value())model.set_exclusao_difal_pis_cofins(field.value());}
{auto field=model.get_deduzir_desconto_ipi();if(field.has_value())model.set_deduzir_desconto_ipi(field.value());}
{auto field=model.get_base_calculo_ipi_sem_frete();if(field.has_value())model.set_base_calculo_ipi_sem_frete(field.value());}
{auto field=model.get_email_automatico_nfse();if(field.has_value())model.set_email_automatico_nfse(field.value());}
{auto field=model.get_ativar_epec();if(field.has_value())model.set_ativar_epec(field.value());}
{auto field=model.get_ocultar_total_etiqueta();if(field.has_value())model.set_ocultar_total_etiqueta(field.value());}
{auto field=model.get_validar_setup_completo();if(field.has_value())model.set_validar_setup_completo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalCompanyUpdateRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalCompanyUpdateRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequestContabilidade::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalCompanyUpdateRequestContabilidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalCompanyUpdateRequestContabilidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequestCnae::from_json("null",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalCompanyUpdateRequestCnae getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalCompanyUpdateRequestCnae";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateResult::from_json("{\"success\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_success();if(field.has_value())model.set_success(field.value());}
{auto field=model.get_alerts();if(field.has_value())model.set_alerts(field.value());}
{auto field=model.get_warnings();if(field.has_value())model.set_warnings(field.value());}
{auto field=model.get_bearer_access_token_status();if(field.has_value())model.set_bearer_access_token_status(field.value());}
{auto field=model.get_bearer_access_token_pending();if(field.has_value())model.set_bearer_access_token_pending(field.value());}
{auto field=model.get_credenciais();if(field.has_value())model.set_credenciais(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalCompanyUpdateResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalCompanyUpdateResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateResultWarningsItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_code();if(field.has_value())model.set_code(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalCompanyUpdateResultWarningsItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalCompanyUpdateResultWarningsItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateResultCredenciais::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_consumer_key();if(field.has_value())model.set_consumer_key(field.value());}
{auto field=model.get_consumer_secret();if(field.has_value())model.set_consumer_secret(field.value());}
{auto field=model.get_access_token();if(field.has_value())model.set_access_token(field.value());}
{auto field=model.get_access_token_secret();if(field.has_value())model.set_access_token_secret(field.value());}
{auto field=model.get_bearer_access_token();if(field.has_value())model.set_bearer_access_token(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalCompanyUpdateResultCredenciais getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalCompanyUpdateResultCredenciais";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"danfe\",\"numero_inicio\":\"1\",\"numero_final\":\"5\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_inicio();if(field.has_value())model.set_data_inicio(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_numero_inicio();if(field.has_value())model.set_numero_inicio(field.value());}
{auto field=model.get_numero_final();if(field.has_value())model.set_numero_final(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_separar_pdf();if(field.has_value())model.set_separar_pdf(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalReportRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalReportRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportResult::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_data_inicio();if(field.has_value())model.set_data_inicio(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_numero_inicio();if(field.has_value())model.set_numero_inicio(field.value());}
{auto field=model.get_numero_final();if(field.has_value())model.set_numero_final(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_processado();if(field.has_value())model.set_processado(field.value());}
{auto field=model.get_url();if(field.has_value())model.set_url(field.value());}
{auto field=model.get_expira();if(field.has_value())model.set_expira(field.value());}
{auto field=model.get_reason();if(field.has_value())model.set_reason(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::FiscalReportResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::FiscalReportResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112110Details::from_json("{\"data_previsao_entrega\":\"2026-11-01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_quitacao();if(field.has_value())model.set_indicador_quitacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112110Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112110Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112110Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112110\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_indicador_quitacao();if(field.has_value())model.set_indicador_quitacao(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112110Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112110Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112120Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade\":\"0\",\"unidade\":\"synthe\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112120Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112120Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112120DetailsItensItem::from_json("{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade\":\"0\",\"unidade\":\"synthe\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112120DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112120DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112120DetailsItensItemControleEstoque::from_json("{\"quantidade\":\"0\",\"unidade\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112120DetailsItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112120DetailsItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112120Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112120\",\"itens\":[{\"item\":1,\"valor_ibs\":\"0.00\",\"valor_cbs\":0,\"controle_estoque\":{\"quantidade\":\"1.2500\",\"unidade\":\"UN\"}}],\"additional_future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112120Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112120Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112120RequestItensItem::from_json("{\"item\":1,\"valor_ibs\":\"0.00\",\"valor_cbs\":0,\"controle_estoque\":{\"quantidade\":\"1.2500\",\"unidade\":\"UN\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112120RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112120RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112120RequestItensItemControleEstoque::from_json("{\"quantidade\":\"1.2500\",\"unidade\":\"UN\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112120RequestItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112120RequestItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112130Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_perecimento\":\"0\",\"unidade_perecimento\":\"synthe\",\"valor_ibs_estorno\":\"0\",\"valor_cbs_estorno\":\"0\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112130Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112130Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112130DetailsItensItem::from_json("{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_perecimento\":\"0\",\"unidade_perecimento\":\"synthe\",\"valor_ibs_estorno\":\"0\",\"valor_cbs_estorno\":\"0\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112130DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112130DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112130DetailsItensItemControleEstoque::from_json("{\"quantidade_perecimento\":\"0\",\"unidade_perecimento\":\"synthe\",\"valor_ibs_estorno\":\"0\",\"valor_cbs_estorno\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_perecimento();if(field.has_value())model.set_quantidade_perecimento(field.value());}
{auto field=model.get_unidade_perecimento();if(field.has_value())model.set_unidade_perecimento(field.value());}
{auto field=model.get_valor_ibs_estorno();if(field.has_value())model.set_valor_ibs_estorno(field.value());}
{auto field=model.get_valor_cbs_estorno();if(field.has_value())model.set_valor_cbs_estorno(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112130DetailsItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112130DetailsItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112130Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"112130\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\",\"valor_ibs_estorno\":\"0.00\",\"valor_cbs_estorno\":0}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112130Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112130Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112130RequestItensItem::from_json("{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\",\"valor_ibs_estorno\":\"0.00\",\"valor_cbs_estorno\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112130RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112130RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112130RequestItensItemControleEstoque::from_json("{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\",\"valor_ibs_estorno\":\"0.00\",\"valor_cbs_estorno\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_perecimento();if(field.has_value())model.set_quantidade_perecimento(field.value());}
{auto field=model.get_unidade_perecimento();if(field.has_value())model.set_unidade_perecimento(field.value());}
{auto field=model.get_valor_ibs_estorno();if(field.has_value())model.set_valor_ibs_estorno(field.value());}
{auto field=model.get_valor_cbs_estorno();if(field.has_value())model.set_valor_cbs_estorno(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112130RequestItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112130RequestItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112140Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_nao_fornecida\":\"0\",\"unidade_nao_fornecida\":\"synthe\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112140Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112140Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112140DetailsItensItem::from_json("{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_nao_fornecida\":\"0\",\"unidade_nao_fornecida\":\"synthe\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112140DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112140DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112140DetailsItensItemControleEstoque::from_json("{\"quantidade_nao_fornecida\":\"0\",\"unidade_nao_fornecida\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_nao_fornecida();if(field.has_value())model.set_quantidade_nao_fornecida(field.value());}
{auto field=model.get_unidade_nao_fornecida();if(field.has_value())model.set_unidade_nao_fornecida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112140DetailsItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112140DetailsItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112140Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"112140\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_nao_fornecida\":\"1.0000\",\"unidade_nao_fornecida\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112140Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112140Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112140RequestItensItem::from_json("{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_nao_fornecida\":\"1.0000\",\"unidade_nao_fornecida\":\"UN\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112140RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112140RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112140RequestItensItemControleEstoque::from_json("{\"quantidade_nao_fornecida\":\"1.0000\",\"unidade_nao_fornecida\":\"UN\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_nao_fornecida();if(field.has_value())model.set_quantidade_nao_fornecida(field.value());}
{auto field=model.get_unidade_nao_fornecida();if(field.has_value())model.set_unidade_nao_fornecida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112140RequestItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112140RequestItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112150Details::from_json("{\"data_previsao_entrega\":\"2026-11-01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112150Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112150Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs112150Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112150\",\"data_previsao_entrega\":\"2026-11-01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs112150Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs112150Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211110Details::from_json("{\"itens\":[{\"item\":\"0\",\"base_calculo\":\"0\",\"credito_presumido\":{\"classificacao\":\"sy\",\"aliquota_ibs\":\"0\",\"aliquota_cbs\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211110Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211110Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211110DetailsItensItem::from_json("{\"item\":\"0\",\"base_calculo\":\"0\",\"credito_presumido\":{\"classificacao\":\"sy\",\"aliquota_ibs\":\"0\",\"aliquota_cbs\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211110DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211110DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211110DetailsItensItemCreditoPresumido::from_json("{\"classificacao\":\"sy\",\"aliquota_ibs\":\"0\",\"aliquota_cbs\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211110DetailsItensItemCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211110DetailsItensItemCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211110Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211110\",\"itens\":[{\"item\":1,\"base_calculo\":0,\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0,\"aliquota_cbs\":\"0.0000\",\"valor_ibs\":\"0.00\",\"valor_cbs\":0}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211110Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211110Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211110RequestItensItem::from_json("{\"item\":1,\"base_calculo\":0,\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0,\"aliquota_cbs\":\"0.0000\",\"valor_ibs\":\"0.00\",\"valor_cbs\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211110RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211110RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211110RequestItensItemCreditoPresumido::from_json("{\"classificacao\":\"01\",\"aliquota_ibs\":0,\"aliquota_cbs\":\"0.0000\",\"valor_ibs\":\"0.00\",\"valor_cbs\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211110RequestItensItemCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211110RequestItensItemCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211124Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_perecimento\":\"0\",\"unidade_perecimento\":\"synthe\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211124Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211124Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211124DetailsItensItem::from_json("{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_perecimento\":\"0\",\"unidade_perecimento\":\"synthe\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211124DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211124DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211124DetailsItensItemControleEstoque::from_json("{\"quantidade_perecimento\":\"0\",\"unidade_perecimento\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_perecimento();if(field.has_value())model.set_quantidade_perecimento(field.value());}
{auto field=model.get_unidade_perecimento();if(field.has_value())model.set_unidade_perecimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211124DetailsItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211124DetailsItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211124Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211124\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211124Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211124Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211124RequestItensItem::from_json("{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\",\"valor_ibs_estorno\":\"0.00\",\"valor_cbs_estorno\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211124RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211124RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211124RequestItensItemControleEstoque::from_json("{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\",\"valor_ibs_estorno\":\"0.00\",\"valor_cbs_estorno\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_perecimento();if(field.has_value())model.set_quantidade_perecimento(field.value());}
{auto field=model.get_unidade_perecimento();if(field.has_value())model.set_unidade_perecimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211124RequestItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211124RequestItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211128Details::from_json("{\"indicador_aceitacao\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_aceitacao();if(field.has_value())model.set_indicador_aceitacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211128Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211128Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211128Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211128\",\"indicador_aceitacao\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_indicador_aceitacao();if(field.has_value())model.set_indicador_aceitacao(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211128Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211128Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211130Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_imobilizada\":\"0\",\"unidade_imobilizada\":\"synthe\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211130Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211130Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211130DetailsItensItem::from_json("{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_imobilizada\":\"0\",\"unidade_imobilizada\":\"synthe\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211130DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211130DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211130DetailsItensItemControleEstoque::from_json("{\"quantidade_imobilizada\":\"0\",\"unidade_imobilizada\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_imobilizada();if(field.has_value())model.set_quantidade_imobilizada(field.value());}
{auto field=model.get_unidade_imobilizada();if(field.has_value())model.set_unidade_imobilizada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211130DetailsItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211130DetailsItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211130Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211130\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_imobilizada\":\"1.0000\",\"unidade_imobilizada\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211130Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211130Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211130RequestItensItem::from_json("{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_imobilizada\":\"1.0000\",\"unidade_imobilizada\":\"UN\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211130RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211130RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211130RequestItensItemControleEstoque::from_json("{\"quantidade_imobilizada\":\"1.0000\",\"unidade_imobilizada\":\"UN\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_imobilizada();if(field.has_value())model.set_quantidade_imobilizada(field.value());}
{auto field=model.get_unidade_imobilizada();if(field.has_value())model.set_unidade_imobilizada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211130RequestItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211130RequestItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211140Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_combustivel\":\"0\",\"unidade_combustivel\":\"synthe\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211140Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211140Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211140DetailsItensItem::from_json("{\"item\":\"0\",\"valor_ibs\":\"0\",\"valor_cbs\":\"0\",\"controle_estoque\":{\"quantidade_combustivel\":\"0\",\"unidade_combustivel\":\"synthe\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211140DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211140DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211140DetailsItensItemControleEstoque::from_json("{\"quantidade_combustivel\":\"0\",\"unidade_combustivel\":\"synthe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_combustivel();if(field.has_value())model.set_quantidade_combustivel(field.value());}
{auto field=model.get_unidade_combustivel();if(field.has_value())model.set_unidade_combustivel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211140DetailsItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211140DetailsItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211140Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211140\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_combustivel\":\"1.0000\",\"unidade_combustivel\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211140Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211140Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211140RequestItensItem::from_json("{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_combustivel\":\"1.0000\",\"unidade_combustivel\":\"UN\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_controle_estoque();if(field.has_value())model.set_controle_estoque(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211140RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211140RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211140RequestItensItemControleEstoque::from_json("{\"quantidade_combustivel\":\"1.0000\",\"unidade_combustivel\":\"UN\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_combustivel();if(field.has_value())model.set_quantidade_combustivel(field.value());}
{auto field=model.get_unidade_combustivel();if(field.has_value())model.set_unidade_combustivel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211140RequestItensItemControleEstoque getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211140RequestItensItemControleEstoque";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211150Details::from_json("{\"itens\":[{\"item\":\"0\",\"valor_credito_ibs\":\"0\",\"valor_credito_cbs\":\"0\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211150Details getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211150Details";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211150DetailsItensItem::from_json("{\"item\":\"0\",\"valor_credito_ibs\":\"0\",\"valor_credito_cbs\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_credito_ibs();if(field.has_value())model.set_valor_credito_ibs(field.value());}
{auto field=model.get_valor_credito_cbs();if(field.has_value())model.set_valor_credito_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211150DetailsItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211150DetailsItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211150Request::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211150\",\"itens\":[{\"item\":1,\"valor_credito_ibs\":0,\"valor_credito_cbs\":\"0.00\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_cod_evento();if(field.has_value())model.set_cod_evento(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nSeqEvento();if(field.has_value())model.set_nSeqEvento(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_informacoes_evento();if(field.has_value())model.set_informacoes_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211150Request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211150Request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::IbsCbs211150RequestItensItem::from_json("{\"item\":1,\"valor_credito_ibs\":0,\"valor_credito_cbs\":\"0.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor_credito_ibs();if(field.has_value())model.set_valor_credito_ibs(field.value());}
{auto field=model.get_valor_credito_cbs();if(field.has_value())model.set_valor_credito_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::IbsCbs211150RequestItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::IbsCbs211150RequestItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112110\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIbsCbsEventRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIbsCbsEventRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePreviewResult::from_json("{\"danfe\":\"https://nfe.webmania.com.br/danfe/00000000-0000-4000-8000-000000000000/\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_danfe();if(field.has_value())model.set_danfe(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfePreviewResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfePreviewResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeTaxCalculationResult::from_json("{\"impostos\":{\"icms\":\"0.00\"},\"aliquotas\":{\"icms\":[]},\"pedido\":{\"total\":\"1.00\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_aliquotas();if(field.has_value())model.set_aliquotas(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeTaxCalculationResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeTaxCalculationResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeTaxCalculationResultImpostos::from_json("{\"icms\":\"0.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_icms_st();if(field.has_value())model.set_icms_st(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_fcp_st();if(field.has_value())model.set_fcp_st(field.value());}
{auto field=model.get_fcp_dest();if(field.has_value())model.set_fcp_dest(field.value());}
{auto field=model.get_fcp_dest_base();if(field.has_value())model.set_fcp_dest_base(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_total_tributacao();if(field.has_value())model.set_total_tributacao(field.value());}
{auto field=model.get_icms_desoneracao();if(field.has_value())model.set_icms_desoneracao(field.value());}
{auto field=model.get_importacao();if(field.has_value())model.set_importacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeTaxCalculationResultImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeTaxCalculationResultImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeTaxCalculationResultAliquotas::from_json("{\"icms\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_icms_diferimento();if(field.has_value())model.set_icms_diferimento(field.value());}
{auto field=model.get_icms_st();if(field.has_value())model.set_icms_st(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeTaxCalculationResultAliquotas getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeTaxCalculationResultAliquotas";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeTaxCalculationResultPedido::from_json("{\"total\":\"1.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_frete();if(field.has_value())model.set_frete(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_despesas_acessorias();if(field.has_value())model.set_despesas_acessorias(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeTaxCalculationResultPedido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeTaxCalculationResultPedido";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueResult::from_json("{\"danfe\":\"https://nfe.webmania.com.br/danfe/00000000-0000-4000-8000-000000000000/\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeIssueResult getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeIssueResult";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeNotification::from_json("{\"uuid\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nfe();if(field.has_value())model.set_nfe(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_recibo();if(field.has_value())model.set_recibo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_epec();if(field.has_value())model.set_epec(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_danfe();if(field.has_value())model.set_danfe(field.value());}
{auto field=model.get_danfe_simples();if(field.has_value())model.set_danfe_simples(field.value());}
{auto field=model.get_danfe_etiqueta();if(field.has_value())model.set_danfe_etiqueta(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_log_cancelamento();if(field.has_value())model.set_log_cancelamento(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_dacce();if(field.has_value())model.set_dacce(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeNotification getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeNotification";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeNotificationLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeNotificationLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeNotificationLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeNotificationLogCancelamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeNotificationLogCancelamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeNotificationLogCancelamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeGetDocumentResponse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"new_provider_state\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeGetDocumentResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeGetDocumentResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeGetDocumentQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeGetDocumentQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeGetDocumentQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeQueryDocumentResponse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"new_provider_state\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeQueryDocumentResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeQueryDocumentResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeListTaxClassesResponse::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_fiscal::NfeListTaxClassesResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_fiscal::NfeListTaxClassesResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeLookupRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:lookup-leading-zero-key getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:lookup-leading-zero-key";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeLookupRequest::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:lookup-no-selector getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:lookup-no-selector";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeLookupRequest::from_json("{\"chave\":1000}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:lookup-numeric-key-not-string getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:lookup-numeric-key-not-string";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeLookupRequest::from_json("{\"ID\":\"customer-001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_id();if(field.has_value())model.set_id(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:lookup-id-array-response getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:lookup-id-array-response";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCorrectionRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"correcao\":\"short\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:correction-short-text getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:correction-short-text";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeCorrectionRequest::from_json("{\"correcao\":\"Correct the delivery address.\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:correction-no-key-or-uuid getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:correction-no-key-or-uuid";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeManifestationRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"evento\":\"210240\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:manifestation-nonperformance-needs-reason getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:manifestation-nonperformance-needs-reason";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeManifestationRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"evento\":\"210240\",\"justificativa\":\"The goods were never delivered.\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:manifestation-nonperformance-with-reason getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:manifestation-nonperformance-with-reason";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventItem::from_json("{\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.00\",\"data_pagamento\":\"2026-10-25\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_pagamento();if(field.has_value())model.set_indicador_pagamento(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_data_pagamento();if(field.has_value())model.set_data_pagamento(field.value());}
{auto field=model.get_cnpj_transacional_pag();if(field.has_value())model.set_cnpj_transacional_pag(field.value());}
{auto field=model.get_uf_pagamento();if(field.has_value())model.set_uf_pagamento(field.value());}
{auto field=model.get_cnpj_instituicao_financeira();if(field.has_value())model.set_cnpj_instituicao_financeira(field.value());}
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_cnpj_beneficiario();if(field.has_value())model.set_cnpj_beneficiario(field.value());}
{auto field=model.get_uf_beneficiario();if(field.has_value())model.set_uf_beneficiario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:econf-zero-decimal-string getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:econf-zero-decimal-string";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventItem::from_json("{\"forma_pagamento\":\"01\",\"valor_pagamento\":0,\"data_pagamento\":\"2026-10-25\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_pagamento();if(field.has_value())model.set_indicador_pagamento(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_data_pagamento();if(field.has_value())model.set_data_pagamento(field.value());}
{auto field=model.get_cnpj_transacional_pag();if(field.has_value())model.set_cnpj_transacional_pag(field.value());}
{auto field=model.get_uf_pagamento();if(field.has_value())model.set_uf_pagamento(field.value());}
{auto field=model.get_cnpj_instituicao_financeira();if(field.has_value())model.set_cnpj_instituicao_financeira(field.value());}
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_cnpj_beneficiario();if(field.has_value())model.set_cnpj_beneficiario(field.value());}
{auto field=model.get_uf_beneficiario();if(field.has_value())model.set_uf_beneficiario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:econf-numeric-wire-amount getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:econf-numeric-wire-amount";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventItem::from_json("{\"forma_pagamento\":\"01\",\"valor_pagamento\":{},\"data_pagamento\":\"2026-10-25\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:econf-invalid-amount getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:econf-invalid-amount";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventItem::from_json("{\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.00\",\"data_pagamento\":\"2026-10-25\",\"uf_pagamento\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:econf-unpaired-company-uf getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:econf-unpaired-company-uf";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"pagamento\":{\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.00\",\"data_pagamento\":\"2026-10-25\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_pagamentos();if(field.has_value())model.set_pagamentos(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:econf-object-single-payment getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:econf-object-single-payment";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfePaymentEventRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"pagamentos\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:econf-empty-payment-list getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:econf-empty-payment-list";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112110\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-effective-payment-minimal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-effective-payment-minimal";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112150\",\"data_previsao_entrega\":\"2026-11-01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-delivery-date-root getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-delivery-date-root";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112150\",\"informacoes_evento\":{\"data_previsao_entrega\":\"2026-11-01\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-delivery-date-legacy-wrapper getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-delivery-date-legacy-wrapper";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112150\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-delivery-missing-date getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-delivery-missing-date";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"999999\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-unknown-event getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-unknown-event";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112120\",\"itens\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-consumption-needs-items getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-consumption-needs-items";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112120\",\"itens\":[{\"item\":1,\"valor_ibs\":\"0.00\",\"valor_cbs\":0,\"controle_estoque\":{\"quantidade\":\"1.2500\",\"unidade\":\"UN\"}}],\"additional_future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-consumption-full-structured-item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-consumption-full-structured-item";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::G031::from_json("{\"defensivos\":[],\"guia_transito\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:agro-mutually-exclusive-groups getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:agro-mutually-exclusive-groups";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequest::from_json("{\"cnae\":null}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_regime_tributario();if(field.has_value())model.set_regime_tributario(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_unidade_empresa();if(field.has_value())model.set_unidade_empresa(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_conta_bancaria_banco();if(field.has_value())model.set_conta_bancaria_banco(field.value());}
{auto field=model.get_conta_bancaria_agencia();if(field.has_value())model.set_conta_bancaria_agencia(field.value());}
{auto field=model.get_conta_bancaria_numero();if(field.has_value())model.set_conta_bancaria_numero(field.value());}
{auto field=model.get_conta_bancaria_digito();if(field.has_value())model.set_conta_bancaria_digito(field.value());}
{auto field=model.get_contabilidade();if(field.has_value())model.set_contabilidade(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_logomarca();if(field.has_value())model.set_logomarca(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nfe_serie();if(field.has_value())model.set_nfe_serie(field.value());}
{auto field=model.get_nfe_numero();if(field.has_value())model.set_nfe_numero(field.value());}
{auto field=model.get_nfe_numero_dev();if(field.has_value())model.set_nfe_numero_dev(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_cnae_issqn();if(field.has_value())model.set_cnae_issqn(field.value());}
{auto field=model.get_nfce_serie();if(field.has_value())model.set_nfce_serie(field.value());}
{auto field=model.get_nfce_numero();if(field.has_value())model.set_nfce_numero(field.value());}
{auto field=model.get_nfce_id_csc();if(field.has_value())model.set_nfce_id_csc(field.value());}
{auto field=model.get_nfce_codigo_csc();if(field.has_value())model.set_nfce_codigo_csc(field.value());}
{auto field=model.get_nfce_numero_dev();if(field.has_value())model.set_nfce_numero_dev(field.value());}
{auto field=model.get_nfce_id_csc_dev();if(field.has_value())model.set_nfce_id_csc_dev(field.value());}
{auto field=model.get_nfce_codigo_csc_dev();if(field.has_value())model.set_nfce_codigo_csc_dev(field.value());}
{auto field=model.get_cte_serie();if(field.has_value())model.set_cte_serie(field.value());}
{auto field=model.get_cte_number();if(field.has_value())model.set_cte_number(field.value());}
{auto field=model.get_cte_number_dev();if(field.has_value())model.set_cte_number_dev(field.value());}
{auto field=model.get_cte_os_serie();if(field.has_value())model.set_cte_os_serie(field.value());}
{auto field=model.get_cte_os_number();if(field.has_value())model.set_cte_os_number(field.value());}
{auto field=model.get_cte_os_number_dev();if(field.has_value())model.set_cte_os_number_dev(field.value());}
{auto field=model.get_taf_cte_os();if(field.has_value())model.set_taf_cte_os(field.value());}
{auto field=model.get_registro_estadual_cte_os();if(field.has_value())model.set_registro_estadual_cte_os(field.value());}
{auto field=model.get_dce_serie();if(field.has_value())model.set_dce_serie(field.value());}
{auto field=model.get_dce_numero();if(field.has_value())model.set_dce_numero(field.value());}
{auto field=model.get_dce_numero_dev();if(field.has_value())model.set_dce_numero_dev(field.value());}
{auto field=model.get_tipo_emissor_dce();if(field.has_value())model.set_tipo_emissor_dce(field.value());}
{auto field=model.get_numero_site_autorizador();if(field.has_value())model.set_numero_site_autorizador(field.value());}
{auto field=model.get_site_marketplace();if(field.has_value())model.set_site_marketplace(field.value());}
{auto field=model.get_nfse_rps_serie();if(field.has_value())model.set_nfse_rps_serie(field.value());}
{auto field=model.get_nfse_rps_numero();if(field.has_value())model.set_nfse_rps_numero(field.value());}
{auto field=model.get_cnae();if(field.has_value())model.set_cnae(field.value());}
{auto field=model.get_nfse_login();if(field.has_value())model.set_nfse_login(field.value());}
{auto field=model.get_nfse_password();if(field.has_value())model.set_nfse_password(field.value());}
{auto field=model.get_nfse_token();if(field.has_value())model.set_nfse_token(field.value());}
{auto field=model.get_regime_apuracao_sn();if(field.has_value())model.set_regime_apuracao_sn(field.value());}
{auto field=model.get_regime_especial_nacional();if(field.has_value())model.set_regime_especial_nacional(field.value());}
{auto field=model.get_regime_especial_municipal();if(field.has_value())model.set_regime_especial_municipal(field.value());}
{auto field=model.get_nfse_lote_rps_numero();if(field.has_value())model.set_nfse_lote_rps_numero(field.value());}
{auto field=model.get_nfse_rps_numero_dev();if(field.has_value())model.set_nfse_rps_numero_dev(field.value());}
{auto field=model.get_certificado();if(field.has_value())model.set_certificado(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_partilha_icms_contribuinte();if(field.has_value())model.set_partilha_icms_contribuinte(field.value());}
{auto field=model.get_partilha_icms_isento();if(field.has_value())model.set_partilha_icms_isento(field.value());}
{auto field=model.get_orientacao_danfe();if(field.has_value())model.set_orientacao_danfe(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_icms_ref_sp();if(field.has_value())model.set_icms_ref_sp(field.value());}
{auto field=model.get_refeicoes_sp();if(field.has_value())model.set_refeicoes_sp(field.value());}
{auto field=model.get_icms_ref_df();if(field.has_value())model.set_icms_ref_df(field.value());}
{auto field=model.get_exclusao_icms_pis_cofins();if(field.has_value())model.set_exclusao_icms_pis_cofins(field.value());}
{auto field=model.get_exclusao_difal_pis_cofins();if(field.has_value())model.set_exclusao_difal_pis_cofins(field.value());}
{auto field=model.get_deduzir_desconto_ipi();if(field.has_value())model.set_deduzir_desconto_ipi(field.value());}
{auto field=model.get_base_calculo_ipi_sem_frete();if(field.has_value())model.set_base_calculo_ipi_sem_frete(field.value());}
{auto field=model.get_email_automatico_nfse();if(field.has_value())model.set_email_automatico_nfse(field.value());}
{auto field=model.get_ativar_epec();if(field.has_value())model.set_ativar_epec(field.value());}
{auto field=model.get_ocultar_total_etiqueta();if(field.has_value())model.set_ocultar_total_etiqueta(field.value());}
{auto field=model.get_validar_setup_completo();if(field.has_value())model.set_validar_setup_completo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:company-optional-cnae-can-clear getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:company-optional-cnae-can-clear";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequest::from_json("{\"certificado\":\"Zml4dHVyZQ==\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:company-certificate-password-pair getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:company-certificate-password-pair";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequest::from_json("{\"informacoes_fisco\":\"Controlled source-model case\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_regime_tributario();if(field.has_value())model.set_regime_tributario(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_unidade_empresa();if(field.has_value())model.set_unidade_empresa(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_conta_bancaria_banco();if(field.has_value())model.set_conta_bancaria_banco(field.value());}
{auto field=model.get_conta_bancaria_agencia();if(field.has_value())model.set_conta_bancaria_agencia(field.value());}
{auto field=model.get_conta_bancaria_numero();if(field.has_value())model.set_conta_bancaria_numero(field.value());}
{auto field=model.get_conta_bancaria_digito();if(field.has_value())model.set_conta_bancaria_digito(field.value());}
{auto field=model.get_contabilidade();if(field.has_value())model.set_contabilidade(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_logomarca();if(field.has_value())model.set_logomarca(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nfe_serie();if(field.has_value())model.set_nfe_serie(field.value());}
{auto field=model.get_nfe_numero();if(field.has_value())model.set_nfe_numero(field.value());}
{auto field=model.get_nfe_numero_dev();if(field.has_value())model.set_nfe_numero_dev(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_cnae_issqn();if(field.has_value())model.set_cnae_issqn(field.value());}
{auto field=model.get_nfce_serie();if(field.has_value())model.set_nfce_serie(field.value());}
{auto field=model.get_nfce_numero();if(field.has_value())model.set_nfce_numero(field.value());}
{auto field=model.get_nfce_id_csc();if(field.has_value())model.set_nfce_id_csc(field.value());}
{auto field=model.get_nfce_codigo_csc();if(field.has_value())model.set_nfce_codigo_csc(field.value());}
{auto field=model.get_nfce_numero_dev();if(field.has_value())model.set_nfce_numero_dev(field.value());}
{auto field=model.get_nfce_id_csc_dev();if(field.has_value())model.set_nfce_id_csc_dev(field.value());}
{auto field=model.get_nfce_codigo_csc_dev();if(field.has_value())model.set_nfce_codigo_csc_dev(field.value());}
{auto field=model.get_cte_serie();if(field.has_value())model.set_cte_serie(field.value());}
{auto field=model.get_cte_number();if(field.has_value())model.set_cte_number(field.value());}
{auto field=model.get_cte_number_dev();if(field.has_value())model.set_cte_number_dev(field.value());}
{auto field=model.get_cte_os_serie();if(field.has_value())model.set_cte_os_serie(field.value());}
{auto field=model.get_cte_os_number();if(field.has_value())model.set_cte_os_number(field.value());}
{auto field=model.get_cte_os_number_dev();if(field.has_value())model.set_cte_os_number_dev(field.value());}
{auto field=model.get_taf_cte_os();if(field.has_value())model.set_taf_cte_os(field.value());}
{auto field=model.get_registro_estadual_cte_os();if(field.has_value())model.set_registro_estadual_cte_os(field.value());}
{auto field=model.get_dce_serie();if(field.has_value())model.set_dce_serie(field.value());}
{auto field=model.get_dce_numero();if(field.has_value())model.set_dce_numero(field.value());}
{auto field=model.get_dce_numero_dev();if(field.has_value())model.set_dce_numero_dev(field.value());}
{auto field=model.get_tipo_emissor_dce();if(field.has_value())model.set_tipo_emissor_dce(field.value());}
{auto field=model.get_numero_site_autorizador();if(field.has_value())model.set_numero_site_autorizador(field.value());}
{auto field=model.get_site_marketplace();if(field.has_value())model.set_site_marketplace(field.value());}
{auto field=model.get_nfse_rps_serie();if(field.has_value())model.set_nfse_rps_serie(field.value());}
{auto field=model.get_nfse_rps_numero();if(field.has_value())model.set_nfse_rps_numero(field.value());}
{auto field=model.get_cnae();if(field.has_value())model.set_cnae(field.value());}
{auto field=model.get_nfse_login();if(field.has_value())model.set_nfse_login(field.value());}
{auto field=model.get_nfse_password();if(field.has_value())model.set_nfse_password(field.value());}
{auto field=model.get_nfse_token();if(field.has_value())model.set_nfse_token(field.value());}
{auto field=model.get_regime_apuracao_sn();if(field.has_value())model.set_regime_apuracao_sn(field.value());}
{auto field=model.get_regime_especial_nacional();if(field.has_value())model.set_regime_especial_nacional(field.value());}
{auto field=model.get_regime_especial_municipal();if(field.has_value())model.set_regime_especial_municipal(field.value());}
{auto field=model.get_nfse_lote_rps_numero();if(field.has_value())model.set_nfse_lote_rps_numero(field.value());}
{auto field=model.get_nfse_rps_numero_dev();if(field.has_value())model.set_nfse_rps_numero_dev(field.value());}
{auto field=model.get_certificado();if(field.has_value())model.set_certificado(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_partilha_icms_contribuinte();if(field.has_value())model.set_partilha_icms_contribuinte(field.value());}
{auto field=model.get_partilha_icms_isento();if(field.has_value())model.set_partilha_icms_isento(field.value());}
{auto field=model.get_orientacao_danfe();if(field.has_value())model.set_orientacao_danfe(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_icms_ref_sp();if(field.has_value())model.set_icms_ref_sp(field.value());}
{auto field=model.get_refeicoes_sp();if(field.has_value())model.set_refeicoes_sp(field.value());}
{auto field=model.get_icms_ref_df();if(field.has_value())model.set_icms_ref_df(field.value());}
{auto field=model.get_exclusao_icms_pis_cofins();if(field.has_value())model.set_exclusao_icms_pis_cofins(field.value());}
{auto field=model.get_exclusao_difal_pis_cofins();if(field.has_value())model.set_exclusao_difal_pis_cofins(field.value());}
{auto field=model.get_deduzir_desconto_ipi();if(field.has_value())model.set_deduzir_desconto_ipi(field.value());}
{auto field=model.get_base_calculo_ipi_sem_frete();if(field.has_value())model.set_base_calculo_ipi_sem_frete(field.value());}
{auto field=model.get_email_automatico_nfse();if(field.has_value())model.set_email_automatico_nfse(field.value());}
{auto field=model.get_ativar_epec();if(field.has_value())model.set_ativar_epec(field.value());}
{auto field=model.get_ocultar_total_etiqueta();if(field.has_value())model.set_ocultar_total_etiqueta(field.value());}
{auto field=model.get_validar_setup_completo();if(field.has_value())model.set_validar_setup_completo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:company-absent-identities-not-forced getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:company-absent-identities-not-forced";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalCompanyUpdateRequest::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:company-empty-update getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:company-empty-update";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"xml\",\"status\":\"emitidas\",\"data_inicio\":\"2026-10-01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:report-date-pair getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:report-date-pair";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"csv\",\"numero_inicio\":\"1\",\"numero_final\":\"5\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:report-csv-date-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:report-csv-date-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"danfe\",\"numero_inicio\":\"1\",\"numero_final\":\"5\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_inicio();if(field.has_value())model.set_data_inicio(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_numero_inicio();if(field.has_value())model.set_numero_inicio(field.value());}
{auto field=model.get_numero_final();if(field.has_value())model.set_numero_final(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_separar_pdf();if(field.has_value())model.set_separar_pdf(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:report-number-filter getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:report-number-filter";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"ciot\",\"relatorio\":\"csv\",\"data_inicio\":\"2026-10-01\",\"data_final\":\"2026-10-25\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:standalone-ciot-report-excluded getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:standalone-ciot-report-excluded";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomCommunicationTaxClass::from_json("{\"tipo\":\"nfcom\",\"descricao\":\"Controlled communication class\",\"codigo_classificacao\":\"100101\",\"icms\":{\"situacao_tributaria\":\"40\"},\"pis\":{\"situacao_tributaria\":\"06\"},\"cofins\":{\"situacao_tributaria\":\"06\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_referencia();if(field.has_value())model.set_referencia(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_codigo_classificacao();if(field.has_value())model.set_codigo_classificacao(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_fust();if(field.has_value())model.set_fust(field.value());}
{auto field=model.get_funttel();if(field.has_value())model.set_funttel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:nfcom-class-minimal-valid getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:nfcom-class-minimal-valid";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomClassIcms::from_json("{\"situacao_tributaria\":\"20\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:nfcom-cst20-requires-rate-and-reduction getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:nfcom-cst20-requires-rate-and-reduction";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfcomClassPisCofins::from_json("{\"situacao_tributaria\":\"01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:nfcom-taxable-pis-needs-rate getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:nfcom-taxable-pis-needs-rate";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueResult::from_json("{\"danfe\":\"https://nfe.webmania.com.br/danfe/00000000-0000-4000-8000-000000000000/\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:preview-not-authorization getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:preview-not-authorization";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeDocument::from_json("{\"danfe\":\"https://nfe.webmania.com.br/danfe/00000000-0000-4000-8000-000000000000/\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:preview-is-not-document-status getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:preview-is-not-document-status";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueResult::from_json("{\"impostos\":{\"icms\":\"0.00\"},\"aliquotas\":{\"icms\":[]},\"pedido\":{\"total\":\"1.00\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:calculation-does-not-need-document-uuid getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:calculation-does-not-need-document-uuid";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfe55Customer::from_json("{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_suframa();if(field.has_value())model.set_suframa(field.value());}
{auto field=model.get_substituto_tributario();if(field.has_value())model.set_substituto_tributario(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_contribuinte();if(field.has_value())model.set_contribuinte(field.value());}
{auto field=model.get_microcervejaria();if(field.has_value())model.set_microcervejaria(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_cod_pais();if(field.has_value())model.set_cod_pais(field.value());}
{auto field=model.get_nome_pais();if(field.has_value())model.set_nome_pais(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:masked-customer-fields getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:masked-customer-fields";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"dacte\",\"numero_inicio\":\"1\",\"numero_final\":\"5\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:government-report-format-cannot-use-nfe-dacte getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:government-report-format-cannot-use-nfe-dacte";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeReturnRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"natureza_operacao\":\"Synthetic return\",\"ambiente\":2,\"codigo_cfop\":\"5202\",\"classe_imposto\":\"REF1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:return-cfop-and-class-are-exclusive getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:return-cfop-and-class-are-exclusive";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeReturnRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"natureza_operacao\":\"Synthetic return\",\"ambiente\":2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:return-needs-tax-selection getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:return-needs-tax-selection";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"112130\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\",\"valor_ibs_estorno\":\"0.00\",\"valor_cbs_estorno\":0}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-112130 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-112130";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"112130\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-112130 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-112130";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"112140\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_nao_fornecida\":\"1.0000\",\"unidade_nao_fornecida\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-112140 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-112140";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"112140\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-112140 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-112140";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211110\",\"itens\":[{\"item\":1,\"base_calculo\":0,\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0,\"aliquota_cbs\":\"0.0000\",\"valor_ibs\":\"0.00\",\"valor_cbs\":0}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-211110 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-211110";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211110\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-211110 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-211110";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211124\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_perecimento\":\"1.0000\",\"unidade_perecimento\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-211124 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-211124";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211124\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-211124 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-211124";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211128\",\"indicador_aceitacao\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-211128 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-211128";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211128\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-211128 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-211128";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211130\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_imobilizada\":\"1.0000\",\"unidade_imobilizada\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-211130 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-211130";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211130\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-211130 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-211130";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211140\",\"itens\":[{\"item\":1,\"valor_ibs\":0,\"valor_cbs\":\"0.00\",\"controle_estoque\":{\"quantidade_combustivel\":\"1.0000\",\"unidade_combustivel\":\"UN\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-211140 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-211140";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211140\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-211140 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-211140";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211150\",\"itens\":[{\"item\":1,\"valor_credito_ibs\":0,\"valor_credito_cbs\":\"0.00\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-complete-variant-211150 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:ibs-complete-variant-211150";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":\"2\",\"cod_evento\":\"211150\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:ibs-incomplete-variant-211150 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:ibs-incomplete-variant-211150";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfe55IssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:full-structured-nfe-request getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:full-structured-nfe-request";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfce65IssueRequest::from_json("{\"modelo\":2,\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:full-structured-nfce-without-recipient getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:full-structured-nfce-without-recipient";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfe55IssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:nfe-requires-recipient getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:nfe-requires-recipient";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":5,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:credit-requires-credit-type getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:credit-requires-credit-type";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeIssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"arbitrary\":\"not a product\"}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1:product-cannot-be-generic-map getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api1:product-cannot-be-generic-map";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::Nfe55IssueRequest::from_json("{\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}},\"future_flag\":false}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_tipo_credito();if(field.has_value())model.set_tipo_credito(field.value());}
{auto field=model.get_tipo_debito();if(field.has_value())model.set_tipo_debito(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_exportacao();if(field.has_value())model.set_exportacao(field.value());}
{auto field=model.get_agropecuario();if(field.has_value())model.set_agropecuario(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_inscricao_suframa();if(field.has_value())model.set_inscricao_suframa(field.value());}
{auto field=model.get_codigo_indicador_operacao();if(field.has_value())model.set_codigo_indicador_operacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_data_entrada_saida();if(field.has_value())model.set_data_entrada_saida(field.value());}
{auto field=model.get_data_previsao_entrega();if(field.has_value())model.set_data_previsao_entrega(field.value());}
{auto field=model.get_data_servico();if(field.has_value())model.set_data_servico(field.value());}
{auto field=model.get_nfe_referenciada();if(field.has_value())model.set_nfe_referenciada(field.value());}
{auto field=model.get_cte_referenciada();if(field.has_value())model.set_cte_referenciada(field.value());}
{auto field=model.get_ecf_referenciada();if(field.has_value())model.set_ecf_referenciada(field.value());}
{auto field=model.get_nf_rural_referenciada();if(field.has_value())model.set_nf_rural_referenciada(field.value());}
{auto field=model.get_calculo_impostos();if(field.has_value())model.set_calculo_impostos(field.value());}
{auto field=model.get_previa_danfe();if(field.has_value())model.set_previa_danfe(field.value());}
{auto field=model.get_assincrono();if(field.has_value())model.set_assincrono(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:unknown-nested-product-field-preserved getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:unknown-nested-product-field-preserved";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_fiscal::NfeDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"new_provider_state\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nfe();if(field.has_value())model.set_nfe(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_recibo();if(field.has_value())model.set_recibo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_epec();if(field.has_value())model.set_epec(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_danfe();if(field.has_value())model.set_danfe(field.value());}
{auto field=model.get_danfe_simples();if(field.has_value())model.set_danfe_simples(field.value());}
{auto field=model.get_danfe_etiqueta();if(field.has_value())model.set_danfe_etiqueta(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_log_cancelamento();if(field.has_value())model.set_log_cancelamento(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_dacce();if(field.has_value())model.set_dacce(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1:unknown-document-state-preserved getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1:unknown-document-state-preserved";return -1;}++checked;}
return checked;}
