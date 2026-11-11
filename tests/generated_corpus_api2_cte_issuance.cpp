#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_cte_issuance(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseServiceCode::from_json("{\"codigo\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_codigo_tributacao();if(field.has_value())model.set_codigo_tributacao(field.value());}
{auto field=model.get_aliquota_sugerida();if(field.has_value())model.set_aliquota_sugerida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseServiceCode getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseServiceCode";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseServiceCodeAliquotaSugerida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseServiceCodeAliquotaSugerida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseServiceCodeAliquotaSugerida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[],\"autenticacao\":[],\"emissao\":[],\"funcoes\":[],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseProviderStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseProviderStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfcomServiceStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfcomServiceStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseFiscalResponseNfseSubstituida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseFiscalResponseNfseSubstituida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseFiscalResponseNfseSubstituida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseFiscalResponseInfoNfseItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseFiscalResponseInfoNfseItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseFiscalResponseInfoNfseItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfcomPaymentEvent::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_nfcom();if(field.has_value())model.set_protocolo_nfcom(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfcomPaymentEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfcomPaymentEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfcomPaymentEventPagamentoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nPag();if(field.has_value())model.set_nPag(field.value());}
{auto field=model.get_idTransacao();if(field.has_value())model.set_idTransacao(field.value());}
{auto field=model.get_tpMeioPgto();if(field.has_value())model.set_tpMeioPgto(field.value());}
{auto field=model.get_CNPJReceb();if(field.has_value())model.set_CNPJReceb(field.value());}
{auto field=model.get_CNPJBasePSP();if(field.has_value())model.set_CNPJBasePSP(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfcomPaymentEventPagamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfcomPaymentEventPagamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfcomFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"nfcom\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfcomFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfcomFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfcomFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfcomFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfcomFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfcomPaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfcomPaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfcomPaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::NfseManifestationRequest::from_json("{\"ambiente\":1,\"chave\":\"syntheticaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::NfseManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::NfseManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteFiscalResponseEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteFiscalResponseEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteFiscalResponseEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::MdfeFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::MdfeFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::MdfeFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::MdfeFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::MdfeFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::MdfeFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::DceFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::DceFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::DceFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::DceFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::DceFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::DceFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::FiscalEventResponse::from_json("{\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::FiscalEventResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::FiscalEventResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::FiscalEventResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::FiscalEventResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::FiscalEventResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CtePaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CtePaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CtePaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CtePaymentEventsEventosPagamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CtePaymentEventsEventosPagamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CtePaymentEventsEventosPagamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte_os\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"numero\":\"001\",\"data_emissao\":\"2026-01-01\",\"valor_documento\":\"100.00\"}],\"rodoviario\":{\"taf_cte_os\":\"000000000000\",\"tipo_fretamento\":\"2\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aereo();if(field.has_value())model.set_aereo(field.value());}
{auto field=model.get_alteracao_tomador();if(field.has_value())model.set_alteracao_tomador(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_aquaviario();if(field.has_value())model.set_aquaviario(field.value());}
{auto field=model.get_caracteristica_servico();if(field.has_value())model.set_caracteristica_servico(field.value());}
{auto field=model.get_caracteristica_transporte();if(field.has_value())model.set_caracteristica_transporte(field.value());}
{auto field=model.get_carga();if(field.has_value())model.set_carga(field.value());}
{auto field=model.get_cobranca();if(field.has_value())model.set_cobranca(field.value());}
{auto field=model.get_contribuicao_tomador();if(field.has_value())model.set_contribuicao_tomador(field.value());}
{auto field=model.get_cte_referenciado();if(field.has_value())model.set_cte_referenciado(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
{auto field=model.get_detalhes_retirada();if(field.has_value())model.set_detalhes_retirada(field.value());}
{auto field=model.get_documentos_anteriores();if(field.has_value())model.set_documentos_anteriores(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_dutoviario();if(field.has_value())model.set_dutoviario(field.value());}
{auto field=model.get_entrega();if(field.has_value())model.set_entrega(field.value());}
{auto field=model.get_expedidor();if(field.has_value())model.set_expedidor(field.value());}
{auto field=model.get_ferroviario();if(field.has_value())model.set_ferroviario(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_globalizado();if(field.has_value())model.set_globalizado(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_tomador();if(field.has_value())model.set_indicador_tomador(field.value());}
{auto field=model.get_informacao_globalizado();if(field.has_value())model.set_informacao_globalizado(field.value());}
{auto field=model.get_local_inicio_prestacao();if(field.has_value())model.set_local_inicio_prestacao(field.value());}
{auto field=model.get_local_termino_prestacao();if(field.has_value())model.set_local_termino_prestacao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_multimodal();if(field.has_value())model.set_multimodal(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_observacoes_contribuinte();if(field.has_value())model.set_observacoes_contribuinte(field.value());}
{auto field=model.get_observacoes_fisco();if(field.has_value())model.set_observacoes_fisco(field.value());}
{auto field=model.get_observacoes_gerais();if(field.has_value())model.set_observacoes_gerais(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pagamentos_vinculados();if(field.has_value())model.set_pagamentos_vinculados(field.value());}
{auto field=model.get_recebedor();if(field.has_value())model.set_recebedor(field.value());}
{auto field=model.get_remetente();if(field.has_value())model.set_remetente(field.value());}
{auto field=model.get_rodoviario();if(field.has_value())model.set_rodoviario(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_veiculos_novos();if(field.has_value())model.set_veiculos_novos(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nfe_xml();if(field.has_value())model.set_nfe_xml(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAereo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_natureza_carga();if(field.has_value())model.set_natureza_carga(field.value());}
{auto field=model.get_numero_minuta();if(field.has_value())model.set_numero_minuta(field.value());}
{auto field=model.get_numero_oca();if(field.has_value())model.set_numero_oca(field.value());}
{auto field=model.get_previsao_entrega();if(field.has_value())model.set_previsao_entrega(field.value());}
{auto field=model.get_produtos_perigosos();if(field.has_value())model.set_produtos_perigosos(field.value());}
{auto field=model.get_tarifa();if(field.has_value())model.set_tarifa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAereoNaturezaCarga::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_dimensoes();if(field.has_value())model.set_dimensoes(field.value());}
{auto field=model.get_informacoes_manuseio();if(field.has_value())model.set_informacoes_manuseio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereoNaturezaCarga getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereoNaturezaCarga";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAereoProdutosPerigososItem::from_json("{\"descricao_volumes\":\"synthetic\",\"numero_onu\":\"synt\",\"quantidade_total\":0,\"unidade_medida\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao_volumes();if(field.has_value())model.set_descricao_volumes(field.value());}
{auto field=model.get_numero_onu();if(field.has_value())model.set_numero_onu(field.value());}
{auto field=model.get_quantidade_total();if(field.has_value())model.set_quantidade_total(field.value());}
{auto field=model.get_unidade_medida();if(field.has_value())model.set_unidade_medida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereoProdutosPerigososItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereoProdutosPerigososItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAereoTarifa::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classe();if(field.has_value())model.set_classe(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereoTarifa getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAereoTarifa";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAquaviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_adicional_frete();if(field.has_value())model.set_adicional_frete(field.value());}
{auto field=model.get_balsas();if(field.has_value())model.set_balsas(field.value());}
{auto field=model.get_containers();if(field.has_value())model.set_containers(field.value());}
{auto field=model.get_direcao();if(field.has_value())model.set_direcao(field.value());}
{auto field=model.get_identificacao_navio();if(field.has_value())model.set_identificacao_navio(field.value());}
{auto field=model.get_irin_navio();if(field.has_value())model.set_irin_navio(field.value());}
{auto field=model.get_numero_viagem();if(field.has_value())model.set_numero_viagem(field.value());}
{auto field=model.get_tipo_navegacao();if(field.has_value())model.set_tipo_navegacao(field.value());}
{auto field=model.get_valor_prestacao();if(field.has_value())model.set_valor_prestacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAquaviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAquaviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAquaviarioContainersItem::from_json("{\"identificacao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAquaviarioContainersItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAquaviarioContainersItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadAquaviarioContainersItemDocumentosItem::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_medida_rateada();if(field.has_value())model.set_medida_rateada(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAquaviarioContainersItemDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadAquaviarioContainersItemDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCarga::from_json("{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"quantidade\":\"1.0000\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_caracteristicas();if(field.has_value())model.set_caracteristicas(field.value());}
{auto field=model.get_fluxo();if(field.has_value())model.set_fluxo(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_quantidades();if(field.has_value())model.set_quantidades(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
{auto field=model.get_valor_averbacao();if(field.has_value())model.set_valor_averbacao(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCarga getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCarga";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCargaFluxo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_destino();if(field.has_value())model.set_destino(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_passagens();if(field.has_value())model.set_passagens(field.value());}
{auto field=model.get_rota();if(field.has_value())model.set_rota(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCargaFluxo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCargaFluxo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCargaQuantidadesItem::from_json("{\"quantidade\":\"1.0000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_tipo_medida();if(field.has_value())model.set_tipo_medida(field.value());}
{auto field=model.get_unidade_medida();if(field.has_value())model.set_unidade_medida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCargaQuantidadesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCargaQuantidadesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCargaSeguro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nome_razao_seguradora();if(field.has_value())model.set_nome_razao_seguradora(field.value());}
{auto field=model.get_numero_apolice();if(field.has_value())model.set_numero_apolice(field.value());}
{auto field=model.get_responsavel();if(field.has_value())model.set_responsavel(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCargaSeguro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCargaSeguro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCobranca::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_duplicatas();if(field.has_value())model.set_duplicatas(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCobranca getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCobranca";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCobrancaDuplicatasItem::from_json("{\"valor\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_vencimento();if(field.has_value())model.set_data_vencimento(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCobrancaDuplicatasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCobrancaDuplicatasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadCobrancaFatura::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_valor_desconto();if(field.has_value())model.set_valor_desconto(field.value());}
{auto field=model.get_valor_liquido();if(field.has_value())model.set_valor_liquido(field.value());}
{auto field=model.get_valor_original();if(field.has_value())model.set_valor_original(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCobrancaFatura getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadCobrancaFatura";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDestinatario::from_json("{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_isuf();if(field.has_value())model.set_isuf(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDestinatario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDestinatario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_emissor();if(field.has_value())model.set_emissor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItemDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItemDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItemDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItemEmissor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItemEmissor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosAnterioresItemEmissor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItem::from_json("{\"numero\":\"001\",\"data_emissao\":\"2026-01-01\",\"valor_documento\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_base_calculo_st();if(field.has_value())model.set_base_calculo_st(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_icms_st();if(field.has_value())model.set_icms_st(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_numero_pedido();if(field.has_value())model.set_numero_pedido(field.value());}
{auto field=model.get_numero_romaneio();if(field.has_value())model.set_numero_romaneio(field.value());}
{auto field=model.get_peso();if(field.has_value())model.set_peso(field.value());}
{auto field=model.get_pin();if(field.has_value())model.set_pin(field.value());}
{auto field=model.get_previsao_entrega();if(field.has_value())model.set_previsao_entrega(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_unidades_carga();if(field.has_value())model.set_unidades_carga(field.value());}
{auto field=model.get_unidades_transporte();if(field.has_value())model.set_unidades_transporte(field.value());}
{auto field=model.get_valor_produtos();if(field.has_value())model.set_valor_produtos(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_CFOP();if(field.has_value())model.set_CFOP(field.value());}
{auto field=model.get_subserie();if(field.has_value())model.set_subserie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesCargaItem::from_json("{\"identificacao\":\"synthetic\",\"tipo\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_quantidade_rateada();if(field.has_value())model.set_quantidade_rateada(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesCargaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesCargaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesTransporteItem::from_json("{\"identificacao\":\"synthetic\",\"tipo\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_quantidade_rateada();if(field.has_value())model.set_quantidade_rateada(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_unidades_carga();if(field.has_value())model.set_unidades_carga(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesTransporteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesTransporteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesTransporteItemUnidadesCargaItem::from_json("{\"identificacao\":\"synthetic\",\"tipo\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_quantidade_rateada();if(field.has_value())model.set_quantidade_rateada(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesTransporteItemUnidadesCargaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDocumentosFiscaisItemUnidadesTransporteItemUnidadesCargaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadDutoviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_inicio_prestacao();if(field.has_value())model.set_data_inicio_prestacao(field.value());}
{auto field=model.get_data_termino_prestacao();if(field.has_value())model.set_data_termino_prestacao(field.value());}
{auto field=model.get_valor_tarifa();if(field.has_value())model.set_valor_tarifa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDutoviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadDutoviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadEntrega::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_data_inicial();if(field.has_value())model.set_data_inicial(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadEntrega getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadEntrega";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadExpedidor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadExpedidor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadExpedidor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadFerroviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cte_origem();if(field.has_value())model.set_cte_origem(field.value());}
{auto field=model.get_ferrovias();if(field.has_value())model.set_ferrovias(field.value());}
{auto field=model.get_fluxo();if(field.has_value())model.set_fluxo(field.value());}
{auto field=model.get_responsavel_emissao();if(field.has_value())model.set_responsavel_emissao(field.value());}
{auto field=model.get_responsavel_faturamento();if(field.has_value())model.set_responsavel_faturamento(field.value());}
{auto field=model.get_tipo_trafego();if(field.has_value())model.set_tipo_trafego(field.value());}
{auto field=model.get_valor_frete();if(field.has_value())model.set_valor_frete(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadFerroviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadFerroviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadFerroviarioFerroviasItem::from_json("{\"cidade\":\"synthetic\",\"cnpj\":\"synthetic\",\"endereco\":\"synthetic\",\"nome_razao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadFerroviarioFerroviasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadFerroviarioFerroviasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostos::from_json("{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_beneficio_fiscal();if(field.has_value())model.set_beneficio_fiscal(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_csll();if(field.has_value())model.set_csll(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_inss();if(field.has_value())model.set_inss(field.value());}
{auto field=model.get_ir();if(field.has_value())model.set_ir(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIcms::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_st_retido();if(field.has_value())model.set_aliquota_st_retido(field.value());}
{auto field=model.get_bc_st_retido();if(field.has_value())model.set_bc_st_retido(field.value());}
{auto field=model.get_credito_outorgado();if(field.has_value())model.set_credito_outorgado(field.value());}
{auto field=model.get_devido_origem();if(field.has_value())model.set_devido_origem(field.value());}
{auto field=model.get_partilha();if(field.has_value())model.set_partilha(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIcmsPartilha::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_fcp_uf_destino();if(field.has_value())model.set_aliquota_fcp_uf_destino(field.value());}
{auto field=model.get_aliquota_icms_interestadual();if(field.has_value())model.set_aliquota_icms_interestadual(field.value());}
{auto field=model.get_aliquota_icms_uf_destino();if(field.has_value())model.set_aliquota_icms_uf_destino(field.value());}
{auto field=model.get_aliquota_icms_uf_origem();if(field.has_value())model.set_aliquota_icms_uf_origem(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_valor_icms_uf_remetente();if(field.has_value())model.set_valor_icms_uf_remetente(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIcmsPartilha getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIcmsPartilha";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
{auto field=model.get_indicador_doacao();if(field.has_value())model.set_indicador_doacao(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCompraGovernamentalVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_ente();if(field.has_value())model.set_ente(field.value());}
{auto field=model.get_referencias_dfe();if(field.has_value())model.set_referencias_dfe(field.value());}
{auto field=model.get_tipo_operacao();if(field.has_value())model.set_tipo_operacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCompraGovernamentalVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCompraGovernamentalVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsEstornoCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadLocalInicioPrestacao::from_json("{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cod_ibge();if(field.has_value())model.set_cod_ibge(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadLocalInicioPrestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadLocalInicioPrestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadLocalTerminoPrestacao::from_json("{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cod_ibge();if(field.has_value())model.set_cod_ibge(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadLocalTerminoPrestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadLocalTerminoPrestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadMultimodal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cotm();if(field.has_value())model.set_cotm(field.value());}
{auto field=model.get_negociavel();if(field.has_value())model.set_negociavel(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadMultimodal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadMultimodal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadMultimodalSeguro::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_seguradora();if(field.has_value())model.set_cnpj_seguradora(field.value());}
{auto field=model.get_nome_razao_seguradora();if(field.has_value())model.set_nome_razao_seguradora(field.value());}
{auto field=model.get_numero_apolice();if(field.has_value())model.set_numero_apolice(field.value());}
{auto field=model.get_numero_averbacao();if(field.has_value())model.set_numero_averbacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadMultimodalSeguro getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadMultimodalSeguro";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadObservacoesContribuinteItem::from_json("{\"descricao\":\"synthetic\",\"identificacao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadObservacoesContribuinteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadObservacoesContribuinteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadObservacoesFiscoItem::from_json("{\"descricao\":\"synthetic\",\"identificacao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_identificacao();if(field.has_value())model.set_identificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadObservacoesFiscoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadObservacoesFiscoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadPagamentosVinculadosItem::from_json("{\"cnpj_base_psp\":\"AAAAAAAA\",\"cnpj_recebedor\":\"AAAAAAAAAAAA00\",\"id_transacao\":\"synthetic\",\"n_pag\":1,\"tp_meio_pagamento\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_base_psp();if(field.has_value())model.set_cnpj_base_psp(field.value());}
{auto field=model.get_cnpj_recebedor();if(field.has_value())model.set_cnpj_recebedor(field.value());}
{auto field=model.get_id_transacao();if(field.has_value())model.set_id_transacao(field.value());}
{auto field=model.get_n_pag();if(field.has_value())model.set_n_pag(field.value());}
{auto field=model.get_tp_meio_pagamento();if(field.has_value())model.set_tp_meio_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadPagamentosVinculadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadPagamentosVinculadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRecebedor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRecebedor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRecebedor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRemetente::from_json("{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRemetente getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRemetente";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRodoviario::from_json("{\"taf_cte_os\":\"000000000000\",\"tipo_fretamento\":\"2\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_viagem();if(field.has_value())model.set_data_viagem(field.value());}
{auto field=model.get_ordens_coleta();if(field.has_value())model.set_ordens_coleta(field.value());}
{auto field=model.get_registro_estadual_cte_os();if(field.has_value())model.set_registro_estadual_cte_os(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_taf_cte_os();if(field.has_value())model.set_taf_cte_os(field.value());}
{auto field=model.get_tipo_fretamento();if(field.has_value())model.set_tipo_fretamento(field.value());}
{auto field=model.get_veiculo();if(field.has_value())model.set_veiculo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRodoviarioOrdensColetaItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_emissor();if(field.has_value())model.set_emissor(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioOrdensColetaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioOrdensColetaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRodoviarioOrdensColetaItemEmissor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioOrdensColetaItemEmissor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioOrdensColetaItemEmissor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRodoviarioVeiculo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_proprietario();if(field.has_value())model.set_proprietario(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
{auto field=model.get_uf_licenciamento();if(field.has_value())model.set_uf_licenciamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioVeiculo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioVeiculo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadRodoviarioVeiculoProprietario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_registro_estadual();if(field.has_value())model.set_registro_estadual(field.value());}
{auto field=model.get_taf();if(field.has_value())model.set_taf(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioVeiculoProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadRodoviarioVeiculoProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadServico::from_json("{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_componentes();if(field.has_value())model.set_componentes(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadTomador::from_json("{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_codigo_pais();if(field.has_value())model.set_codigo_pais(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_nome_razao();if(field.has_value())model.set_nome_razao(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadTomador getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadTomador";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayloadVeiculosNovosItem::from_json("{\"chassi\":\"syntheticaaaaaaaa\",\"cor\":\"synt\",\"cor_descricao\":\"synthetic\",\"marca_modelo\":\"synthe\",\"valor_frete_unitario\":0,\"valor_unitario\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chassi();if(field.has_value())model.set_chassi(field.value());}
{auto field=model.get_cor();if(field.has_value())model.set_cor(field.value());}
{auto field=model.get_cor_descricao();if(field.has_value())model.set_cor_descricao(field.value());}
{auto field=model.get_marca_modelo();if(field.has_value())model.set_marca_modelo(field.value());}
{auto field=model.get_valor_frete_unitario();if(field.has_value())model.set_valor_frete_unitario(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadVeiculosNovosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueCtePayloadVeiculosNovosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueSimplifiedCtePayload::from_json("{\"ambiente\":\"1\",\"modelo\":\"cte\",\"nfe_xml\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_nfe_xml();if(field.has_value())model.set_nfe_xml(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterIssueSimplifiedCtePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterIssueSimplifiedCtePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"justificativa\":\"Synthetic cancellation justification\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterCancelCtePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterCancelCtePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCorrectCtePayload::from_json("{\"alteracoes\":[{\"campo\":\"synthetic\",\"grupo\":\"synthetic\",\"valor\":\"synthetic\"}],\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterCorrectCtePayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterCorrectCtePayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCorrectCtePayloadAlteracoesItem::from_json("{\"campo\":\"synthetic\",\"grupo\":\"synthetic\",\"valor\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_grupo();if(field.has_value())model.set_grupo(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterCorrectCtePayloadAlteracoesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterCorrectCtePayloadAlteracoesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterConfirmCteDeliveryPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"notas_fiscais\":[\"123456ab12cd34ef5600000000000000000000000000\"],\"comprovante\":\"SYNTHETIC_IMAGE_PLACEHOLDER\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_comprovante();if(field.has_value())model.set_comprovante(field.value());}
{auto field=model.get_data_hora();if(field.has_value())model.set_data_hora(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_informacoes();if(field.has_value())model.set_informacoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_notas_fiscais();if(field.has_value())model.set_notas_fiscais(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterConfirmCteDeliveryPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterConfirmCteDeliveryPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCteDeliveryPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"protocolo\":\"synthetic\",\"sequencia\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterCancelCteDeliveryPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterCancelCteDeliveryPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterLinkCtePaymentPayload::from_json("{\"pagamento\":{\"cnpj_base_psp\":\"00000000\",\"cnpj_recebedor\":\"00000000000000\",\"id_transacao\":\"synthetic\",\"n_pag\":1,\"tp_meio_pagamento\":\"synthetic\"},\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterLinkCtePaymentPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterLinkCtePaymentPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterLinkCtePaymentPayloadPagamento::from_json("{\"cnpj_base_psp\":\"00000000\",\"cnpj_recebedor\":\"00000000000000\",\"id_transacao\":\"synthetic\",\"n_pag\":1,\"tp_meio_pagamento\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_base_psp();if(field.has_value())model.set_cnpj_base_psp(field.value());}
{auto field=model.get_cnpj_recebedor();if(field.has_value())model.set_cnpj_recebedor(field.value());}
{auto field=model.get_id_transacao();if(field.has_value())model.set_id_transacao(field.value());}
{auto field=model.get_n_pag();if(field.has_value())model.set_n_pag(field.value());}
{auto field=model.get_tp_meio_pagamento();if(field.has_value())model.set_tp_meio_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterLinkCtePaymentPayloadPagamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterLinkCtePaymentPayloadPagamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePaymentLinkPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"protocolo_vinculacao\":\"000000000000000\",\"sequencia_vinculacao\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_sequencia_vinculacao();if(field.has_value())model.set_sequencia_vinculacao(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::EmitterCancelCtePaymentLinkPayload getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::EmitterCancelCtePaymentLinkPayload";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup654::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_epec();if(field.has_value())model.set_epec(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_xml_cancelamento();if(field.has_value())model.set_xml_cancelamento(field.value());}
{auto field=model.get_dacte();if(field.has_value())model.set_dacte(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup654 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup654";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup5669::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5669 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5669";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup5730::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_comprovante();if(field.has_value())model.set_comprovante(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_notas_fiscais();if(field.has_value())model.set_notas_fiscais(field.value());}
{auto field=model.get_data_hora();if(field.has_value())model.set_data_hora(field.value());}
{auto field=model.get_informacoes();if(field.has_value())model.set_informacoes(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5730 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5730";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup5835::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5835 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5835";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup5904::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5904 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5904";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup5949::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_grupo();if(field.has_value())model.set_grupo(field.value());}
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5949 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup5949";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup6032::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup6032 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup6032";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteDocumentedGroup6120::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_sequencia();if(field.has_value())model.set_sequencia(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteDocumentedGroup6120 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteDocumentedGroup6120";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteServiceGroup::from_json("{\"tipo\":0,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_componentes();if(field.has_value())model.set_componentes(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteServiceGroup getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteServiceGroup";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteOsServiceGroup::from_json("{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_componentes();if(field.has_value())model.set_componentes(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_cte_issuance::CteOsServiceGroup getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_cte_issuance::CteOsServiceGroup";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteServiceGroup::from_json("{\"tipo\":0,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_componentes();if(field.has_value())model.set_componentes(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-004 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-004";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteServiceGroup::from_json("{\"tipo\":9,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-005 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-005";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteOsServiceGroup::from_json("{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_componentes();if(field.has_value())model.set_componentes(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-006 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-006";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteOsServiceGroup::from_json("{\"tipo\":0,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-007 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-007";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::CteOsServiceGroup::from_json("{\"tipo\":6,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-008 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-008";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"justificativa\":\"Synthetic cancellation justification\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-019 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-ISSUER-019";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"justificativa\":\"Synthetic cancellation justification\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-ISSUER-020 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-ISSUER-020";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-cte-lower getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-cte-lower";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"chave\":\"123456AB12CD34EF5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-cte-upper getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-cte-upper";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"chave\":\"123456ab#2cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-cte-bad-symbol getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-cte-bad-symbol";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"chave\":\"123456ab12cd34ef560000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-cte-short getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:identifier-case-cte-short";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterConfirmCteDeliveryPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"notas_fiscais\":[\"123456ab12cd34ef5600000000000000000000000000\"],\"comprovante\":\"SYNTHETIC_IMAGE_PLACEHOLDER\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_comprovante();if(field.has_value())model.set_comprovante(field.value());}
{auto field=model.get_data_hora();if(field.has_value())model.set_data_hora(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_informacoes();if(field.has_value())model.set_informacoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_notas_fiscais();if(field.has_value())model.set_notas_fiscais(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:identifier-case-cte-delivery-related-note-lower getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:identifier-case-cte-delivery-related-note-lower";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte_os\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"numero\":\"001\",\"data_emissao\":\"2026-01-01\",\"valor_documento\":\"100.00\"}],\"rodoviario\":{\"taf_cte_os\":\"000000000000\",\"tipo_fretamento\":\"2\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aereo();if(field.has_value())model.set_aereo(field.value());}
{auto field=model.get_alteracao_tomador();if(field.has_value())model.set_alteracao_tomador(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_aquaviario();if(field.has_value())model.set_aquaviario(field.value());}
{auto field=model.get_caracteristica_servico();if(field.has_value())model.set_caracteristica_servico(field.value());}
{auto field=model.get_caracteristica_transporte();if(field.has_value())model.set_caracteristica_transporte(field.value());}
{auto field=model.get_carga();if(field.has_value())model.set_carga(field.value());}
{auto field=model.get_cobranca();if(field.has_value())model.set_cobranca(field.value());}
{auto field=model.get_contribuicao_tomador();if(field.has_value())model.set_contribuicao_tomador(field.value());}
{auto field=model.get_cte_referenciado();if(field.has_value())model.set_cte_referenciado(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
{auto field=model.get_detalhes_retirada();if(field.has_value())model.set_detalhes_retirada(field.value());}
{auto field=model.get_documentos_anteriores();if(field.has_value())model.set_documentos_anteriores(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_dutoviario();if(field.has_value())model.set_dutoviario(field.value());}
{auto field=model.get_entrega();if(field.has_value())model.set_entrega(field.value());}
{auto field=model.get_expedidor();if(field.has_value())model.set_expedidor(field.value());}
{auto field=model.get_ferroviario();if(field.has_value())model.set_ferroviario(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_globalizado();if(field.has_value())model.set_globalizado(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_tomador();if(field.has_value())model.set_indicador_tomador(field.value());}
{auto field=model.get_informacao_globalizado();if(field.has_value())model.set_informacao_globalizado(field.value());}
{auto field=model.get_local_inicio_prestacao();if(field.has_value())model.set_local_inicio_prestacao(field.value());}
{auto field=model.get_local_termino_prestacao();if(field.has_value())model.set_local_termino_prestacao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_multimodal();if(field.has_value())model.set_multimodal(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_observacoes_contribuinte();if(field.has_value())model.set_observacoes_contribuinte(field.value());}
{auto field=model.get_observacoes_fisco();if(field.has_value())model.set_observacoes_fisco(field.value());}
{auto field=model.get_observacoes_gerais();if(field.has_value())model.set_observacoes_gerais(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pagamentos_vinculados();if(field.has_value())model.set_pagamentos_vinculados(field.value());}
{auto field=model.get_recebedor();if(field.has_value())model.set_recebedor(field.value());}
{auto field=model.get_remetente();if(field.has_value())model.set_remetente(field.value());}
{auto field=model.get_rodoviario();if(field.has_value())model.set_rodoviario(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_veiculos_novos();if(field.has_value())model.set_veiculos_novos(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nfe_xml();if(field.has_value())model.set_nfe_xml(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-os-road-does-not-require-normal-rntrc getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-cte-os-road-does-not-require-normal-rntrc";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte_os\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"numero\":\"001\",\"data_emissao\":\"2026-01-01\",\"valor_documento\":\"100.00\"}],\"rodoviario\":{\"taf_cte_os\":\"000000000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-os-passenger-requires-charter-type getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-cte-os-passenger-requires-charter-type";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":0,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"unidade_medida\":\"0\",\"tipo_medida\":\"UNID\",\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"tipo\":\"1\",\"chave\":\"00000000000000000000000000000000000000000000\"}],\"rodoviario\":{\"rntrc\":\"00000000\"},\"remetente\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"destinatario\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aereo();if(field.has_value())model.set_aereo(field.value());}
{auto field=model.get_alteracao_tomador();if(field.has_value())model.set_alteracao_tomador(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_aquaviario();if(field.has_value())model.set_aquaviario(field.value());}
{auto field=model.get_caracteristica_servico();if(field.has_value())model.set_caracteristica_servico(field.value());}
{auto field=model.get_caracteristica_transporte();if(field.has_value())model.set_caracteristica_transporte(field.value());}
{auto field=model.get_carga();if(field.has_value())model.set_carga(field.value());}
{auto field=model.get_cobranca();if(field.has_value())model.set_cobranca(field.value());}
{auto field=model.get_contribuicao_tomador();if(field.has_value())model.set_contribuicao_tomador(field.value());}
{auto field=model.get_cte_referenciado();if(field.has_value())model.set_cte_referenciado(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
{auto field=model.get_detalhes_retirada();if(field.has_value())model.set_detalhes_retirada(field.value());}
{auto field=model.get_documentos_anteriores();if(field.has_value())model.set_documentos_anteriores(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_dutoviario();if(field.has_value())model.set_dutoviario(field.value());}
{auto field=model.get_entrega();if(field.has_value())model.set_entrega(field.value());}
{auto field=model.get_expedidor();if(field.has_value())model.set_expedidor(field.value());}
{auto field=model.get_ferroviario();if(field.has_value())model.set_ferroviario(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_globalizado();if(field.has_value())model.set_globalizado(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_indicador_tomador();if(field.has_value())model.set_indicador_tomador(field.value());}
{auto field=model.get_informacao_globalizado();if(field.has_value())model.set_informacao_globalizado(field.value());}
{auto field=model.get_local_inicio_prestacao();if(field.has_value())model.set_local_inicio_prestacao(field.value());}
{auto field=model.get_local_termino_prestacao();if(field.has_value())model.set_local_termino_prestacao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_multimodal();if(field.has_value())model.set_multimodal(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_observacoes_contribuinte();if(field.has_value())model.set_observacoes_contribuinte(field.value());}
{auto field=model.get_observacoes_fisco();if(field.has_value())model.set_observacoes_fisco(field.value());}
{auto field=model.get_observacoes_gerais();if(field.has_value())model.set_observacoes_gerais(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_pagamentos_vinculados();if(field.has_value())model.set_pagamentos_vinculados(field.value());}
{auto field=model.get_recebedor();if(field.has_value())model.set_recebedor(field.value());}
{auto field=model.get_remetente();if(field.has_value())model.set_remetente(field.value());}
{auto field=model.get_rodoviario();if(field.has_value())model.set_rodoviario(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_veiculos_novos();if(field.has_value())model.set_veiculos_novos(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_nfe_xml();if(field.has_value())model.set_nfe_xml(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-normal-road-requires-normal-branch-not-os-fields getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:branch-scope-cte-normal-road-requires-normal-branch-not-os-fields";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":0,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"unidade_medida\":\"0\",\"tipo_medida\":\"UNID\",\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"tipo\":\"1\",\"chave\":\"00000000000000000000000000000000000000000000\"}],\"rodoviario\":{\"rntrc\":\"00000000\"},\"destinatario\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-normal-remetente-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-cte-normal-remetente-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":0,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"unidade_medida\":\"0\",\"tipo_medida\":\"UNID\",\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"tipo\":\"1\",\"chave\":\"00000000000000000000000000000000000000000000\"}],\"rodoviario\":{\"rntrc\":\"00000000\"},\"remetente\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-normal-destinatario-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-cte-normal-destinatario-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"unidade_medida\":\"0\",\"tipo_medida\":\"UNID\",\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"tipo\":\"1\",\"chave\":\"00000000000000000000000000000000000000000000\"}],\"rodoviario\":{\"rntrc\":\"00000000\"},\"remetente\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"destinatario\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-normal-servico-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-cte-normal-servico-required";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":0,\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"unidade_medida\":\"0\",\"tipo_medida\":\"UNID\",\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"tipo\":\"1\",\"chave\":\"00000000000000000000000000000000000000000000\"}],\"rodoviario\":{},\"remetente\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"destinatario\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:branch-scope-cte-normal-road-rntrc-required getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:branch-scope-cte-normal-road-rntrc-required";return -1;}++checked;}
return checked;}
