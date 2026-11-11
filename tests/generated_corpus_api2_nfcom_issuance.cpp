#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_nfcom_issuance(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseServiceCode::from_json("{\"codigo\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_codigo_tributacao();if(field.has_value())model.set_codigo_tributacao(field.value());}
{auto field=model.get_aliquota_sugerida();if(field.has_value())model.set_aliquota_sugerida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseServiceCode getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseServiceCode";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseServiceCodeAliquotaSugerida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseServiceCodeAliquotaSugerida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseServiceCodeAliquotaSugerida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[],\"autenticacao\":[],\"emissao\":[],\"funcoes\":[],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_versao();if(field.has_value())model.set_versao(field.value());}
{auto field=model.get_ambientes();if(field.has_value())model.set_ambientes(field.value());}
{auto field=model.get_autenticacao();if(field.has_value())model.set_autenticacao(field.value());}
{auto field=model.get_emissao();if(field.has_value())model.set_emissao(field.value());}
{auto field=model.get_funcoes();if(field.has_value())model.set_funcoes(field.value());}
{auto field=model.get_pdf_nfse();if(field.has_value())model.set_pdf_nfse(field.value());}
{auto field=model.get_pdf_sincrono();if(field.has_value())model.set_pdf_sincrono(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_parametros_disponiveis();if(field.has_value())model.set_parametros_disponiveis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseProviderStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseProviderStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomServiceStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomServiceStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_numero_lote();if(field.has_value())model.set_numero_lote(field.value());}
{auto field=model.get_serie_lote();if(field.has_value())model.set_serie_lote(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_pdf_nfse();if(field.has_value())model.set_pdf_nfse(field.value());}
{auto field=model.get_pdf_nfse_status();if(field.has_value())model.set_pdf_nfse_status(field.value());}
{auto field=model.get_pdf_rps();if(field.has_value())model.set_pdf_rps(field.value());}
{auto field=model.get_atualizado_em();if(field.has_value())model.set_atualizado_em(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_quantidade_rps();if(field.has_value())model.set_quantidade_rps(field.value());}
{auto field=model.get_nfse_substituida();if(field.has_value())model.set_nfse_substituida(field.value());}
{auto field=model.get_info_nfse();if(field.has_value())model.set_info_nfse(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseFiscalResponseNfseSubstituida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponseNfseSubstituida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponseNfseSubstituida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseFiscalResponseInfoNfseItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf_nfse();if(field.has_value())model.set_pdf_nfse(field.value());}
{auto field=model.get_pdf_nfse_status();if(field.has_value())model.set_pdf_nfse_status(field.value());}
{auto field=model.get_pdf_rps();if(field.has_value())model.set_pdf_rps(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponseInfoNfseItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponseInfoNfseItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomPaymentEvent::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_nfcom();if(field.has_value())model.set_protocolo_nfcom(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomPaymentEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomPaymentEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomPaymentEventPagamentoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nPag();if(field.has_value())model.set_nPag(field.value());}
{auto field=model.get_idTransacao();if(field.has_value())model.set_idTransacao(field.value());}
{auto field=model.get_tpMeioPgto();if(field.has_value())model.set_tpMeioPgto(field.value());}
{auto field=model.get_CNPJReceb();if(field.has_value())model.set_CNPJReceb(field.value());}
{auto field=model.get_CNPJBasePSP();if(field.has_value())model.set_CNPJBasePSP(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomPaymentEventPagamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomPaymentEventPagamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"nfcom\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_nfcom();if(field.has_value())model.set_nfcom(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_contingencia();if(field.has_value())model.set_contingencia(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_danfecom();if(field.has_value())model.set_danfecom(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_data_autorizacao();if(field.has_value())model.set_data_autorizacao(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
{auto field=model.get_consulta_eventos_pagamento();if(field.has_value())model.set_consulta_eventos_pagamento(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomPaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomPaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomPaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfseManifestationRequest::from_json("{\"ambiente\":1,\"chave\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfseManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfseManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::CteFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_cte();if(field.has_value())model.set_cte(field.value());}
{auto field=model.get_epec();if(field.has_value())model.set_epec(field.value());}
{auto field=model.get_dacte();if(field.has_value())model.set_dacte(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
{auto field=model.get_consulta_eventos_pagamento();if(field.has_value())model.set_consulta_eventos_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::CteFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::CteFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::CteFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::CteFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::CteFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::CteFiscalResponseEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::CteFiscalResponseEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::CteFiscalResponseEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::MdfeFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_damdfe();if(field.has_value())model.set_damdfe(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::MdfeFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::MdfeFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::MdfeFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::MdfeFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::MdfeFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::DceFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_dace();if(field.has_value())model.set_dace(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::DceFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::DceFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::DceFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::DceFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::DceFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::FiscalEventResponse::from_json("{\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_dacce();if(field.has_value())model.set_dacce(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::FiscalEventResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::FiscalEventResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::FiscalEventResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::FiscalEventResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::FiscalEventResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::CtePaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::CtePaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::CtePaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::CtePaymentEventsEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::CtePaymentEventsEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::CtePaymentEventsEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_assinante();if(field.has_value())model.set_assinante(field.value());}
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_cofaturamento();if(field.has_value())model.set_cofaturamento(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_faturamento_centralizado();if(field.has_value())model.set_faturamento_centralizado(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pgto_vinc();if(field.has_value())model.set_pgto_vinc(field.value());}
{auto field=model.get_presenca_comprador();if(field.has_value())model.set_presenca_comprador(field.value());}
{auto field=model.get_previa_danfecom();if(field.has_value())model.set_previa_danfecom(field.value());}
{auto field=model.get_processo_emissao();if(field.has_value())model.set_processo_emissao(field.value());}
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_tipo_faturamento();if(field.has_value())model.set_tipo_faturamento(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadAssinanteVariant0::from_json("{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_contrato();if(field.has_value())model.set_contrato(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_tipo_servico();if(field.has_value())model.set_tipo_servico(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadAssinanteVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadAssinanteVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadAssinanteVariant0ContratoVariant0::from_json("{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_fim();if(field.has_value())model.set_data_fim(field.value());}
{auto field=model.get_data_inicio();if(field.has_value())model.set_data_inicio(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadAssinanteVariant0ContratoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadAssinanteVariant0ContratoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadCliente::from_json("{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_exterior();if(field.has_value())model.set_exterior(field.value());}
{auto field=model.get_indicador_ie();if(field.has_value())model.set_indicador_ie(field.value());}
{auto field=model.get_inscricao_estadual();if(field.has_value())model.set_inscricao_estadual(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_inscricao_municipal();if(field.has_value())model.set_inscricao_municipal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadCliente getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadCliente";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadClienteEmail::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadClienteEmail getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadClienteEmail";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadClienteEndereco::from_json("{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadClienteEndereco getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadClienteEndereco";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadCofaturamentoVariant0::from_json("{\"chave_nfcom_local\":\"123456ab12cd34ef5600000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_nfcom_local();if(field.has_value())model.set_chave_nfcom_local(field.value());}
{auto field=model.get_nf_referenciada();if(field.has_value())model.set_nf_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadCofaturamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadCofaturamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadCofaturamentoVariant0NfReferenciadaVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_competencia();if(field.has_value())model.set_competencia(field.value());}
{auto field=model.get_hash115();if(field.has_value())model.set_hash115(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadCofaturamentoVariant0NfReferenciadaVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadCofaturamentoVariant0NfReferenciadaVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadFaturaVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_barras_fatura();if(field.has_value())model.set_codigo_barras_fatura(field.value());}
{auto field=model.get_competencia_fatura();if(field.has_value())model.set_competencia_fatura(field.value());}
{auto field=model.get_data_periodo_final();if(field.has_value())model.set_data_periodo_final(field.value());}
{auto field=model.get_data_periodo_inicial();if(field.has_value())model.set_data_periodo_inicial(field.value());}
{auto field=model.get_data_vencimento();if(field.has_value())model.set_data_vencimento(field.value());}
{auto field=model.get_numero_debito_automatico();if(field.has_value())model.set_numero_debito_automatico(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadFaturaVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadFaturaVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadFaturamentoCentralizadoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_uf();if(field.has_value())model.set_codigo_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadFaturamentoCentralizadoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadFaturamentoCentralizadoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
{auto field=model.get_indicador_doacao();if(field.has_value())model.set_indicador_doacao(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0CompraGovernamentalVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_documentos_referenciados();if(field.has_value())model.set_documentos_referenciados(field.value());}
{auto field=model.get_ente();if(field.has_value())model.set_ente(field.value());}
{auto field=model.get_referencias_dfe();if(field.has_value())model.set_referencias_dfe(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0CompraGovernamentalVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0CompraGovernamentalVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0CreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0CreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0CreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0EstornoCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0EstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0EstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0Cbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0Cbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0Cbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0IbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0IbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0IbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0IbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0IbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadImpostosVariant0IbsCbsVariant0IbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroup::from_json("{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_codigo_classificacao();if(field.has_value())model.set_codigo_classificacao(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_total();if(field.has_value())model.set_indicador_total(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
{auto field=model.get_valor_desconto();if(field.has_value())model.set_valor_desconto(field.value());}
{auto field=model.get_outras_despesas();if(field.has_value())model.set_outras_despesas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroup getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroup";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_classificacao();if(field.has_value())model.set_codigo_classificacao(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_funttel();if(field.has_value())model.set_funttel(field.value());}
{auto field=model.get_fust();if(field.has_value())model.set_fust(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosCofinsVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_base_calculo();if(field.has_value())model.set_valor_base_calculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosCofinsVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosCofinsVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosFunttelVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_base_calculo();if(field.has_value())model.set_valor_base_calculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosFunttelVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosFunttelVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosFustVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_base_calculo();if(field.has_value())model.set_valor_base_calculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosFustVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosFustVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
{auto field=model.get_indicador_doacao();if(field.has_value())model.set_indicador_doacao(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0CompraGovernamentalVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_documentos_referenciados();if(field.has_value())model.set_documentos_referenciados(field.value());}
{auto field=model.get_ente();if(field.has_value())model.set_ente(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_referencias_dfe();if(field.has_value())model.set_referencias_dfe(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0CompraGovernamentalVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0CompraGovernamentalVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0CreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0CreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0CreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0EstornoCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0EstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0EstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0Cbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0Cbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0Cbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0IbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0IbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0IbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0IbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0IbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIbsCbsVariant0IbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosIcmsVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_icms();if(field.has_value())model.set_aliquota_icms(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor_base_calculo();if(field.has_value())model.set_valor_base_calculo(field.value());}
{auto field=model.get_valor_icms();if(field.has_value())model.set_valor_icms(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIcmsVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosIcmsVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroupImpostosPisVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_base_calculo();if(field.has_value())model.set_valor_base_calculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosPisVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomItemGroupImpostosPisVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadPgtoVincVariant0::from_json("{\"pagamentos\":[{\"n_pag\":1,\"id_transacao\":\"SYNTHETIC\",\"tp_meio_pgto\":\"01\",\"cnpj_receb\":\"ab12cd34ef5600\",\"cnpj_base_psp\":\"ab12cd34\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pagamentos();if(field.has_value())model.set_pagamentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadPgtoVincVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadPgtoVincVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadPgtoVincVariant0PagamentosItem::from_json("{\"n_pag\":1,\"id_transacao\":\"SYNTHETIC\",\"tp_meio_pgto\":\"01\",\"cnpj_receb\":\"ab12cd34ef5600\",\"cnpj_base_psp\":\"ab12cd34\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_base_psp();if(field.has_value())model.set_cnpj_base_psp(field.value());}
{auto field=model.get_cnpj_receb();if(field.has_value())model.set_cnpj_receb(field.value());}
{auto field=model.get_id_transacao();if(field.has_value())model.set_id_transacao(field.value());}
{auto field=model.get_n_pag();if(field.has_value())model.set_n_pag(field.value());}
{auto field=model.get_tp_meio_pgto();if(field.has_value())model.set_tp_meio_pgto(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadPgtoVincVariant0PagamentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadPgtoVincVariant0PagamentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadSubstituicaoVariant0::from_json("{\"chave_nfcom_substituida\":\"123456ab12cd34ef5600000000000000000000000000\",\"motivo\":\"01\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_nfcom_substituida();if(field.has_value())model.set_chave_nfcom_substituida(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_nf_referenciada();if(field.has_value())model.set_nf_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadSubstituicaoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadSubstituicaoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayloadSubstituicaoVariant0NfReferenciadaVariant0::from_json("{\"cnpj\":\"00000000000000\",\"modelo\":\"21\",\"serie\":\"001\",\"numero\":1,\"competencia\":\"202601\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_competencia();if(field.has_value())model.set_competencia(field.value());}
{auto field=model.get_hash115();if(field.has_value())model.set_hash115(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadSubstituicaoVariant0NfReferenciadaVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterIssueNfcomPayloadSubstituicaoVariant0NfReferenciadaVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterCancelNfcomPayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::EmitterCancelNfcomPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::EmitterCancelNfcomPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomDocumentedGroup1906::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup1906 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup1906";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomDocumentedGroup1953::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup1953 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup1953";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomDocumentedGroup2114::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_substituicao_chave_nfcom_substituida();if(field.has_value())model.set_substituicao_chave_nfcom_substituida(field.value());}
{auto field=model.get_substituicao_motivo();if(field.has_value())model.set_substituicao_motivo(field.value());}
{auto field=model.get_substituicao_nf_referenciada();if(field.has_value())model.set_substituicao_nf_referenciada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup2114 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup2114";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomDocumentedGroup2382::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup2382 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfcom_issuance::NfcomDocumentedGroup2382";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroup::from_json("{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_codigo_classificacao();if(field.has_value())model.set_codigo_classificacao(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_total();if(field.has_value())model.set_indicador_total(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
{auto field=model.get_valor_desconto();if(field.has_value())model.set_valor_desconto(field.value());}
{auto field=model.get_outras_despesas();if(field.has_value())model.set_outras_despesas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-012 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-012";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroup::from_json("{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":false,\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-013 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-013";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroup::from_json("{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"invalid-tax-class\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-014 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-014";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::NfcomItemGroup::from_json("{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-015 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-015";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterCancelNfcomPayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-nfcom-lower getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-nfcom-lower";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterCancelNfcomPayload::from_json("{\"chave\":\"123456AB12CD34EF5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-nfcom-upper getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-nfcom-upper";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterCancelNfcomPayload::from_json("{\"chave\":\"123456ab#2cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-nfcom-bad-symbol getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-nfcom-bad-symbol";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterCancelNfcomPayload::from_json("{\"chave\":\"123456ab12cd34ef560000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-nfcom-short getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-nfcom-short";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_assinante();if(field.has_value())model.set_assinante(field.value());}
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_cofaturamento();if(field.has_value())model.set_cofaturamento(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_faturamento_centralizado();if(field.has_value())model.set_faturamento_centralizado(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pgto_vinc();if(field.has_value())model.set_pgto_vinc(field.value());}
{auto field=model.get_presenca_comprador();if(field.has_value())model.set_presenca_comprador(field.value());}
{auto field=model.get_previa_danfecom();if(field.has_value())model.set_previa_danfecom(field.value());}
{auto field=model.get_processo_emissao();if(field.has_value())model.set_processo_emissao(field.value());}
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_tipo_faturamento();if(field.has_value())model.set_tipo_faturamento(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-normal-omits-optional-substitution-and-cobilling getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-nfcom-normal-omits-optional-substitution-and-cobilling";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"substituicao\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-substitution-present-empty-invalid getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfcom-substitution-present-empty-invalid";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"cofaturamento\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-cobilling-present-empty-invalid getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfcom-cobilling-present-empty-invalid";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":3,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"substituicao\":{\"chave_nfcom_substituida\":\"123456ab12cd34ef5600000000000000000000000000\",\"motivo\":\"01\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_assinante();if(field.has_value())model.set_assinante(field.value());}
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_cofaturamento();if(field.has_value())model.set_cofaturamento(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_faturamento_centralizado();if(field.has_value())model.set_faturamento_centralizado(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pgto_vinc();if(field.has_value())model.set_pgto_vinc(field.value());}
{auto field=model.get_presenca_comprador();if(field.has_value())model.set_presenca_comprador(field.value());}
{auto field=model.get_previa_danfecom();if(field.has_value())model.set_previa_danfecom(field.value());}
{auto field=model.get_processo_emissao();if(field.has_value())model.set_processo_emissao(field.value());}
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_tipo_faturamento();if(field.has_value())model.set_tipo_faturamento(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-substitution-key-does-not-require-cobilling getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-nfcom-substitution-key-does-not-require-cobilling";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":3,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"substituicao\":{\"chave_nfcom_substituida\":\"123456ab12cd34ef5600000000000000000000000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-substitution-requires-reason-when-present getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfcom-substitution-requires-reason-when-present";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":3,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"substituicao\":{\"motivo\":\"01\",\"nf_referenciada\":{\"cnpj\":\"00000000000000\",\"modelo\":\"21\",\"serie\":\"001\",\"numero\":1,\"competencia\":\"202601\"}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_assinante();if(field.has_value())model.set_assinante(field.value());}
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_cofaturamento();if(field.has_value())model.set_cofaturamento(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_faturamento_centralizado();if(field.has_value())model.set_faturamento_centralizado(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pgto_vinc();if(field.has_value())model.set_pgto_vinc(field.value());}
{auto field=model.get_presenca_comprador();if(field.has_value())model.set_presenca_comprador(field.value());}
{auto field=model.get_previa_danfecom();if(field.has_value())model.set_previa_danfecom(field.value());}
{auto field=model.get_processo_emissao();if(field.has_value())model.set_processo_emissao(field.value());}
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_tipo_faturamento();if(field.has_value())model.set_tipo_faturamento(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-substitution-legacy-reference-is-object getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-nfcom-substitution-legacy-reference-is-object";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":2,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"cofaturamento\":{\"chave_nfcom_local\":\"123456ab12cd34ef5600000000000000000000000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_assinante();if(field.has_value())model.set_assinante(field.value());}
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_cofaturamento();if(field.has_value())model.set_cofaturamento(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_faturamento_centralizado();if(field.has_value())model.set_faturamento_centralizado(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pgto_vinc();if(field.has_value())model.set_pgto_vinc(field.value());}
{auto field=model.get_presenca_comprador();if(field.has_value())model.set_presenca_comprador(field.value());}
{auto field=model.get_previa_danfecom();if(field.has_value())model.set_previa_danfecom(field.value());}
{auto field=model.get_processo_emissao();if(field.has_value())model.set_processo_emissao(field.value());}
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_tipo_faturamento();if(field.has_value())model.set_tipo_faturamento(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-cobilling-key-does-not-require-substitution getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-nfcom-cobilling-key-does-not-require-substitution";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-normal-requires-contract getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfcom-normal-requires-contract";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"pgto_vinc\":{\"pagamentos\":[{\"n_pag\":1,\"id_transacao\":\"SYNTHETIC\",\"tp_meio_pgto\":\"01\",\"cnpj_receb\":\"ab12cd34ef5600\",\"cnpj_base_psp\":\"ab12cd34\"}]}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_assinante();if(field.has_value())model.set_assinante(field.value());}
{auto field=model.get_autorizar_download();if(field.has_value())model.set_autorizar_download(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_cofaturamento();if(field.has_value())model.set_cofaturamento(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_faturamento_centralizado();if(field.has_value())model.set_faturamento_centralizado(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_cessao_meios_rede();if(field.has_value())model.set_indicador_cessao_meios_rede(field.value());}
{auto field=model.get_indicador_nota_entrada();if(field.has_value())model.set_indicador_nota_entrada(field.value());}
{auto field=model.get_indicador_pre_pago();if(field.has_value())model.set_indicador_pre_pago(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pgto_vinc();if(field.has_value())model.set_pgto_vinc(field.value());}
{auto field=model.get_presenca_comprador();if(field.has_value())model.set_presenca_comprador(field.value());}
{auto field=model.get_previa_danfecom();if(field.has_value())model.set_previa_danfecom(field.value());}
{auto field=model.get_processo_emissao();if(field.has_value())model.set_processo_emissao(field.value());}
{auto field=model.get_substituicao();if(field.has_value())model.set_substituicao(field.value());}
{auto field=model.get_tipo_faturamento();if(field.has_value())model.set_tipo_faturamento(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-linked-payments-lowercase-identifiers getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-nfcom-linked-payments-lowercase-identifiers";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}],\"pgto_vinc\":{\"pagamentos\":[{\"n_pag\":1,\"id_transacao\":\"SYNTHETIC\",\"tp_meio_pgto\":\"01\",\"cnpj_base_psp\":\"ab12cd34\"}]}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfcom-linked-payment-required-fields-not-hidden-by-closure getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfcom-linked-payment-required-fields-not-hidden-by-closure";return -1;}++checked;}
return checked;}
