#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_emitter_reads(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_emitter_reads::EmitterError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::EmitterError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::EmitterError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseServiceCode::from_json("{\"codigo\":\"synthetic\",\"descricao\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_id_cnae();if(field.has_value())model.set_id_cnae(field.value());}
{auto field=model.get_codigo_tributacao();if(field.has_value())model.set_codigo_tributacao(field.value());}
{auto field=model.get_aliquota_sugerida();if(field.has_value())model.set_aliquota_sugerida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseServiceCode getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseServiceCode";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseServiceCodeAliquotaSugerida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss();if(field.has_value())model.set_iss(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseServiceCodeAliquotaSugerida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseServiceCodeAliquotaSugerida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[1,2],\"autenticacao\":[\"certificado_a1\"],\"emissao\":[\"nfse\"],\"funcoes\":[\"consultar\"],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseProviderStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseProviderStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic offline\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfcomServiceStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfcomServiceStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseFiscalResponse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"lote_rps\",\"status\":\"processando\",\"info_nfse\":[],\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseFiscalResponseNfseSubstituida::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseFiscalResponseNfseSubstituida getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseFiscalResponseNfseSubstituida";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseFiscalResponseInfoNfseItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseFiscalResponseInfoNfseItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseFiscalResponseInfoNfseItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomPaymentEvent::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_protocolo_evento();if(field.has_value())model.set_protocolo_evento(field.value());}
{auto field=model.get_protocolo_nfcom();if(field.has_value())model.set_protocolo_nfcom(field.value());}
{auto field=model.get_protocolo_vinculacao();if(field.has_value())model.set_protocolo_vinculacao(field.value());}
{auto field=model.get_data_evento();if(field.has_value())model.set_data_evento(field.value());}
{auto field=model.get_n_seq_evento();if(field.has_value())model.set_n_seq_evento(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfcomPaymentEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfcomPaymentEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomPaymentEventPagamentoVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nPag();if(field.has_value())model.set_nPag(field.value());}
{auto field=model.get_idTransacao();if(field.has_value())model.set_idTransacao(field.value());}
{auto field=model.get_tpMeioPgto();if(field.has_value())model.set_tpMeioPgto(field.value());}
{auto field=model.get_CNPJReceb();if(field.has_value())model.set_CNPJReceb(field.value());}
{auto field=model.get_CNPJBasePSP();if(field.has_value())model.set_CNPJBasePSP(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfcomPaymentEventPagamentoVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfcomPaymentEventPagamentoVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomFiscalResponse::from_json("{\"uuid\":\"synthetic\",\"modelo\":\"nfcom\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfcomFiscalResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfcomFiscalResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomFiscalResponseLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfcomFiscalResponseLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfcomFiscalResponseLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomPaymentEvents::from_json("{\"uuid\":\"synthetic\",\"status\":\"synthetic\",\"eventos_pagamento\":[],\"total_eventos\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_eventos_pagamento();if(field.has_value())model.set_eventos_pagamento(field.value());}
{auto field=model.get_total_eventos();if(field.has_value())model.set_total_eventos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfcomPaymentEvents getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfcomPaymentEvents";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseManifestationRequest::from_json("{\"ambiente\":2,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::NfseManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::NfseManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::EmitterFunctionalError::from_json("{\"status\":false,\"configured\":false,\"error\":\"Synthetic functional error\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_configured();if(field.has_value())model.set_configured(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::EmitterFunctionalError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::EmitterFunctionalError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::EmitterGetNfseProviderStatusQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_todos_servicos();if(field.has_value())model.set_todos_servicos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_reads::EmitterGetNfseProviderStatusQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_reads::EmitterGetNfseProviderStatusQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseProviderStatus::from_json("{\"status\":true,\"ambientes\":[1,2],\"autenticacao\":[\"certificado_a1\"],\"emissao\":[\"nfse\"],\"funcoes\":[\"consultar\"],\"pdf_nfse\":false,\"pdf_sincrono\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-067 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-067";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseProviderStatus::from_json("{\"status\":false,\"error\":\"synthetic not configured\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-068 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-068";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfcomServiceStatus::from_json("{\"operacional\":false,\"mensagem\":\"synthetic offline\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_operacional();if(field.has_value())model.set_operacional(field.value());}
{auto field=model.get_mensagem();if(field.has_value())model.set_mensagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-069 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-069";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseManifestationRequest::from_json("{\"ambiente\":2,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_manifestador();if(field.has_value())model.set_manifestador(field.value());}
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_motivo_rejeicao();if(field.has_value())model.set_motivo_rejeicao(field.value());}
{auto field=model.get_justificativa_rejeicao();if(field.has_value())model.set_justificativa_rejeicao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-070 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-070";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseManifestationRequest::from_json("{\"ambiente\":2,\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"manifestador\":1,\"evento\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-071 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-071";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseManifestationRequest::from_json("{\"ambiente\":2,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"manifestador\":1,\"evento\":2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-072 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-072";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseManifestationRequest::from_json("{\"ambiente\":2,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"manifestador\":1,\"evento\":2,\"motivo_rejeicao\":9}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-073 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-073";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_reads::NfseFiscalResponse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"lote_rps\",\"status\":\"processando\",\"info_nfse\":[],\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-074 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-074";return -1;}++checked;}
return checked;}
