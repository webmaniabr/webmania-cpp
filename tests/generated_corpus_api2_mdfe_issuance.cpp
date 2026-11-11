#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_mdfe_issuance(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseServiceCode::from_json("{\"codigo\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_codigo_tributacao();if(field.has_value())model.set_codigo_tributacao(field.value());}
{auto field=model.get_aliquota_sugerida();if(field.has_value())model.set_aliquota_sugerida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseServiceCode getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseServiceCode";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseServiceCodeAliquotaSugerida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseServiceCodeAliquotaSugerida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseServiceCodeAliquotaSugerida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[],\"autenticacao\":[],\"emissao\":[],\"funcoes\":[],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseProviderStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseProviderStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfcomServiceStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfcomServiceStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseFiscalResponseNfseSubstituida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponseNfseSubstituida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponseNfseSubstituida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseFiscalResponseInfoNfseItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponseInfoNfseItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponseInfoNfseItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfcomPaymentEvent::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_nfcom();if(field.has_value())model.set_protocolo_nfcom(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfcomPaymentEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfcomPaymentEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfcomPaymentEventPagamentoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nPag();if(field.has_value())model.set_nPag(field.value());}
{auto field=model.get_idTransacao();if(field.has_value())model.set_idTransacao(field.value());}
{auto field=model.get_tpMeioPgto();if(field.has_value())model.set_tpMeioPgto(field.value());}
{auto field=model.get_CNPJReceb();if(field.has_value())model.set_CNPJReceb(field.value());}
{auto field=model.get_CNPJBasePSP();if(field.has_value())model.set_CNPJBasePSP(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfcomPaymentEventPagamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfcomPaymentEventPagamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfcomFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"nfcom\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfcomFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfcomFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfcomFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfcomFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfcomFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfcomPaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfcomPaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfcomPaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::NfseManifestationRequest::from_json("{\"ambiente\":1,\"chave\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::NfseManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::NfseManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::CteFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::CteFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::CteFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::CteFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::CteFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::CteFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::CteFiscalResponseEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::CteFiscalResponseEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::CteFiscalResponseEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::DceFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::DceFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::DceFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::DceFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::DceFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::DceFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::FiscalEventResponse::from_json("{\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::FiscalEventResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::FiscalEventResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::FiscalEventResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::FiscalEventResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::FiscalEventResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::CtePaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::CtePaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::CtePaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::CtePaymentEventsEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::CtePaymentEventsEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::CtePaymentEventsEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayload::from_json("{\"ambiente\":\"1\",\"carregamento\":[{\"nome_municipio\":\"synthetic\"}],\"descarregamento\":[{\"documentos_fiscais\":[{\"chave\":\"00000000000000000000000000000000000000000000\"}],\"nome_municipio\":\"synthetic\"}],\"emitente\":\"1\",\"modalidade\":\"1\",\"peso_bruto\":\"synthetic\",\"uf_carregamento\":\"synthetic\",\"uf_descarregamento\":\"synthetic\",\"unidade\":\"01\",\"valor_carga\":\"synthetic\",\"rodoviario\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aereo();if(field.has_value())model.set_aereo(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_aquaviario();if(field.has_value())model.set_aquaviario(field.value());}
{auto field=model.get_carregamento();if(field.has_value())model.set_carregamento(field.value());}
{auto field=model.get_data_inicio_viagem();if(field.has_value())model.set_data_inicio_viagem(field.value());}
{auto field=model.get_descarregamento();if(field.has_value())model.set_descarregamento(field.value());}
{auto field=model.get_emitente();if(field.has_value())model.set_emitente(field.value());}
{auto field=model.get_ferroviario();if(field.has_value())model.set_ferroviario(field.value());}
{auto field=model.get_ind_canal_verde();if(field.has_value())model.set_ind_canal_verde(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_percurso();if(field.has_value())model.set_percurso(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_rodoviario();if(field.has_value())model.set_rodoviario(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
{auto field=model.get_transportador();if(field.has_value())model.set_transportador(field.value());}
{auto field=model.get_uf_carregamento();if(field.has_value())model.set_uf_carregamento(field.value());}
{auto field=model.get_uf_descarregamento();if(field.has_value())model.set_uf_descarregamento(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_valor_carga();if(field.has_value())model.set_valor_carga(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAereo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aerodromo_destino();if(field.has_value())model.set_aerodromo_destino(field.value());}
{auto field=model.get_aerodromo_embarque();if(field.has_value())model.set_aerodromo_embarque(field.value());}
{auto field=model.get_data_voo();if(field.has_value())model.set_data_voo(field.value());}
{auto field=model.get_matricula_aeronave();if(field.has_value())model.set_matricula_aeronave(field.value());}
{auto field=model.get_nacionalidade_aeronave();if(field.has_value())model.set_nacionalidade_aeronave(field.value());}
{auto field=model.get_numero_voo();if(field.has_value())model.set_numero_voo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAereo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAereo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_carga_vazia();if(field.has_value())model.set_carga_vazia(field.value());}
{auto field=model.get_codigo_embarcacao();if(field.has_value())model.set_codigo_embarcacao(field.value());}
{auto field=model.get_codigo_porto_destino();if(field.has_value())model.set_codigo_porto_destino(field.value());}
{auto field=model.get_codigo_porto_embarque();if(field.has_value())model.set_codigo_porto_embarque(field.value());}
{auto field=model.get_embarcacao_comboio();if(field.has_value())model.set_embarcacao_comboio(field.value());}
{auto field=model.get_irin();if(field.has_value())model.set_irin(field.value());}
{auto field=model.get_nome_embarcacao();if(field.has_value())model.set_nome_embarcacao(field.value());}
{auto field=model.get_numero_viagem();if(field.has_value())model.set_numero_viagem(field.value());}
{auto field=model.get_porto_transbordo();if(field.has_value())model.set_porto_transbordo(field.value());}
{auto field=model.get_terminal_carregamento();if(field.has_value())model.set_terminal_carregamento(field.value());}
{auto field=model.get_terminal_descarregamento();if(field.has_value())model.set_terminal_descarregamento(field.value());}
{auto field=model.get_tipo_embarcacao();if(field.has_value())model.set_tipo_embarcacao(field.value());}
{auto field=model.get_tipo_navegacao();if(field.has_value())model.set_tipo_navegacao(field.value());}
{auto field=model.get_transporte_vazio();if(field.has_value())model.set_transporte_vazio(field.value());}
{auto field=model.get_mmsi();if(field.has_value())model.set_mmsi(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioCargaVaziaItem::from_json("{\"identificador\":\"synthetic\",\"tipo_unidade\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificador();if(field.has_value())model.set_identificador(field.value());}
{auto field=model.get_tipo_unidade();if(field.has_value())model.set_tipo_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioCargaVaziaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioCargaVaziaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioEmbarcacaoComboioItem::from_json("{\"codigo\":\"synthetic\",\"identificador_balsa\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_identificador_balsa();if(field.has_value())model.set_identificador_balsa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioEmbarcacaoComboioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioEmbarcacaoComboioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTerminalCarregamentoItem::from_json("{\"codigo\":\"syntheti\",\"nome\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTerminalCarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTerminalCarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTerminalDescarregamentoItem::from_json("{\"codigo\":\"syntheti\",\"nome\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTerminalDescarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTerminalDescarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTransporteVazioItem::from_json("{\"identificador\":\"synthetic\",\"tipo_unidade\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificador();if(field.has_value())model.set_identificador(field.value());}
{auto field=model.get_tipo_unidade();if(field.has_value())model.set_tipo_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTransporteVazioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadAquaviarioTransporteVazioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadCarregamentoItem::from_json("{\"nome_municipio\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_nome_municipio();if(field.has_value())model.set_nome_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadCarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadCarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItem::from_json("{\"documentos_fiscais\":[{\"chave\":\"00000000000000000000000000000000000000000000\"}],\"nome_municipio\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_nome_municipio();if(field.has_value())model.set_nome_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItem::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_codigo_barra();if(field.has_value())model.set_codigo_barra(field.value());}
{auto field=model.get_entrega_parcial();if(field.has_value())model.set_entrega_parcial(field.value());}
{auto field=model.get_indicador_reentrega();if(field.has_value())model.set_indicador_reentrega(field.value());}
{auto field=model.get_periculosidade();if(field.has_value())model.set_periculosidade(field.value());}
{auto field=model.get_unidade_transporte();if(field.has_value())model.set_unidade_transporte(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemEntregaParcial::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_parcial();if(field.has_value())model.set_quantidade_parcial(field.value());}
{auto field=model.get_quantidade_total();if(field.has_value())model.set_quantidade_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemEntregaParcial getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemEntregaParcial";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemPericulosidadeItem::from_json("{\"numero_onu\":\"0000\",\"quantidade_total\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classe_risco();if(field.has_value())model.set_classe_risco(field.value());}
{auto field=model.get_grupo_embalagem();if(field.has_value())model.set_grupo_embalagem(field.value());}
{auto field=model.get_nome_embarque();if(field.has_value())model.set_nome_embarque(field.value());}
{auto field=model.get_numero_onu();if(field.has_value())model.set_numero_onu(field.value());}
{auto field=model.get_quantidade_total();if(field.has_value())model.set_quantidade_total(field.value());}
{auto field=model.get_quantidade_volumes();if(field.has_value())model.set_quantidade_volumes(field.value());}
{auto field=model.get_entrega_parcial();if(field.has_value())model.set_entrega_parcial(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemPericulosidadeItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemPericulosidadeItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemUnidadeTransporteItem::from_json("{\"identificacao\":\"A\",\"tipo\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_unidade_carga();if(field.has_value())model.set_unidade_carga(field.value());}
{auto field=model.get_quantidade_rateada();if(field.has_value())model.set_quantidade_rateada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemUnidadeTransporteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemUnidadeTransporteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemUnidadeTransporteItemUnidadeCargaItem::from_json("{\"id_carga\":\"A\",\"tipo_carga\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_id_carga();if(field.has_value())model.set_id_carga(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_tipo_carga();if(field.has_value())model.set_tipo_carga(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_quantidade_rateada();if(field.has_value())model.set_quantidade_rateada(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemUnidadeTransporteItemUnidadeCargaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadDescarregamentoItemDocumentosFiscaisItemUnidadeTransporteItemUnidadeCargaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_trem();if(field.has_value())model.set_trem(field.value());}
{auto field=model.get_vagoes();if(field.has_value())model.set_vagoes(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviarioTrem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_liberacao();if(field.has_value())model.set_data_liberacao(field.value());}
{auto field=model.get_destino();if(field.has_value())model.set_destino(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_prefixo();if(field.has_value())model.set_prefixo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviarioTrem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviarioTrem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviarioVagoesItem::from_json("{\"numero\":\"0\",\"peso_bc\":\"synthet\",\"peso_real\":\"synthet\",\"serie\":\"syn\",\"tonelada_util\":\"synthet\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_peso_bc();if(field.has_value())model.set_peso_bc(field.value());}
{auto field=model.get_peso_real();if(field.has_value())model.set_peso_real(field.value());}
{auto field=model.get_sequencia_vagao();if(field.has_value())model.set_sequencia_vagao(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_tipo_vagao();if(field.has_value())model.set_tipo_vagao(field.value());}
{auto field=model.get_tonelada_util();if(field.has_value())model.set_tonelada_util(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviarioVagoesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadFerroviarioVagoesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominante::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_lotacao();if(field.has_value())model.set_lotacao(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_tipo_carga();if(field.has_value())model.set_tipo_carga(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominante getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominante";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_carregamento();if(field.has_value())model.set_carregamento(field.value());}
{auto field=model.get_descarregamento();if(field.has_value())model.set_descarregamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacaoCarregamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacaoCarregamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacaoCarregamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacaoDescarregamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacaoDescarregamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadProdutoPredominanteLotacaoDescarregamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ciot();if(field.has_value())model.set_ciot(field.value());}
{auto field=model.get_condutor();if(field.has_value())model.set_condutor(field.value());}
{auto field=model.get_contratante();if(field.has_value())model.set_contratante(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_vale_pedagio();if(field.has_value())model.set_vale_pedagio(field.value());}
{auto field=model.get_veiculo_reboque();if(field.has_value())model.set_veiculo_reboque(field.value());}
{auto field=model.get_veiculo_tracao();if(field.has_value())model.set_veiculo_tracao(field.value());}
{auto field=model.get_combinacao_veicular();if(field.has_value())model.set_combinacao_veicular(field.value());}
{auto field=model.get_pagamento_frete();if(field.has_value())model.set_pagamento_frete(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioCiotItem::from_json("{\"codigo_ciot\":\"000000000000\",\"cpf_responsavel\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_codigo_ciot();if(field.has_value())model.set_codigo_ciot(field.value());}
{auto field=model.get_cpf_responsavel();if(field.has_value())model.set_cpf_responsavel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioCiotItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioCiotItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioCondutorItem::from_json("{\"cpf\":\"synthetic\",\"nome\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioCondutorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioCondutorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioContratanteItem::from_json("{\"cpf\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioContratanteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioContratanteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioValePedagioItem::from_json("{\"cnpj_fornecedor\":\"00000000000000\",\"comprovante\":\"1\",\"valor\":\"1\",\"cpf_responsavel\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_fornecedor();if(field.has_value())model.set_cnpj_fornecedor(field.value());}
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_comprovante();if(field.has_value())model.set_comprovante(field.value());}
{auto field=model.get_cpf_responsavel();if(field.has_value())model.set_cpf_responsavel(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioValePedagioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioValePedagioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoReboqueItem::from_json("{\"capacidade_kg\":\"1\",\"placa\":\"AAA0000\",\"tara\":\"1\",\"tipo_carroceria\":\"00\",\"uf_licenciamento\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_capacidade_kg();if(field.has_value())model.set_capacidade_kg(field.value());}
{auto field=model.get_capacidade_m3();if(field.has_value())model.set_capacidade_m3(field.value());}
{auto field=model.get_codigo_agendamento_porto();if(field.has_value())model.set_codigo_agendamento_porto(field.value());}
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_proprietario();if(field.has_value())model.set_proprietario(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
{auto field=model.get_tara();if(field.has_value())model.set_tara(field.value());}
{auto field=model.get_tipo_carroceria();if(field.has_value())model.set_tipo_carroceria(field.value());}
{auto field=model.get_uf_licenciamento();if(field.has_value())model.set_uf_licenciamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoReboqueItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoReboqueItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoReboqueItemProprietario::from_json("{\"cpf\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_tipo_proprietario();if(field.has_value())model.set_tipo_proprietario(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoReboqueItemProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoReboqueItemProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoTracao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_capacidade_kg();if(field.has_value())model.set_capacidade_kg(field.value());}
{auto field=model.get_capacidade_m3();if(field.has_value())model.set_capacidade_m3(field.value());}
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_proprietario();if(field.has_value())model.set_proprietario(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
{auto field=model.get_tara();if(field.has_value())model.set_tara(field.value());}
{auto field=model.get_tipo_carroceria();if(field.has_value())model.set_tipo_carroceria(field.value());}
{auto field=model.get_tipo_rodado();if(field.has_value())model.set_tipo_rodado(field.value());}
{auto field=model.get_uf_licenciamento();if(field.has_value())model.set_uf_licenciamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoTracao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoTracao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoTracaoProprietario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_tipo_proprietario();if(field.has_value())model.set_tipo_proprietario(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoTracaoProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadRodoviarioVeiculoTracaoProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroup::from_json("{\"cpf\":\"00000000000\",\"valor_contrato\":\"100.00\",\"forma_pagamento\":\"0\",\"operacao_alto_desempenho\":false,\"componentes_pagamento_frete\":[{\"tipo_componente\":\"01\",\"valor_componente\":\"100.00\"}],\"informacoes_bancarias\":{\"tipo_informacao_bancaria\":\"3\",\"pix\":\"synthetic@example.invalid\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_valor_contrato();if(field.has_value())model.set_valor_contrato(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_operacao_alto_desempenho();if(field.has_value())model.set_operacao_alto_desempenho(field.value());}
{auto field=model.get_valor_adiantamento();if(field.has_value())model.set_valor_adiantamento(field.value());}
{auto field=model.get_antecipar_adiantamento();if(field.has_value())model.set_antecipar_adiantamento(field.value());}
{auto field=model.get_permissao_antecipacao_parcela();if(field.has_value())model.set_permissao_antecipacao_parcela(field.value());}
{auto field=model.get_componentes_pagamento_frete();if(field.has_value())model.set_componentes_pagamento_frete(field.value());}
{auto field=model.get_informacoes_bancarias();if(field.has_value())model.set_informacoes_bancarias(field.value());}
{auto field=model.get_informacoes_pagamento_prazo();if(field.has_value())model.set_informacoes_pagamento_prazo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroup getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroup";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroupComponentesPagamentoFreteItem::from_json("{\"tipo_componente\":\"01\",\"valor_componente\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_componente();if(field.has_value())model.set_tipo_componente(field.value());}
{auto field=model.get_valor_componente();if(field.has_value())model.set_valor_componente(field.value());}
{auto field=model.get_descricao_componente();if(field.has_value())model.set_descricao_componente(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroupComponentesPagamentoFreteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroupComponentesPagamentoFreteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroupInformacoesBancarias::from_json("{\"tipo_informacao_bancaria\":\"3\",\"pix\":\"synthetic@example.invalid\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_informacao_bancaria();if(field.has_value())model.set_tipo_informacao_bancaria(field.value());}
{auto field=model.get_numero_banco();if(field.has_value())model.set_numero_banco(field.value());}
{auto field=model.get_numero_agencia();if(field.has_value())model.set_numero_agencia(field.value());}
{auto field=model.get_cnpj_ipef();if(field.has_value())model.set_cnpj_ipef(field.value());}
{auto field=model.get_pix();if(field.has_value())model.set_pix(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroupInformacoesBancarias getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroupInformacoesBancarias";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroupInformacoesPagamentoPrazoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_vencimento_parcela();if(field.has_value())model.set_data_vencimento_parcela(field.value());}
{auto field=model.get_valor_parcela();if(field.has_value())model.set_valor_parcela(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroupInformacoesPagamentoPrazoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeFreightPaymentGroupInformacoesPagamentoPrazoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItem::from_json("{\"responsavel\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero_apolice();if(field.has_value())model.set_numero_apolice(field.value());}
{auto field=model.get_numero_averbacao();if(field.has_value())model.set_numero_averbacao(field.value());}
{auto field=model.get_responsavel();if(field.has_value())model.set_responsavel(field.value());}
{auto field=model.get_seguradora();if(field.has_value())model.set_seguradora(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItemResponsavel::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_tipo_responsavel();if(field.has_value())model.set_tipo_responsavel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItemResponsavel getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItemResponsavel";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItemSeguradora::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_nome_seguradora();if(field.has_value())model.set_nome_seguradora(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItemSeguradora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterIssueMdfePayloadSeguroItemSeguradora";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterCloseMdfePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"codigo_municipio\":\"0000000\",\"municipio\":\"synthetic\",\"uf\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterCloseMdfePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterCloseMdfePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterCancelMdfePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterCancelMdfePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterCancelMdfePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterAddMdfeConductorPayload::from_json("{\"cpf\":\"synthetic\",\"nome\":\"synthetic\",\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::EmitterAddMdfeConductorPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::EmitterAddMdfeConductorPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeDocumentedGroup465::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_damdfe();if(field.has_value())model.set_damdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup465 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup465";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeDocumentedGroup3210::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup3210 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup3210";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeDocumentedGroup3297::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup3297 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup3297";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeDocumentedGroup3362::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup3362 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_mdfe_issuance::MdfeDocumentedGroup3362";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroup::from_json("{\"cpf\":\"00000000000\",\"valor_contrato\":\"100.00\",\"forma_pagamento\":\"0\",\"operacao_alto_desempenho\":false,\"componentes_pagamento_frete\":[{\"tipo_componente\":\"01\",\"valor_componente\":\"100.00\"}],\"informacoes_bancarias\":{\"tipo_informacao_bancaria\":\"3\",\"pix\":\"synthetic@example.invalid\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_id_estrangeiro();if(field.has_value())model.set_id_estrangeiro(field.value());}
{auto field=model.get_valor_contrato();if(field.has_value())model.set_valor_contrato(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_operacao_alto_desempenho();if(field.has_value())model.set_operacao_alto_desempenho(field.value());}
{auto field=model.get_valor_adiantamento();if(field.has_value())model.set_valor_adiantamento(field.value());}
{auto field=model.get_antecipar_adiantamento();if(field.has_value())model.set_antecipar_adiantamento(field.value());}
{auto field=model.get_permissao_antecipacao_parcela();if(field.has_value())model.set_permissao_antecipacao_parcela(field.value());}
{auto field=model.get_componentes_pagamento_frete();if(field.has_value())model.set_componentes_pagamento_frete(field.value());}
{auto field=model.get_informacoes_bancarias();if(field.has_value())model.set_informacoes_bancarias(field.value());}
{auto field=model.get_informacoes_pagamento_prazo();if(field.has_value())model.set_informacoes_pagamento_prazo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-009 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-009";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroup::from_json("[]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-010 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-010";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::MdfeFreightPaymentGroup::from_json("{\"cpf\":\"00000000000\",\"valor_contrato\":\"100.00\",\"forma_pagamento\":\"0\",\"operacao_alto_desempenho\":\"yes\",\"componentes_pagamento_frete\":[{\"tipo_componente\":\"01\",\"valor_componente\":\"100.00\"}],\"informacoes_bancarias\":{\"tipo_informacao_bancaria\":\"3\",\"pix\":\"synthetic@example.invalid\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-011 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-011";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterCancelMdfePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-mdfe-lower getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-mdfe-lower";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterCancelMdfePayload::from_json("{\"chave\":\"123456AB12CD34EF5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-mdfe-upper getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-mdfe-upper";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterCancelMdfePayload::from_json("{\"chave\":\"123456ab#2cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-mdfe-bad-symbol getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-mdfe-bad-symbol";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_mdfe_issuance::EmitterCancelMdfePayload::from_json("{\"chave\":\"123456ab12cd34ef560000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-mdfe-short getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-mdfe-short";return -1;}++checked;}
return checked;}
