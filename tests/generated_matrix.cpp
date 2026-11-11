#include <webmania_cpp/webmania.hpp>
#include <fstream>
#include <iostream>
#include <iterator>
using namespace webmania;
int main(int argc,char**argv){try{if(argc!=5)return 90;Config cfg;cfg.base_url(argv[2]);cfg.worker_path(argv[4]);std::ifstream in(argv[3]);cfg.ca_pem(std::string(std::istreambuf_iterator<char>(in),{}));cfg.trust_file_origin(argv[2]);CompanyCredentials company("synthetic-company-key","synthetic-secret","synthetic-token","synthetic-secret2");ResellerCredentials reseller("synthetic-reseller-key","synthetic-secret","synthetic-token","synthetic-secret2");IssuerToken issuer("synthetic-issuer");MonitorToken monitor("synthetic-monitor");NfeClient nfe(company,cfg);ResellerClient b2b(reseller,cfg);EmitterClient emitter(issuer,cfg);MonitorClient mon(monitor,cfg);NfeFilesClient nfefiles(company,cfg);EmitterFilesClient emitterfiles(issuer,cfg);auto companyauth=FileAuth::company();auto issuerauth=FileAuth::issuer();auto capabilityauth=FileAuth::public_report();switch(std::stoi(argv[1])){
case 0:{
auto result=nfe.get_certificate_validity();
std::cout<<result.to_json();
break;}
case 1:{
auto result=nfe.get_sefaz_status();
std::cout<<result.to_json();
break;}
case 2:{
auto query=api1_fiscal::NfeGetDocumentQuery::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=nfe.get_document(query);
std::cout<<result.to_json();
break;}
case 3:{
auto body=api1_fiscal::NfeLookupRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);
auto result=nfe.query_document(body);
std::cout<<result.to_json();
break;}
case 4:{
auto body=api1_fiscal::NfeCorrectionRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"correcao\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=nfe.create_correction(body);
std::cout<<result.to_json();
break;}
case 5:{
auto body=api1_fiscal::NfeManifestationRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"evento\":\"210240\",\"justificativa\":\"The goods were never delivered.\"}",cfg);
auto result=nfe.create_manifestation(body);
std::cout<<result.to_json();
break;}
case 6:{
auto body=api1_fiscal::NfeCancelRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"motivo\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=nfe.cancel_document(body);
std::cout<<result.to_json();
break;}
case 7:{
auto body=api1_fiscal::NfeVoidRequest::from_json("{\"sequencia\":\"00000000\",\"motivo\":\"00000000-0000-4000-8000-000000000001\",\"ambiente\":1,\"serie\":\"0\",\"modelo\":\"1\"}",cfg);
auto result=nfe.void_numbering(body);
std::cout<<result.to_json();
break;}
case 8:{
auto body=api1_fiscal::NfePaymentEventRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"pagamento\":{\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.00\",\"data_pagamento\":\"2026-10-25\"}}",cfg);
auto result=nfe.create_payment_event(body);
std::cout<<result.to_json();
break;}
case 9:{
auto body=api1_fiscal::NfePaymentEventCancelRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=nfe.cancel_payment_event(body);
std::cout<<result.to_json();
break;}
case 10:{
auto body=api1_fiscal::NfeIbsCbsEventCancelRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=nfe.cancel_ibs_cbs_event(body);
std::cout<<result.to_json();
break;}
case 11:{
auto result=nfe.list_tax_classes();
std::cout<<result.to_json();
break;}
case 12:{
auto body=api1_fiscal::TaxClassDeleteRequest::from_json("{\"referencia\":\"synthetic\"}",cfg);
auto result=nfe.delete_tax_classes(body);
std::cout<<result.to_json();
break;}
case 13:{
auto body=api1_fiscal::FiscalTaxClassRequest::from_json("{\"descricao\":\"synthetic\",\"icms\":[{\"tipo_tributacao\":\"synthetic\",\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"codigo_cfop\":\"synthetic\",\"situacao_tributaria\":\"syn\"}],\"ipi\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"codigo_enquadramento\":\"syn\",\"aliquota\":\"0\"}],\"pis\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}],\"cofins\":[{\"cenario\":\"synthetic\",\"tipo_pessoa\":\"synthetic\",\"situacao_tributaria\":\"sy\",\"aliquota\":\"0\"}]}",cfg);
auto result=nfe.save_tax_classes(body);
std::cout<<result.to_json();
break;}
case 14:{
auto body=api1_fiscal::NfeIssueRequest::from_json("{\"ID\":\"controlled-001\",\"modelo\":\"1\",\"operacao\":1,\"natureza_operacao\":\"Synthetic sale\",\"finalidade\":1,\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"produtos\":[{\"nome\":\"Synthetic item\",\"codigo\":\"0001\",\"ncm\":\"0000.00.00\",\"quantidade\":\"1.0000\",\"unidade\":\"UN\",\"subtotal\":\"0.10\",\"total\":\"0.10\",\"origem\":0,\"impostos\":{\"icms\":{\"codigo_cfop\":\"5102\",\"situacao_tributaria\":\"102\"}}}],\"pedido\":{\"presenca\":1,\"modalidade_frete\":9,\"pagamento\":0,\"forma_pagamento\":\"01\",\"valor_pagamento\":\"0.10\"}}",cfg);
auto result=nfe.issue_document(body);
std::cout<<result.to_json();
break;}
case 15:{
auto body=api1_fiscal::NfeReturnRequest::from_json("{\"classe_imposto\":\"synthetic\",\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":1,\"natureza_operacao\":\"synthetic\"}",cfg);
auto result=nfe.issue_return(body);
std::cout<<result.to_json();
break;}
case 16:{
auto body=api1_fiscal::NfeAdjustmentRequest::from_json("{\"operacao\":0,\"natureza_operacao\":\"synthetic\",\"codigo_cfop\":\"5102\",\"ambiente\":1,\"cliente\":{}}",cfg);
auto result=nfe.issue_adjustment(body);
std::cout<<result.to_json();
break;}
case 17:{
auto body=api1_fiscal::NfeComplementRequest::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"operacao\":1,\"natureza_operacao\":\"Synthetic complement\",\"ambiente\":2,\"cliente\":{\"cpf\":\"000.000.000-00\",\"nome_completo\":\"Synthetic person\",\"endereco\":\"Synthetic street\",\"numero\":\"1\",\"bairro\":\"Synthetic district\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\",\"cep\":\"01001-000\"},\"impostos\":{\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"base_calculo\":0}}}",cfg);
auto result=nfe.issue_complement(body);
std::cout<<result.to_json();
break;}
case 18:{
auto body=api1_fiscal::FiscalCompanyUpdateRequest::from_json("{\"cnae\":null}",cfg);
auto result=nfe.update_company(body);
std::cout<<result.to_json();
break;}
case 19:{
auto body=api1_fiscal::FiscalReportRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"danfe\",\"numero_inicio\":\"1\",\"numero_final\":\"5\"}",cfg);
auto result=nfe.create_or_poll_report(body);
std::cout<<result.to_json();
break;}
case 20:{
auto body=api1_fiscal::NfeIbsCbsEventRequest::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"ambiente\":2,\"cod_evento\":\"112110\"}",cfg);
auto result=nfe.create_ibs_cbs_event(body);
std::cout<<result.to_json();
break;}
case 21:{
auto body=api1_b2b::ResellerCreateCompaniesRequest::from_json("{\"quantidade\":1}",cfg);
auto result=b2b.create_companies(body);
std::cout<<result.to_json();
break;}
case 22:{
auto result=b2b.list_companies();
std::cout<<result.to_json();
break;}
case 23:{
auto query=api1_b2b::B2bV1GetProcessedRequestsQuery::from_json("{}",cfg);
auto result=b2b.get_processed_requests(query);
std::cout<<result.to_json();
break;}
case 24:{
auto body=api2_cte_issuance::EmitterIssueCtePayload::from_json("{\"ambiente\":2,\"modelo\":\"cte_os\",\"natureza_operacao\":\"Synthetic passenger transport\",\"modalidade\":1,\"finalidade\":\"0\",\"contribuicao_tomador\":9,\"indicador_tomador\":4,\"local_inicio_prestacao\":{\"cidade\":\"Synthetic origin\",\"uf\":\"SP\"},\"local_termino_prestacao\":{\"cidade\":\"Synthetic destination\",\"uf\":\"RJ\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"nome_razao\":\"Synthetic company\",\"endereco\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"cidade\":\"Synthetic city\",\"uf\":\"SP\"},\"servico\":{\"tipo\":6,\"descricao\":\"Synthetic passenger transport\",\"valor_total\":\"100.00\",\"valor_recebido\":\"100.00\"},\"carga\":{\"produto_predominante\":\"Synthetic service\",\"valor_total\":\"100.00\",\"quantidades\":[{\"quantidade\":\"1.0000\"}]},\"impostos\":{\"cfop\":\"6353\",\"classificacao_tributaria\":\"SN\"},\"documentos_fiscais\":[{\"numero\":\"001\",\"data_emissao\":\"2026-01-01\",\"valor_documento\":\"100.00\"}],\"rodoviario\":{\"taf_cte_os\":\"000000000000\",\"tipo_fretamento\":\"2\"}}",cfg);
auto result=emitter.issue_cte(body);
std::cout<<result.to_json();
break;}
case 25:{
auto body=api2_cte_issuance::EmitterIssueSimplifiedCtePayload::from_json("{\"ambiente\":\"1\",\"modelo\":\"cte\",\"nfe_xml\":\"synthetic\"}",cfg);
auto result=emitter.issue_simplified_cte(body);
std::cout<<result.to_json();
break;}
case 26:{
auto body=api2_cte_issuance::EmitterCancelCtePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"justificativa\":\"Synthetic cancellation justification\"}",cfg);
auto result=emitter.cancel_cte(body);
std::cout<<result.to_json();
break;}
case 27:{
auto body=api2_cte_issuance::EmitterCorrectCtePayload::from_json("{\"alteracoes\":[{\"campo\":\"synthetic\",\"grupo\":\"synthetic\",\"valor\":\"synthetic\"}],\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=emitter.correct_cte(body);
std::cout<<result.to_json();
break;}
case 28:{
auto body=api2_cte_issuance::EmitterConfirmCteDeliveryPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"notas_fiscais\":[\"123456ab12cd34ef5600000000000000000000000000\"],\"comprovante\":\"SYNTHETIC_IMAGE_PLACEHOLDER\"}",cfg);
auto result=emitter.confirm_cte_delivery(body);
std::cout<<result.to_json();
break;}
case 29:{
auto body=api2_cte_issuance::EmitterCancelCteDeliveryPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"protocolo\":\"synthetic\",\"sequencia\":\"synthetic\"}",cfg);
auto result=emitter.cancel_cte_delivery(body);
std::cout<<result.to_json();
break;}
case 30:{
auto body=api2_cte_issuance::EmitterLinkCtePaymentPayload::from_json("{\"pagamento\":{\"cnpj_base_psp\":\"00000000\",\"cnpj_recebedor\":\"00000000000000\",\"id_transacao\":\"synthetic\",\"n_pag\":1,\"tp_meio_pagamento\":\"synthetic\"},\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=emitter.link_cte_payment(body);
std::cout<<result.to_json();
break;}
case 31:{
auto body=api2_cte_issuance::EmitterCancelCtePaymentLinkPayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"protocolo_vinculacao\":\"000000000000000\",\"sequencia_vinculacao\":1}",cfg);
auto result=emitter.cancel_cte_payment_link(body);
std::cout<<result.to_json();
break;}
case 32:{
auto result=emitter.get_cte("synthetic");
std::cout<<result.to_json();
break;}
case 33:{
auto result=emitter.get_cte_payment_events("synthetic");
std::cout<<result.to_json();
break;}
case 34:{
auto body=api2_dce_issuance::EmitterIssueDcePayload::from_json("{\"ambiente\":\"1\",\"itens\":[{\"descricao\":\"synthetic\",\"ncm\":\"00000000\",\"quantidade\":0.0,\"valor_unitario\":0.0}],\"cliente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"identificacao_alternativa\":\"synthetic\",\"nome_completo\":\"synthetic\",\"razao_social\":\"synthetic\"},\"emitente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"identificacao_alternativa\":\"synthetic\",\"nome_completo\":\"synthetic\",\"razao_social\":\"synthetic\"}}",cfg);
auto result=emitter.issue_dce(body);
std::cout<<result.to_json();
break;}
case 35:{
auto body=api2_dce_issuance::EmitterCancelDcePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);
auto result=emitter.cancel_dce(body);
std::cout<<result.to_json();
break;}
case 36:{
auto result=emitter.get_dce("synthetic");
std::cout<<result.to_json();
break;}
case 37:{
auto query=api2_emitter_reads::EmitterGetNfseProviderStatusQuery::from_json("{}",cfg);
auto result=emitter.get_nfse_provider_status(query);
std::cout<<result.to_json();
break;}
case 38:{
auto result=emitter.get_nfcom_service_status();
std::cout<<result.to_json();
break;}
case 39:{
auto result=emitter.get_nfse("synthetic");
std::cout<<result.to_json();
break;}
case 40:{
auto result=emitter.get_nfcom("00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 41:{
auto result=emitter.get_nfcom_payment_events("00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 42:{
auto body=api2_emitter_reads::NfseManifestationRequest::from_json("{\"ambiente\":2,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"manifestador\":1,\"evento\":1}",cfg);
auto result=emitter.manifest_nfse(body);
std::cout<<result.to_json();
break;}
case 43:{
auto body=api2_mdfe_issuance::EmitterIssueMdfePayload::from_json("{\"ambiente\":\"1\",\"carregamento\":[{\"nome_municipio\":\"synthetic\"}],\"descarregamento\":[{\"documentos_fiscais\":[{\"chave\":\"00000000000000000000000000000000000000000000\"}],\"nome_municipio\":\"synthetic\"}],\"emitente\":\"1\",\"modalidade\":\"1\",\"peso_bruto\":\"synthetic\",\"uf_carregamento\":\"synthetic\",\"uf_descarregamento\":\"synthetic\",\"unidade\":\"01\",\"valor_carga\":\"synthetic\",\"rodoviario\":{}}",cfg);
auto result=emitter.issue_mdfe(body);
std::cout<<result.to_json();
break;}
case 44:{
auto body=api2_mdfe_issuance::EmitterCloseMdfePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"codigo_municipio\":\"0000000\",\"municipio\":\"synthetic\",\"uf\":\"synthetic\"}",cfg);
auto result=emitter.close_mdfe(body);
std::cout<<result.to_json();
break;}
case 45:{
auto body=api2_mdfe_issuance::EmitterCancelMdfePayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);
auto result=emitter.cancel_mdfe(body);
std::cout<<result.to_json();
break;}
case 46:{
auto body=api2_mdfe_issuance::EmitterAddMdfeConductorPayload::from_json("{\"cpf\":\"synthetic\",\"nome\":\"synthetic\",\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=emitter.add_mdfe_conductor(body);
std::cout<<result.to_json();
break;}
case 47:{
auto result=emitter.get_mdfe("synthetic");
std::cout<<result.to_json();
break;}
case 48:{
auto body=api2_nfcom_issuance::EmitterIssueNfcomPayload::from_json("{\"ambiente\":2,\"natureza_operacao\":\"Synthetic communication\",\"tipo_operacao\":1,\"finalidade\":1,\"tipo_faturamento\":0,\"cliente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"indicador_ie\":9,\"endereco\":{\"logradouro\":\"Synthetic street\",\"numero\":\"001\",\"bairro\":\"Synthetic\",\"codigo_municipio\":\"3550308\",\"municipio\":\"Synthetic municipality\",\"uf\":\"SP\",\"cep\":\"00000000\"}},\"assinante\":{\"codigo\":\"SYNTHETIC\",\"tipo\":1,\"tipo_servico\":4,\"contrato\":{\"numero\":\"SYNTHETIC\",\"data_inicio\":\"2026-01-01\",\"data_fim\":\"2026-12-31\"}},\"itens\":[{\"descricao\":\"Synthetic communication service\",\"unidade\":\"MES\",\"quantidade\":\"1.0000\",\"valor_unitario\":\"99.90\",\"valor_total\":\"99.90\",\"indicador_total\":1,\"classe_imposto\":\"REF123456\"}]}",cfg);
auto result=emitter.issue_nfcom(body);
std::cout<<result.to_json();
break;}
case 49:{
auto body=api2_nfcom_issuance::EmitterCancelNfcomPayload::from_json("{\"chave\":\"123456ab12cd34ef5600000000000000000000000000\",\"justificativa\":\"Synthetic schema example only\"}",cfg);
auto result=emitter.cancel_nfcom(body);
std::cout<<result.to_json();
break;}
case 50:{
auto body=api2_nfse_issuance::EmitterIssueNfsePayload::from_json("{\"ambiente\":2,\"rps\":[{\"servico\":{\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"100.00\",\"iss_retido\":2}}]}",cfg);
auto result=emitter.issue_nfse(body);
std::cout<<result.to_json();
break;}
case 51:{
auto body=api2_nfse_issuance::EmitterCancelNfsePayload::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);
auto result=emitter.cancel_nfse(body);
std::cout<<result.to_json();
break;}
case 52:{
auto body=api2_nfse_issuance::EmitterReplaceNfsePayload::from_json("{\"ambiente\":2,\"motivo\":1,\"chave\":\"00000000000000000000000000000000000000000000000000\",\"rps\":[{\"servico\":{\"classe_imposto\":\"SYNTHETIC\",\"discriminacao\":\"Synthetic service\",\"valor_servicos\":\"1.00\"}}]}",cfg);
auto result=emitter.replace_nfse(body);
std::cout<<result.to_json();
break;}
case 53:{
auto body=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfe\",\"filtros\":{\"empresa_uuid\":[\"00000000-0000-0000-0000-000000000000\"],\"categoria\":[\"recebidas\"],\"status\":[\"aprovado\"]},\"filtros_modelo\":{\"operacao\":[\"0\",1]},\"paginacao\":\"cursor\"}",cfg);
auto query=api2_monitor_documents::MonitorSearchDocumentsQuery::from_json("{}",cfg);
auto result=mon.search_documents(body,query);
std::cout<<result.to_json();
break;}
case 54:{
auto query=api2_monitor_documents::MonitorGetDocumentQuery::from_json("{}",cfg);
auto result=mon.get_document("00000000-0000-4000-8000-000000000001",query);
std::cout<<result.to_json();
break;}
case 55:{
auto result=mon.list_document_events("00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 56:{
auto body=api2_monitor_documents::MonitorManifestationRequest::from_json("{\"evento\":1,\"manifestacao\":3,\"justificativa\":\"Synthetic justified operation\"}",cfg);
auto result=mon.manifest_document("00000000-0000-4000-8000-000000000001",body);
std::cout<<result.to_json();
break;}
case 57:{
auto query=api2_monitor_documents::MonitorListReportsQuery::from_json("{}",cfg);
auto result=mon.list_reports(query);
std::cout<<result.to_json();
break;}
case 58:{
auto result=mon.download_report("00000000-0000-4000-8000-000000000001");
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 59:{
auto body=api2_monitor_documents::MonitorImportRequest::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);
auto result=mon.import_document(body);
std::cout<<result.to_json();
break;}
case 60:{
auto result=mon.get_import_status("00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 61:{
auto body=api2_monitor_management::MonitorCreateCompanyRequest::from_json("{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"cep\":\"01001000\",\"certificado_base64\":\"PHRlc3QvPg==\",\"certificado_senha\":\"synthetic-placeholder\"}",cfg);
auto result=mon.create_company(body);
std::cout<<result.to_json();
break;}
case 62:{
auto body=api2_monitor_management::MonitorUpdateCompanyRequest::from_json("{\"modelos_download\":[]}",cfg);
auto result=mon.update_company("00000000-0000-4000-8000-000000000001",body);
std::cout<<result.to_json();
break;}
case 63:{
auto body=api2_monitor_management::MonitorCreateMunicipalityRequest::from_json("{\"codigo_ibge\":\"3550308\"}",cfg);
auto result=mon.create_company_municipality("00000000-0000-4000-8000-000000000001",body);
std::cout<<result.to_json();
break;}
case 64:{
auto body=api2_monitor_management::MonitorUpdateMunicipalityRequest::from_json("{}",cfg);
auto result=mon.update_company_municipality("00000000-0000-4000-8000-000000000001","00000000-0000-4000-8000-000000000001",body);
std::cout<<result.to_json();
break;}
case 65:{
auto result=mon.delete_company_municipality("00000000-0000-4000-8000-000000000001","00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 66:{
auto query=api2_monitor_reads::MonitorListCompaniesQuery::from_json("{}",cfg);
auto result=mon.list_companies(query);
std::cout<<result.to_json();
break;}
case 67:{
auto result=mon.get_company("00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 68:{
auto query=api2_monitor_reads::MonitorListCompanyMunicipalitiesQuery::from_json("{}",cfg);
auto result=mon.list_company_municipalities("00000000-0000-4000-8000-000000000001",query);
std::cout<<result.to_json();
break;}
case 69:{
auto result=mon.get_company_municipality("00000000-0000-4000-8000-000000000001","00000000-0000-4000-8000-000000000001");
std::cout<<result.to_json();
break;}
case 70:{
auto query=api2_monitor_reads::MonitorListAvailableMunicipalitiesQuery::from_json("{}",cfg);
auto result=mon.list_available_municipalities(query);
std::cout<<result.to_json();
break;}
case 71:{
auto query=api2_monitor_reads::MonitorGetDownloadStatisticsQuery::from_json("{}",cfg);
auto result=mon.get_download_statistics(query);
std::cout<<result.to_json();
break;}
case 72:{
auto result=nfefiles.download_danfe("00000000-0000-4000-8000-000000000001",companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 73:{
auto result=nfefiles.download_simple_danfe("00000000-0000-4000-8000-000000000001",companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 74:{
auto result=nfefiles.download_label_danfe("00000000-0000-4000-8000-000000000001",companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 75:{
auto result=nfefiles.download_correction_pdf("00000000-0000-4000-8000-000000000001",companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 76:{
auto result=nfefiles.download_correction_pdf_sequence("00000000-0000-4000-8000-000000000001",1,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 77:{
auto query=api1_files::NfeDownloadXmlQuery::from_json("{}",cfg);
auto result=nfefiles.download_xml("00000000-0000-4000-8000-000000000001",query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 78:{
auto query=api1_files::NfeDownloadCancellationXmlQuery::from_json("{}",cfg);
auto result=nfefiles.download_cancellation_xml("00000000-0000-4000-8000-000000000001",query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 79:{
auto query=api1_files::NfeDownloadCorrectionXmlQuery::from_json("{}",cfg);
auto result=nfefiles.download_correction_xml("00000000-0000-4000-8000-000000000001",query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 80:{
auto query=api1_files::NfeDownloadCorrectionXmlSequenceQuery::from_json("{}",cfg);
auto result=nfefiles.download_correction_xml_sequence("00000000-0000-4000-8000-000000000001",1,query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 81:{
auto query=api1_files::NfeDownloadManifestationXmlQuery::from_json("{}",cfg);
auto result=nfefiles.download_manifestation_xml("00000000-0000-4000-8000-000000000001",query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 82:{
auto query=api1_files::NfeDownloadPaymentEventXmlQuery::from_json("{}",cfg);
auto result=nfefiles.download_payment_event_xml("00000000-0000-4000-8000-000000000001",query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 83:{
auto query=api1_files::NfeDownloadPaymentEventXmlSequenceQuery::from_json("{}",cfg);
auto result=nfefiles.download_payment_event_xml_sequence("00000000-0000-4000-8000-000000000001",1,query,companyauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 84:{
auto query=api1_files::NfeDownloadIbsCbsEventXmlQuery::from_json("{}",cfg);
try{auto result=nfefiles.download_ibs_cbs_event_xml("00000000-0000-4000-8000-000000000001",query,companyauth);(void)result;return 92;}catch(const Error&e){if(e.kind()!="capability")throw;std::cout<<"blocked";}
break;}
case 85:{
auto result=nfefiles.download_report("00000000-0000-4000-8000-000000000001",capabilityauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 86:{
auto result=emitterfiles.get_nfse_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 87:{
auto result=emitterfiles.get_nfse_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.file()->bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 88:{
auto result=emitterfiles.get_nfse_rps_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 89:{
auto result=emitterfiles.get_cte_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 90:{
auto result=emitterfiles.get_cte_cancel_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 91:{
auto result=emitterfiles.get_cte_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 92:{
auto result=emitterfiles.get_cte_correction_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 93:{
auto result=emitterfiles.get_cte_correction_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 94:{
auto result=emitterfiles.get_mdfe_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 95:{
auto result=emitterfiles.get_mdfe_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 96:{
auto result=emitterfiles.get_nfcom_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 97:{
auto result=emitterfiles.get_nfcom_cancel_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 98:{
auto result=emitterfiles.get_nfcom_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 99:{
auto result=emitterfiles.get_dce_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 100:{
auto result=emitterfiles.get_dce_cancel_xml("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 101:{
auto result=emitterfiles.get_dce_pdf("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
case 102:{
auto result=emitterfiles.download_report_v2("00000000-0000-4000-8000-000000000001",issuerauth);
auto bytes=result.bytes();constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];
break;}
default:return 96;}return 0;}catch(const Error&e){std::cerr<<e.kind()<<": "<<e.what();return 93;}catch(const std::exception&e){std::cerr<<e.what();return 94;}}
