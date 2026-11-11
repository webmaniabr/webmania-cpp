#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_nfse_issuance(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceCode::from_json("{\"codigo\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_codigo_tributacao();if(field.has_value())model.set_codigo_tributacao(field.value());}
{auto field=model.get_aliquota_sugerida();if(field.has_value())model.set_aliquota_sugerida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceCode getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceCode";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceCodeAliquotaSugerida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceCodeAliquotaSugerida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceCodeAliquotaSugerida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[],\"autenticacao\":[],\"emissao\":[],\"funcoes\":[],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseProviderStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseProviderStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfcomServiceStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfcomServiceStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseFiscalResponseNfseSubstituida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseFiscalResponseNfseSubstituida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseFiscalResponseNfseSubstituida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseFiscalResponseInfoNfseItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseFiscalResponseInfoNfseItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseFiscalResponseInfoNfseItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfcomPaymentEvent::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_nfcom();if(field.has_value())model.set_protocolo_nfcom(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfcomPaymentEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfcomPaymentEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfcomPaymentEventPagamentoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nPag();if(field.has_value())model.set_nPag(field.value());}
{auto field=model.get_idTransacao();if(field.has_value())model.set_idTransacao(field.value());}
{auto field=model.get_tpMeioPgto();if(field.has_value())model.set_tpMeioPgto(field.value());}
{auto field=model.get_CNPJReceb();if(field.has_value())model.set_CNPJReceb(field.value());}
{auto field=model.get_CNPJBasePSP();if(field.has_value())model.set_CNPJBasePSP(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfcomPaymentEventPagamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfcomPaymentEventPagamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfcomFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"nfcom\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfcomFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfcomFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfcomFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfcomFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfcomFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfcomPaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfcomPaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfcomPaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseManifestationRequest::from_json("{\"ambiente\":1,\"chave\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::CteFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::CteFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::CteFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::CteFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::CteFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::CteFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::CteFiscalResponseEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::CteFiscalResponseEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::CteFiscalResponseEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::MdfeFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::MdfeFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::MdfeFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::MdfeFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::MdfeFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::MdfeFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::DceFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::DceFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::DceFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::DceFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::DceFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::DceFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::FiscalEventResponse::from_json("{\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::FiscalEventResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::FiscalEventResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::FiscalEventResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::FiscalEventResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::FiscalEventResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::CtePaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::CtePaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::CtePaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::CtePaymentEventsEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::CtePaymentEventsEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::CtePaymentEventsEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayload::from_json("{\"ambiente\":2,\"rps\":[{\"servico\":{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"100.00\",\"iss_retido\":2}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_csv();if(field.has_value())model.set_csv(field.value());}
{auto field=model.get_data_agendamento();if(field.has_value())model.set_data_agendamento(field.value());}
{auto field=model.get_linha_csv();if(field.has_value())model.set_linha_csv(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_rps();if(field.has_value())model.set_rps(field.value());}
{auto field=model.get_sincrono();if(field.has_value())model.set_sincrono(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItem::from_json("{\"servico\":{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"100.00\",\"iss_retido\":2}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_condicao_pagamento();if(field.has_value())model.set_condicao_pagamento(field.value());}
{auto field=model.get_construcao_civil();if(field.has_value())model.set_construcao_civil(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_outras_informacoes();if(field.has_value())model.set_outras_informacoes(field.value());}
{auto field=model.get_regime_especial_tributacao();if(field.has_value())model.set_regime_especial_tributacao(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_atividade_evento();if(field.has_value())model.set_atividade_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemCondicaoPagamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_condicao();if(field.has_value())model.set_condicao(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_qtd_parcela();if(field.has_value())model.set_qtd_parcela(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemCondicaoPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemCondicaoPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemCondicaoPagamentoParcelasItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_vencimento();if(field.has_value())model.set_data_vencimento(field.value());}
{auto field=model.get_parcela();if(field.has_value())model.set_parcela(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemCondicaoPagamentoParcelasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemCondicaoPagamentoParcelasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemConstrucaoCivil::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_art();if(field.has_value())model.set_art(field.value());}
{auto field=model.get_cno();if(field.has_value())model.set_cno(field.value());}
{auto field=model.get_codigo_obra();if(field.has_value())model.set_codigo_obra(field.value());}
{auto field=model.get_inscricao_imobiliaria_fiscal();if(field.has_value())model.set_inscricao_imobiliaria_fiscal(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_matricula_obra();if(field.has_value())model.set_matricula_obra(field.value());}
{auto field=model.get_numero_encapsulamento();if(field.has_value())model.set_numero_encapsulamento(field.value());}
{auto field=model.get_uf_local_obra();if(field.has_value())model.set_uf_local_obra(field.value());}
{auto field=model.get_cidade_local_obra();if(field.has_value())model.set_cidade_local_obra(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_inscricao_imobiliaria();if(field.has_value())model.set_inscricao_imobiliaria(field.value());}
{auto field=model.get_exterior();if(field.has_value())model.set_exterior(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemConstrucaoCivil getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemConstrucaoCivil";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_indicador_nao_nif();if(field.has_value())model.set_indicador_nao_nif(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_nif();if(field.has_value())model.set_nif(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEndereco::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco_exterior();if(field.has_value())model.set_endereco_exterior(field.value());}
{auto field=model.get_endereco_nacional();if(field.has_value())model.set_endereco_nacional(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEndereco getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEndereco";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEnderecoEnderecoExterior::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEnderecoEnderecoExterior getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEnderecoEnderecoExterior";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEnderecoEnderecoNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_municipio_ibge();if(field.has_value())model.set_codigo_municipio_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEnderecoEnderecoNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemDestinatarioEnderecoEnderecoNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServico::from_json("{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"100.00\",\"iss_retido\":2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cfps();if(field.has_value())model.set_cfps(field.value());}
{auto field=model.get_cidade_local_prestacao();if(field.has_value())model.set_cidade_local_prestacao(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_cod_indicador_operacao();if(field.has_value())model.set_cod_indicador_operacao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_codigo_nbs();if(field.has_value())model.set_codigo_nbs(field.value());}
{auto field=model.get_codigo_pais_prestacao();if(field.has_value())model.set_codigo_pais_prestacao(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_deducao_reducao();if(field.has_value())model.set_deducao_reducao(field.value());}
{auto field=model.get_deducoes();if(field.has_value())model.set_deducoes(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_discriminacao();if(field.has_value())model.set_discriminacao(field.value());}
{auto field=model.get_ente_governamental();if(field.has_value())model.set_ente_governamental(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_imovel();if(field.has_value())model.set_imovel(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_destinatario();if(field.has_value())model.set_indicador_destinatario(field.value());}
{auto field=model.get_indicador_zfm_alc();if(field.has_value())model.set_indicador_zfm_alc(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_intermediario();if(field.has_value())model.set_intermediario(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_local_incidencia();if(field.has_value())model.set_local_incidencia(field.value());}
{auto field=model.get_municipio_incidencia();if(field.has_value())model.set_municipio_incidencia(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_nfses_referenciadas();if(field.has_value())model.set_nfses_referenciadas(field.value());}
{auto field=model.get_numero_processo();if(field.has_value())model.set_numero_processo(field.value());}
{auto field=model.get_outras_retencoes();if(field.has_value())model.set_outras_retencoes(field.value());}
{auto field=model.get_reembolso_repasse();if(field.has_value())model.set_reembolso_repasse(field.value());}
{auto field=model.get_responsavel_retencao_iss();if(field.has_value())model.set_responsavel_retencao_iss(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
{auto field=model.get_uf_local_prestacao();if(field.has_value())model.set_uf_local_prestacao(field.value());}
{auto field=model.get_valor_nao_base_calculo();if(field.has_value())model.set_valor_nao_base_calculo(field.value());}
{auto field=model.get_valor_servicos();if(field.has_value())model.set_valor_servicos(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_cep_local_prestacao();if(field.has_value())model.set_cep_local_prestacao(field.value());}
{auto field=model.get_justificativa_deducoes();if(field.has_value())model.set_justificativa_deducoes(field.value());}
{auto field=model.get_descricao_impostos();if(field.has_value())model.set_descricao_impostos(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_regime_recolhimento();if(field.has_value())model.set_regime_recolhimento(field.value());}
{auto field=model.get_forma_recolhimento();if(field.has_value())model.set_forma_recolhimento(field.value());}
{auto field=model.get_endereco_local_prestacao();if(field.has_value())model.set_endereco_local_prestacao(field.value());}
{auto field=model.get_identificador_beneficio_municipal();if(field.has_value())model.set_identificador_beneficio_municipal(field.value());}
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tipo_imunidade();if(field.has_value())model.set_tipo_imunidade(field.value());}
{auto field=model.get_pis_cofins_retido();if(field.has_value())model.set_pis_cofins_retido(field.value());}
{auto field=model.get_aliquota_tributos_aproximados();if(field.has_value())model.set_aliquota_tributos_aproximados(field.value());}
{auto field=model.get_modo_prestacao();if(field.has_value())model.set_modo_prestacao(field.value());}
{auto field=model.get_vinculo_prestacao();if(field.has_value())model.set_vinculo_prestacao(field.value());}
{auto field=model.get_tipo_moeda();if(field.has_value())model.set_tipo_moeda(field.value());}
{auto field=model.get_valor_servico_moeda();if(field.has_value())model.set_valor_servico_moeda(field.value());}
{auto field=model.get_mecanismo_apoio_comex_prestador();if(field.has_value())model.set_mecanismo_apoio_comex_prestador(field.value());}
{auto field=model.get_mecanismo_apoio_comex_tomador();if(field.has_value())model.set_mecanismo_apoio_comex_tomador(field.value());}
{auto field=model.get_movimento_temporario_bens();if(field.has_value())model.set_movimento_temporario_bens(field.value());}
{auto field=model.get_numero_di();if(field.has_value())model.set_numero_di(field.value());}
{auto field=model.get_numero_re();if(field.has_value())model.set_numero_re(field.value());}
{auto field=model.get_mdic();if(field.has_value())model.set_mdic(field.value());}
{auto field=model.get_valor_inicial_cobrado();if(field.has_value())model.set_valor_inicial_cobrado(field.value());}
{auto field=model.get_valor_final_cobrado();if(field.has_value())model.set_valor_final_cobrado(field.value());}
{auto field=model.get_valor_multa();if(field.has_value())model.set_valor_multa(field.value());}
{auto field=model.get_valor_juros();if(field.has_value())model.set_valor_juros(field.value());}
{auto field=model.get_valor_ipi();if(field.has_value())model.set_valor_ipi(field.value());}
{auto field=model.get_pagamento_parcelado_antecipado();if(field.has_value())model.set_pagamento_parcelado_antecipado(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_carga_tributaria();if(field.has_value())model.set_carga_tributaria(field.value());}
{auto field=model.get_fonte_carga_tributaria();if(field.has_value())model.set_fonte_carga_tributaria(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_outras_informacoes();if(field.has_value())model.set_outras_informacoes(field.value());}
{auto field=model.get_condicao_pagamento();if(field.has_value())model.set_condicao_pagamento(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_percentual();if(field.has_value())model.set_percentual(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_nfe();if(field.has_value())model.set_chave_nfe(field.value());}
{auto field=model.get_chave_nfse();if(field.has_value())model.set_chave_nfse(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao_outras_deducoes();if(field.has_value())model.set_descricao_outras_deducoes(field.value());}
{auto field=model.get_doc_fiscal();if(field.has_value())model.set_doc_fiscal(field.value());}
{auto field=model.get_doc_nao_fiscal();if(field.has_value())model.set_doc_nao_fiscal(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_nf_nfs();if(field.has_value())model.set_nf_nfs(field.value());}
{auto field=model.get_nfse_municipal();if(field.has_value())model.set_nfse_municipal(field.value());}
{auto field=model.get_tipo_deducao_reducao();if(field.has_value())model.set_tipo_deducao_reducao(field.value());}
{auto field=model.get_valor_deducao();if(field.has_value())model.set_valor_deducao(field.value());}
{auto field=model.get_valor_dedutivel();if(field.has_value())model.set_valor_dedutivel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemFornecedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_caepf();if(field.has_value())model.set_caepf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cep_exterior();if(field.has_value())model.set_cep_exterior(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_motivo_sem_nif();if(field.has_value())model.set_motivo_sem_nif(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemFornecedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemFornecedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfNfs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfNfs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfNfs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfseMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfseMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfseMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoEnteGovernamental::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoEnteGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoEnteGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovel::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_cib();if(field.has_value())model.set_codigo_cib(field.value());}
{auto field=model.get_codigo_obra();if(field.has_value())model.set_codigo_obra(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
{auto field=model.get_inscricao_imobiliaria();if(field.has_value())model.set_inscricao_imobiliaria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovel getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovel";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEndereco::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco_exterior();if(field.has_value())model.set_endereco_exterior(field.value());}
{auto field=model.get_endereco_nacional();if(field.has_value())model.set_endereco_nacional(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEndereco getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEndereco";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEnderecoEnderecoExterior::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEnderecoEnderecoExterior getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEnderecoEnderecoExterior";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEnderecoEnderecoNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_municipio_ibge();if(field.has_value())model.set_codigo_municipio_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEnderecoEnderecoNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImovelEnderecoEnderecoNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_piscofins();if(field.has_value())model.set_piscofins(field.value());}
{auto field=model.get_totTrib();if(field.has_value())model.set_totTrib(field.value());}
{auto field=model.get_tot_trib();if(field.has_value())model.set_tot_trib(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_iss_simples_nacional();if(field.has_value())model.set_iss_simples_nacional(field.value());}
{auto field=model.get_reducao();if(field.has_value())model.set_reducao(field.value());}
{auto field=model.get_cst_pis_cofins();if(field.has_value())model.set_cst_pis_cofins(field.value());}
{auto field=model.get_cp();if(field.has_value())model.set_cp(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_codigo_localidade_incidencia();if(field.has_value())model.set_codigo_localidade_incidencia(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_pRedutor();if(field.has_value())model.set_pRedutor(field.value());}
{auto field=model.get_p_redutor();if(field.has_value())model.set_p_redutor(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_transferencia_credito();if(field.has_value())model.set_transferencia_credito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsCreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsTransferenciaCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsTransferenciaCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosIbsCbsTransferenciaCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosPiscofins::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_cofins();if(field.has_value())model.set_aliquota_cofins(field.value());}
{auto field=model.get_aliquota_pis();if(field.has_value())model.set_aliquota_pis(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_cst();if(field.has_value())model.set_cst(field.value());}
{auto field=model.get_tipo_retencao();if(field.has_value())model.set_tipo_retencao(field.value());}
{auto field=model.get_valor_cofins();if(field.has_value())model.set_valor_cofins(field.value());}
{auto field=model.get_valor_pis();if(field.has_value())model.set_valor_pis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosPiscofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosPiscofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosTotTrib::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pTotTribEst();if(field.has_value())model.set_pTotTribEst(field.value());}
{auto field=model.get_pTotTribFed();if(field.has_value())model.set_pTotTribFed(field.value());}
{auto field=model.get_pTotTribMun();if(field.has_value())model.set_pTotTribMun(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosTotTrib getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosTotTrib";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosTotTrib2::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estadual();if(field.has_value())model.set_estadual(field.value());}
{auto field=model.get_federal();if(field.has_value())model.set_federal(field.value());}
{auto field=model.get_municipal();if(field.has_value())model.set_municipal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosTotTrib2 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoImpostosTotTrib2";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoIntermediario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoIntermediario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoIntermediario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasse::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_dfe_nacional();if(field.has_value())model.set_dfe_nacional(field.value());}
{auto field=model.get_dfe_outro();if(field.has_value())model.set_dfe_outro(field.value());}
{auto field=model.get_doc_outro();if(field.has_value())model.set_doc_outro(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_tipo_reembolso();if(field.has_value())model.set_tipo_reembolso(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_fornecedor_referenciado();if(field.has_value())model.set_fornecedor_referenciado(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_dfe();if(field.has_value())model.set_chave_dfe(field.value());}
{auto field=model.get_descricao_tipo_chave_dfe();if(field.has_value())model.set_descricao_tipo_chave_dfe(field.value());}
{auto field=model.get_tipo_chave_dfe();if(field.has_value())model.set_tipo_chave_dfe(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeOutro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio_emissor();if(field.has_value())model.set_codigo_municipio_emissor(field.value());}
{auto field=model.get_descricao_documento();if(field.has_value())model.set_descricao_documento(field.value());}
{auto field=model.get_numero_documento();if(field.has_value())model.set_numero_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeOutro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeOutro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDocOutro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao_documento();if(field.has_value())model.set_descricao_documento(field.value());}
{auto field=model.get_numero_documento();if(field.has_value())model.set_numero_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDocOutro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDocOutro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemFornecedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_indicador_nao_nif();if(field.has_value())model.set_indicador_nao_nif(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemFornecedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemFornecedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoItensItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
{auto field=model.get_item_tributavel();if(field.has_value())model.set_item_tributavel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemServicoItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemTomador::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cidade_exterior();if(field.has_value())model.set_cidade_exterior(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_endereco_completo();if(field.has_value())model.set_endereco_completo(field.value());}
{auto field=model.get_endereco_completo_exterior();if(field.has_value())model.set_endereco_completo_exterior(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
{auto field=model.get_fantasia();if(field.has_value())model.set_fantasia(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_nif();if(field.has_value())model.set_nif(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_nome_pais();if(field.has_value())model.set_nome_pais(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_sigla_pais();if(field.has_value())model.set_sigla_pais(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_documento_estrangeiro();if(field.has_value())model.set_documento_estrangeiro(field.value());}
{auto field=model.get_cidade_estrangeira();if(field.has_value())model.set_cidade_estrangeira(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemTomador getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemTomador";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemAtividadeEvento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_data_inicio();if(field.has_value())model.set_data_inicio(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_cep_exterior();if(field.has_value())model.set_cep_exterior(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_uf_prestacao();if(field.has_value())model.set_uf_prestacao(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_exterior();if(field.has_value())model.set_exterior(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemAtividadeEvento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterIssueNfsePayloadRpsItemAtividadeEvento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterCancelNfsePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterCancelNfsePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterCancelNfsePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayload::from_json("{\"ambiente\":2,\"motivo\":1,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"rps\":[{\"servico\":{\"classe_imposto\":\"SYNTHETIC\",\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"1.00\"}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_rps();if(field.has_value())model.set_rps(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItem::from_json("{\"servico\":{\"classe_imposto\":\"SYNTHETIC\",\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"1.00\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_condicao_pagamento();if(field.has_value())model.set_condicao_pagamento(field.value());}
{auto field=model.get_construcao_civil();if(field.has_value())model.set_construcao_civil(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_outras_informacoes();if(field.has_value())model.set_outras_informacoes(field.value());}
{auto field=model.get_regime_especial_tributacao();if(field.has_value())model.set_regime_especial_tributacao(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemCondicaoPagamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_condicao();if(field.has_value())model.set_condicao(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_qtd_parcela();if(field.has_value())model.set_qtd_parcela(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemCondicaoPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemCondicaoPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemCondicaoPagamentoParcelasItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_vencimento();if(field.has_value())model.set_data_vencimento(field.value());}
{auto field=model.get_parcela();if(field.has_value())model.set_parcela(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemCondicaoPagamentoParcelasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemCondicaoPagamentoParcelasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemConstrucaoCivil::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_art();if(field.has_value())model.set_art(field.value());}
{auto field=model.get_codigo_obra();if(field.has_value())model.set_codigo_obra(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemConstrucaoCivil getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemConstrucaoCivil";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_indicador_nao_nif();if(field.has_value())model.set_indicador_nao_nif(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEndereco::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco_exterior();if(field.has_value())model.set_endereco_exterior(field.value());}
{auto field=model.get_endereco_nacional();if(field.has_value())model.set_endereco_nacional(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEndereco getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEndereco";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEnderecoEnderecoExterior::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEnderecoEnderecoExterior getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEnderecoEnderecoExterior";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEnderecoEnderecoNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_municipio_ibge();if(field.has_value())model.set_codigo_municipio_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEnderecoEnderecoNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemDestinatarioEnderecoEnderecoNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServico::from_json("{\"classe_imposto\":\"SYNTHETIC\",\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"1.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade_local_prestacao();if(field.has_value())model.set_cidade_local_prestacao(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_cod_indicador_operacao();if(field.has_value())model.set_cod_indicador_operacao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_nbs();if(field.has_value())model.set_codigo_nbs(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_deducao_reducao();if(field.has_value())model.set_deducao_reducao(field.value());}
{auto field=model.get_deducoes();if(field.has_value())model.set_deducoes(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_discriminacao();if(field.has_value())model.set_discriminacao(field.value());}
{auto field=model.get_ente_governamental();if(field.has_value())model.set_ente_governamental(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_imovel();if(field.has_value())model.set_imovel(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_destinatario();if(field.has_value())model.set_indicador_destinatario(field.value());}
{auto field=model.get_indicador_zfm_alc();if(field.has_value())model.set_indicador_zfm_alc(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_intermediario();if(field.has_value())model.set_intermediario(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_municipio_incidencia();if(field.has_value())model.set_municipio_incidencia(field.value());}
{auto field=model.get_nfses_referenciadas();if(field.has_value())model.set_nfses_referenciadas(field.value());}
{auto field=model.get_numero_processo();if(field.has_value())model.set_numero_processo(field.value());}
{auto field=model.get_outras_retencoes();if(field.has_value())model.set_outras_retencoes(field.value());}
{auto field=model.get_reembolso_repasse();if(field.has_value())model.set_reembolso_repasse(field.value());}
{auto field=model.get_responsavel_retencao_iss();if(field.has_value())model.set_responsavel_retencao_iss(field.value());}
{auto field=model.get_uf_local_prestacao();if(field.has_value())model.set_uf_local_prestacao(field.value());}
{auto field=model.get_valor_servicos();if(field.has_value())model.set_valor_servicos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_percentual();if(field.has_value())model.set_percentual(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_nfe();if(field.has_value())model.set_chave_nfe(field.value());}
{auto field=model.get_chave_nfse();if(field.has_value())model.set_chave_nfse(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao_outras_deducoes();if(field.has_value())model.set_descricao_outras_deducoes(field.value());}
{auto field=model.get_doc_fiscal();if(field.has_value())model.set_doc_fiscal(field.value());}
{auto field=model.get_doc_nao_fiscal();if(field.has_value())model.set_doc_nao_fiscal(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_nf_nfs();if(field.has_value())model.set_nf_nfs(field.value());}
{auto field=model.get_nfse_municipal();if(field.has_value())model.set_nfse_municipal(field.value());}
{auto field=model.get_tipo_deducao_reducao();if(field.has_value())model.set_tipo_deducao_reducao(field.value());}
{auto field=model.get_valor_deducao();if(field.has_value())model.set_valor_deducao(field.value());}
{auto field=model.get_valor_dedutivel();if(field.has_value())model.set_valor_dedutivel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemFornecedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_caepf();if(field.has_value())model.set_caepf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cep_exterior();if(field.has_value())model.set_cep_exterior(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_motivo_sem_nif();if(field.has_value())model.set_motivo_sem_nif(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemFornecedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemFornecedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfNfs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfNfs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfNfs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfseMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfseMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoDeducaoReducaoDocumentosItemNfseMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoEnteGovernamental::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoEnteGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoEnteGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovel::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_cib();if(field.has_value())model.set_codigo_cib(field.value());}
{auto field=model.get_codigo_obra();if(field.has_value())model.set_codigo_obra(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
{auto field=model.get_inscricao_imobiliaria();if(field.has_value())model.set_inscricao_imobiliaria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovel getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovel";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEndereco::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco_exterior();if(field.has_value())model.set_endereco_exterior(field.value());}
{auto field=model.get_endereco_nacional();if(field.has_value())model.set_endereco_nacional(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEndereco getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEndereco";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEnderecoEnderecoExterior::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEnderecoEnderecoExterior getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEnderecoEnderecoExterior";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEnderecoEnderecoNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_municipio_ibge();if(field.has_value())model.set_codigo_municipio_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEnderecoEnderecoNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImovelEnderecoEnderecoNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_piscofins();if(field.has_value())model.set_piscofins(field.value());}
{auto field=model.get_totTrib();if(field.has_value())model.set_totTrib(field.value());}
{auto field=model.get_tot_trib();if(field.has_value())model.set_tot_trib(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosPiscofins::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_cofins();if(field.has_value())model.set_aliquota_cofins(field.value());}
{auto field=model.get_aliquota_pis();if(field.has_value())model.set_aliquota_pis(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_cst();if(field.has_value())model.set_cst(field.value());}
{auto field=model.get_tipo_retencao();if(field.has_value())model.set_tipo_retencao(field.value());}
{auto field=model.get_valor_cofins();if(field.has_value())model.set_valor_cofins(field.value());}
{auto field=model.get_valor_pis();if(field.has_value())model.set_valor_pis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosPiscofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosPiscofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosTotTrib::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pTotTribEst();if(field.has_value())model.set_pTotTribEst(field.value());}
{auto field=model.get_pTotTribFed();if(field.has_value())model.set_pTotTribFed(field.value());}
{auto field=model.get_pTotTribMun();if(field.has_value())model.set_pTotTribMun(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosTotTrib getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosTotTrib";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosTotTrib2::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estadual();if(field.has_value())model.set_estadual(field.value());}
{auto field=model.get_federal();if(field.has_value())model.set_federal(field.value());}
{auto field=model.get_municipal();if(field.has_value())model.set_municipal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosTotTrib2 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosTotTrib2";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_localidade_incidencia();if(field.has_value())model.set_codigo_localidade_incidencia(field.value());}
{auto field=model.get_pRedutor();if(field.has_value())model.set_pRedutor(field.value());}
{auto field=model.get_p_redutor();if(field.has_value())model.set_p_redutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoIntermediario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoIntermediario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoIntermediario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasse::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_dfe_nacional();if(field.has_value())model.set_dfe_nacional(field.value());}
{auto field=model.get_dfe_outro();if(field.has_value())model.set_dfe_outro(field.value());}
{auto field=model.get_doc_outro();if(field.has_value())model.set_doc_outro(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_tipo_reembolso();if(field.has_value())model.set_tipo_reembolso(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_dfe();if(field.has_value())model.set_chave_dfe(field.value());}
{auto field=model.get_descricao_tipo_chave_dfe();if(field.has_value())model.set_descricao_tipo_chave_dfe(field.value());}
{auto field=model.get_tipo_chave_dfe();if(field.has_value())model.set_tipo_chave_dfe(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeOutro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio_emissor();if(field.has_value())model.set_codigo_municipio_emissor(field.value());}
{auto field=model.get_descricao_documento();if(field.has_value())model.set_descricao_documento(field.value());}
{auto field=model.get_numero_documento();if(field.has_value())model.set_numero_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeOutro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDfeOutro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDocOutro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao_documento();if(field.has_value())model.set_descricao_documento(field.value());}
{auto field=model.get_numero_documento();if(field.has_value())model.set_numero_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDocOutro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemDocOutro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemFornecedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_indicador_nao_nif();if(field.has_value())model.set_indicador_nao_nif(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemFornecedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemServicoReembolsoRepasseDocumentosItemFornecedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemTomador::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cidade_exterior();if(field.has_value())model.set_cidade_exterior(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_endereco_completo_exterior();if(field.has_value())model.set_endereco_completo_exterior(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
{auto field=model.get_fantasia();if(field.has_value())model.set_fantasia(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_nif();if(field.has_value())model.set_nif(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_sigla_pais();if(field.has_value())model.set_sigla_pais(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemTomador getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::EmitterReplaceNfsePayloadRpsItemTomador";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup516::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_versao();if(field.has_value())model.set_versao(field.value());}
{auto field=model.get_ambientes();if(field.has_value())model.set_ambientes(field.value());}
{auto field=model.get_autenticacao();if(field.has_value())model.set_autenticacao(field.value());}
{auto field=model.get_emissao();if(field.has_value())model.set_emissao(field.value());}
{auto field=model.get_funcoes();if(field.has_value())model.set_funcoes(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_parametros_disponiveis();if(field.has_value())model.set_parametros_disponiveis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup516 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup516";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup700::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_numero_lote();if(field.has_value())model.set_numero_lote(field.value());}
{auto field=model.get_serie_lote();if(field.has_value())model.set_serie_lote(field.value());}
{auto field=model.get_quantidade_rps();if(field.has_value())model.set_quantidade_rps(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_info_nfse();if(field.has_value())model.set_info_nfse(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_atualizado_em();if(field.has_value())model.set_atualizado_em(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup700 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup700";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup829::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf_nfse();if(field.has_value())model.set_pdf_nfse(field.value());}
{auto field=model.get_pdf_nfse_status();if(field.has_value())model.set_pdf_nfse_status(field.value());}
{auto field=model.get_pdf_rps();if(field.has_value())model.set_pdf_rps(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_atualizado_em();if(field.has_value())model.set_atualizado_em(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup829 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup829";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup1074::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_numero_lote();if(field.has_value())model.set_numero_lote(field.value());}
{auto field=model.get_serie_lote();if(field.has_value())model.set_serie_lote(field.value());}
{auto field=model.get_quantidade_rps();if(field.has_value())model.set_quantidade_rps(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_info_nfse();if(field.has_value())model.set_info_nfse(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup1074 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup1074";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup1181::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf_nfse();if(field.has_value())model.set_pdf_nfse(field.value());}
{auto field=model.get_pdf_nfse_status();if(field.has_value())model.set_pdf_nfse_status(field.value());}
{auto field=model.get_pdf_rps();if(field.has_value())model.set_pdf_rps(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup1181 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup1181";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup6052::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup6052 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup6052";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup6116::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_rps();if(field.has_value())model.set_rps(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup6116 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup6116";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseDocumentedGroup6216::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup6216 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseDocumentedGroup6216";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroup::from_json("{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"123456789012345.67\",\"future\":{\"zero\":0,\"enabled\":false}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cfps();if(field.has_value())model.set_cfps(field.value());}
{auto field=model.get_cidade_local_prestacao();if(field.has_value())model.set_cidade_local_prestacao(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_cod_indicador_operacao();if(field.has_value())model.set_cod_indicador_operacao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_codigo_nbs();if(field.has_value())model.set_codigo_nbs(field.value());}
{auto field=model.get_codigo_pais_prestacao();if(field.has_value())model.set_codigo_pais_prestacao(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_deducao_reducao();if(field.has_value())model.set_deducao_reducao(field.value());}
{auto field=model.get_deducoes();if(field.has_value())model.set_deducoes(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_discriminacao();if(field.has_value())model.set_discriminacao(field.value());}
{auto field=model.get_ente_governamental();if(field.has_value())model.set_ente_governamental(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_imovel();if(field.has_value())model.set_imovel(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_destinatario();if(field.has_value())model.set_indicador_destinatario(field.value());}
{auto field=model.get_indicador_zfm_alc();if(field.has_value())model.set_indicador_zfm_alc(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_intermediario();if(field.has_value())model.set_intermediario(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_local_incidencia();if(field.has_value())model.set_local_incidencia(field.value());}
{auto field=model.get_municipio_incidencia();if(field.has_value())model.set_municipio_incidencia(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_nfses_referenciadas();if(field.has_value())model.set_nfses_referenciadas(field.value());}
{auto field=model.get_numero_processo();if(field.has_value())model.set_numero_processo(field.value());}
{auto field=model.get_outras_retencoes();if(field.has_value())model.set_outras_retencoes(field.value());}
{auto field=model.get_reembolso_repasse();if(field.has_value())model.set_reembolso_repasse(field.value());}
{auto field=model.get_responsavel_retencao_iss();if(field.has_value())model.set_responsavel_retencao_iss(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
{auto field=model.get_uf_local_prestacao();if(field.has_value())model.set_uf_local_prestacao(field.value());}
{auto field=model.get_valor_nao_base_calculo();if(field.has_value())model.set_valor_nao_base_calculo(field.value());}
{auto field=model.get_valor_servicos();if(field.has_value())model.set_valor_servicos(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_cep_local_prestacao();if(field.has_value())model.set_cep_local_prestacao(field.value());}
{auto field=model.get_justificativa_deducoes();if(field.has_value())model.set_justificativa_deducoes(field.value());}
{auto field=model.get_descricao_impostos();if(field.has_value())model.set_descricao_impostos(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_regime_recolhimento();if(field.has_value())model.set_regime_recolhimento(field.value());}
{auto field=model.get_forma_recolhimento();if(field.has_value())model.set_forma_recolhimento(field.value());}
{auto field=model.get_endereco_local_prestacao();if(field.has_value())model.set_endereco_local_prestacao(field.value());}
{auto field=model.get_identificador_beneficio_municipal();if(field.has_value())model.set_identificador_beneficio_municipal(field.value());}
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tipo_imunidade();if(field.has_value())model.set_tipo_imunidade(field.value());}
{auto field=model.get_pis_cofins_retido();if(field.has_value())model.set_pis_cofins_retido(field.value());}
{auto field=model.get_aliquota_tributos_aproximados();if(field.has_value())model.set_aliquota_tributos_aproximados(field.value());}
{auto field=model.get_modo_prestacao();if(field.has_value())model.set_modo_prestacao(field.value());}
{auto field=model.get_vinculo_prestacao();if(field.has_value())model.set_vinculo_prestacao(field.value());}
{auto field=model.get_tipo_moeda();if(field.has_value())model.set_tipo_moeda(field.value());}
{auto field=model.get_valor_servico_moeda();if(field.has_value())model.set_valor_servico_moeda(field.value());}
{auto field=model.get_mecanismo_apoio_comex_prestador();if(field.has_value())model.set_mecanismo_apoio_comex_prestador(field.value());}
{auto field=model.get_mecanismo_apoio_comex_tomador();if(field.has_value())model.set_mecanismo_apoio_comex_tomador(field.value());}
{auto field=model.get_movimento_temporario_bens();if(field.has_value())model.set_movimento_temporario_bens(field.value());}
{auto field=model.get_numero_di();if(field.has_value())model.set_numero_di(field.value());}
{auto field=model.get_numero_re();if(field.has_value())model.set_numero_re(field.value());}
{auto field=model.get_mdic();if(field.has_value())model.set_mdic(field.value());}
{auto field=model.get_valor_inicial_cobrado();if(field.has_value())model.set_valor_inicial_cobrado(field.value());}
{auto field=model.get_valor_final_cobrado();if(field.has_value())model.set_valor_final_cobrado(field.value());}
{auto field=model.get_valor_multa();if(field.has_value())model.set_valor_multa(field.value());}
{auto field=model.get_valor_juros();if(field.has_value())model.set_valor_juros(field.value());}
{auto field=model.get_valor_ipi();if(field.has_value())model.set_valor_ipi(field.value());}
{auto field=model.get_pagamento_parcelado_antecipado();if(field.has_value())model.set_pagamento_parcelado_antecipado(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_carga_tributaria();if(field.has_value())model.set_carga_tributaria(field.value());}
{auto field=model.get_fonte_carga_tributaria();if(field.has_value())model.set_fonte_carga_tributaria(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_outras_informacoes();if(field.has_value())model.set_outras_informacoes(field.value());}
{auto field=model.get_condicao_pagamento();if(field.has_value())model.set_condicao_pagamento(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroup getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroup";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupDeducaoReducao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_percentual();if(field.has_value())model.set_percentual(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_nfe();if(field.has_value())model.set_chave_nfe(field.value());}
{auto field=model.get_chave_nfse();if(field.has_value())model.set_chave_nfse(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao_outras_deducoes();if(field.has_value())model.set_descricao_outras_deducoes(field.value());}
{auto field=model.get_doc_fiscal();if(field.has_value())model.set_doc_fiscal(field.value());}
{auto field=model.get_doc_nao_fiscal();if(field.has_value())model.set_doc_nao_fiscal(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_nf_nfs();if(field.has_value())model.set_nf_nfs(field.value());}
{auto field=model.get_nfse_municipal();if(field.has_value())model.set_nfse_municipal(field.value());}
{auto field=model.get_tipo_deducao_reducao();if(field.has_value())model.set_tipo_deducao_reducao(field.value());}
{auto field=model.get_valor_deducao();if(field.has_value())model.set_valor_deducao(field.value());}
{auto field=model.get_valor_dedutivel();if(field.has_value())model.set_valor_dedutivel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemFornecedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_caepf();if(field.has_value())model.set_caepf(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cep_exterior();if(field.has_value())model.set_cep_exterior(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_motivo_sem_nif();if(field.has_value())model.set_motivo_sem_nif(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_estrangeiro();if(field.has_value())model.set_nome_estrangeiro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemFornecedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemFornecedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemNfNfs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemNfNfs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemNfNfs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemNfseMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemNfseMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupDeducaoReducaoDocumentosItemNfseMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupEnteGovernamental::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupEnteGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupEnteGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImovel::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_cib();if(field.has_value())model.set_codigo_cib(field.value());}
{auto field=model.get_codigo_obra();if(field.has_value())model.set_codigo_obra(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
{auto field=model.get_inscricao_imobiliaria();if(field.has_value())model.set_inscricao_imobiliaria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovel getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovel";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImovelEndereco::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco_exterior();if(field.has_value())model.set_endereco_exterior(field.value());}
{auto field=model.get_endereco_nacional();if(field.has_value())model.set_endereco_nacional(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovelEndereco getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovelEndereco";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImovelEnderecoEnderecoExterior::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_codigo_postal();if(field.has_value())model.set_codigo_postal(field.value());}
{auto field=model.get_estado_provincia();if(field.has_value())model.set_estado_provincia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovelEnderecoEnderecoExterior getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovelEnderecoEnderecoExterior";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImovelEnderecoEnderecoNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_codigo_municipio_ibge();if(field.has_value())model.set_codigo_municipio_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovelEnderecoEnderecoNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImovelEnderecoEnderecoNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_piscofins();if(field.has_value())model.set_piscofins(field.value());}
{auto field=model.get_totTrib();if(field.has_value())model.set_totTrib(field.value());}
{auto field=model.get_tot_trib();if(field.has_value())model.set_tot_trib(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_iss_simples_nacional();if(field.has_value())model.set_iss_simples_nacional(field.value());}
{auto field=model.get_reducao();if(field.has_value())model.set_reducao(field.value());}
{auto field=model.get_cst_pis_cofins();if(field.has_value())model.set_cst_pis_cofins(field.value());}
{auto field=model.get_cp();if(field.has_value())model.set_cp(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_codigo_localidade_incidencia();if(field.has_value())model.set_codigo_localidade_incidencia(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_pRedutor();if(field.has_value())model.set_pRedutor(field.value());}
{auto field=model.get_p_redutor();if(field.has_value())model.set_p_redutor(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_transferencia_credito();if(field.has_value())model.set_transferencia_credito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsCreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsTransferenciaCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsTransferenciaCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosIbsCbsTransferenciaCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosPiscofins::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_cofins();if(field.has_value())model.set_aliquota_cofins(field.value());}
{auto field=model.get_aliquota_pis();if(field.has_value())model.set_aliquota_pis(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_cst();if(field.has_value())model.set_cst(field.value());}
{auto field=model.get_tipo_retencao();if(field.has_value())model.set_tipo_retencao(field.value());}
{auto field=model.get_valor_cofins();if(field.has_value())model.set_valor_cofins(field.value());}
{auto field=model.get_valor_pis();if(field.has_value())model.set_valor_pis(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosPiscofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosPiscofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosTotTrib::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pTotTribEst();if(field.has_value())model.set_pTotTribEst(field.value());}
{auto field=model.get_pTotTribFed();if(field.has_value())model.set_pTotTribFed(field.value());}
{auto field=model.get_pTotTribMun();if(field.has_value())model.set_pTotTribMun(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosTotTrib getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosTotTrib";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupImpostosTotTrib2::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_estadual();if(field.has_value())model.set_estadual(field.value());}
{auto field=model.get_federal();if(field.has_value())model.set_federal(field.value());}
{auto field=model.get_municipal();if(field.has_value())model.set_municipal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosTotTrib2 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupImpostosTotTrib2";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupIntermediario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupIntermediario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupIntermediario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupReembolsoRepasse::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_dfe_nacional();if(field.has_value())model.set_dfe_nacional(field.value());}
{auto field=model.get_dfe_outro();if(field.has_value())model.set_dfe_outro(field.value());}
{auto field=model.get_doc_outro();if(field.has_value())model.set_doc_outro(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_tipo_reembolso();if(field.has_value())model.set_tipo_reembolso(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_fornecedor_referenciado();if(field.has_value())model.set_fornecedor_referenciado(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDfeNacional::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave_dfe();if(field.has_value())model.set_chave_dfe(field.value());}
{auto field=model.get_descricao_tipo_chave_dfe();if(field.has_value())model.set_descricao_tipo_chave_dfe(field.value());}
{auto field=model.get_tipo_chave_dfe();if(field.has_value())model.set_tipo_chave_dfe(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDfeNacional getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDfeNacional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDfeOutro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio_emissor();if(field.has_value())model.set_codigo_municipio_emissor(field.value());}
{auto field=model.get_descricao_documento();if(field.has_value())model.set_descricao_documento(field.value());}
{auto field=model.get_numero_documento();if(field.has_value())model.set_numero_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDfeOutro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDfeOutro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDocOutro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao_documento();if(field.has_value())model.set_descricao_documento(field.value());}
{auto field=model.get_numero_documento();if(field.has_value())model.set_numero_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDocOutro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemDocOutro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemFornecedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_indicador_nao_nif();if(field.has_value())model.set_indicador_nao_nif(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemFornecedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupReembolsoRepasseDocumentosItemFornecedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroupItensItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
{auto field=model.get_item_tributavel();if(field.has_value())model.set_item_tributavel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_nfse_issuance::NfseServiceGroupItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_nfse_issuance::NfseServiceGroupItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroup::from_json("{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"123456789012345.67\",\"future\":{\"zero\":0,\"enabled\":false}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cfps();if(field.has_value())model.set_cfps(field.value());}
{auto field=model.get_cidade_local_prestacao();if(field.has_value())model.set_cidade_local_prestacao(field.value());}
{auto field=model.get_classe_imposto();if(field.has_value())model.set_classe_imposto(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_cod_indicador_operacao();if(field.has_value())model.set_cod_indicador_operacao(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_codigo_nbs();if(field.has_value())model.set_codigo_nbs(field.value());}
{auto field=model.get_codigo_pais_prestacao();if(field.has_value())model.set_codigo_pais_prestacao(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_consumidor_final();if(field.has_value())model.set_consumidor_final(field.value());}
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_deducao_reducao();if(field.has_value())model.set_deducao_reducao(field.value());}
{auto field=model.get_deducoes();if(field.has_value())model.set_deducoes(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_discriminacao();if(field.has_value())model.set_discriminacao(field.value());}
{auto field=model.get_ente_governamental();if(field.has_value())model.set_ente_governamental(field.value());}
{auto field=model.get_exigibilidade_iss();if(field.has_value())model.set_exigibilidade_iss(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_imovel();if(field.has_value())model.set_imovel(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_destinatario();if(field.has_value())model.set_indicador_destinatario(field.value());}
{auto field=model.get_indicador_zfm_alc();if(field.has_value())model.set_indicador_zfm_alc(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_intermediario();if(field.has_value())model.set_intermediario(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_local_incidencia();if(field.has_value())model.set_local_incidencia(field.value());}
{auto field=model.get_municipio_incidencia();if(field.has_value())model.set_municipio_incidencia(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_nfses_referenciadas();if(field.has_value())model.set_nfses_referenciadas(field.value());}
{auto field=model.get_numero_processo();if(field.has_value())model.set_numero_processo(field.value());}
{auto field=model.get_outras_retencoes();if(field.has_value())model.set_outras_retencoes(field.value());}
{auto field=model.get_reembolso_repasse();if(field.has_value())model.set_reembolso_repasse(field.value());}
{auto field=model.get_responsavel_retencao_iss();if(field.has_value())model.set_responsavel_retencao_iss(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
{auto field=model.get_tipo_tributacao();if(field.has_value())model.set_tipo_tributacao(field.value());}
{auto field=model.get_tributacao();if(field.has_value())model.set_tributacao(field.value());}
{auto field=model.get_uf_local_prestacao();if(field.has_value())model.set_uf_local_prestacao(field.value());}
{auto field=model.get_valor_nao_base_calculo();if(field.has_value())model.set_valor_nao_base_calculo(field.value());}
{auto field=model.get_valor_servicos();if(field.has_value())model.set_valor_servicos(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_cep_local_prestacao();if(field.has_value())model.set_cep_local_prestacao(field.value());}
{auto field=model.get_justificativa_deducoes();if(field.has_value())model.set_justificativa_deducoes(field.value());}
{auto field=model.get_descricao_impostos();if(field.has_value())model.set_descricao_impostos(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_regime_recolhimento();if(field.has_value())model.set_regime_recolhimento(field.value());}
{auto field=model.get_forma_recolhimento();if(field.has_value())model.set_forma_recolhimento(field.value());}
{auto field=model.get_endereco_local_prestacao();if(field.has_value())model.set_endereco_local_prestacao(field.value());}
{auto field=model.get_identificador_beneficio_municipal();if(field.has_value())model.set_identificador_beneficio_municipal(field.value());}
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tipo_imunidade();if(field.has_value())model.set_tipo_imunidade(field.value());}
{auto field=model.get_pis_cofins_retido();if(field.has_value())model.set_pis_cofins_retido(field.value());}
{auto field=model.get_aliquota_tributos_aproximados();if(field.has_value())model.set_aliquota_tributos_aproximados(field.value());}
{auto field=model.get_modo_prestacao();if(field.has_value())model.set_modo_prestacao(field.value());}
{auto field=model.get_vinculo_prestacao();if(field.has_value())model.set_vinculo_prestacao(field.value());}
{auto field=model.get_tipo_moeda();if(field.has_value())model.set_tipo_moeda(field.value());}
{auto field=model.get_valor_servico_moeda();if(field.has_value())model.set_valor_servico_moeda(field.value());}
{auto field=model.get_mecanismo_apoio_comex_prestador();if(field.has_value())model.set_mecanismo_apoio_comex_prestador(field.value());}
{auto field=model.get_mecanismo_apoio_comex_tomador();if(field.has_value())model.set_mecanismo_apoio_comex_tomador(field.value());}
{auto field=model.get_movimento_temporario_bens();if(field.has_value())model.set_movimento_temporario_bens(field.value());}
{auto field=model.get_numero_di();if(field.has_value())model.set_numero_di(field.value());}
{auto field=model.get_numero_re();if(field.has_value())model.set_numero_re(field.value());}
{auto field=model.get_mdic();if(field.has_value())model.set_mdic(field.value());}
{auto field=model.get_valor_inicial_cobrado();if(field.has_value())model.set_valor_inicial_cobrado(field.value());}
{auto field=model.get_valor_final_cobrado();if(field.has_value())model.set_valor_final_cobrado(field.value());}
{auto field=model.get_valor_multa();if(field.has_value())model.set_valor_multa(field.value());}
{auto field=model.get_valor_juros();if(field.has_value())model.set_valor_juros(field.value());}
{auto field=model.get_valor_ipi();if(field.has_value())model.set_valor_ipi(field.value());}
{auto field=model.get_pagamento_parcelado_antecipado();if(field.has_value())model.set_pagamento_parcelado_antecipado(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_carga_tributaria();if(field.has_value())model.set_carga_tributaria(field.value());}
{auto field=model.get_fonte_carga_tributaria();if(field.has_value())model.set_fonte_carga_tributaria(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_outras_informacoes();if(field.has_value())model.set_outras_informacoes(field.value());}
{auto field=model.get_condicao_pagamento();if(field.has_value())model.set_condicao_pagamento(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-001 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-001";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroup::from_json("{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":false,\"future\":{\"zero\":0,\"enabled\":false}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-002 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-002";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::NfseServiceGroup::from_json("{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"10.123\",\"future\":{\"zero\":0,\"enabled\":false}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-003 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-003";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayload::from_json("{\"ambiente\":2,\"rps\":[{\"servico\":{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"100.00\",\"iss_retido\":2}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_csv();if(field.has_value())model.set_csv(field.value());}
{auto field=model.get_data_agendamento();if(field.has_value())model.set_data_agendamento(field.value());}
{auto field=model.get_linha_csv();if(field.has_value())model.set_linha_csv(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_rps();if(field.has_value())model.set_rps(field.value());}
{auto field=model.get_sincrono();if(field.has_value())model.set_sincrono(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfse-common-service-structure getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-nfse-common-service-structure";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayload::from_json("{\"ambiente\":2,\"rps\":[{\"servico\":{\"valor_servicos\":\"100.00\",\"iss_retido\":2}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfse-common-service-discriminacao-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfse-common-service-discriminacao-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayload::from_json("{\"ambiente\":2,\"rps\":[{\"servico\":{\"discriminacao\":\"Synthetic service\",\"iss_retido\":2}}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfse-common-service-valor_servicos-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfse-common-service-valor_servicos-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_nfse_issuance::EmitterIssueNfsePayload::from_json("{\"ambiente\":2,\"rps\":[{}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-nfse-common-rps-service-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-nfse-common-rps-service-required";return -1;}++checked;}
return checked;}
