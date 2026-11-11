#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_dce_issuance(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseServiceCode::from_json("{\"codigo\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_codigo_tributacao();if(field.has_value())model.set_codigo_tributacao(field.value());}
{auto field=model.get_aliquota_sugerida();if(field.has_value())model.set_aliquota_sugerida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseServiceCode getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseServiceCode";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseServiceCodeAliquotaSugerida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseServiceCodeAliquotaSugerida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseServiceCodeAliquotaSugerida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[],\"autenticacao\":[],\"emissao\":[],\"funcoes\":[],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseProviderStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseProviderStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfcomServiceStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfcomServiceStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseFiscalResponseNfseSubstituida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseFiscalResponseNfseSubstituida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseFiscalResponseNfseSubstituida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseFiscalResponseInfoNfseItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseFiscalResponseInfoNfseItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseFiscalResponseInfoNfseItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfcomPaymentEvent::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_nfcom();if(field.has_value())model.set_protocolo_nfcom(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfcomPaymentEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfcomPaymentEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfcomPaymentEventPagamentoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nPag();if(field.has_value())model.set_nPag(field.value());}
{auto field=model.get_idTransacao();if(field.has_value())model.set_idTransacao(field.value());}
{auto field=model.get_tpMeioPgto();if(field.has_value())model.set_tpMeioPgto(field.value());}
{auto field=model.get_CNPJReceb();if(field.has_value())model.set_CNPJReceb(field.value());}
{auto field=model.get_CNPJBasePSP();if(field.has_value())model.set_CNPJBasePSP(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfcomPaymentEventPagamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfcomPaymentEventPagamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfcomFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"nfcom\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfcomFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfcomFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfcomFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfcomFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfcomFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfcomPaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfcomPaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfcomPaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::NfseManifestationRequest::from_json("{\"ambiente\":1,\"chave\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::NfseManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::NfseManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::CteFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::CteFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::CteFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::CteFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::CteFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::CteFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::CteFiscalResponseEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::CteFiscalResponseEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::CteFiscalResponseEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::MdfeFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::MdfeFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::MdfeFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::MdfeFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::MdfeFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::MdfeFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::DceFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::DceFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::DceFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::DceFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::FiscalEventResponse::from_json("{\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::FiscalEventResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::FiscalEventResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::FiscalEventResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::FiscalEventResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::FiscalEventResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::CtePaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::CtePaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::CtePaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::CtePaymentEventsEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::CtePaymentEventsEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::CtePaymentEventsEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayload::from_json("{\"ambiente\":\"1\",\"itens\":[{\"descricao\":\"synthetic\",\"ncm\":\"00000000\",\"quantidade\":0.0,\"valor_unitario\":0.0}],\"cliente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"identificacao_alternativa\":\"synthetic\",\"nome_completo\":\"synthetic\",\"razao_social\":\"synthetic\"},\"emitente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"identificacao_alternativa\":\"synthetic\",\"nome_completo\":\"synthetic\",\"razao_social\":\"synthetic\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_informacoes_adicionais_emitente();if(field.has_value())model.set_informacoes_adicionais_emitente(field.value());}
{auto field=model.get_itens();if(field.has_value())model.set_itens(field.value());}
{auto field=model.get_observacoes();if(field.has_value())model.set_observacoes(field.value());}
{auto field=model.get_observacoes_emitente();if(field.has_value())model.set_observacoes_emitente(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_solicitacao();if(field.has_value())model.set_solicitacao(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_emitente();if(field.has_value())model.set_emitente(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayloadItensItem::from_json("{\"descricao\":\"synthetic\",\"ncm\":\"00000000\",\"quantidade\":0.0,\"valor_unitario\":0.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadItensItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadItensItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayloadObservacoesVariant0Item::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_texto();if(field.has_value())model.set_texto(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadObservacoesVariant0Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadObservacoesVariant0Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayloadObservacoesEmitenteVariant0Item::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_texto();if(field.has_value())model.set_texto(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadObservacoesEmitenteVariant0Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadObservacoesEmitenteVariant0Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayloadCliente::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"identificacao_alternativa\":\"synthetic\",\"nome_completo\":\"synthetic\",\"razao_social\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_identificacao_alternativa();if(field.has_value())model.set_identificacao_alternativa(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadCliente getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadCliente";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayloadEmitente::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"identificacao_alternativa\":\"synthetic\",\"nome_completo\":\"synthetic\",\"razao_social\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_identificacao_alternativa();if(field.has_value())model.set_identificacao_alternativa(field.value());}
{auto field=model.get_logradouro();if(field.has_value())model.set_logradouro(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadEmitente getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadEmitente";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterIssueDcePayloadTransporte::from_json("{\"modalidade\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_transportadora();if(field.has_value())model.set_cnpj_transportadora(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadTransporte getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterIssueDcePayloadTransporte";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterCancelDcePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::EmitterCancelDcePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::EmitterCancelDcePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceDocumentedGroup282::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_dace();if(field.has_value())model.set_dace(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::DceDocumentedGroup282 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::DceDocumentedGroup282";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceDocumentedGroup1106::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::DceDocumentedGroup1106 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::DceDocumentedGroup1106";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceItemGroup::from_json("{\"descricao\":\"Synthetic item\",\"ncm\":\"00\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"10.00000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_dce_issuance::DceItemGroup getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_dce_issuance::DceItemGroup";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceItemGroup::from_json("{\"descricao\":\"Synthetic item\",\"ncm\":\"00\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"10.00000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_informacoes_adicionais();if(field.has_value())model.set_informacoes_adicionais(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-016 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-016";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceItemGroup::from_json("{\"descricao\":\"Synthetic item\",\"ncm\":\"123456\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"10.00000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-017 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-017";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::DceItemGroup::from_json("{\"descricao\":\"Synthetic item\",\"ncm\":\"00\",\"quantidade\":false,\"valor_unitario\":\"10.00000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-018 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-018";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterCancelDcePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-dce-lower getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-dce-lower";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterCancelDcePayload::from_json("{\"chave\":\"123456AB12CD34EF5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-dce-upper getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-dce-upper";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterCancelDcePayload::from_json("{\"chave\":\"123456ab#2cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-dce-bad-symbol getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-dce-bad-symbol";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_dce_issuance::EmitterCancelDcePayload::from_json("{\"chave\":\"123456ab12cd34ef560000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-dce-short getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-dce-short";return -1;}++checked;}
return checked;}
