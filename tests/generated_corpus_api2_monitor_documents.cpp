#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_monitor_documents(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
{auto field=model.get_success();if(field.has_value())model.set_success(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorPagination::from_json("{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_current_page();if(field.has_value())model.set_current_page(field.value());}
{auto field=model.get_last_page();if(field.has_value())model.set_last_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorPagination getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorPagination";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAddress::from_json("{\"codigo_municipio\":3550308,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorAddress getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorAddress";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorCompany::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_modelos_download();if(field.has_value())model.set_modelos_download(field.value());}
{auto field=model.get_categorias_download();if(field.has_value())model.set_categorias_download(field.value());}
{auto field=model.get_ambiente_download();if(field.has_value())model.set_ambiente_download(field.value());}
{auto field=model.get_certificado_vencimento();if(field.has_value())model.set_certificado_vencimento(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_dfe_retroativas();if(field.has_value())model.set_dfe_retroativas(field.value());}
{auto field=model.get_dfe_retroativas_total();if(field.has_value())model.set_dfe_retroativas_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorCompany getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorCompany";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorMunicipalityRegistration::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"tipo_download\":1,\"municipio\":\"synthetic\",\"uf\":\"synthetic\",\"codigo_ibge\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_tipo_download();if(field.has_value())model.set_tipo_download(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorMunicipalityRegistration getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorMunicipalityRegistration";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAvailableMunicipality::from_json("{\"nativo\":false,\"im\":false,\"certificado\":false,\"login_senha\":false,\"cadastro_prefeitura\":false,\"domicilio_fiscal_municipio\":false,\"multiplos_servicos\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_nativo();if(field.has_value())model.set_nativo(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_certificado();if(field.has_value())model.set_certificado(field.value());}
{auto field=model.get_login_senha();if(field.has_value())model.set_login_senha(field.value());}
{auto field=model.get_cadastro_prefeitura();if(field.has_value())model.set_cadastro_prefeitura(field.value());}
{auto field=model.get_domicilio_fiscal_municipio();if(field.has_value())model.set_domicilio_fiscal_municipio(field.value());}
{auto field=model.get_multiplos_servicos();if(field.has_value())model.set_multiplos_servicos(field.value());}
{auto field=model.get_download_emitidas();if(field.has_value())model.set_download_emitidas(field.value());}
{auto field=model.get_download_recebidas();if(field.has_value())model.set_download_recebidas(field.value());}
{auto field=model.get_guia_cadastro_prefeitura();if(field.has_value())model.set_guia_cadastro_prefeitura(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorAvailableMunicipality getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorAvailableMunicipality";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDownloadStatistics::from_json("{\"total_downloads\":0,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDownloadStatistics getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDownloadStatistics";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDownloadStatisticsEmpresasItem::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"total_downloads\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDownloadStatisticsEmpresasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDownloadStatisticsEmpresasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorCompanyPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorCompanyPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorCompanyPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorMunicipalityPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorMunicipalityPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorMunicipalityPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAvailableMunicipalities::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorAvailableMunicipalities getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorAvailableMunicipalities";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorPerson::from_json("{\"cnpj\":\"00000000000000\",\"razao_social\":\"EMPRESA FORNECEDORA LTDA\",\"ie\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"complemento\":\"Galp\u00e3o 2\",\"bairro\":\"Distrito Industrial\",\"cep\":\"12345-678\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@fornecedor.com\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorPerson getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorPerson";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorManifestationStateVariant0::from_json("{\"codigo\":0,\"descricao\":\"synthetic\",\"manifestado\":false,\"automatica\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_manifestado();if(field.has_value())model.set_manifestado(field.value());}
{auto field=model.get_automatica();if(field.has_value())model.set_automatica(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorManifestationStateVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorManifestationStateVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfe::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfe\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-02-27 13:17:00\",\"numero\":200,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":6200,\"operacao\":0,\"finalidade\":1,\"cfop\":[\"2909\"],\"natureza_operacao\":\"Compra para industrializa\u00e7\u00e3o\",\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"EMPRESA FORNECEDORA LTDA\",\"ie\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"complemento\":\"Galp\u00e3o 2\",\"bairro\":\"Distrito Industrial\",\"cep\":\"12345-678\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@fornecedor.com\"},\"cliente\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"EMPRESA COMPRADORA S/A\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Principal\",\"numero\":\"1000\",\"bairro\":\"Centro\",\"cep\":\"98765-432\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11888888888\",\"email\":\"compras@empresa.com\"},\"pedido\":{\"numero_pedido\":\"PED-2025-001234\",\"numero_compra\":\"OC-2025-005678\"},\"produtos\":[{\"codigo\":\"MP001\",\"descricao\":\"MAT\u00c9RIA PRIMA ESPECIAL TIPO A\",\"ncm\":\"39269090\",\"cfop\":\"2909\",\"unidade\":\"KG\",\"quantidade\":1000,\"valor_unitario\":6.2,\"valor_total\":6200,\"impostos\":{\"icms\":{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116},\"ipi\":{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310},\"pis\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3},\"cofins\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}}}],\"transporte\":{\"modalidade_frete\":1,\"transportadora\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"TRANSPORTADORA R\u00c1PIDA LTDA\",\"ie\":\"222222222222\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 50\",\"cidade\":\"S\u00e3o Paulo\",\"uf\":\"SP\"},\"volumes\":[{\"quantidade\":10,\"especie\":\"CAIXA\",\"marca\":\"FORNECEDOR\",\"numeracao\":\"1-10\",\"peso_liquido\":1000,\"peso_bruto\":1050}],\"veiculo\":{\"placa\":\"ABC1234\",\"uf\":\"SP\"}},\"totais\":{\"icms_bc\":6200,\"icms_valor\":1116,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":310,\"ipi_devolvido_valor\":0,\"pis_valor\":102.3,\"cofins_valor\":471.2,\"ii_valor\":0,\"valor_produtos\":6200,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0,\"valor_total_nfe\":7826},\"totais_issqn\":{\"valor_servicos\":0,\"iss_bc\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"data_competencia\":\"2025-02-27\",\"deducao\":0,\"outras_retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"regime_especial_tributacao\":\"1\"},\"fatura\":{\"numero\":\"2025/0200\",\"valor_original\":6200,\"valor_desconto\":0,\"valor_liquido\":6200},\"parcelas\":[{\"numero\":\"001\",\"vencimento\":\"2025-03-27\",\"valor\":3100},{\"numero\":\"002\",\"vencimento\":\"2025-04-27\",\"valor\":3100}],\"responsavel_tecnico\":{\"cnpj\":\"33333333000333\",\"contato\":\"Jo\u00e3o Silva\",\"email\":\"suporte@sistema.com\",\"telefone\":\"11777777777\"},\"protocolo\":\"135250000123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_totais_issqn();if(field.has_value())model.set_totais_issqn(field.value());}
{auto field=model.get_produtos();if(field.has_value())model.set_produtos(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_totais();if(field.has_value())model.set_totais(field.value());}
{auto field=model.get_fatura();if(field.has_value())model.set_fatura(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_pedido();if(field.has_value())model.set_pedido(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_responsavel_tecnico();if(field.has_value())model.set_responsavel_tecnico(field.value());}
{auto field=model.get_emitente();if(field.has_value())model.set_emitente(field.value());}
{auto field=model.get_transporte();if(field.has_value())model.set_transporte(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_docs();if(field.has_value())model.set_docs(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_cliente();if(field.has_value())model.set_cliente(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_parcelas();if(field.has_value())model.set_parcelas(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_qtd_produtos();if(field.has_value())model.set_qtd_produtos(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_totais_ibs_cbs();if(field.has_value())model.set_totais_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfe getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfe";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTotaisIssqn::from_json("{\"valor_servicos\":0,\"iss_bc\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"data_competencia\":\"2025-02-27\",\"deducao\":0,\"outras_retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"regime_especial_tributacao\":\"1\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_servicos();if(field.has_value())model.set_valor_servicos(field.value());}
{auto field=model.get_iss_bc();if(field.has_value())model.set_iss_bc(field.value());}
{auto field=model.get_iss_valor();if(field.has_value())model.set_iss_valor(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_deducao();if(field.has_value())model.set_deducao(field.value());}
{auto field=model.get_outras_retencoes();if(field.has_value())model.set_outras_retencoes(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_iss_retido_valor();if(field.has_value())model.set_iss_retido_valor(field.value());}
{auto field=model.get_regime_especial_tributacao();if(field.has_value())model.set_regime_especial_tributacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotaisIssqn getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotaisIssqn";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItem::from_json("{\"codigo\":\"MP001\",\"descricao\":\"MAT\u00c9RIA PRIMA ESPECIAL TIPO A\",\"ncm\":\"39269090\",\"cfop\":\"2909\",\"unidade\":\"KG\",\"quantidade\":1000,\"valor_unitario\":6.2,\"valor_total\":6200,\"impostos\":{\"icms\":{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116},\"ipi\":{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310},\"pis\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3},\"cofins\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_valor_unitario();if(field.has_value())model.set_valor_unitario(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_cest();if(field.has_value())model.set_cest(field.value());}
{auto field=model.get_unidade_tributavel();if(field.has_value())model.set_unidade_tributavel(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_quantidade_tributavel();if(field.has_value())model.set_quantidade_tributavel(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_subtotal_tributavel();if(field.has_value())model.set_subtotal_tributavel(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_outras_despesas();if(field.has_value())model.set_outras_despesas(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_gtin_tributavel();if(field.has_value())model.set_gtin_tributavel(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_subtotal();if(field.has_value())model.set_subtotal(field.value());}
{auto field=model.get_frete();if(field.has_value())model.set_frete(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_item();if(field.has_value())model.set_item(field.value());}
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostos::from_json("{\"icms\":{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116},\"ipi\":{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310},\"pis\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3},\"cofins\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_imposto_importacao();if(field.has_value())model.set_imposto_importacao(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_ipi_devolvido();if(field.has_value())model.set_ipi_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosImpostoImportacao::from_json("{\"ii_bc\":0,\"despesas_aduaneiras\":0,\"ii_valor\":0,\"iof_valor\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ii_bc();if(field.has_value())model.set_ii_bc(field.value());}
{auto field=model.get_despesas_aduaneiras();if(field.has_value())model.set_despesas_aduaneiras(field.value());}
{auto field=model.get_ii_valor();if(field.has_value())model.set_ii_valor(field.value());}
{auto field=model.get_iof_valor();if(field.has_value())model.set_iof_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosImpostoImportacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosImpostoImportacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIpi::from_json("{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_qtd_selo();if(field.has_value())model.set_qtd_selo(field.value());}
{auto field=model.get_codigo_selo();if(field.has_value())model.set_codigo_selo(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_ipi_aliquota();if(field.has_value())model.set_ipi_aliquota(field.value());}
{auto field=model.get_ipi_valor();if(field.has_value())model.set_ipi_valor(field.value());}
{auto field=model.get_ipi_bc();if(field.has_value())model.set_ipi_bc(field.value());}
{auto field=model.get_codigo_enquadramento();if(field.has_value())model.set_codigo_enquadramento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIpi getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIpi";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosCofins::from_json("{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cofins_bc();if(field.has_value())model.set_cofins_bc(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_cofins_aliquota();if(field.has_value())model.set_cofins_aliquota(field.value());}
{auto field=model.get_cofins_aliquota_valor();if(field.has_value())model.set_cofins_aliquota_valor(field.value());}
{auto field=model.get_cofins_quantidade_bc();if(field.has_value())model.set_cofins_quantidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosCofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosCofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbs::from_json("{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_indicador_doacao();if(field.has_value())model.set_indicador_doacao(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_tributacao_regular();if(field.has_value())model.set_tributacao_regular(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_tributacao_monofasica();if(field.has_value())model.set_tributacao_monofasica(field.value());}
{auto field=model.get_transferencia_credito();if(field.has_value())model.set_transferencia_credito(field.value());}
{auto field=model.get_ajuste_competencia();if(field.has_value())model.set_ajuste_competencia(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_credito_presumido_zfm();if(field.has_value())model.set_credito_presumido_zfm(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsEstadual::from_json("{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsMunicipal::from_json("{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCbs::from_json("{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegular::from_json("{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegular getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegular";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsEstadual::from_json("{\"aliquota_efetiva\":1.1,\"valor\":68.2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsMunicipal::from_json("{\"aliquota_efetiva\":0.75,\"valor\":46.5}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularCbs::from_json("{\"aliquota_efetiva\":0.88,\"valor\":54.56}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamental::from_json("{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsEstadual::from_json("{\"aliquota\":1.0,\"valor\":62.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsMunicipal::from_json("{\"aliquota\":0.6,\"valor\":37.2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalCbs::from_json("{\"aliquota\":0.7,\"valor\":43.4}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoMonofasica::from_json("{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade_bc();if(field.has_value())model.set_quantidade_bc(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_quantidade_bc_retencao();if(field.has_value())model.set_quantidade_bc_retencao(field.value());}
{auto field=model.get_aliquota_ibs_retencao();if(field.has_value())model.set_aliquota_ibs_retencao(field.value());}
{auto field=model.get_aliquota_cbs_retencao();if(field.has_value())model.set_aliquota_cbs_retencao(field.value());}
{auto field=model.get_valor_ibs_retencao();if(field.has_value())model.set_valor_ibs_retencao(field.value());}
{auto field=model.get_valor_cbs_retencao();if(field.has_value())model.set_valor_cbs_retencao(field.value());}
{auto field=model.get_quantidade_bc_retido();if(field.has_value())model.set_quantidade_bc_retido(field.value());}
{auto field=model.get_aliquota_ibs_retido();if(field.has_value())model.set_aliquota_ibs_retido(field.value());}
{auto field=model.get_aliquota_cbs_retido();if(field.has_value())model.set_aliquota_cbs_retido(field.value());}
{auto field=model.get_valor_ibs_retido();if(field.has_value())model.set_valor_ibs_retido(field.value());}
{auto field=model.get_valor_cbs_retido();if(field.has_value())model.set_valor_cbs_retido(field.value());}
{auto field=model.get_aliquota_diferimento_ibs();if(field.has_value())model.set_aliquota_diferimento_ibs(field.value());}
{auto field=model.get_aliquota_diferimento_cbs();if(field.has_value())model.set_aliquota_diferimento_cbs(field.value());}
{auto field=model.get_valor_diferimento_ibs();if(field.has_value())model.set_valor_diferimento_ibs(field.value());}
{auto field=model.get_valor_diferimento_cbs();if(field.has_value())model.set_valor_diferimento_cbs(field.value());}
{auto field=model.get_valor_total_ibs();if(field.has_value())model.set_valor_total_ibs(field.value());}
{auto field=model.get_valor_total_cbs();if(field.has_value())model.set_valor_total_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoMonofasica getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoMonofasica";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTransferenciaCredito::from_json("{\"valor_ibs\":6.2,\"valor_cbs\":3.1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTransferenciaCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsTransferenciaCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsAjusteCompetencia::from_json("{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_competencia_apuracao();if(field.has_value())model.set_competencia_apuracao(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsAjusteCompetencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsAjusteCompetencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumido::from_json("{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_ibs_condicionado_suspensao();if(field.has_value())model.set_valor_ibs_condicionado_suspensao(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_cbs_condicionado_suspensao();if(field.has_value())model.set_valor_cbs_condicionado_suspensao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumidoZfm::from_json("{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_competencia_apuracao();if(field.has_value())model.set_competencia_apuracao(field.value());}
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumidoZfm getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumidoZfm";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsEstornoCredito::from_json("{\"valor_ibs\":6.2,\"valor_cbs\":3.1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIcms::from_json("{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_fcp_aliquota_uf_destino();if(field.has_value())model.set_fcp_aliquota_uf_destino(field.value());}
{auto field=model.get_icms_aliquota_reducao();if(field.has_value())model.set_icms_aliquota_reducao(field.value());}
{auto field=model.get_icms_st_aliquota();if(field.has_value())model.set_icms_st_aliquota(field.value());}
{auto field=model.get_icms_bc_uf_destino();if(field.has_value())model.set_icms_bc_uf_destino(field.value());}
{auto field=model.get_icms_st_aliquota_reducao();if(field.has_value())model.set_icms_st_aliquota_reducao(field.value());}
{auto field=model.get_icms_valor_uf_destino();if(field.has_value())model.set_icms_valor_uf_destino(field.value());}
{auto field=model.get_icms_motivo_desoneracao();if(field.has_value())model.set_icms_motivo_desoneracao(field.value());}
{auto field=model.get_icms_aliquota_efetiva();if(field.has_value())model.set_icms_aliquota_efetiva(field.value());}
{auto field=model.get_icms_st_retido_bc();if(field.has_value())model.set_icms_st_retido_bc(field.value());}
{auto field=model.get_icms_valor_operacao();if(field.has_value())model.set_icms_valor_operacao(field.value());}
{auto field=model.get_icms_modalidade_bc();if(field.has_value())model.set_icms_modalidade_bc(field.value());}
{auto field=model.get_fcp_st_bc();if(field.has_value())model.set_fcp_st_bc(field.value());}
{auto field=model.get_fcp_st_retido_aliquota();if(field.has_value())model.set_fcp_st_retido_aliquota(field.value());}
{auto field=model.get_fcp_bc_uf_destino();if(field.has_value())model.set_fcp_bc_uf_destino(field.value());}
{auto field=model.get_fcp_st_retido_bc();if(field.has_value())model.set_fcp_st_retido_bc(field.value());}
{auto field=model.get_icms_substituto_valor();if(field.has_value())model.set_icms_substituto_valor(field.value());}
{auto field=model.get_icms_st_uf();if(field.has_value())model.set_icms_st_uf(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_icms_aliquota_reducao_efetiva();if(field.has_value())model.set_icms_aliquota_reducao_efetiva(field.value());}
{auto field=model.get_icms_valor();if(field.has_value())model.set_icms_valor(field.value());}
{auto field=model.get_fcp_st_aliquota();if(field.has_value())model.set_fcp_st_aliquota(field.value());}
{auto field=model.get_icms_bc_efetiva();if(field.has_value())model.set_icms_bc_efetiva(field.value());}
{auto field=model.get_fcp_bc();if(field.has_value())model.set_fcp_bc(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_icms_st_valor_dest();if(field.has_value())model.set_icms_st_valor_dest(field.value());}
{auto field=model.get_icms_bc_operacao_propria();if(field.has_value())model.set_icms_bc_operacao_propria(field.value());}
{auto field=model.get_icms_st_retido_valor();if(field.has_value())model.set_icms_st_retido_valor(field.value());}
{auto field=model.get_icms_aliquota_diferimento();if(field.has_value())model.set_icms_aliquota_diferimento(field.value());}
{auto field=model.get_icms_st_bc_dest();if(field.has_value())model.set_icms_st_bc_dest(field.value());}
{auto field=model.get_icms_aliquota_interestadual();if(field.has_value())model.set_icms_aliquota_interestadual(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_icms_aliquota_uf_destino();if(field.has_value())model.set_icms_aliquota_uf_destino(field.value());}
{auto field=model.get_icms_valor_credito();if(field.has_value())model.set_icms_valor_credito(field.value());}
{auto field=model.get_icms_aliquota_credito();if(field.has_value())model.set_icms_aliquota_credito(field.value());}
{auto field=model.get_icms_st_aliquota_mva();if(field.has_value())model.set_icms_st_aliquota_mva(field.value());}
{auto field=model.get_icms_st_bc();if(field.has_value())model.set_icms_st_bc(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_fcp_st_retido_valor();if(field.has_value())model.set_fcp_st_retido_valor(field.value());}
{auto field=model.get_icms_bc();if(field.has_value())model.set_icms_bc(field.value());}
{auto field=model.get_icms_valor_efetivo();if(field.has_value())model.set_icms_valor_efetivo(field.value());}
{auto field=model.get_fcp_st_valor();if(field.has_value())model.set_fcp_st_valor(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_fcp_aliquota();if(field.has_value())model.set_fcp_aliquota(field.value());}
{auto field=model.get_icms_aliquota_partilha_interestadual();if(field.has_value())model.set_icms_aliquota_partilha_interestadual(field.value());}
{auto field=model.get_icms_valor_desonerado();if(field.has_value())model.set_icms_valor_desonerado(field.value());}
{auto field=model.get_icms_st_valor();if(field.has_value())model.set_icms_st_valor(field.value());}
{auto field=model.get_icms_valor_uf_remetente();if(field.has_value())model.set_icms_valor_uf_remetente(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_icms_aliquota();if(field.has_value())model.set_icms_aliquota(field.value());}
{auto field=model.get_fcp_valor_uf_destino();if(field.has_value())model.set_fcp_valor_uf_destino(field.value());}
{auto field=model.get_icms_valor_diferimento();if(field.has_value())model.set_icms_valor_diferimento(field.value());}
{auto field=model.get_fcp_valor();if(field.has_value())model.set_fcp_valor(field.value());}
{auto field=model.get_icms_st_modalidade_bc();if(field.has_value())model.set_icms_st_modalidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosPis::from_json("{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pis_aliquota();if(field.has_value())model.set_pis_aliquota(field.value());}
{auto field=model.get_pis_bc();if(field.has_value())model.set_pis_bc(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_pis_quantidade_bc();if(field.has_value())model.set_pis_quantidade_bc(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_pis_aliquota_valor();if(field.has_value())model.set_pis_aliquota_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosPis getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosPis";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIssqn::from_json("{\"iss_bc\":0,\"iss_aliquota\":0,\"iss_valor\":0,\"municipio_fato_gerador\":\"00000000\",\"item_servico\":\"0000\",\"deducao\":0,\"retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"exigibilidade\":\"1\",\"codigo_servico\":\"0000\",\"municipio_incidencia\":\"00000000\",\"pais\":\"1058\",\"processo\":\"12345\",\"incentivo_fiscal\":\"2\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_iss_bc();if(field.has_value())model.set_iss_bc(field.value());}
{auto field=model.get_iss_aliquota();if(field.has_value())model.set_iss_aliquota(field.value());}
{auto field=model.get_iss_valor();if(field.has_value())model.set_iss_valor(field.value());}
{auto field=model.get_municipio_fato_gerador();if(field.has_value())model.set_municipio_fato_gerador(field.value());}
{auto field=model.get_item_servico();if(field.has_value())model.set_item_servico(field.value());}
{auto field=model.get_deducao();if(field.has_value())model.set_deducao(field.value());}
{auto field=model.get_retencoes();if(field.has_value())model.set_retencoes(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_iss_retido_valor();if(field.has_value())model.set_iss_retido_valor(field.value());}
{auto field=model.get_exigibilidade();if(field.has_value())model.set_exigibilidade(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_municipio_incidencia();if(field.has_value())model.set_municipio_incidencia(field.value());}
{auto field=model.get_pais();if(field.has_value())model.set_pais(field.value());}
{auto field=model.get_processo();if(field.has_value())model.set_processo(field.value());}
{auto field=model.get_incentivo_fiscal();if(field.has_value())model.set_incentivo_fiscal(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIssqn getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIssqn";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIpiDevolvido::from_json("{\"percentual_devolvido\":0,\"ipi_devolvido_valor\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_percentual_devolvido();if(field.has_value())model.set_percentual_devolvido(field.value());}
{auto field=model.get_ipi_devolvido_valor();if(field.has_value())model.set_ipi_devolvido_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIpiDevolvido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProdutosItemImpostosIpiDevolvido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProtocoloVariant1::from_json("{\"motivo\":\"Autorizado o uso da NF-e\",\"status\":\"100\",\"data_recebimento\":\"2025-02-27T13:28:33-03:00\",\"numero_protocolo\":\"000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_data_recebimento();if(field.has_value())model.set_data_recebimento(field.value());}
{auto field=model.get_numero_protocolo();if(field.has_value())model.set_numero_protocolo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProtocoloVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProtocoloVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeProtocolo::from_json("\"135250000123456\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProtocolo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeProtocolo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTotais::from_json("{\"icms_bc\":6200,\"icms_valor\":1116,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":310,\"ipi_devolvido_valor\":0,\"pis_valor\":102.3,\"cofins_valor\":471.2,\"ii_valor\":0,\"valor_produtos\":6200,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0,\"valor_total_nfe\":7826}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_desconto();if(field.has_value())model.set_valor_desconto(field.value());}
{auto field=model.get_ii_valor();if(field.has_value())model.set_ii_valor(field.value());}
{auto field=model.get_valor_seguro();if(field.has_value())model.set_valor_seguro(field.value());}
{auto field=model.get_fcp_st_retido_valor();if(field.has_value())model.set_fcp_st_retido_valor(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_icms_bc();if(field.has_value())model.set_icms_bc(field.value());}
{auto field=model.get_ipi_devolvido_valor();if(field.has_value())model.set_ipi_devolvido_valor(field.value());}
{auto field=model.get_fcp_st_valor();if(field.has_value())model.set_fcp_st_valor(field.value());}
{auto field=model.get_valor_produtos();if(field.has_value())model.set_valor_produtos(field.value());}
{auto field=model.get_valor_outras_despesas();if(field.has_value())model.set_valor_outras_despesas(field.value());}
{auto field=model.get_icms_valor_desonerado();if(field.has_value())model.set_icms_valor_desonerado(field.value());}
{auto field=model.get_valor_frete();if(field.has_value())model.set_valor_frete(field.value());}
{auto field=model.get_icms_st_valor();if(field.has_value())model.set_icms_st_valor(field.value());}
{auto field=model.get_valor_total_nfe();if(field.has_value())model.set_valor_total_nfe(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_icms_valor();if(field.has_value())model.set_icms_valor(field.value());}
{auto field=model.get_ipi_valor();if(field.has_value())model.set_ipi_valor(field.value());}
{auto field=model.get_fcp_valor();if(field.has_value())model.set_fcp_valor(field.value());}
{auto field=model.get_icms_st_bc();if(field.has_value())model.set_icms_st_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotais getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotais";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeFatura::from_json("{\"numero\":\"2025/0200\",\"valor_original\":6200,\"valor_desconto\":0,\"valor_liquido\":6200}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_desconto();if(field.has_value())model.set_valor_desconto(field.value());}
{auto field=model.get_valor_liquido();if(field.has_value())model.set_valor_liquido(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_original();if(field.has_value())model.set_valor_original(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeFatura getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeFatura";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfePedido::from_json("{\"numero_pedido\":\"PED-2025-001234\",\"numero_compra\":\"OC-2025-005678\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bandeira();if(field.has_value())model.set_bandeira(field.value());}
{auto field=model.get_ID();if(field.has_value())model.set_ID(field.value());}
{auto field=model.get_informacoes_complementares();if(field.has_value())model.set_informacoes_complementares(field.value());}
{auto field=model.get_numero_compra();if(field.has_value())model.set_numero_compra(field.value());}
{auto field=model.get_cnpj_credenciadora();if(field.has_value())model.set_cnpj_credenciadora(field.value());}
{auto field=model.get_intermediador();if(field.has_value())model.set_intermediador(field.value());}
{auto field=model.get_informacoes_fisco();if(field.has_value())model.set_informacoes_fisco(field.value());}
{auto field=model.get_desc_pagamento();if(field.has_value())model.set_desc_pagamento(field.value());}
{auto field=model.get_numero_pedido();if(field.has_value())model.set_numero_pedido(field.value());}
{auto field=model.get_autorizacao();if(field.has_value())model.set_autorizacao(field.value());}
{auto field=model.get_valor_pagamento();if(field.has_value())model.set_valor_pagamento(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_forma_pagamento();if(field.has_value())model.set_forma_pagamento(field.value());}
{auto field=model.get_cnpj_intermediador();if(field.has_value())model.set_cnpj_intermediador(field.value());}
{auto field=model.get_frete();if(field.has_value())model.set_frete(field.value());}
{auto field=model.get_presenca();if(field.has_value())model.set_presenca(field.value());}
{auto field=model.get_id_intermediador();if(field.has_value())model.set_id_intermediador(field.value());}
{auto field=model.get_pagamento();if(field.has_value())model.set_pagamento(field.value());}
{auto field=model.get_modalidade_frete();if(field.has_value())model.set_modalidade_frete(field.value());}
{auto field=model.get_tipo_integracao();if(field.has_value())model.set_tipo_integracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfePedido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfePedido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeResponsavelTecnico::from_json("{\"cnpj\":\"33333333000333\",\"contato\":\"Jo\u00e3o Silva\",\"email\":\"suporte@sistema.com\",\"telefone\":\"11777777777\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_contato();if(field.has_value())model.set_contato(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeResponsavelTecnico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeResponsavelTecnico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTransporte::from_json("{\"modalidade_frete\":1,\"transportadora\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"TRANSPORTADORA R\u00c1PIDA LTDA\",\"ie\":\"222222222222\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 50\",\"cidade\":\"S\u00e3o Paulo\",\"uf\":\"SP\"},\"volumes\":[{\"quantidade\":10,\"especie\":\"CAIXA\",\"marca\":\"FORNECEDOR\",\"numeracao\":\"1-10\",\"peso_liquido\":1000,\"peso_bruto\":1050}],\"veiculo\":{\"placa\":\"ABC1234\",\"uf\":\"SP\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_peso_liquido();if(field.has_value())model.set_peso_liquido(field.value());}
{auto field=model.get_volume();if(field.has_value())model.set_volume(field.value());}
{auto field=model.get_veiculo();if(field.has_value())model.set_veiculo(field.value());}
{auto field=model.get_especie();if(field.has_value())model.set_especie(field.value());}
{auto field=model.get_numeracao();if(field.has_value())model.set_numeracao(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
{auto field=model.get_retirada();if(field.has_value())model.set_retirada(field.value());}
{auto field=model.get_marca();if(field.has_value())model.set_marca(field.value());}
{auto field=model.get_entrega();if(field.has_value())model.set_entrega(field.value());}
{auto field=model.get_volumes();if(field.has_value())model.set_volumes(field.value());}
{auto field=model.get_transportadora();if(field.has_value())model.set_transportadora(field.value());}
{auto field=model.get_modalidade_frete();if(field.has_value())model.set_modalidade_frete(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporte getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporte";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTransporteVeiculo::from_json("{\"placa\":\"ABC1234\",\"uf\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteVeiculo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteVeiculo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTransporteRetirada::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteRetirada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteRetirada";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTransporteEntrega::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteEntrega getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteEntrega";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTransporteVolumesItem::from_json("{\"quantidade\":10,\"especie\":\"CAIXA\",\"marca\":\"FORNECEDOR\",\"numeracao\":\"1-10\",\"peso_liquido\":1000,\"peso_bruto\":1050}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_especie();if(field.has_value())model.set_especie(field.value());}
{auto field=model.get_marca();if(field.has_value())model.set_marca(field.value());}
{auto field=model.get_numeracao();if(field.has_value())model.set_numeracao(field.value());}
{auto field=model.get_peso_liquido();if(field.has_value())model.set_peso_liquido(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteVolumesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteVolumesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTransporteTransportadora::from_json("{\"cnpj\":\"22222222000222\",\"razao_social\":\"TRANSPORTADORA R\u00c1PIDA LTDA\",\"ie\":\"222222222222\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 50\",\"cidade\":\"S\u00e3o Paulo\",\"uf\":\"SP\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_bairro();if(field.has_value())model.set_bairro(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_endereco();if(field.has_value())model.set_endereco(field.value());}
{auto field=model.get_nome_fantasia();if(field.has_value())model.set_nome_fantasia(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_complemento();if(field.has_value())model.set_complemento(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteTransportadora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTransporteTransportadora";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeDocs::from_json("{\"xml\":\"<nfeProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/nfe\\\">...</nfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeParcelasItem::from_json("{\"numero\":\"001\",\"vencimento\":\"2025-03-27\",\"valor\":3100}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_vencimento();if(field.has_value())model.set_vencimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeParcelasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeParcelasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTotaisIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotaisIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotaisIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfeTotaisIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotaisIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfeTotaisIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfse\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-03-10 16:15:12\",\"data_cancelamento\":null,\"numero\":300,\"serie\":\"1\",\"identificacao_nfse\":{\"codigo_verificacao\":\"ABC123456\",\"chave\":\"00000000000000000000000000000000000000000000000000\",\"data_competencia\":\"2025-03-10\",\"rps\":{\"serie\":\"1\",\"numero\":10,\"data_emissao\":\"2025-03-10 16:15:10\"},\"nfse_substituida\":null},\"prestador\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"PRESTADORA DE SERVI\u00c7OS LTDA\",\"im\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua dos Servi\u00e7os\",\"numero\":\"100\",\"complemento\":\"Sala 201\",\"bairro\":\"Centro\",\"cep\":\"01000-000\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@prestadora.com\"},\"tomador\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"EMPRESA TOMADORA S/A\",\"uf\":\"SP\",\"endereco\":\"Av. Empresarial\",\"numero\":\"500\",\"bairro\":\"Jardim Empresarial\",\"cep\":\"02000-000\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11888888888\",\"email\":\"financeiro@tomadora.com\"},\"valor\":5500,\"valor_liquido\":5225,\"valor_recebido\":5225,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"6201500\",\"codigo_servico\":\"01.05\",\"codigo_tributacao_municipio\":\"620150000\",\"discriminacao\":\"DESENVOLVIMENTO E LICENCIAMENTO DE PROGRAMAS DE COMPUTADOR SOB ENCOMENDA - SISTEMA DE GEST\u00c3O EMPRESARIAL\",\"local_prestacao\":\"S\u00e3o Paulo/SP\",\"impostos\":{\"tributacao_iss\":1,\"tributacao_descricao\":\"Opera\u00e7\u00e3o tribut\u00e1vel\",\"iss_retido\":2,\"bc\":5500,\"iss_aliquota\":5,\"iss_valor\":275,\"pis_aliquota\":0.65,\"pis_valor\":35.75,\"cofins_aliquota\":3,\"cofins_valor\":165,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_discriminacao();if(field.has_value())model.set_discriminacao(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_totais();if(field.has_value())model.set_totais(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_identificacao_nfse();if(field.has_value())model.set_identificacao_nfse(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_valor_liquido();if(field.has_value())model.set_valor_liquido(field.value());}
{auto field=model.get_servicos();if(field.has_value())model.set_servicos(field.value());}
{auto field=model.get_data_cancelamento();if(field.has_value())model.set_data_cancelamento(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_prestador();if(field.has_value())model.set_prestador(field.value());}
{auto field=model.get_docs();if(field.has_value())model.set_docs(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseTotais::from_json("{\"icms_bc\":6200,\"icms_valor\":1116,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":310,\"ipi_devolvido_valor\":0,\"pis_valor\":102.3,\"cofins_valor\":471.2,\"ii_valor\":0,\"valor_produtos\":6200,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0,\"valor_total_nfe\":7826}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_iss_valor();if(field.has_value())model.set_iss_valor(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_inss_valor();if(field.has_value())model.set_inss_valor(field.value());}
{auto field=model.get_ir_valor();if(field.has_value())model.set_ir_valor(field.value());}
{auto field=model.get_csll_valor();if(field.has_value())model.set_csll_valor(field.value());}
{auto field=model.get_cp_valor();if(field.has_value())model.set_cp_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseTotais getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseTotais";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseImpostos::from_json("{\"tributacao_iss\":1,\"tributacao_descricao\":\"Opera\u00e7\u00e3o tribut\u00e1vel\",\"iss_retido\":2,\"bc\":5500,\"iss_aliquota\":5,\"iss_valor\":275,\"pis_aliquota\":0.65,\"pis_valor\":35.75,\"cofins_aliquota\":3,\"cofins_valor\":165,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tributacao_descricao();if(field.has_value())model.set_tributacao_descricao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_iss_aliquota();if(field.has_value())model.set_iss_aliquota(field.value());}
{auto field=model.get_iss_valor();if(field.has_value())model.set_iss_valor(field.value());}
{auto field=model.get_pis_aliquota();if(field.has_value())model.set_pis_aliquota(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_cofins_aliquota();if(field.has_value())model.set_cofins_aliquota(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_inss_aliquota();if(field.has_value())model.set_inss_aliquota(field.value());}
{auto field=model.get_inss_valor();if(field.has_value())model.set_inss_valor(field.value());}
{auto field=model.get_ir_aliquota();if(field.has_value())model.set_ir_aliquota(field.value());}
{auto field=model.get_ir_valor();if(field.has_value())model.set_ir_valor(field.value());}
{auto field=model.get_csll_aliquota();if(field.has_value())model.set_csll_aliquota(field.value());}
{auto field=model.get_csll_valor();if(field.has_value())model.set_csll_valor(field.value());}
{auto field=model.get_cp_aliquota();if(field.has_value())model.set_cp_aliquota(field.value());}
{auto field=model.get_cp_valor();if(field.has_value())model.set_cp_valor(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbs::from_json("{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_finalidade_nfse();if(field.has_value())model.set_finalidade_nfse(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_localidade_incidencia();if(field.has_value())model.set_localidade_incidencia(field.value());}
{auto field=model.get_cod_indicador_operacao();if(field.has_value())model.set_cod_indicador_operacao(field.value());}
{auto field=model.get_indicador_destinatario();if(field.has_value())model.set_indicador_destinatario(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_valor_calculo_reembolso_repasse();if(field.has_value())model.set_valor_calculo_reembolso_repasse(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsCbs::from_json("{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsIbsEstadual::from_json("{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsIbsMunicipal::from_json("{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsLocalidadeIncidencia::from_json("{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsLocalidadeIncidencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseImpostosIbsCbsLocalidadeIncidencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseIdentificacaoNfse::from_json("{\"codigo_verificacao\":\"ABC123456\",\"chave\":\"00000000000000000000000000000000000000000000000000\",\"data_competencia\":\"2025-03-10\",\"rps\":{\"serie\":\"1\",\"numero\":10,\"data_emissao\":\"2025-03-10 16:15:10\"},\"nfse_substituida\":null}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_rps();if(field.has_value())model.set_rps(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_provedor();if(field.has_value())model.set_provedor(field.value());}
{auto field=model.get_nfse_substituida();if(field.has_value())model.set_nfse_substituida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseIdentificacaoNfse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseIdentificacaoNfse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseIdentificacaoNfseRps::from_json("{\"serie\":\"1\",\"numero\":10,\"data_emissao\":\"2025-03-10 16:15:10\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseIdentificacaoNfseRps getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseIdentificacaoNfseRps";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItem::from_json("{\"valor\":3000,\"valor_liquido\":2850,\"valor_recebido\":2850,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"6201500\",\"codigo_servico\":\"01.05\",\"codigo_tributacao_municipio\":\"620150000\",\"discriminacao\":\"DESENVOLVIMENTO DE SOFTWARE - M\u00d3DULO FINANCEIRO\",\"local_prestacao\":\"S\u00e3o Paulo/SP\",\"impostos\":{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":3000,\"iss_aliquota\":5,\"iss_valor\":150,\"pis_aliquota\":0.65,\"pis_valor\":19.5,\"cofins_aliquota\":3,\"cofins_valor\":90,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":3000,\"cbs\":{\"valor\":27,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":3,\"ibs_estadual\":{\"valor\":3,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_desconto_condicionado();if(field.has_value())model.set_desconto_condicionado(field.value());}
{auto field=model.get_discriminacao();if(field.has_value())model.set_discriminacao(field.value());}
{auto field=model.get_valor_liquido();if(field.has_value())model.set_valor_liquido(field.value());}
{auto field=model.get_codigo_tributacao_municipio();if(field.has_value())model.set_codigo_tributacao_municipio(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_local_prestacao();if(field.has_value())model.set_local_prestacao(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_desconto_incondicionado();if(field.has_value())model.set_desconto_incondicionado(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemLocalPrestacaoVariant1::from_json("{\"uf\":\"SC\",\"cidade\":\"Palho\u00e7a\",\"codigo_municipio\":\"4211900\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemLocalPrestacaoVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemLocalPrestacaoVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemLocalPrestacao::from_json("\"S\u00e3o Paulo/SP\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemLocalPrestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemLocalPrestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemImpostos::from_json("{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":3000,\"iss_aliquota\":5,\"iss_valor\":150,\"pis_aliquota\":0.65,\"pis_valor\":19.5,\"cofins_aliquota\":3,\"cofins_valor\":90,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":3000,\"cbs\":{\"valor\":27,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":3,\"ibs_estadual\":{\"valor\":3,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tributacao_iss();if(field.has_value())model.set_tributacao_iss(field.value());}
{auto field=model.get_tributacao_descricao();if(field.has_value())model.set_tributacao_descricao(field.value());}
{auto field=model.get_iss_retido();if(field.has_value())model.set_iss_retido(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_iss_aliquota();if(field.has_value())model.set_iss_aliquota(field.value());}
{auto field=model.get_iss_valor();if(field.has_value())model.set_iss_valor(field.value());}
{auto field=model.get_pis_aliquota();if(field.has_value())model.set_pis_aliquota(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_cofins_aliquota();if(field.has_value())model.set_cofins_aliquota(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_inss_aliquota();if(field.has_value())model.set_inss_aliquota(field.value());}
{auto field=model.get_inss_valor();if(field.has_value())model.set_inss_valor(field.value());}
{auto field=model.get_ir_aliquota();if(field.has_value())model.set_ir_aliquota(field.value());}
{auto field=model.get_ir_valor();if(field.has_value())model.set_ir_valor(field.value());}
{auto field=model.get_csll_aliquota();if(field.has_value())model.set_csll_aliquota(field.value());}
{auto field=model.get_csll_valor();if(field.has_value())model.set_csll_valor(field.value());}
{auto field=model.get_cp_aliquota();if(field.has_value())model.set_cp_aliquota(field.value());}
{auto field=model.get_cp_valor();if(field.has_value())model.set_cp_valor(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbs::from_json("{\"bc\":3000,\"cbs\":{\"valor\":27,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":3,\"ibs_estadual\":{\"valor\":3,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_finalidade_nfse();if(field.has_value())model.set_finalidade_nfse(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_localidade_incidencia();if(field.has_value())model.set_localidade_incidencia(field.value());}
{auto field=model.get_cod_indicador_operacao();if(field.has_value())model.set_cod_indicador_operacao(field.value());}
{auto field=model.get_indicador_destinatario();if(field.has_value())model.set_indicador_destinatario(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_valor_calculo_reembolso_repasse();if(field.has_value())model.set_valor_calculo_reembolso_repasse(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsCbs::from_json("{\"valor\":27,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsEstadual::from_json("{\"valor\":3,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsMunicipal::from_json("{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsLocalidadeIncidencia::from_json("{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsLocalidadeIncidencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseServicosItemImpostosIbsCbsLocalidadeIncidencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseLocalPrestacaoVariant1::from_json("{\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"codigo_municipio\":\"3550308\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseLocalPrestacaoVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseLocalPrestacaoVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseLocalPrestacao::from_json("\"S\u00e3o Paulo/SP\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseLocalPrestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseLocalPrestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseDocs::from_json("{\"xml\":\"<nfeProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/nfe\\\">...</nfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentNfseFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentNfseFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfe::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"mdfe\",\"status\":\"aprovado\",\"categoria\":\"proprietario_veiculos\",\"data_emissao\":\"2025-02-01 20:09:54\",\"numero\":600,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":23000,\"modalidade\":1,\"uf_carregamento\":\"BA\",\"uf_descarregamento\":\"PA\",\"peso_bruto\":6300,\"quantidade_nfe\":3,\"quantidade_cte\":1,\"quantidade_mdfe\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"TRANSPORTADORA NACIONAL LTDA\",\"ie\":\"000000000\",\"uf\":\"BA\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 150\",\"complemento\":\"Posto Fiscal\",\"bairro\":\"Zona Rural\",\"cep\":\"40000-000\",\"cidade\":\"Salvador\",\"telefone\":\"71999999999\",\"email\":\"mdfe@transportadora.com\"},\"carregamento\":[{\"cidade\":\"Salvador\",\"uf\":\"BA\",\"documentos\":[{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001241234567891\"}]}],\"descarregamento\":[{\"cidade\":\"Bel\u00e9m\",\"uf\":\"PA\",\"documentos\":[{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001241234567891\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001251234567892\"},{\"tipo\":\"CTe\",\"chave\":\"29250287654321098765570010000008001234567893\"}]}],\"percurso\":[{\"uf\":\"BA\",\"ordem\":1},{\"uf\":\"MG\",\"ordem\":2},{\"uf\":\"ES\",\"ordem\":3},{\"uf\":\"RJ\",\"ordem\":4},{\"uf\":\"MG\",\"ordem\":5},{\"uf\":\"GO\",\"ordem\":6},{\"uf\":\"TO\",\"ordem\":7},{\"uf\":\"PA\",\"ordem\":8}],\"rodoviario\":{\"rntrc\":\"12345678\",\"ciot\":[{\"numero\":\"123456789012\",\"cpf_cnpj\":\"12345678901\"}],\"veiculos\":[{\"codigo_interno\":\"001\",\"placa\":\"ABC1234\",\"renavam\":\"123456789\",\"tara\":8000,\"capacidade_kg\":15000,\"capacidade_m3\":90,\"tipo_rodado\":\"06\",\"tipo_carroceria\":\"00\",\"uf\":\"BA\",\"condutor\":{\"cpf\":\"12345678901\",\"nome\":\"JOS\u00c9 DA SILVA\"}},{\"codigo_interno\":\"002\",\"placa\":\"DEF5678\",\"renavam\":\"987654321\",\"tara\":4000,\"capacidade_kg\":10000,\"capacidade_m3\":60,\"tipo_rodado\":\"04\",\"tipo_carroceria\":\"01\",\"uf\":\"BA\"}],\"vale_pedagio\":{\"cnpj_fornecedor\":\"33333333000333\",\"cnpj_responsavel\":\"00000000000000\",\"numero_comprovante\":\"123456\",\"valor\":150.5},\"contratantes\":[{\"cnpj\":\"44444444000444\",\"razao_social\":\"EMPRESA CONTRATANTE LTDA\"}],\"lacres\":[{\"numero\":\"LAC001\"},{\"numero\":\"LAC002\"}]}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_uf_carregamento();if(field.has_value())model.set_uf_carregamento(field.value());}
{auto field=model.get_carregamento();if(field.has_value())model.set_carregamento(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_seguro();if(field.has_value())model.set_seguro(field.value());}
{auto field=model.get_quantidade_mdfe();if(field.has_value())model.set_quantidade_mdfe(field.value());}
{auto field=model.get_percurso();if(field.has_value())model.set_percurso(field.value());}
{auto field=model.get_quantidade_nfe();if(field.has_value())model.set_quantidade_nfe(field.value());}
{auto field=model.get_descarregamento();if(field.has_value())model.set_descarregamento(field.value());}
{auto field=model.get_ferroviario();if(field.has_value())model.set_ferroviario(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_aquaviario();if(field.has_value())model.set_aquaviario(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_rodoviario();if(field.has_value())model.set_rodoviario(field.value());}
{auto field=model.get_emitente();if(field.has_value())model.set_emitente(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_docs();if(field.has_value())model.set_docs(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_uf_descarregamento();if(field.has_value())model.set_uf_descarregamento(field.value());}
{auto field=model.get_aereo();if(field.has_value())model.set_aereo(field.value());}
{auto field=model.get_quantidade_cte();if(field.has_value())model.set_quantidade_cte(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfe getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfe";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeCarregamentoItem::from_json("{\"cidade\":\"Salvador\",\"uf\":\"BA\",\"documentos\":[{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001241234567891\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_nome_municipio();if(field.has_value())model.set_nome_municipio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeCarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeCarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeCarregamentoItemDocumentosItem::from_json("{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeCarregamentoItemDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeCarregamentoItemDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeSeguroItem::from_json("{\"responsavel\":{\"tipo_responsavel\":\"2\",\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\"},\"seguradora\":{\"cnpj\":\"00000000000000\",\"nome_seguradora\":\"XXXXXXXXXXXX\"},\"numero_apolice\":\"000000000000\",\"numero_averbacao\":[\"000000000000\"]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_responsavel();if(field.has_value())model.set_responsavel(field.value());}
{auto field=model.get_seguradora();if(field.has_value())model.set_seguradora(field.value());}
{auto field=model.get_numero_apolice();if(field.has_value())model.set_numero_apolice(field.value());}
{auto field=model.get_numero_averbacao();if(field.has_value())model.set_numero_averbacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeSeguroItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeSeguroItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeSeguroItemResponsavel::from_json("{\"tipo_responsavel\":\"2\",\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_responsavel();if(field.has_value())model.set_tipo_responsavel(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeSeguroItemResponsavel getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeSeguroItemResponsavel";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeSeguroItemSeguradora::from_json("{\"cnpj\":\"00000000000000\",\"nome_seguradora\":\"XXXXXXXXXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_nome_seguradora();if(field.has_value())model.set_nome_seguradora(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeSeguroItemSeguradora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeSeguroItemSeguradora";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfePercursoItemVariant0::from_json("{\"uf\":\"BA\",\"ordem\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfePercursoItemVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfePercursoItemVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfePercursoItem::from_json("{\"uf\":\"BA\",\"ordem\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfePercursoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfePercursoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItem::from_json("{\"cidade\":\"Bel\u00e9m\",\"uf\":\"PA\",\"documentos\":[{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001241234567891\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001251234567892\"},{\"tipo\":\"CTe\",\"chave\":\"29250287654321098765570010000008001234567893\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_nome_municipio();if(field.has_value())model.set_nome_municipio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItemDocumentosFiscaisItem::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItemDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItemDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItemDocumentosItem::from_json("{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItemDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDescarregamentoItemDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeFerroviario::from_json("{\"trem\":{\"prefixo\":\"ABC123\",\"data_liberacao\":\"2025-03-02 20:00:00\",\"origem\":\"A12\",\"destino\":\"B34\"},\"vagoes\":[{\"peso_bc\":\"0\",\"peso_real\":\"0\",\"tipo_vagao\":\"ABC\",\"serie\":\"XYZ\",\"numero\":\"110\",\"sequencia_vagao\":\"1\",\"tonelada_util\":\"0\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_trem();if(field.has_value())model.set_trem(field.value());}
{auto field=model.get_vagoes();if(field.has_value())model.set_vagoes(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFerroviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFerroviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeFerroviarioTrem::from_json("{\"prefixo\":\"ABC123\",\"data_liberacao\":\"2025-03-02 20:00:00\",\"origem\":\"A12\",\"destino\":\"B34\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_prefixo();if(field.has_value())model.set_prefixo(field.value());}
{auto field=model.get_data_liberacao();if(field.has_value())model.set_data_liberacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_destino();if(field.has_value())model.set_destino(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFerroviarioTrem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFerroviarioTrem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeFerroviarioVagoesItem::from_json("{\"peso_bc\":\"0\",\"peso_real\":\"0\",\"tipo_vagao\":\"ABC\",\"serie\":\"XYZ\",\"numero\":\"110\",\"sequencia_vagao\":\"1\",\"tonelada_util\":\"0\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_peso_bc();if(field.has_value())model.set_peso_bc(field.value());}
{auto field=model.get_peso_real();if(field.has_value())model.set_peso_real(field.value());}
{auto field=model.get_tipo_vagao();if(field.has_value())model.set_tipo_vagao(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_sequencia_vagao();if(field.has_value())model.set_sequencia_vagao(field.value());}
{auto field=model.get_tonelada_util();if(field.has_value())model.set_tonelada_util(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFerroviarioVagoesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFerroviarioVagoesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeProdutoPredominante::from_json("{\"tipo_carga\":\"02\",\"nome\":\"XXXXXX\",\"gtin\":\"00000000000000\",\"ncm\":\"00000000\",\"lotacao\":{\"carregamento\":{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"},\"descarregamento\":{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_carga();if(field.has_value())model.set_tipo_carga(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_lotacao();if(field.has_value())model.set_lotacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominante getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominante";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacao::from_json("{\"carregamento\":{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"},\"descarregamento\":{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_carregamento();if(field.has_value())model.set_carregamento(field.value());}
{auto field=model.get_descarregamento();if(field.has_value())model.set_descarregamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacaoCarregamento::from_json("{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacaoCarregamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacaoCarregamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacaoDescarregamento::from_json("{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacaoDescarregamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeProdutoPredominanteLotacaoDescarregamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAquaviario::from_json("{\"irin\":\"XXXX12345\",\"tipo_embarcacao\":\"01\",\"codigo_embarcacao\":\"AB12345\",\"nome_embarcacao\":\"XXXX XXXXXXXX\",\"numero_viagem\":\"AA12345\",\"codigo_porto_embarque\":\"XXXXX\",\"codigo_porto_destino\":\"XXXXX\",\"porto_transbordo\":\"XXXXXXXXX\",\"tipo_navegacao\":\"1\",\"terminal_carregamento\":[{\"codigo\":\"TC1\",\"nome\":\"XXXXXXXXXXX\"}],\"terminal_descarregamento\":[{\"codigo\":\"TD1\",\"nome\":\"XXXXXXXXXXX\"}],\"embarcacao_comboio\":[{\"codigo\":\"EC1\",\"identificador_balsa\":\"XXXXXXXXXXX\"}],\"carga_vazia\":[{\"identificador\":\"UCV1\",\"tipo_unidade\":1}],\"transporte_vazio\":[{\"identificador\":\"UTV1\",\"tipo_unidade\":1}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_irin();if(field.has_value())model.set_irin(field.value());}
{auto field=model.get_tipo_embarcacao();if(field.has_value())model.set_tipo_embarcacao(field.value());}
{auto field=model.get_codigo_embarcacao();if(field.has_value())model.set_codigo_embarcacao(field.value());}
{auto field=model.get_nome_embarcacao();if(field.has_value())model.set_nome_embarcacao(field.value());}
{auto field=model.get_numero_viagem();if(field.has_value())model.set_numero_viagem(field.value());}
{auto field=model.get_codigo_porto_embarque();if(field.has_value())model.set_codigo_porto_embarque(field.value());}
{auto field=model.get_codigo_porto_destino();if(field.has_value())model.set_codigo_porto_destino(field.value());}
{auto field=model.get_porto_transbordo();if(field.has_value())model.set_porto_transbordo(field.value());}
{auto field=model.get_tipo_navegacao();if(field.has_value())model.set_tipo_navegacao(field.value());}
{auto field=model.get_terminal_carregamento();if(field.has_value())model.set_terminal_carregamento(field.value());}
{auto field=model.get_terminal_descarregamento();if(field.has_value())model.set_terminal_descarregamento(field.value());}
{auto field=model.get_embarcacao_comboio();if(field.has_value())model.set_embarcacao_comboio(field.value());}
{auto field=model.get_carga_vazia();if(field.has_value())model.set_carga_vazia(field.value());}
{auto field=model.get_transporte_vazio();if(field.has_value())model.set_transporte_vazio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAquaviarioTerminalCarregamentoItem::from_json("{\"codigo\":\"TC1\",\"nome\":\"XXXXXXXXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioTerminalCarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioTerminalCarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAquaviarioTerminalDescarregamentoItem::from_json("{\"codigo\":\"TD1\",\"nome\":\"XXXXXXXXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioTerminalDescarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioTerminalDescarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAquaviarioEmbarcacaoComboioItem::from_json("{\"codigo\":\"EC1\",\"identificador_balsa\":\"XXXXXXXXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_identificador_balsa();if(field.has_value())model.set_identificador_balsa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioEmbarcacaoComboioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioEmbarcacaoComboioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAquaviarioCargaVaziaItem::from_json("{\"identificador\":\"UCV1\",\"tipo_unidade\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificador();if(field.has_value())model.set_identificador(field.value());}
{auto field=model.get_tipo_unidade();if(field.has_value())model.set_tipo_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioCargaVaziaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioCargaVaziaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAquaviarioTransporteVazioItem::from_json("{\"identificador\":\"UTV1\",\"tipo_unidade\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificador();if(field.has_value())model.set_identificador(field.value());}
{auto field=model.get_tipo_unidade();if(field.has_value())model.set_tipo_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioTransporteVazioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAquaviarioTransporteVazioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviario::from_json("{\"rntrc\":\"12345678\",\"ciot\":[{\"numero\":\"123456789012\",\"cpf_cnpj\":\"12345678901\"}],\"veiculos\":[{\"codigo_interno\":\"001\",\"placa\":\"ABC1234\",\"renavam\":\"123456789\",\"tara\":8000,\"capacidade_kg\":15000,\"capacidade_m3\":90,\"tipo_rodado\":\"06\",\"tipo_carroceria\":\"00\",\"uf\":\"BA\",\"condutor\":{\"cpf\":\"12345678901\",\"nome\":\"JOS\u00c9 DA SILVA\"}},{\"codigo_interno\":\"002\",\"placa\":\"DEF5678\",\"renavam\":\"987654321\",\"tara\":4000,\"capacidade_kg\":10000,\"capacidade_m3\":60,\"tipo_rodado\":\"04\",\"tipo_carroceria\":\"01\",\"uf\":\"BA\"}],\"vale_pedagio\":{\"cnpj_fornecedor\":\"33333333000333\",\"cnpj_responsavel\":\"00000000000000\",\"numero_comprovante\":\"123456\",\"valor\":150.5},\"contratantes\":[{\"cnpj\":\"44444444000444\",\"razao_social\":\"EMPRESA CONTRATANTE LTDA\"}],\"lacres\":[{\"numero\":\"LAC001\"},{\"numero\":\"LAC002\"}]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_contratantes();if(field.has_value())model.set_contratantes(field.value());}
{auto field=model.get_veiculo_reboque();if(field.has_value())model.set_veiculo_reboque(field.value());}
{auto field=model.get_lacres();if(field.has_value())model.set_lacres(field.value());}
{auto field=model.get_veiculos();if(field.has_value())model.set_veiculos(field.value());}
{auto field=model.get_ciot();if(field.has_value())model.set_ciot(field.value());}
{auto field=model.get_contratante();if(field.has_value())model.set_contratante(field.value());}
{auto field=model.get_condutor();if(field.has_value())model.set_condutor(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_veiculo_tracao();if(field.has_value())model.set_veiculo_tracao(field.value());}
{auto field=model.get_vale_pedagio();if(field.has_value())model.set_vale_pedagio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioContratantesItem::from_json("{\"cnpj\":\"44444444000444\",\"razao_social\":\"EMPRESA CONTRATANTE LTDA\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioContratantesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioContratantesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoReboqueItem::from_json("{\"codigo_interno\":\"2\",\"placa\":\"ABC0E00\",\"renavam\":\"00000000000\",\"tara\":\"0\",\"capacidade_kg\":\"100\",\"capacidade_m3\":\"0\",\"tipo_carroceria\":\"00\",\"uf_licenciamento\":\"MT\",\"proprietario\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXXXX XXXXXXXXXXXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"ie\":\"0000000000\",\"rntrc\":\"00000000\",\"uf\":\"PR\",\"tipo_proprietario\":2}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
{auto field=model.get_tara();if(field.has_value())model.set_tara(field.value());}
{auto field=model.get_capacidade_kg();if(field.has_value())model.set_capacidade_kg(field.value());}
{auto field=model.get_capacidade_m3();if(field.has_value())model.set_capacidade_m3(field.value());}
{auto field=model.get_tipo_carroceria();if(field.has_value())model.set_tipo_carroceria(field.value());}
{auto field=model.get_uf_licenciamento();if(field.has_value())model.set_uf_licenciamento(field.value());}
{auto field=model.get_proprietario();if(field.has_value())model.set_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoReboqueItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoReboqueItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoReboqueItemProprietario::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXXXX XXXXXXXXXXXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"ie\":\"0000000000\",\"rntrc\":\"00000000\",\"uf\":\"PR\",\"tipo_proprietario\":2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_tipo_proprietario();if(field.has_value())model.set_tipo_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoReboqueItemProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoReboqueItemProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioLacresItem::from_json("{\"numero\":\"LAC001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioLacresItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioLacresItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculosItem::from_json("{\"codigo_interno\":\"001\",\"placa\":\"ABC1234\",\"renavam\":\"123456789\",\"tara\":8000,\"capacidade_kg\":15000,\"capacidade_m3\":90,\"tipo_rodado\":\"06\",\"tipo_carroceria\":\"00\",\"uf\":\"BA\",\"condutor\":{\"cpf\":\"12345678901\",\"nome\":\"JOS\u00c9 DA SILVA\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tara();if(field.has_value())model.set_tara(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_capacidade_kg();if(field.has_value())model.set_capacidade_kg(field.value());}
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_tipo_rodado();if(field.has_value())model.set_tipo_rodado(field.value());}
{auto field=model.get_condutor();if(field.has_value())model.set_condutor(field.value());}
{auto field=model.get_capacidade_m3();if(field.has_value())model.set_capacidade_m3(field.value());}
{auto field=model.get_tipo_carroceria();if(field.has_value())model.set_tipo_carroceria(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculosItemCondutor::from_json("{\"cpf\":\"12345678901\",\"nome\":\"JOS\u00c9 DA SILVA\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculosItemCondutor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculosItemCondutor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioCiotItem::from_json("{\"numero\":\"123456789012\",\"cpf_cnpj\":\"12345678901\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_cpf_responsavel();if(field.has_value())model.set_cpf_responsavel(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_cpf_cnpj();if(field.has_value())model.set_cpf_cnpj(field.value());}
{auto field=model.get_codigo_ciot();if(field.has_value())model.set_codigo_ciot(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioCiotItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioCiotItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioContratanteItem::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioContratanteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioContratanteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioCondutorItem::from_json("{\"cpf\":\"00000000000\",\"nome\":\"XXXXXXX XXXXXXXXXXXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioCondutorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioCondutorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoTracao::from_json("{\"codigo_interno\":\"1\",\"placa\":\"ABC0D00\",\"renavam\":\"00000000000\",\"tara\":\"0\",\"capacidade_kg\":\"100\",\"capacidade_m3\":\"0\",\"tipo_rodado\":\"06\",\"tipo_carroceria\":\"00\",\"uf_licenciamento\":\"MT\",\"proprietario\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXXXX XXXXXXXXXXXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"ie\":\"0000000000\",\"rntrc\":\"00000000\",\"uf\":\"PR\",\"tipo_proprietario\":2}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
{auto field=model.get_tara();if(field.has_value())model.set_tara(field.value());}
{auto field=model.get_capacidade_kg();if(field.has_value())model.set_capacidade_kg(field.value());}
{auto field=model.get_capacidade_m3();if(field.has_value())model.set_capacidade_m3(field.value());}
{auto field=model.get_tipo_rodado();if(field.has_value())model.set_tipo_rodado(field.value());}
{auto field=model.get_tipo_carroceria();if(field.has_value())model.set_tipo_carroceria(field.value());}
{auto field=model.get_uf_licenciamento();if(field.has_value())model.set_uf_licenciamento(field.value());}
{auto field=model.get_proprietario();if(field.has_value())model.set_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoTracao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoTracao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoTracaoProprietario::from_json("{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXXXX XXXXXXXXXXXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"ie\":\"0000000000\",\"rntrc\":\"00000000\",\"uf\":\"PR\",\"tipo_proprietario\":2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_tipo_proprietario();if(field.has_value())model.set_tipo_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoTracaoProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioVeiculoTracaoProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagioVariant0::from_json("{\"cnpj_fornecedor\":\"33333333000333\",\"cnpj_responsavel\":\"00000000000000\",\"numero_comprovante\":\"123456\",\"valor\":150.5}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_fornecedor();if(field.has_value())model.set_cnpj_fornecedor(field.value());}
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_numero_comprovante();if(field.has_value())model.set_numero_comprovante(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagioVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagioVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagioVariant1Item::from_json("{\"cnpj_fornecedor\":\"00000000000000\",\"cnpj_responsavel\":\"00000000000000\",\"cpf_responsavel\":\"00000000000\",\"valor\":\"327.00\",\"comprovante\":\"00000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_fornecedor();if(field.has_value())model.set_cnpj_fornecedor(field.value());}
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_cpf_responsavel();if(field.has_value())model.set_cpf_responsavel(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_comprovante();if(field.has_value())model.set_comprovante(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagioVariant1Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagioVariant1Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagio::from_json("{\"cnpj_fornecedor\":\"33333333000333\",\"cnpj_responsavel\":\"00000000000000\",\"numero_comprovante\":\"123456\",\"valor\":150.5}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagio getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeRodoviarioValePedagio";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeDocs::from_json("{\"xml\":\"<nfeProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/nfe\\\">...</nfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeAereo::from_json("{\"nacionalidade_aeronave\":\"XXXX\",\"matricula_aeronave\":\"XXXXXX\",\"numero_voo\":\"AB1234\",\"aerodromo_embarque\":\"AB1\",\"aerodromo_destino\":\"AB2\",\"data_voo\":\"2025-02-03\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nacionalidade_aeronave();if(field.has_value())model.set_nacionalidade_aeronave(field.value());}
{auto field=model.get_matricula_aeronave();if(field.has_value())model.set_matricula_aeronave(field.value());}
{auto field=model.get_numero_voo();if(field.has_value())model.set_numero_voo(field.value());}
{auto field=model.get_aerodromo_embarque();if(field.has_value())model.set_aerodromo_embarque(field.value());}
{auto field=model.get_aerodromo_destino();if(field.has_value())model.set_aerodromo_destino(field.value());}
{auto field=model.get_data_voo();if(field.has_value())model.set_data_voo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAereo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeAereo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentMdfeFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentMdfeFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCte::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"cte\",\"status\":\"aprovado\",\"categoria\":\"citadas\",\"data_emissao\":\"2025-02-22 17:08:23\",\"numero\":800,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":5600,\"finalidade\":0,\"cfop\":[\"6353\"],\"modalidade\":1,\"uf_inicio_prestacao\":\"SP\",\"uf_termino_prestacao\":\"PR\",\"natureza_operacao\":\"PRESTA\u00c7\u00c3O DE SERVI\u00c7O DE TRANSPORTE A ESTABELECIMENTO INDUSTRIAL\",\"indicador_tomador\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"TRANSPORTADORA EXPRESS LTDA\",\"ie\":\"000000000\",\"uf\":\"SP\",\"endereco\":\"Rod. Anhanguera\",\"numero\":\"KM 30\",\"complemento\":\"Galp\u00e3o Log\u00edstico\",\"bairro\":\"Distrito Industrial\",\"cep\":\"13000-000\",\"cidade\":\"Campinas\",\"telefone\":\"19999999999\",\"email\":\"cte@transportadora.com\"},\"remetente\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"IND\u00daSTRIA METAL\u00daRGICA LTDA\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Industrial\",\"numero\":\"5000\",\"complemento\":\"Bloco A\",\"bairro\":\"Parque Industrial\",\"cep\":\"13200-000\",\"cidade\":\"Jundia\u00ed\",\"telefone\":\"11888888888\",\"email\":\"logistica@industria.com\"},\"destinatario\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"DISTRIBUIDORA PARANAENSE S/A\",\"ie\":\"222222222222\",\"uf\":\"PR\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"bairro\":\"CIC\",\"cep\":\"81000-000\",\"cidade\":\"Curitiba\",\"telefone\":\"41777777777\",\"email\":\"recebimento@distribuidora.com\"},\"expedidor\":null,\"recebedor\":null,\"tomador\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"IND\u00daSTRIA METAL\u00daRGICA LTDA\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Industrial\",\"numero\":\"5000\",\"complemento\":\"Bloco A\",\"bairro\":\"Parque Industrial\",\"cep\":\"13200-000\",\"cidade\":\"Jundia\u00ed\",\"telefone\":\"11888888888\",\"email\":\"fiscal@industria.com\"},\"impostos\":{\"icms\":{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"00\",\"bc\":5600,\"aliquota\":12,\"valor\":672,\"percentual_reducao\":0,\"valor_credito\":0,\"percentual_credito\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":5600,\"valor_ibs\":112.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":67.2,\"aliquota_diferimento\":0.1,\"valor_diferimento\":5.6,\"valor_devolvido\":2.8,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":44.8,\"aliquota_diferimento\":0.05,\"valor_diferimento\":2.8,\"valor_devolvido\":1.12,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":50.4,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.68,\"valor_devolvido\":0.56,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":61.6},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":42.0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":49.28}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":56.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":33.6},\"cbs\":{\"aliquota\":0.7,\"valor\":39.2}},\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":28.0,\"valor_ibs_condicionado_suspensao\":1.12,\"aliquota_cbs\":0.3,\"valor_cbs\":16.8,\"valor_cbs_condicionado_suspensao\":0.56},\"estorno_credito\":{\"valor_ibs\":5.6,\"valor_cbs\":2.8}}},\"servico\":{\"descricao\":\"TRANSPORTE RODOVI\u00c1RIO DE PRODUTOS METAL\u00daRGICOS\",\"quantidade_carga\":2500,\"unidade_medida\":\"KG\",\"tipo_servico\":0,\"modal\":\"01\",\"documentos_originarios\":[{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"},{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123461234567891\",\"serie\":\"1\",\"numero\":\"12346\",\"data_emissao\":\"2025-02-20\"}],\"componentes_valor\":[{\"nome\":\"FRETE PESO\",\"valor\":4500},{\"nome\":\"GRIS\",\"valor\":500},{\"nome\":\"PEDAGIO\",\"valor\":350},{\"nome\":\"TAS\",\"valor\":250}],\"informacoes_carga\":{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_remetente();if(field.has_value())model.set_remetente(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_expedidor();if(field.has_value())model.set_expedidor(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_uf_termino_prestacao();if(field.has_value())model.set_uf_termino_prestacao(field.value());}
{auto field=model.get_uf_inicio_prestacao();if(field.has_value())model.set_uf_inicio_prestacao(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_recebedor();if(field.has_value())model.set_recebedor(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_emitente();if(field.has_value())model.set_emitente(field.value());}
{auto field=model.get_indicador_tomador();if(field.has_value())model.set_indicador_tomador(field.value());}
{auto field=model.get_destinatario();if(field.has_value())model.set_destinatario(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_docs();if(field.has_value())model.set_docs(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_relacao_empresa();if(field.has_value())model.set_relacao_empresa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCte getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCte";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteDocumentosFiscaisItem::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_pin();if(field.has_value())model.set_pin(field.value());}
{auto field=model.get_previsao_entrega();if(field.has_value())model.set_previsao_entrega(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteServico::from_json("{\"descricao\":\"TRANSPORTE RODOVI\u00c1RIO DE PRODUTOS METAL\u00daRGICOS\",\"quantidade_carga\":2500,\"unidade_medida\":\"KG\",\"tipo_servico\":0,\"modal\":\"01\",\"documentos_originarios\":[{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"},{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123461234567891\",\"serie\":\"1\",\"numero\":\"12346\",\"data_emissao\":\"2025-02-20\"}],\"componentes_valor\":[{\"nome\":\"FRETE PESO\",\"valor\":4500},{\"nome\":\"GRIS\",\"valor\":500},{\"nome\":\"PEDAGIO\",\"valor\":350},{\"nome\":\"TAS\",\"valor\":250}],\"informacoes_carga\":{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_unidade_medida();if(field.has_value())model.set_unidade_medida(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_documentos_originarios();if(field.has_value())model.set_documentos_originarios(field.value());}
{auto field=model.get_componentes_valor();if(field.has_value())model.set_componentes_valor(field.value());}
{auto field=model.get_quantidade_carga();if(field.has_value())model.set_quantidade_carga(field.value());}
{auto field=model.get_modal();if(field.has_value())model.set_modal(field.value());}
{auto field=model.get_tipo_servico();if(field.has_value())model.set_tipo_servico(field.value());}
{auto field=model.get_informacoes_carga();if(field.has_value())model.set_informacoes_carga(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteServicoDocumentosOriginariosItem::from_json("{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoDocumentosOriginariosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoDocumentosOriginariosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteServicoComponentesValorItem::from_json("{\"nome\":\"FRETE PESO\",\"valor\":4500}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoComponentesValorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoComponentesValorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteServicoInformacoesCarga::from_json("{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_outras_caracteristicas();if(field.has_value())model.set_outras_caracteristicas(field.value());}
{auto field=model.get_cubagem();if(field.has_value())model.set_cubagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoInformacoesCarga getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoInformacoesCarga";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteServicoInformacoesCargaCubagem::from_json("{\"quantidade\":15,\"unidade\":\"M3\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoInformacoesCargaCubagem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteServicoInformacoesCargaCubagem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostos::from_json("{\"tributacao_iss\":1,\"tributacao_descricao\":\"Opera\u00e7\u00e3o tribut\u00e1vel\",\"iss_retido\":2,\"bc\":5500,\"iss_aliquota\":5,\"iss_valor\":275,\"pis_aliquota\":0.65,\"pis_valor\":35.75,\"cofins_aliquota\":3,\"cofins_valor\":165,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbs::from_json("{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_indicador_doacao();if(field.has_value())model.set_indicador_doacao(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_tributacao_regular();if(field.has_value())model.set_tributacao_regular(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsIbsEstadual::from_json("{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsIbsMunicipal::from_json("{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCbs::from_json("{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegular::from_json("{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":61.6},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":42.0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":49.28}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegular getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegular";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsEstadual::from_json("{\"aliquota_efetiva\":1.1,\"valor\":61.6}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsMunicipal::from_json("{\"aliquota_efetiva\":0.75,\"valor\":42.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularCbs::from_json("{\"aliquota_efetiva\":0.88,\"valor\":49.28}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsTributacaoRegularCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamental::from_json("{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":56.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":33.6},\"cbs\":{\"aliquota\":0.7,\"valor\":39.2}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsEstadual::from_json("{\"aliquota\":1.0,\"valor\":56.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsMunicipal::from_json("{\"aliquota\":0.6,\"valor\":33.6}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalCbs::from_json("{\"aliquota\":0.7,\"valor\":39.2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCreditoPresumido::from_json("{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":28.0,\"valor_ibs_condicionado_suspensao\":1.12,\"aliquota_cbs\":0.3,\"valor_cbs\":16.8,\"valor_cbs_condicionado_suspensao\":0.56}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_ibs_condicionado_suspensao();if(field.has_value())model.set_valor_ibs_condicionado_suspensao(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_cbs_condicionado_suspensao();if(field.has_value())model.set_valor_cbs_condicionado_suspensao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsEstornoCredito::from_json("{\"valor_ibs\":5.6,\"valor_cbs\":2.8}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteImpostosIcms::from_json("{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"00\",\"bc\":5600,\"aliquota\":12,\"valor\":672,\"percentual_reducao\":0,\"valor_credito\":0,\"percentual_credito\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_credito();if(field.has_value())model.set_valor_credito(field.value());}
{auto field=model.get_percentual_credito();if(field.has_value())model.set_percentual_credito(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteDocs::from_json("{\"xml\":\"<nfeProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/nfe\\\">...</nfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOs::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"cte_os\",\"status\":\"aprovado\",\"categoria\":\"citadas\",\"data_emissao\":\"2025-02-22 17:08:23\",\"numero\":800,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":5600,\"finalidade\":0,\"cfop\":[\"6353\"],\"modalidade\":1,\"uf_inicio_prestacao\":\"SP\",\"uf_termino_prestacao\":\"PR\",\"natureza_operacao\":\"PRESTA\u00c7\u00c3O DE SERVI\u00c7O DE TRANSPORTE A ESTABELECIMENTO INDUSTRIAL\",\"indicador_tomador\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"TRANSPORTADORA EXPRESS LTDA\",\"ie\":\"000000000\",\"uf\":\"SP\",\"endereco\":\"Rod. Anhanguera\",\"numero\":\"KM 30\",\"complemento\":\"Galp\u00e3o Log\u00edstico\",\"bairro\":\"Distrito Industrial\",\"cep\":\"13000-000\",\"cidade\":\"Campinas\",\"telefone\":\"19999999999\",\"email\":\"cte@transportadora.com\"},\"tomador\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"IND\u00daSTRIA METAL\u00daRGICA LTDA\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Industrial\",\"numero\":\"5000\",\"complemento\":\"Bloco A\",\"bairro\":\"Parque Industrial\",\"cep\":\"13200-000\",\"cidade\":\"Jundia\u00ed\",\"telefone\":\"11888888888\",\"email\":\"fiscal@industria.com\"},\"impostos\":{\"icms\":{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"00\",\"bc\":5600,\"aliquota\":12,\"valor\":672,\"percentual_reducao\":0,\"valor_credito\":0,\"percentual_credito\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":5600,\"valor_ibs\":112.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":67.2,\"aliquota_diferimento\":0.1,\"valor_diferimento\":5.6,\"valor_devolvido\":2.8,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":44.8,\"aliquota_diferimento\":0.05,\"valor_diferimento\":2.8,\"valor_devolvido\":1.12,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":50.4,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.68,\"valor_devolvido\":0.56,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":61.6},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":42.0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":49.28}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":56.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":33.6},\"cbs\":{\"aliquota\":0.7,\"valor\":39.2}},\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":28.0,\"valor_ibs_condicionado_suspensao\":1.12,\"aliquota_cbs\":0.3,\"valor_cbs\":16.8,\"valor_cbs_condicionado_suspensao\":0.56},\"estorno_credito\":{\"valor_ibs\":5.6,\"valor_cbs\":2.8}}},\"servico\":{\"descricao\":\"TRANSPORTE RODOVI\u00c1RIO DE PRODUTOS METAL\u00daRGICOS\",\"quantidade_carga\":2500,\"unidade_medida\":\"KG\",\"tipo_servico\":0,\"modal\":\"01\",\"documentos_originarios\":[{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"},{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123461234567891\",\"serie\":\"1\",\"numero\":\"12346\",\"data_emissao\":\"2025-02-20\"}],\"componentes_valor\":[{\"nome\":\"FRETE PESO\",\"valor\":4500},{\"nome\":\"GRIS\",\"valor\":500},{\"nome\":\"PEDAGIO\",\"valor\":350},{\"nome\":\"TAS\",\"valor\":250}],\"informacoes_carga\":{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_servico();if(field.has_value())model.set_servico(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_impostos();if(field.has_value())model.set_impostos(field.value());}
{auto field=model.get_natureza_operacao();if(field.has_value())model.set_natureza_operacao(field.value());}
{auto field=model.get_uf_termino_prestacao();if(field.has_value())model.set_uf_termino_prestacao(field.value());}
{auto field=model.get_uf_inicio_prestacao();if(field.has_value())model.set_uf_inicio_prestacao(field.value());}
{auto field=model.get_tomador();if(field.has_value())model.set_tomador(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_emitente();if(field.has_value())model.set_emitente(field.value());}
{auto field=model.get_indicador_tomador();if(field.has_value())model.set_indicador_tomador(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_docs();if(field.has_value())model.set_docs(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_relacao_empresa();if(field.has_value())model.set_relacao_empresa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsDocumentosFiscaisItem::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_pin();if(field.has_value())model.set_pin(field.value());}
{auto field=model.get_previsao_entrega();if(field.has_value())model.set_previsao_entrega(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsServico::from_json("{\"descricao\":\"TRANSPORTE RODOVI\u00c1RIO DE PRODUTOS METAL\u00daRGICOS\",\"quantidade_carga\":2500,\"unidade_medida\":\"KG\",\"tipo_servico\":0,\"modal\":\"01\",\"documentos_originarios\":[{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"},{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123461234567891\",\"serie\":\"1\",\"numero\":\"12346\",\"data_emissao\":\"2025-02-20\"}],\"componentes_valor\":[{\"nome\":\"FRETE PESO\",\"valor\":4500},{\"nome\":\"GRIS\",\"valor\":500},{\"nome\":\"PEDAGIO\",\"valor\":350},{\"nome\":\"TAS\",\"valor\":250}],\"informacoes_carga\":{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_unidade_medida();if(field.has_value())model.set_unidade_medida(field.value());}
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_documentos_originarios();if(field.has_value())model.set_documentos_originarios(field.value());}
{auto field=model.get_componentes_valor();if(field.has_value())model.set_componentes_valor(field.value());}
{auto field=model.get_quantidade_carga();if(field.has_value())model.set_quantidade_carga(field.value());}
{auto field=model.get_modal();if(field.has_value())model.set_modal(field.value());}
{auto field=model.get_tipo_servico();if(field.has_value())model.set_tipo_servico(field.value());}
{auto field=model.get_informacoes_carga();if(field.has_value())model.set_informacoes_carga(field.value());}
{auto field=model.get_valor_recebido();if(field.has_value())model.set_valor_recebido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsServicoDocumentosOriginariosItem::from_json("{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoDocumentosOriginariosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoDocumentosOriginariosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsServicoComponentesValorItem::from_json("{\"nome\":\"FRETE PESO\",\"valor\":4500}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoComponentesValorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoComponentesValorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsServicoInformacoesCarga::from_json("{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_outras_caracteristicas();if(field.has_value())model.set_outras_caracteristicas(field.value());}
{auto field=model.get_cubagem();if(field.has_value())model.set_cubagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoInformacoesCarga getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoInformacoesCarga";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsServicoInformacoesCargaCubagem::from_json("{\"quantidade\":15,\"unidade\":\"M3\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoInformacoesCargaCubagem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsServicoInformacoesCargaCubagem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostos::from_json("{\"tributacao_iss\":1,\"tributacao_descricao\":\"Opera\u00e7\u00e3o tribut\u00e1vel\",\"iss_retido\":2,\"bc\":5500,\"iss_aliquota\":5,\"iss_valor\":275,\"pis_aliquota\":0.65,\"pis_valor\":35.75,\"cofins_aliquota\":3,\"cofins_valor\":165,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbs::from_json("{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_classificacao_tributaria();if(field.has_value())model.set_classificacao_tributaria(field.value());}
{auto field=model.get_indicador_doacao();if(field.has_value())model.set_indicador_doacao(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
{auto field=model.get_situacao_tributaria_regular();if(field.has_value())model.set_situacao_tributaria_regular(field.value());}
{auto field=model.get_classificacao_tributaria_regular();if(field.has_value())model.set_classificacao_tributaria_regular(field.value());}
{auto field=model.get_tributacao_regular();if(field.has_value())model.set_tributacao_regular(field.value());}
{auto field=model.get_compra_governamental();if(field.has_value())model.set_compra_governamental(field.value());}
{auto field=model.get_credito_presumido();if(field.has_value())model.set_credito_presumido(field.value());}
{auto field=model.get_estorno_credito();if(field.has_value())model.set_estorno_credito(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsIbsEstadual::from_json("{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsIbsMunicipal::from_json("{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCbs::from_json("{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegular::from_json("{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":61.6},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":42.0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":49.28}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegular getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegular";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsEstadual::from_json("{\"aliquota_efetiva\":1.1,\"valor\":61.6}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsMunicipal::from_json("{\"aliquota_efetiva\":0.75,\"valor\":42.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularCbs::from_json("{\"aliquota_efetiva\":0.88,\"valor\":49.28}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamental::from_json("{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":56.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":33.6},\"cbs\":{\"aliquota\":0.7,\"valor\":39.2}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsEstadual::from_json("{\"aliquota\":1.0,\"valor\":56.0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsMunicipal::from_json("{\"aliquota\":0.6,\"valor\":33.6}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalCbs::from_json("{\"aliquota\":0.7,\"valor\":39.2}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCreditoPresumido::from_json("{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":28.0,\"valor_ibs_condicionado_suspensao\":1.12,\"aliquota_cbs\":0.3,\"valor_cbs\":16.8,\"valor_cbs_condicionado_suspensao\":0.56}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_ibs_condicionado_suspensao();if(field.has_value())model.set_valor_ibs_condicionado_suspensao(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_cbs_condicionado_suspensao();if(field.has_value())model.set_valor_cbs_condicionado_suspensao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsEstornoCredito::from_json("{\"valor_ibs\":5.6,\"valor_cbs\":2.8}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsImpostosIcms::from_json("{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"00\",\"bc\":5600,\"aliquota\":12,\"valor\":672,\"percentual_reducao\":0,\"valor_credito\":0,\"percentual_credito\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_credito();if(field.has_value())model.set_valor_credito(field.value());}
{auto field=model.get_percentual_credito();if(field.has_value())model.set_percentual_credito(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsDocs::from_json("{\"xml\":\"<nfeProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/nfe\\\">...</nfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentCteOsFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentCteOsFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfe\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-02-27 13:17:00\",\"numero\":200,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":6200,\"operacao\":0,\"finalidade\":1,\"cfop\":[\"2909\"],\"natureza_operacao\":\"Compra para industrializa\u00e7\u00e3o\",\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"EMPRESA FORNECEDORA LTDA\",\"ie\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"complemento\":\"Galp\u00e3o 2\",\"bairro\":\"Distrito Industrial\",\"cep\":\"12345-678\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@fornecedor.com\"},\"cliente\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"EMPRESA COMPRADORA S/A\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Principal\",\"numero\":\"1000\",\"bairro\":\"Centro\",\"cep\":\"98765-432\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11888888888\",\"email\":\"compras@empresa.com\"},\"pedido\":{\"numero_pedido\":\"PED-2025-001234\",\"numero_compra\":\"OC-2025-005678\"},\"produtos\":[{\"codigo\":\"MP001\",\"descricao\":\"MAT\u00c9RIA PRIMA ESPECIAL TIPO A\",\"ncm\":\"39269090\",\"cfop\":\"2909\",\"unidade\":\"KG\",\"quantidade\":1000,\"valor_unitario\":6.2,\"valor_total\":6200,\"impostos\":{\"icms\":{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116},\"ipi\":{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310},\"pis\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3},\"cofins\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}}}],\"transporte\":{\"modalidade_frete\":1,\"transportadora\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"TRANSPORTADORA R\u00c1PIDA LTDA\",\"ie\":\"222222222222\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 50\",\"cidade\":\"S\u00e3o Paulo\",\"uf\":\"SP\"},\"volumes\":[{\"quantidade\":10,\"especie\":\"CAIXA\",\"marca\":\"FORNECEDOR\",\"numeracao\":\"1-10\",\"peso_liquido\":1000,\"peso_bruto\":1050}],\"veiculo\":{\"placa\":\"ABC1234\",\"uf\":\"SP\"}},\"totais\":{\"icms_bc\":6200,\"icms_valor\":1116,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":310,\"ipi_devolvido_valor\":0,\"pis_valor\":102.3,\"cofins_valor\":471.2,\"ii_valor\":0,\"valor_produtos\":6200,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0,\"valor_total_nfe\":7826},\"totais_issqn\":{\"valor_servicos\":0,\"iss_bc\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"data_competencia\":\"2025-02-27\",\"deducao\":0,\"outras_retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"regime_especial_tributacao\":\"1\"},\"fatura\":{\"numero\":\"2025/0200\",\"valor_original\":6200,\"valor_desconto\":0,\"valor_liquido\":6200},\"parcelas\":[{\"numero\":\"001\",\"vencimento\":\"2025-03-27\",\"valor\":3100},{\"numero\":\"002\",\"vencimento\":\"2025-04-27\",\"valor\":3100}],\"responsavel_tecnico\":{\"cnpj\":\"33333333000333\",\"contato\":\"Jo\u00e3o Silva\",\"email\":\"suporte@sistema.com\",\"telefone\":\"11777777777\"},\"protocolo\":\"135250000123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocument getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocument";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorCursorPagination::from_json("{\"per_page\":1,\"next_cursor\":\"synthetic\",\"prev_cursor\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_next_cursor();if(field.has_value())model.set_next_cursor(field.value());}
{auto field=model.get_prev_cursor();if(field.has_value())model.set_prev_cursor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorCursorPagination getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorCursorPagination";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocumentPageMeta::from_json("{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorDocumentPageMeta getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorDocumentPageMeta";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorReport::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"relatorio\":\"xml\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_processado();if(field.has_value())model.set_processado(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_criado_em();if(field.has_value())model.set_criado_em(field.value());}
{auto field=model.get_atualizado_em();if(field.has_value())model.set_atualizado_em(field.value());}
{auto field=model.get_filtros();if(field.has_value())model.set_filtros(field.value());}
{auto field=model.get_url();if(field.has_value())model.set_url(field.value());}
{auto field=model.get_expira_em();if(field.has_value())model.set_expira_em(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorReport getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorReport";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorReportFiltros::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_selecao_manual();if(field.has_value())model.set_selecao_manual(field.value());}
{auto field=model.get_periodo();if(field.has_value())model.set_periodo(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorReportFiltros getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorReportFiltros";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorReportFiltrosPeriodo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_de();if(field.has_value())model.set_de(field.value());}
{auto field=model.get_ate();if(field.has_value())model.set_ate(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorReportFiltrosPeriodo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorReportFiltrosPeriodo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorReportPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorReportPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorReportPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfe\",\"filtros\":{\"empresa_uuid\":[\"00000000-0000-0000-0000-000000000000\"],\"categoria\":[\"recebidas\"],\"status\":[\"aprovado\"]},\"filtros_modelo\":{\"operacao\":[\"0\",1]},\"paginacao\":\"cursor\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_data_inicial();if(field.has_value())model.set_data_inicial(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_pesquisa();if(field.has_value())model.set_pesquisa(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_uf_carregamento();if(field.has_value())model.set_uf_carregamento(field.value());}
{auto field=model.get_uf_descarregamento();if(field.has_value())model.set_uf_descarregamento(field.value());}
{auto field=model.get_placa_veiculo();if(field.has_value())model.set_placa_veiculo(field.value());}
{auto field=model.get_uf_inicio_prestacao();if(field.has_value())model.set_uf_inicio_prestacao(field.value());}
{auto field=model.get_uf_termino_prestacao();if(field.has_value())model.set_uf_termino_prestacao(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_cursor();if(field.has_value())model.set_cursor(field.value());}
{auto field=model.get_paginacao();if(field.has_value())model.set_paginacao(field.value());}
{auto field=model.get_ordenar_por();if(field.has_value())model.set_ordenar_por(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
{auto field=model.get_novos_documentos();if(field.has_value())model.set_novos_documentos(field.value());}
{auto field=model.get_filtros();if(field.has_value())model.set_filtros(field.value());}
{auto field=model.get_filtros_modelo();if(field.has_value())model.set_filtros_modelo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestEmpresaUuid::from_json("\"00000000-0000-4000-8000-000000000001\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestEmpresaUuid getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestEmpresaUuid";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestCategoria::from_json("\"emitidas\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestCategoria getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestCategoria";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestStatus::from_json("\"aprovado\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestManifestacao::from_json("\"pendente\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestManifestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestManifestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFinalidade::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFinalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFinalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestOperacao::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestOperacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestOperacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestModalidade::from_json("1",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestModalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestModalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltros::from_json("{\"empresa_uuid\":[\"00000000-0000-0000-0000-000000000000\"],\"categoria\":[\"recebidas\"],\"status\":[\"aprovado\"]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_data_inicial();if(field.has_value())model.set_data_inicial(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_pesquisa();if(field.has_value())model.set_pesquisa(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_novos_documentos();if(field.has_value())model.set_novos_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltros getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltros";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosEmpresaUuid::from_json("[\"00000000-0000-0000-0000-000000000000\"]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosEmpresaUuid getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosEmpresaUuid";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosCategoria::from_json("[\"recebidas\"]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosCategoria getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosCategoria";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosStatus::from_json("[\"aprovado\"]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosManifestacao::from_json("\"pendente\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosManifestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosManifestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosModelo::from_json("{\"operacao\":[\"0\",1]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_uf_carregamento();if(field.has_value())model.set_uf_carregamento(field.value());}
{auto field=model.get_uf_descarregamento();if(field.has_value())model.set_uf_descarregamento(field.value());}
{auto field=model.get_placa_veiculo();if(field.has_value())model.set_placa_veiculo(field.value());}
{auto field=model.get_uf_inicio_prestacao();if(field.has_value())model.set_uf_inicio_prestacao(field.value());}
{auto field=model.get_uf_termino_prestacao();if(field.has_value())model.set_uf_termino_prestacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModelo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModelo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosModeloFinalidade::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModeloFinalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModeloFinalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosModeloOperacao::from_json("[\"0\",1]",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModeloOperacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModeloOperacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequestFiltrosModeloModalidade::from_json("1",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModeloModalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchRequestFiltrosModeloModalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110110,\"descricao_evento\":\"Carta de corre\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"correcao\":\"XXXXXX XXXXXXXXXXXXXX XXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXX\",\"log\":{\"tpEvento\":\"110110\",\"xEvento\":\"Carta de Correcao\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado e vinculado a NF-e\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEventAlteracoesItem::from_json("{\"grupo\":\"XXXX\",\"campo\":\"XXXX\",\"alteracao\":\"XXXXXXX XXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_grupo();if(field.has_value())model.set_grupo(field.value());}
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_alteracao();if(field.has_value())model.set_alteracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorEventAlteracoesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorEventAlteracoesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEventMdfe::from_json("{\"chave\":\"00000000000000000000000000000000000000000000\",\"modalidade\":1,\"data_emissao\":\"2025-06-02 09:00:00\",\"protocolo\":\"000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorEventMdfe getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorEventMdfe";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEventLog::from_json("{\"tpEvento\":\"110110\",\"xEvento\":\"Carta de Correcao\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado e vinculado a NF-e\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nProt();if(field.has_value())model.set_nProt(field.value());}
{auto field=model.get_dhRegEvento();if(field.has_value())model.set_dhRegEvento(field.value());}
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xEvento();if(field.has_value())model.set_xEvento(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
{auto field=model.get_tpEvento();if(field.has_value())model.set_tpEvento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorEventLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorEventLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorManifestationRequest::from_json("{\"evento\":1,\"manifestacao\":3,\"justificativa\":\"Synthetic justified operation\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportRequest::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_url_arquivo_zip();if(field.has_value())model.set_url_arquivo_zip(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorImportRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorImportRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportStatus::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"processando\",\"processado\":0,\"importados\":[],\"descartados\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_processado();if(field.has_value())model.set_processado(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_importados();if(field.has_value())model.set_importados(field.value());}
{auto field=model.get_descartados();if(field.has_value())model.set_descartados(field.value());}
{auto field=model.get_erro();if(field.has_value())model.set_erro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorImportStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorImportStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportStatusImportadosItem::from_json("{\"arquivo\":\"synthetic\",\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_arquivo();if(field.has_value())model.set_arquivo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorImportStatusImportadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorImportStatusImportadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportStatusDescartadosItem::from_json("{\"arquivo\":\"synthetic\",\"motivo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_arquivo();if(field.has_value())model.set_arquivo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorImportStatusDescartadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorImportStatusDescartadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchDocumentsResponse::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchDocumentsResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchDocumentsResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchDocumentsQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorSearchDocumentsQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorSearchDocumentsQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorGetDocumentQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_atualizar_status();if(field.has_value())model.set_atualizar_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorGetDocumentQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorGetDocumentQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorListDocumentEventsResponse::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorListDocumentEventsResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorListDocumentEventsResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorListReportsQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorListReportsQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorListReportsQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportDocumentResponse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfe\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-02-27 13:17:00\",\"numero\":200,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":6200,\"operacao\":0,\"finalidade\":1,\"cfop\":[\"2909\"],\"natureza_operacao\":\"Compra para industrializa\u00e7\u00e3o\",\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"EMPRESA FORNECEDORA LTDA\",\"ie\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"complemento\":\"Galp\u00e3o 2\",\"bairro\":\"Distrito Industrial\",\"cep\":\"12345-678\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@fornecedor.com\"},\"cliente\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"EMPRESA COMPRADORA S/A\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Principal\",\"numero\":\"1000\",\"bairro\":\"Centro\",\"cep\":\"98765-432\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11888888888\",\"email\":\"compras@empresa.com\"},\"pedido\":{\"numero_pedido\":\"PED-2025-001234\",\"numero_compra\":\"OC-2025-005678\"},\"produtos\":[{\"codigo\":\"MP001\",\"descricao\":\"MAT\u00c9RIA PRIMA ESPECIAL TIPO A\",\"ncm\":\"39269090\",\"cfop\":\"2909\",\"unidade\":\"KG\",\"quantidade\":1000,\"valor_unitario\":6.2,\"valor_total\":6200,\"impostos\":{\"icms\":{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116},\"ipi\":{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310},\"pis\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3},\"cofins\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}}}],\"transporte\":{\"modalidade_frete\":1,\"transportadora\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"TRANSPORTADORA R\u00c1PIDA LTDA\",\"ie\":\"222222222222\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 50\",\"cidade\":\"S\u00e3o Paulo\",\"uf\":\"SP\"},\"volumes\":[{\"quantidade\":10,\"especie\":\"CAIXA\",\"marca\":\"FORNECEDOR\",\"numeracao\":\"1-10\",\"peso_liquido\":1000,\"peso_bruto\":1050}],\"veiculo\":{\"placa\":\"ABC1234\",\"uf\":\"SP\"}},\"totais\":{\"icms_bc\":6200,\"icms_valor\":1116,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":310,\"ipi_devolvido_valor\":0,\"pis_valor\":102.3,\"cofins_valor\":471.2,\"ii_valor\":0,\"valor_produtos\":6200,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0,\"valor_total_nfe\":7826},\"totais_issqn\":{\"valor_servicos\":0,\"iss_bc\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"data_competencia\":\"2025-02-27\",\"deducao\":0,\"outras_retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"regime_especial_tributacao\":\"1\"},\"fatura\":{\"numero\":\"2025/0200\",\"valor_original\":6200,\"valor_desconto\":0,\"valor_liquido\":6200},\"parcelas\":[{\"numero\":\"001\",\"vencimento\":\"2025-03-27\",\"valor\":3100},{\"numero\":\"002\",\"vencimento\":\"2025-04-27\",\"valor\":3100}],\"responsavel_tecnico\":{\"cnpj\":\"33333333000333\",\"contato\":\"Jo\u00e3o Silva\",\"email\":\"suporte@sistema.com\",\"telefone\":\"11777777777\"},\"protocolo\":\"135250000123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_documents::MonitorImportDocumentResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_documents::MonitorImportDocumentResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfe\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-02-27 13:17:00\",\"numero\":200,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":6200,\"operacao\":0,\"finalidade\":1,\"cfop\":[\"2909\"],\"natureza_operacao\":\"Compra para industrializa\u00e7\u00e3o\",\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"EMPRESA FORNECEDORA LTDA\",\"ie\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"complemento\":\"Galp\u00e3o 2\",\"bairro\":\"Distrito Industrial\",\"cep\":\"12345-678\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@fornecedor.com\"},\"cliente\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"EMPRESA COMPRADORA S/A\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Principal\",\"numero\":\"1000\",\"bairro\":\"Centro\",\"cep\":\"98765-432\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11888888888\",\"email\":\"compras@empresa.com\"},\"pedido\":{\"numero_pedido\":\"PED-2025-001234\",\"numero_compra\":\"OC-2025-005678\"},\"produtos\":[{\"codigo\":\"MP001\",\"descricao\":\"MAT\u00c9RIA PRIMA ESPECIAL TIPO A\",\"ncm\":\"39269090\",\"cfop\":\"2909\",\"unidade\":\"KG\",\"quantidade\":1000,\"valor_unitario\":6.2,\"valor_total\":6200,\"impostos\":{\"icms\":{\"situacao_tributaria\":\"00\",\"origem\":0,\"base_calculo\":6200,\"aliquota\":18,\"valor\":1116},\"ipi\":{\"situacao_tributaria\":\"50\",\"base_calculo\":6200,\"aliquota\":5,\"valor\":310},\"pis\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":1.65,\"valor\":102.3},\"cofins\":{\"situacao_tributaria\":\"01\",\"base_calculo\":6200,\"aliquota\":7.6,\"valor\":471.2},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":6200,\"valor_ibs\":124.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":74.4,\"aliquota_diferimento\":0.1,\"valor_diferimento\":6.2,\"valor_devolvido\":3.1,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":49.6,\"aliquota_diferimento\":0.05,\"valor_diferimento\":3.1,\"valor_devolvido\":1.24,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":55.8,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.86,\"valor_devolvido\":0.62,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":68.2},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":46.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":54.56}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":62.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":37.2},\"cbs\":{\"aliquota\":0.7,\"valor\":43.4}},\"tributacao_monofasica\":{\"quantidade_bc\":1000.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":300.0,\"valor_cbs\":200.0,\"quantidade_bc_retencao\":200.0,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":20.0,\"valor_cbs_retencao\":10.0,\"quantidade_bc_retido\":100.0,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":8.0,\"valor_cbs_retido\":4.0,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":2.0,\"valor_diferimento_cbs\":1.0,\"valor_total_ibs\":330.0,\"valor_total_cbs\":215.0},\"transferencia_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":4.96,\"valor_cbs\":2.48},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":6200.0,\"aliquota_ibs\":0.5,\"valor_ibs\":31.0,\"valor_ibs_condicionado_suspensao\":1.24,\"aliquota_cbs\":0.3,\"valor_cbs\":18.6,\"valor_cbs_condicionado_suspensao\":0.62},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":12.4},\"estorno_credito\":{\"valor_ibs\":6.2,\"valor_cbs\":3.1}}}}],\"transporte\":{\"modalidade_frete\":1,\"transportadora\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"TRANSPORTADORA R\u00c1PIDA LTDA\",\"ie\":\"222222222222\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 50\",\"cidade\":\"S\u00e3o Paulo\",\"uf\":\"SP\"},\"volumes\":[{\"quantidade\":10,\"especie\":\"CAIXA\",\"marca\":\"FORNECEDOR\",\"numeracao\":\"1-10\",\"peso_liquido\":1000,\"peso_bruto\":1050}],\"veiculo\":{\"placa\":\"ABC1234\",\"uf\":\"SP\"}},\"totais\":{\"icms_bc\":6200,\"icms_valor\":1116,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":310,\"ipi_devolvido_valor\":0,\"pis_valor\":102.3,\"cofins_valor\":471.2,\"ii_valor\":0,\"valor_produtos\":6200,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0,\"valor_total_nfe\":7826},\"totais_issqn\":{\"valor_servicos\":0,\"iss_bc\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"data_competencia\":\"2025-02-27\",\"deducao\":0,\"outras_retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"regime_especial_tributacao\":\"1\"},\"fatura\":{\"numero\":\"2025/0200\",\"valor_original\":6200,\"valor_desconto\":0,\"valor_liquido\":6200},\"parcelas\":[{\"numero\":\"001\",\"vencimento\":\"2025-03-27\",\"valor\":3100},{\"numero\":\"002\",\"vencimento\":\"2025-04-27\",\"valor\":3100}],\"responsavel_tecnico\":{\"cnpj\":\"33333333000333\",\"contato\":\"Jo\u00e3o Silva\",\"email\":\"suporte@sistema.com\",\"telefone\":\"11777777777\"},\"protocolo\":\"135250000123456\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-001 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-001";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfse\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-03-10 16:15:12\",\"data_cancelamento\":null,\"numero\":300,\"serie\":\"1\",\"identificacao_nfse\":{\"codigo_verificacao\":\"ABC123456\",\"chave\":\"00000000000000000000000000000000000000000000000000\",\"data_competencia\":\"2025-03-10\",\"rps\":{\"serie\":\"1\",\"numero\":10,\"data_emissao\":\"2025-03-10 16:15:10\"},\"nfse_substituida\":null},\"prestador\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"PRESTADORA DE SERVI\u00c7OS LTDA\",\"im\":\"000000000000\",\"uf\":\"SP\",\"endereco\":\"Rua dos Servi\u00e7os\",\"numero\":\"100\",\"complemento\":\"Sala 201\",\"bairro\":\"Centro\",\"cep\":\"01000-000\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11999999999\",\"email\":\"fiscal@prestadora.com\"},\"tomador\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"EMPRESA TOMADORA S/A\",\"uf\":\"SP\",\"endereco\":\"Av. Empresarial\",\"numero\":\"500\",\"bairro\":\"Jardim Empresarial\",\"cep\":\"02000-000\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11888888888\",\"email\":\"financeiro@tomadora.com\"},\"valor\":5500,\"valor_liquido\":5225,\"valor_recebido\":5225,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"6201500\",\"codigo_servico\":\"01.05\",\"codigo_tributacao_municipio\":\"620150000\",\"discriminacao\":\"DESENVOLVIMENTO E LICENCIAMENTO DE PROGRAMAS DE COMPUTADOR SOB ENCOMENDA - SISTEMA DE GEST\u00c3O EMPRESARIAL\",\"local_prestacao\":\"S\u00e3o Paulo/SP\",\"impostos\":{\"tributacao_iss\":1,\"tributacao_descricao\":\"Opera\u00e7\u00e3o tribut\u00e1vel\",\"iss_retido\":2,\"bc\":5500,\"iss_aliquota\":5,\"iss_valor\":275,\"pis_aliquota\":0.65,\"pis_valor\":35.75,\"cofins_aliquota\":3,\"cofins_valor\":165,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":5500,\"cbs\":{\"valor\":49.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":5.5,\"ibs_estadual\":{\"valor\":5.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-002 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-002";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfse\",\"status\":\"aprovado\",\"categoria\":\"emitidas\",\"data_emissao\":\"2025-03-10 16:15:12\",\"data_cancelamento\":null,\"numero\":301,\"serie\":\"1\",\"identificacao_nfse\":{\"codigo_verificacao\":\"DEF789012\",\"chave\":\"11111111111111111111111111111111111111111111111111\",\"data_competencia\":\"2025-03-10\",\"rps\":{\"serie\":\"1\",\"numero\":11,\"data_emissao\":\"2025-03-10 17:00:00\"},\"nfse_substituida\":299},\"prestador\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"CONSULTORIA E DESENVOLVIMENTO LTDA\",\"im\":\"222222222\",\"uf\":\"SP\",\"endereco\":\"Av. Tecnologia\",\"numero\":\"2000\",\"complemento\":\"Torre A - 10\u00ba andar\",\"bairro\":\"Vila Tech\",\"cep\":\"03000-000\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11777777777\",\"email\":\"nfse@consultoria.com\"},\"tomador\":{\"cpf\":\"12345678901\",\"nome_completo\":\"JO\u00c3O DA SILVA EMPRES\u00c1RIO\",\"uf\":\"SP\",\"endereco\":\"Rua das Empresas\",\"numero\":\"123\",\"bairro\":\"Centro\",\"cep\":\"04000-000\",\"cidade\":\"S\u00e3o Paulo\",\"telefone\":\"11666666666\",\"email\":\"joao@empresa.com\"},\"servicos\":[{\"valor\":3000,\"valor_liquido\":2850,\"valor_recebido\":2850,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"6201500\",\"codigo_servico\":\"01.05\",\"codigo_tributacao_municipio\":\"620150000\",\"discriminacao\":\"DESENVOLVIMENTO DE SOFTWARE - M\u00d3DULO FINANCEIRO\",\"local_prestacao\":\"S\u00e3o Paulo/SP\",\"impostos\":{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":3000,\"iss_aliquota\":5,\"iss_valor\":150,\"pis_aliquota\":0.65,\"pis_valor\":19.5,\"cofins_aliquota\":3,\"cofins_valor\":90,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":3000,\"cbs\":{\"valor\":27,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":3,\"ibs_estadual\":{\"valor\":3,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}},{\"valor\":1500,\"valor_liquido\":1425,\"valor_recebido\":1425,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"6202300\",\"codigo_servico\":\"01.07\",\"codigo_tributacao_municipio\":\"620230000\",\"discriminacao\":\"SUPORTE T\u00c9CNICO EM TECNOLOGIA DA INFORMA\u00c7\u00c3O\",\"local_prestacao\":\"S\u00e3o Paulo/SP\",\"impostos\":{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":1500,\"iss_aliquota\":5,\"iss_valor\":75,\"pis_aliquota\":0.65,\"pis_valor\":9.75,\"cofins_aliquota\":3,\"cofins_valor\":45,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":1500,\"cbs\":{\"valor\":13.5,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":1.5,\"ibs_estadual\":{\"valor\":1.5,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}},{\"valor\":1000,\"valor_liquido\":950,\"valor_recebido\":950,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"8599604\",\"codigo_servico\":\"08.02\",\"codigo_tributacao_municipio\":\"859960400\",\"discriminacao\":\"TREINAMENTO EM INFORM\u00c1TICA\",\"local_prestacao\":\"S\u00e3o Paulo/SP\",\"impostos\":{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":1000,\"iss_aliquota\":5,\"iss_valor\":50,\"pis_aliquota\":0.65,\"pis_valor\":6.5,\"cofins_aliquota\":3,\"cofins_valor\":30,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":1000,\"cbs\":{\"valor\":9,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":1,\"ibs_estadual\":{\"valor\":1,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}}],\"totais\":{\"valor\":5500,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_valor\":275,\"pis_valor\":35.75,\"cofins_valor\":165,\"inss_valor\":0,\"ir_valor\":0,\"csll_valor\":0,\"cp_valor\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-003 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-003";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"mdfe\",\"status\":\"aprovado\",\"categoria\":\"proprietario_veiculos\",\"data_emissao\":\"2025-02-01 20:09:54\",\"numero\":600,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":23000,\"modalidade\":1,\"uf_carregamento\":\"BA\",\"uf_descarregamento\":\"PA\",\"peso_bruto\":6300,\"quantidade_nfe\":3,\"quantidade_cte\":1,\"quantidade_mdfe\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"TRANSPORTADORA NACIONAL LTDA\",\"ie\":\"000000000\",\"uf\":\"BA\",\"endereco\":\"Rod. BR-101\",\"numero\":\"KM 150\",\"complemento\":\"Posto Fiscal\",\"bairro\":\"Zona Rural\",\"cep\":\"40000-000\",\"cidade\":\"Salvador\",\"telefone\":\"71999999999\",\"email\":\"mdfe@transportadora.com\"},\"carregamento\":[{\"cidade\":\"Salvador\",\"uf\":\"BA\",\"documentos\":[{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001241234567891\"}]}],\"descarregamento\":[{\"cidade\":\"Bel\u00e9m\",\"uf\":\"PA\",\"documentos\":[{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001231234567890\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001241234567891\"},{\"tipo\":\"NFe\",\"chave\":\"29250212345678901234550010000001251234567892\"},{\"tipo\":\"CTe\",\"chave\":\"29250287654321098765570010000008001234567893\"}]}],\"percurso\":[{\"uf\":\"BA\",\"ordem\":1},{\"uf\":\"MG\",\"ordem\":2},{\"uf\":\"ES\",\"ordem\":3},{\"uf\":\"RJ\",\"ordem\":4},{\"uf\":\"MG\",\"ordem\":5},{\"uf\":\"GO\",\"ordem\":6},{\"uf\":\"TO\",\"ordem\":7},{\"uf\":\"PA\",\"ordem\":8}],\"rodoviario\":{\"rntrc\":\"12345678\",\"ciot\":[{\"numero\":\"123456789012\",\"cpf_cnpj\":\"12345678901\"}],\"veiculos\":[{\"codigo_interno\":\"001\",\"placa\":\"ABC1234\",\"renavam\":\"123456789\",\"tara\":8000,\"capacidade_kg\":15000,\"capacidade_m3\":90,\"tipo_rodado\":\"06\",\"tipo_carroceria\":\"00\",\"uf\":\"BA\",\"condutor\":{\"cpf\":\"12345678901\",\"nome\":\"JOS\u00c9 DA SILVA\"}},{\"codigo_interno\":\"002\",\"placa\":\"DEF5678\",\"renavam\":\"987654321\",\"tara\":4000,\"capacidade_kg\":10000,\"capacidade_m3\":60,\"tipo_rodado\":\"04\",\"tipo_carroceria\":\"01\",\"uf\":\"BA\"}],\"vale_pedagio\":{\"cnpj_fornecedor\":\"33333333000333\",\"cnpj_responsavel\":\"00000000000000\",\"numero_comprovante\":\"123456\",\"valor\":150.5},\"contratantes\":[{\"cnpj\":\"44444444000444\",\"razao_social\":\"EMPRESA CONTRATANTE LTDA\"}],\"lacres\":[{\"numero\":\"LAC001\"},{\"numero\":\"LAC002\"}]}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-004 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-004";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"cte\",\"status\":\"aprovado\",\"categoria\":\"citadas\",\"data_emissao\":\"2025-02-22 17:08:23\",\"numero\":800,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":5600,\"finalidade\":0,\"cfop\":[\"6353\"],\"modalidade\":1,\"uf_inicio_prestacao\":\"SP\",\"uf_termino_prestacao\":\"PR\",\"natureza_operacao\":\"PRESTA\u00c7\u00c3O DE SERVI\u00c7O DE TRANSPORTE A ESTABELECIMENTO INDUSTRIAL\",\"indicador_tomador\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"TRANSPORTADORA EXPRESS LTDA\",\"ie\":\"000000000\",\"uf\":\"SP\",\"endereco\":\"Rod. Anhanguera\",\"numero\":\"KM 30\",\"complemento\":\"Galp\u00e3o Log\u00edstico\",\"bairro\":\"Distrito Industrial\",\"cep\":\"13000-000\",\"cidade\":\"Campinas\",\"telefone\":\"19999999999\",\"email\":\"cte@transportadora.com\"},\"remetente\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"IND\u00daSTRIA METAL\u00daRGICA LTDA\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Industrial\",\"numero\":\"5000\",\"complemento\":\"Bloco A\",\"bairro\":\"Parque Industrial\",\"cep\":\"13200-000\",\"cidade\":\"Jundia\u00ed\",\"telefone\":\"11888888888\",\"email\":\"logistica@industria.com\"},\"destinatario\":{\"cnpj\":\"22222222000222\",\"razao_social\":\"DISTRIBUIDORA PARANAENSE S/A\",\"ie\":\"222222222222\",\"uf\":\"PR\",\"endereco\":\"Rua das Ind\u00fastrias\",\"numero\":\"1500\",\"bairro\":\"CIC\",\"cep\":\"81000-000\",\"cidade\":\"Curitiba\",\"telefone\":\"41777777777\",\"email\":\"recebimento@distribuidora.com\"},\"expedidor\":null,\"recebedor\":null,\"tomador\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"IND\u00daSTRIA METAL\u00daRGICA LTDA\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Industrial\",\"numero\":\"5000\",\"complemento\":\"Bloco A\",\"bairro\":\"Parque Industrial\",\"cep\":\"13200-000\",\"cidade\":\"Jundia\u00ed\",\"telefone\":\"11888888888\",\"email\":\"fiscal@industria.com\"},\"impostos\":{\"icms\":{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"00\",\"bc\":5600,\"aliquota\":12,\"valor\":672,\"percentual_reducao\":0,\"valor_credito\":0,\"percentual_credito\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":5600,\"valor_ibs\":112.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":67.2,\"aliquota_diferimento\":0.1,\"valor_diferimento\":5.6,\"valor_devolvido\":2.8,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":44.8,\"aliquota_diferimento\":0.05,\"valor_diferimento\":2.8,\"valor_devolvido\":1.12,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":50.4,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.68,\"valor_devolvido\":0.56,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":61.6},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":42.0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":49.28}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":56.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":33.6},\"cbs\":{\"aliquota\":0.7,\"valor\":39.2}},\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":28.0,\"valor_ibs_condicionado_suspensao\":1.12,\"aliquota_cbs\":0.3,\"valor_cbs\":16.8,\"valor_cbs_condicionado_suspensao\":0.56},\"estorno_credito\":{\"valor_ibs\":5.6,\"valor_cbs\":2.8}}},\"servico\":{\"descricao\":\"TRANSPORTE RODOVI\u00c1RIO DE PRODUTOS METAL\u00daRGICOS\",\"quantidade_carga\":2500,\"unidade_medida\":\"KG\",\"tipo_servico\":0,\"modal\":\"01\",\"documentos_originarios\":[{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"},{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123461234567891\",\"serie\":\"1\",\"numero\":\"12346\",\"data_emissao\":\"2025-02-20\"}],\"componentes_valor\":[{\"nome\":\"FRETE PESO\",\"valor\":4500},{\"nome\":\"GRIS\",\"valor\":500},{\"nome\":\"PEDAGIO\",\"valor\":350},{\"nome\":\"TAS\",\"valor\":250}],\"informacoes_carga\":{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-005 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-005";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"cte_os\",\"status\":\"aprovado\",\"categoria\":\"citadas\",\"data_emissao\":\"2025-02-22 17:08:23\",\"numero\":800,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":5600,\"finalidade\":0,\"cfop\":[\"6353\"],\"modalidade\":1,\"uf_inicio_prestacao\":\"SP\",\"uf_termino_prestacao\":\"PR\",\"natureza_operacao\":\"PRESTA\u00c7\u00c3O DE SERVI\u00c7O DE TRANSPORTE A ESTABELECIMENTO INDUSTRIAL\",\"indicador_tomador\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"TRANSPORTADORA EXPRESS LTDA\",\"ie\":\"000000000\",\"uf\":\"SP\",\"endereco\":\"Rod. Anhanguera\",\"numero\":\"KM 30\",\"complemento\":\"Galp\u00e3o Log\u00edstico\",\"bairro\":\"Distrito Industrial\",\"cep\":\"13000-000\",\"cidade\":\"Campinas\",\"telefone\":\"19999999999\",\"email\":\"cte@transportadora.com\"},\"tomador\":{\"cnpj\":\"11111111000111\",\"razao_social\":\"IND\u00daSTRIA METAL\u00daRGICA LTDA\",\"ie\":\"111111111111\",\"uf\":\"SP\",\"endereco\":\"Av. Industrial\",\"numero\":\"5000\",\"complemento\":\"Bloco A\",\"bairro\":\"Parque Industrial\",\"cep\":\"13200-000\",\"cidade\":\"Jundia\u00ed\",\"telefone\":\"11888888888\",\"email\":\"fiscal@industria.com\"},\"impostos\":{\"icms\":{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"00\",\"bc\":5600,\"aliquota\":12,\"valor\":672,\"percentual_reducao\":0,\"valor_credito\":0,\"percentual_credito\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":5600,\"valor_ibs\":112.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":67.2,\"aliquota_diferimento\":0.1,\"valor_diferimento\":5.6,\"valor_devolvido\":2.8,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":44.8,\"aliquota_diferimento\":0.05,\"valor_diferimento\":2.8,\"valor_devolvido\":1.12,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":50.4,\"aliquota_diferimento\":0.03,\"valor_diferimento\":1.68,\"valor_devolvido\":0.56,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":61.6},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":42.0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":49.28}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":56.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":33.6},\"cbs\":{\"aliquota\":0.7,\"valor\":39.2}},\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":28.0,\"valor_ibs_condicionado_suspensao\":1.12,\"aliquota_cbs\":0.3,\"valor_cbs\":16.8,\"valor_cbs_condicionado_suspensao\":0.56},\"estorno_credito\":{\"valor_ibs\":5.6,\"valor_cbs\":2.8}}},\"servico\":{\"descricao\":\"TRANSPORTE RODOVI\u00c1RIO DE PRODUTOS METAL\u00daRGICOS\",\"quantidade_carga\":2500,\"unidade_medida\":\"KG\",\"tipo_servico\":0,\"modal\":\"01\",\"documentos_originarios\":[{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123451234567890\",\"serie\":\"1\",\"numero\":\"12345\",\"data_emissao\":\"2025-02-20\"},{\"tipo\":\"NFe\",\"chave\":\"35250211111111000111550010000123461234567891\",\"serie\":\"1\",\"numero\":\"12346\",\"data_emissao\":\"2025-02-20\"}],\"componentes_valor\":[{\"nome\":\"FRETE PESO\",\"valor\":4500},{\"nome\":\"GRIS\",\"valor\":500},{\"nome\":\"PEDAGIO\",\"valor\":350},{\"nome\":\"TAS\",\"valor\":250}],\"informacoes_carga\":{\"valor_total\":125000,\"produto_predominante\":\"PRODUTOS METAL\u00daRGICOS\",\"outras_caracteristicas\":\"CARGA FRACIONADA\",\"cubagem\":{\"quantidade\":15,\"unidade\":\"M3\"}}}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-006 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-006";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110110,\"descricao_evento\":\"Carta de corre\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"correcao\":\"XXXXXX XXXXXXXXXXXXXX XXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXX\",\"log\":{\"tpEvento\":\"110110\",\"xEvento\":\"Carta de Correcao\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado e vinculado a NF-e\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-007 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-007";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110111,\"descricao_evento\":\"Cancelamento\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXXX XXXXXXXXXX XXXXXXXX\",\"log\":{\"tpEvento\":\"110111\",\"xEvento\":\"Cancelamento\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-008 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-008";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":210200,\"descricao_evento\":\"Confirma\u00e7\u00e3o da Opera\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"log\":{\"tpEvento\":\"210200\",\"xEvento\":\"Confirma\u00e7\u00e3o da Opera\u00e7\u00e3o\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-009 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-009";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":210210,\"descricao_evento\":\"Ci\u00eancia da Opera\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"log\":{\"tpEvento\":\"210210\",\"xEvento\":\"Ci\u00eancia da Opera\u00e7\u00e3o\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-010 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-010";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":210220,\"descricao_evento\":\"Desconhecimento da Opera\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"log\":{\"tpEvento\":\"210220\",\"xEvento\":\"Desconhecimento da Opera\u00e7\u00e3o\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-011 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-011";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":210240,\"descricao_evento\":\"Opera\u00e7\u00e3o n\u00e3o realizada\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXXXX XXXXXXX XXXXXXXXXXXXXXX\",\"log\":{\"tpEvento\":\"210240\",\"xEvento\":\"Opera\u00e7\u00e3o n\u00e3o realizada\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-012 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-012";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610600,\"descricao_evento\":\"Registro de Autoriza\u00e7\u00e3o de CT-e para a NF-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-013 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-013";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610601,\"descricao_evento\":\"Registro de Cancelamento de CT-e para a NF-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-014 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-014";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610130,\"descricao_evento\":\"Comprovante de Entrega do CT-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"chave_cte\":\"00000000000000000000000000000000000000000000\",\"protocolo_cte\":\"0000000000000000\",\"data_entrega\":\"2025-06-02 13:10:00\",\"documento_recebedor\":\"00000000000\",\"nome_recebedor\":\"XXXX XXXXXXXXX XXXXXX\",\"latitude\":0,\"longitude\":0,\"log\":{\"tpEvento\":\"610130\",\"xEvento\":\"Comprovante de Entrega do CT-e\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-015 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-015";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610614,\"descricao_evento\":\"MDF-e Autorizado com CT-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-016 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-016";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610615,\"descricao_evento\":\"Cancelamento de MDF-e Autorizado com CT-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-017 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-017";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":510630,\"descricao_evento\":\"Registro de Passagem Automatico Originado MDFe\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-018 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-018";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610500,\"descricao_evento\":\"Registro de Passagem Autoriza\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-019 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-019";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610514,\"descricao_evento\":\"Registro de Passagem de NFe propagado pelo MDFe/CTe\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":true}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-020 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-020";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":101101,\"descricao_evento\":\"Cancelamento\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXXX XXXXXXXXXX XXXXXXXX\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-021 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-021";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":105102,\"descricao_evento\":\"Substitui\u00e7\u00e3o de NFS-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXXX XXXXXXXXXX XXXXXXXX\",\"chave_substituta\":\"00000000000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-022 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-022";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110110,\"descricao_evento\":\"Carta de corre\u00e7\u00e3o\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"alteracoes\":[{\"grupo\":\"XXXX\",\"campo\":\"XXXX\",\"alteracao\":\"XXXXXXX XXXXX\"},{\"grupo\":\"XXXX\",\"campo\":\"XXXX\",\"alteracao\":\"XXXXXXX XXXXX\"}],\"log\":{\"tpEvento\":\"110110\",\"xEvento\":\"Carta de Correcao\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado e vinculado a CT-e\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-023 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-023";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110111,\"descricao_evento\":\"Cancelamento\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXXX XXXXXXXXXX XXXXXXXX\",\"log\":{\"tpEvento\":\"110111\",\"xEvento\":\"Cancelamento\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-024 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-024";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110180,\"descricao_evento\":\"Comprovante de Entrega do CT-e\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"data_entrega\":\"2025-06-02 13:15:00\",\"documento_recebedor\":\"00000000000\",\"nome_recebedor\":\"XXXX XXXXXXXXX XXXXXX\",\"latitude\":0,\"longitude\":0,\"chaves_nfe\":[\"00000000000000000000000000000000000000000000\"],\"log\":{\"tpEvento\":\"110180\",\"xEvento\":\"Comprovante de Entrega do CT-e\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-025 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-025";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":310610,\"descricao_evento\":\"MDF-e Autorizado\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"mdfe\":{\"chave\":\"00000000000000000000000000000000000000000000\",\"modalidade\":1,\"data_emissao\":\"2025-06-02 09:00:00\",\"protocolo\":\"000000000000000\"},\"log\":{\"tpEvento\":\"310610\",\"xEvento\":\"MDF-e Autorizado\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-026 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-026";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":310611,\"descricao_evento\":\"MDF-e Cancelado\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"mdfe\":{\"chave\":\"00000000000000000000000000000000000000000000\",\"protocolo\":\"000000000000000\"},\"log\":{\"tpEvento\":\"310611\",\"xEvento\":\"MDF-e Cancelado\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-027 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-027";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":610110,\"descricao_evento\":\"Presta\u00e7\u00e3o do Servi\u00e7o em Desacordo\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXX XXXXXXXX XXXXXXXXXXXXXXX\",\"log\":{\"tpEvento\":\"610110\",\"xEvento\":\"Presta\u00e7\u00e3o do Servi\u00e7o em Desacordo\",\"nProt\":\"0000000000000000\",\"dhRegEvento\":\"2025-06-02T13:17:00-03:00\",\"cStat\":\"135\",\"xMotivo\":\"Evento registrado com sucesso\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-028 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-028";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110111,\"descricao_evento\":\"Cancelamento\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"justificativa\":\"XXXXXXX XXXXXXXXXX XXXXXXXX\",\"log\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-029 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-029";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110112,\"descricao_evento\":\"Encerramento\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"data_encerramento\":\"2025-06-02 13:15:00\",\"cidade_encerramento\":\"XXXXXXXX\",\"uf_encerramento\":\"XX\",\"log\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-030 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-030";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorEvent::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"documento_uuid\":\"00000000-0000-4000-8000-000000000000\",\"protocolo\":\"0000000000000000\",\"registrado_em\":\"2025-06-02 13:17:00\",\"tipo_evento\":110114,\"descricao_evento\":\"Inclus\u00e3o de condutor\",\"cnpj_autor\":\"00000000000000\",\"cpf_autor\":\"00000000000\",\"resumo\":false,\"cpf_condutor\":\"00000000000\",\"nome_condutor\":\"XXXXXXX XXXXXXXXXX XXXXXXXX\",\"log\":{}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_documento_uuid();if(field.has_value())model.set_documento_uuid(field.value());}
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_registrado_em();if(field.has_value())model.set_registrado_em(field.value());}
{auto field=model.get_data_captura();if(field.has_value())model.set_data_captura(field.value());}
{auto field=model.get_descricao_evento();if(field.has_value())model.set_descricao_evento(field.value());}
{auto field=model.get_cnpj_autor();if(field.has_value())model.set_cnpj_autor(field.value());}
{auto field=model.get_cpf_autor();if(field.has_value())model.set_cpf_autor(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
{auto field=model.get_correcao();if(field.has_value())model.set_correcao(field.value());}
{auto field=model.get_chave_cte();if(field.has_value())model.set_chave_cte(field.value());}
{auto field=model.get_protocolo_cte();if(field.has_value())model.set_protocolo_cte(field.value());}
{auto field=model.get_data_entrega();if(field.has_value())model.set_data_entrega(field.value());}
{auto field=model.get_documento_recebedor();if(field.has_value())model.set_documento_recebedor(field.value());}
{auto field=model.get_nome_recebedor();if(field.has_value())model.set_nome_recebedor(field.value());}
{auto field=model.get_data_encerramento();if(field.has_value())model.set_data_encerramento(field.value());}
{auto field=model.get_cidade_encerramento();if(field.has_value())model.set_cidade_encerramento(field.value());}
{auto field=model.get_uf_encerramento();if(field.has_value())model.set_uf_encerramento(field.value());}
{auto field=model.get_tipo_evento();if(field.has_value())model.set_tipo_evento(field.value());}
{auto field=model.get_resumo();if(field.has_value())model.set_resumo(field.value());}
{auto field=model.get_alteracoes();if(field.has_value())model.set_alteracoes(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
{auto field=model.get_chaves_nfe();if(field.has_value())model.set_chaves_nfe(field.value());}
{auto field=model.get_mdfe();if(field.has_value())model.set_mdfe(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
{auto field=model.get_chave_substituta();if(field.has_value())model.set_chave_substituta(field.value());}
{auto field=model.get_cpf_condutor();if(field.has_value())model.set_cpf_condutor(field.value());}
{auto field=model.get_nome_condutor();if(field.has_value())model.set_nome_condutor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-031 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-031";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfe\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-02-27 13:28:00\",\"numero\":100,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":6700,\"operacao\":0,\"finalidade\":1,\"cfop\":[\"2909\"],\"natureza_operacao\":\"Retorno de bem por conta de contrato de comodato ou locacao.\",\"emitente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"},\"cliente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"},\"pedido\":{\"ID\":\"000000000\",\"presenca\":\"0\",\"modalidade_frete\":\"0\",\"frete\":5,\"intermediador\":\"0\",\"cnpj_intermediador\":\"00000000000000\",\"id_intermediador\":\"XXXXXXXXX\",\"pagamento\":[\"0\"],\"forma_pagamento\":[\"99\"],\"desc_pagamento\":[\"Pagamento Digital\"],\"valor_pagamento\":[6700],\"tipo_integracao\":[\"1\"],\"cnpj_credenciadora\":[\"00000000000000\"],\"bandeira\":[\"01\"],\"autorizacao\":[\"12345\"],\"desconto\":0,\"informacoes_fisco\":\"XXXXX XXXXXXXXXXX\",\"informacoes_complementares\":\"XXXXXXX XXXXXXXX XXXXXXXXX XXXX\"},\"produtos\":[{\"nome\":\"HD SSD 512GB NVME\",\"item\":\"1\",\"codigo\":\".560\",\"ncm\":\"85219000\",\"cest\":\"0000000\",\"quantidade\":1,\"quantidade_tributavel\":1,\"unidade\":\"UN\",\"unidade_tributavel\":\"UN\",\"origem\":\"0\",\"subtotal\":1000,\"subtotal_tributavel\":1000,\"total\":1000,\"desconto\":0,\"frete\":0,\"seguro\":0,\"outras_despesas\":0,\"gtin\":\"SEM GTIN\",\"gtin_tributavel\":\"SEM GTIN\",\"impostos\":{\"icms\":{\"codigo_cfop\":\"2909\",\"situacao_tributaria\":\"41\",\"icms_bc\":0,\"icms_modalidade_bc\":0,\"icms_aliquota\":0,\"icms_valor\":0,\"icms_aliquota_reducao\":0,\"icms_valor_desonerado\":0,\"icms_motivo_desoneracao\":0,\"icms_valor_operacao\":0,\"icms_aliquota_diferimento\":0,\"icms_valor_diferimento\":0,\"icms_aliquota_reducao_efetiva\":0,\"icms_bc_efetiva\":0,\"icms_aliquota_efetiva\":0,\"icms_valor_efetivo\":0,\"icms_bc_operacao_propria\":0,\"icms_substituto_valor\":0,\"icms_aliquota_credito\":0,\"icms_valor_credito\":0,\"icms_bc_uf_destino\":0,\"icms_aliquota_uf_destino\":0,\"icms_aliquota_interestadual\":0,\"icms_aliquota_partilha_interestadual\":0,\"icms_valor_uf_destino\":0,\"icms_valor_uf_remetente\":0,\"icms_st_bc\":0,\"icms_st_modalidade_bc\":0,\"icms_st_aliquota\":0,\"icms_st_valor\":0,\"icms_st_aliquota_mva\":0,\"icms_st_aliquota_reducao\":0,\"icms_st_uf\":0,\"icms_st_bc_dest\":0,\"icms_st_valor_dest\":0,\"icms_st_retido_bc\":0,\"icms_st_retido_valor\":0,\"fcp_bc\":0,\"fcp_aliquota\":0,\"fcp_valor\":0,\"fcp_bc_uf_destino\":0,\"fcp_aliquota_uf_destino\":0,\"fcp_valor_uf_destino\":0,\"fcp_st_bc\":0,\"fcp_st_aliquota\":0,\"fcp_st_valor\":0,\"fcp_st_retido_bc\":0,\"fcp_st_retido_aliquota\":0,\"fcp_st_retido_valor\":0},\"ipi\":{\"situacao_tributaria\":\"99\",\"codigo_enquadramento\":\"999\",\"ipi_bc\":0,\"ipi_aliquota\":0,\"ipi_valor\":0,\"codigo_selo\":\"XXXX\",\"qtd_selo\":1},\"ipi_devolvido\":{\"percentual_devolvido\":0,\"ipi_devolvido_valor\":0},\"pis\":{\"situacao_tributaria\":\"98\",\"pis_bc\":0,\"pis_quantidade_bc\":0,\"pis_aliquota\":0,\"pis_aliquota_valor\":0,\"pis_valor\":0},\"cofins\":{\"situacao_tributaria\":\"98\",\"cofins_bc\":0,\"cofins_quantidade_bc\":0,\"cofins_aliquota\":0,\"cofins_aliquota_valor\":0,\"cofins_valor\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":1000.0,\"valor_ibs\":20.0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":12.0,\"aliquota_diferimento\":0.1,\"valor_diferimento\":1.0,\"valor_devolvido\":0.5,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":8.0,\"aliquota_diferimento\":0.05,\"valor_diferimento\":0.5,\"valor_devolvido\":0.2,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":9.0,\"aliquota_diferimento\":0.03,\"valor_diferimento\":0.3,\"valor_devolvido\":0.1,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":11.0},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":7.5},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":8.8}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":10.0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":6.0},\"cbs\":{\"aliquota\":0.7,\"valor\":7.0}},\"tributacao_monofasica\":{\"quantidade_bc\":1.0,\"aliquota_ibs\":0.3,\"aliquota_cbs\":0.2,\"valor_ibs\":0.3,\"valor_cbs\":0.2,\"quantidade_bc_retencao\":0.2,\"aliquota_ibs_retencao\":0.1,\"aliquota_cbs_retencao\":0.05,\"valor_ibs_retencao\":0.02,\"valor_cbs_retencao\":0.01,\"quantidade_bc_retido\":0.1,\"aliquota_ibs_retido\":0.08,\"aliquota_cbs_retido\":0.04,\"valor_ibs_retido\":0.008,\"valor_cbs_retido\":0.004,\"aliquota_diferimento_ibs\":0.02,\"aliquota_diferimento_cbs\":0.01,\"valor_diferimento_ibs\":0.002,\"valor_diferimento_cbs\":0.001,\"valor_total_ibs\":0.33,\"valor_total_cbs\":0.215},\"transferencia_credito\":{\"valor_ibs\":1.0,\"valor_cbs\":0.5},\"ajuste_competencia\":{\"competencia_apuracao\":\"2026-01\",\"valor_ibs\":0.8,\"valor_cbs\":0.4},\"credito_presumido\":{\"classificacao\":\"01\",\"bc\":1000.0,\"aliquota_ibs\":0.5,\"valor_ibs\":5.0,\"valor_ibs_condicionado_suspensao\":0.2,\"aliquota_cbs\":0.3,\"valor_cbs\":3.0,\"valor_cbs_condicionado_suspensao\":0.1},\"credito_presumido_zfm\":{\"competencia_apuracao\":\"2026-01\",\"classificacao\":\"02\",\"valor_ibs\":2.0},\"estorno_credito\":{\"valor_ibs\":1.0,\"valor_cbs\":0.5}},\"issqn\":{\"iss_bc\":0,\"iss_aliquota\":0,\"iss_valor\":0,\"municipio_fato_gerador\":\"00000000\",\"item_servico\":\"0000\",\"deducao\":0,\"retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"exigibilidade\":\"1\",\"codigo_servico\":\"0000\",\"municipio_incidencia\":\"00000000\",\"pais\":\"1058\",\"processo\":\"12345\",\"incentivo_fiscal\":\"2\"},\"imposto_importacao\":{\"ii_bc\":0,\"despesas_aduaneiras\":0,\"ii_valor\":0,\"iof_valor\":0}}}],\"transporte\":{\"volume\":\"0\",\"especie\":\"PECAS\",\"marca\":\"XXXX\",\"numeracao\":\"0000\",\"peso_liquido\":0,\"peso_bruto\":0,\"transportadora\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"},\"entrega\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"},\"retirada\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXXX XXXXXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"}},\"totais\":{\"icms_bc\":0,\"icms_valor\":0,\"icms_valor_desonerado\":0,\"icms_st_bc\":0,\"icms_st_valor\":0,\"fcp_valor\":0,\"fcp_st_valor\":0,\"fcp_st_retido_valor\":0,\"ipi_valor\":0,\"ipi_devolvido_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"ii_valor\":0,\"valor_produtos\":6700,\"valor_seguro\":0,\"valor_outras_despesas\":0,\"valor_desconto\":0,\"valor_frete\":0},\"totais_issqn\":{\"valor_servicos\":0,\"iss_bc\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"data_competencia\":\"2025-02-27\",\"deducao\":0,\"outras_retencoes\":0,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_retido_valor\":0,\"regime_especial_tributacao\":\"1\"},\"fatura\":{\"numero\":\"000000000\",\"valor\":6700,\"desconto\":0,\"valor_liquido\":6700},\"parcelas\":[{\"numero\":1,\"valor\":6700,\"vencimento\":\"2025-03-27\"}],\"responsavel_tecnico\":{\"cnpj\":\"00000000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"telefone\":\"00000000000\",\"email\":\"abcd@efgh.com\"},\"protocolo\":{\"motivo\":\"Autorizado o uso da NF-e\",\"status\":\"100\",\"data_recebimento\":\"2025-02-27T13:28:33-03:00\",\"numero_protocolo\":\"000000000000000\"},\"docs\":{\"xml\":\"<nfeProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/nfe\\\">...</nfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-032 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-032";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfse\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-03-10 16:20:19\",\"data_cancelamento\":\"2025-03-10 17:00:00\",\"numero\":100,\"identificacao_nfse\":{\"provedor\":\"PadraoNacional\",\"chave\":\"00000000000000000000000000000000000000000000000000\",\"codigo_verificacao\":\"ABC123456\",\"data_competencia\":\"2025-03-10\",\"rps\":{\"serie\":\"1\",\"numero\":1,\"data_emissao\":\"2025-03-10 16:20:15\"},\"nfse_substituida\":99},\"valor\":3000,\"valor_liquido\":3000,\"valor_recebido\":3000,\"desconto_incondicionado\":5,\"desconto_condicionado\":5,\"codigo_cnae\":\"0000000\",\"codigo_servico\":\"000000\",\"discriminacao\":\"XXXXXXXXX XXXXXXXXXXXXXX XXXXXXXXXX XXXXXXXXXXXXXX\",\"prestador\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"im\":\"000000000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"local_prestacao\":{\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"codigo_municipio\":\"3550308\"},\"impostos\":{\"tributacao_iss\":1,\"tributacao_descricao\":\"Opera\u00e7\u00e3o tribut\u00e1vel\",\"iss_retido\":2,\"bc\":0,\"iss_aliquota\":0,\"iss_valor\":0,\"pis_aliquota\":0,\"pis_valor\":0,\"cofins_aliquota\":0,\"cofins_valor\":0,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":0,\"cbs\":{\"valor\":0,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":0,\"ibs_estadual\":{\"valor\":0,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}},\"docs\":{\"xml\":\"<NFSe versao=\\\"1.00\\\" xmlns=\\\"http://www.sped.fazenda.gov.br/nfse\\\">...</NFSe>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-033 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-033";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"nfse\",\"status\":\"aprovado\",\"categoria\":\"recebidas\",\"data_emissao\":\"2025-03-10 16:20:19\",\"data_cancelamento\":\"2025-03-10 17:00:00\",\"numero\":100,\"identificacao_nfse\":{\"provedor\":\"IPM2\",\"chave\":\"00000000000000000000000000000000000000000000000000\",\"codigo_verificacao\":\"ABC123456\",\"data_competencia\":\"2025-03-10\",\"rps\":{\"serie\":\"1\",\"numero\":1,\"data_emissao\":\"2025-03-10 16:20:15\"},\"nfse_substituida\":99},\"prestador\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"im\":\"000000000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"servicos\":[{\"valor\":3000,\"valor_liquido\":3000,\"valor_recebido\":3000,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"0000000\",\"codigo_servico\":\"0000\",\"discriminacao\":\"XXXXXXXXX XXXXXXXXXXXXXX XXXXXXXXXX XXXXXXXXXXXXXX\",\"local_prestacao\":{\"uf\":\"SC\",\"cidade\":\"Palho\u00e7a\",\"codigo_municipio\":\"4211900\"},\"impostos\":{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":3000,\"iss_aliquota\":0,\"iss_valor\":0,\"pis_aliquota\":0,\"pis_valor\":0,\"cofins_aliquota\":0,\"cofins_valor\":0,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":3000,\"cbs\":{\"valor\":27,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":3,\"ibs_estadual\":{\"valor\":3,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}},{\"valor\":1000,\"valor_liquido\":1000,\"valor_recebido\":1000,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"codigo_cnae\":\"0000000\",\"codigo_servico\":\"0000\",\"discriminacao\":\"XXXXXXXXX XXXXXXXXXXXXXX XXXXXXXXXX XXXXXXXXXXXXXX\",\"local_prestacao\":{\"uf\":\"SC\",\"cidade\":\"Palho\u00e7a\",\"codigo_municipio\":\"4211900\"},\"impostos\":{\"tributacao_iss\":\"1\",\"tributacao_descricao\":\"Tributada Integralmente (TI)\",\"iss_retido\":2,\"bc\":1000,\"iss_aliquota\":0,\"iss_valor\":0,\"pis_aliquota\":0,\"pis_valor\":0,\"cofins_aliquota\":0,\"cofins_valor\":0,\"inss_aliquota\":0,\"inss_valor\":0,\"ir_aliquota\":0,\"ir_valor\":0,\"csll_aliquota\":0,\"csll_valor\":0,\"cp_aliquota\":0,\"cp_valor\":0,\"ibs_cbs\":{\"bc\":1000,\"cbs\":{\"valor\":9,\"aliquota\":0.9,\"aliquota_efetiva\":0.9,\"aliquota_diferimento\":0},\"valor_ibs\":1,\"ibs_estadual\":{\"valor\":1,\"aliquota\":0.1,\"aliquota_efetiva\":0.1,\"aliquota_diferimento\":0},\"ibs_municipal\":{\"valor\":0,\"aliquota\":0,\"aliquota_efetiva\":0,\"aliquota_diferimento\":0},\"finalidade_nfse\":0,\"situacao_tributaria\":\"000\",\"localidade_incidencia\":{\"codigo\":\"3550308\",\"descricao\":\"S\u00e3o Paulo\"},\"cod_indicador_operacao\":\"100301\",\"indicador_destinatario\":0,\"classificacao_tributaria\":\"000001\",\"valor_calculo_reembolso_repasse\":0}}}],\"totais\":{\"valor\":4000,\"desconto_incondicionado\":0,\"desconto_condicionado\":0,\"iss_valor\":0,\"pis_valor\":0,\"cofins_valor\":0,\"inss_valor\":0,\"ir_valor\":0,\"csll_valor\":0,\"cp_valor\":0},\"docs\":{\"xml\":\"<NFSe versao=\\\"1.00\\\" xmlns=\\\"http://www.sped.fazenda.gov.br/nfse\\\">...</NFSe>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-034 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-034";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"cte\",\"status\":\"aprovado\",\"categoria\":\"citadas\",\"data_emissao\":\"2025-02-22 17:08:23\",\"numero\":700,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":0.48,\"finalidade\":0,\"cfop\":[\"6353\"],\"modalidade\":1,\"uf_inicio_prestacao\":\"SP\",\"uf_termino_prestacao\":\"PR\",\"emitente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"natureza_operacao\":\"XXXXXXX XXXXXXXXX XXXXXXXXXXX\",\"impostos\":{\"icms\":{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"40\",\"bc\":0,\"aliquota\":0,\"valor\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":0,\"valor_ibs\":0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":0,\"aliquota_diferimento\":0.1,\"valor_diferimento\":0,\"valor_devolvido\":0,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":0,\"aliquota_diferimento\":0.05,\"valor_diferimento\":0,\"valor_devolvido\":0,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":0,\"aliquota_diferimento\":0.03,\"valor_diferimento\":0,\"valor_devolvido\":0,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":0},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":0}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":0},\"cbs\":{\"aliquota\":0.7,\"valor\":0}},\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":0,\"valor_ibs_condicionado_suspensao\":0,\"aliquota_cbs\":0.3,\"valor_cbs\":0,\"valor_cbs_condicionado_suspensao\":0},\"estorno_credito\":{\"valor_ibs\":0,\"valor_cbs\":0}}},\"servico\":{\"tipo\":0,\"valor_total\":0.48,\"valor_recebido\":0.48},\"indicador_tomador\":\"0\",\"remetente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"destinatario\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"expedidor\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"recebedor\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"tomador\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"documentos_fiscais\":[{\"chave\":\"00000000000000000000000000000000000000000000\"}],\"docs\":{\"xml\":\"<cteProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/cte\\\">...</cteProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-035 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-035";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"cte_os\",\"status\":\"aprovado\",\"categoria\":\"citadas\",\"data_emissao\":\"2025-02-22 17:08:23\",\"numero\":700,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":0.48,\"finalidade\":0,\"cfop\":[\"6353\"],\"modalidade\":1,\"uf_inicio_prestacao\":\"SP\",\"uf_termino_prestacao\":\"PR\",\"emitente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"natureza_operacao\":\"XXXXXXX XXXXXXXXX XXXXXXXXXXX\",\"impostos\":{\"icms\":{\"codigo_cfop\":\"5353\",\"situacao_tributaria\":\"40\",\"bc\":0,\"aliquota\":0,\"valor\":0},\"ibs_cbs\":{\"situacao_tributaria\":\"000\",\"classificacao_tributaria\":\"000001\",\"indicador_doacao\":false,\"bc\":0,\"valor_ibs\":0,\"ibs_estadual\":{\"aliquota\":1.2,\"valor\":0,\"aliquota_diferimento\":0.1,\"valor_diferimento\":0,\"valor_devolvido\":0,\"aliquota_reducao\":0.2,\"aliquota_efetiva\":1.0},\"ibs_municipal\":{\"aliquota\":0.8,\"valor\":0,\"aliquota_diferimento\":0.05,\"valor_diferimento\":0,\"valor_devolvido\":0,\"aliquota_reducao\":0.1,\"aliquota_efetiva\":0.7},\"cbs\":{\"aliquota\":0.9,\"valor\":0,\"aliquota_diferimento\":0.03,\"valor_diferimento\":0,\"valor_devolvido\":0,\"aliquota_reducao\":0.05,\"aliquota_efetiva\":0.85},\"situacao_tributaria_regular\":\"000\",\"classificacao_tributaria_regular\":\"000001\",\"tributacao_regular\":{\"ibs_estadual\":{\"aliquota_efetiva\":1.1,\"valor\":0},\"ibs_municipal\":{\"aliquota_efetiva\":0.75,\"valor\":0},\"cbs\":{\"aliquota_efetiva\":0.88,\"valor\":0}},\"compra_governamental\":{\"ibs_estadual\":{\"aliquota\":1.0,\"valor\":0},\"ibs_municipal\":{\"aliquota\":0.6,\"valor\":0},\"cbs\":{\"aliquota\":0.7,\"valor\":0}},\"credito_presumido\":{\"classificacao\":\"01\",\"aliquota_ibs\":0.5,\"valor_ibs\":0,\"valor_ibs_condicionado_suspensao\":0,\"aliquota_cbs\":0.3,\"valor_cbs\":0,\"valor_cbs_condicionado_suspensao\":0},\"estorno_credito\":{\"valor_ibs\":0,\"valor_cbs\":0}}},\"servico\":{\"tipo\":0,\"valor_total\":0.48,\"valor_recebido\":0.48},\"indicador_tomador\":\"0\",\"tomador\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"0000000000\",\"email\":\"abc@defg.com\"},\"documentos_fiscais\":[{\"chave\":\"00000000000000000000000000000000000000000000\"}],\"docs\":{\"xml\":\"<cteProc versao=\\\"4.00\\\" xmlns=\\\"http://www.portalfiscal.inf.br/cte\\\">...</cteProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-036 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-036";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelo\":\"mdfe\",\"status\":\"aprovado\",\"categoria\":\"proprietario_veiculos\",\"data_emissao\":\"2025-02-03 08:43:00\",\"numero\":500,\"serie\":1,\"chave\":\"00000000000000000000000000000000000000000000\",\"valor\":78019.2,\"modalidade\":1,\"uf_carregamento\":\"RN\",\"uf_descarregamento\":\"SP\",\"peso_bruto\":26208,\"quantidade_nfe\":0,\"quantidade_cte\":1,\"quantidade_mdfe\":0,\"emitente\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXX XXXXXX XXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"nome_fantasia\":\"XXXXXX XXXXXX XXX\",\"ie\":\"00000000\",\"endereco\":\"XXXX XXXX\",\"numero\":\"XXX\",\"complemento\":\"XXXX XXXXXX\",\"bairro\":\"XXXXXXX XXXX\",\"cep\":\"00000000\",\"cidade\":\"Sao Paulo\",\"uf\":\"SP\",\"telefone\":\"00000000000\",\"email\":\"abc@defg.com\"},\"carregamento\":[{\"nome_municipio\":\"GOVERNADOR DIX-SEPT ROSADO\",\"codigo_municipio\":\"2404309\"}],\"descarregamento\":[{\"nome_municipio\":\"SAO PAULO\",\"codigo_municipio\":\"3550308\",\"documentos_fiscais\":[{\"chave\":\"00000000000000000000000000000000000000000000\"}]}],\"percurso\":[\"CE\",\"PB\",\"PE\",\"AL\",\"SE\",\"BA\",\"MG\"],\"rodoviario\":{\"rntrc\":\"00000000\",\"veiculo_tracao\":{\"codigo_interno\":\"1\",\"placa\":\"ABC0D00\",\"renavam\":\"00000000000\",\"tara\":\"0\",\"capacidade_kg\":\"100\",\"capacidade_m3\":\"0\",\"tipo_rodado\":\"06\",\"tipo_carroceria\":\"00\",\"uf_licenciamento\":\"MT\",\"proprietario\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXXXX XXXXXXXXXXXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"ie\":\"0000000000\",\"rntrc\":\"00000000\",\"uf\":\"PR\",\"tipo_proprietario\":2}},\"veiculo_reboque\":[{\"codigo_interno\":\"2\",\"placa\":\"ABC0E00\",\"renavam\":\"00000000000\",\"tara\":\"0\",\"capacidade_kg\":\"100\",\"capacidade_m3\":\"0\",\"tipo_carroceria\":\"00\",\"uf_licenciamento\":\"MT\",\"proprietario\":{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\",\"razao_social\":\"XXXXXXXX XXXXXXXXXXXX\",\"nome_completo\":\"XXXXXX XXXXXX XXX\",\"ie\":\"0000000000\",\"rntrc\":\"00000000\",\"uf\":\"PR\",\"tipo_proprietario\":2}}],\"condutor\":[{\"cpf\":\"00000000000\",\"nome\":\"XXXXXXX XXXXXXXXXXXXXX\"}],\"ciot\":[{\"codigo_ciot\":\"000000000000\",\"cnpj_responsavel\":\"00000000000000\",\"cpf_responsavel\":\"00000000000\"}],\"vale_pedagio\":[{\"cnpj_fornecedor\":\"00000000000000\",\"cnpj_responsavel\":\"00000000000000\",\"cpf_responsavel\":\"00000000000\",\"valor\":\"327.00\",\"comprovante\":\"00000000\"}],\"contratante\":[{\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\"}]},\"aereo\":{\"nacionalidade_aeronave\":\"XXXX\",\"matricula_aeronave\":\"XXXXXX\",\"numero_voo\":\"AB1234\",\"aerodromo_embarque\":\"AB1\",\"aerodromo_destino\":\"AB2\",\"data_voo\":\"2025-02-03\"},\"aquaviario\":{\"irin\":\"XXXX12345\",\"tipo_embarcacao\":\"01\",\"codigo_embarcacao\":\"AB12345\",\"nome_embarcacao\":\"XXXX XXXXXXXX\",\"numero_viagem\":\"AA12345\",\"codigo_porto_embarque\":\"XXXXX\",\"codigo_porto_destino\":\"XXXXX\",\"porto_transbordo\":\"XXXXXXXXX\",\"tipo_navegacao\":\"1\",\"terminal_carregamento\":[{\"codigo\":\"TC1\",\"nome\":\"XXXXXXXXXXX\"}],\"terminal_descarregamento\":[{\"codigo\":\"TD1\",\"nome\":\"XXXXXXXXXXX\"}],\"embarcacao_comboio\":[{\"codigo\":\"EC1\",\"identificador_balsa\":\"XXXXXXXXXXX\"}],\"carga_vazia\":[{\"identificador\":\"UCV1\",\"tipo_unidade\":1}],\"transporte_vazio\":[{\"identificador\":\"UTV1\",\"tipo_unidade\":1}]},\"ferroviario\":{\"trem\":{\"prefixo\":\"ABC123\",\"data_liberacao\":\"2025-03-02 20:00:00\",\"origem\":\"A12\",\"destino\":\"B34\"},\"vagoes\":[{\"peso_bc\":\"0\",\"peso_real\":\"0\",\"tipo_vagao\":\"ABC\",\"serie\":\"XYZ\",\"numero\":\"110\",\"sequencia_vagao\":\"1\",\"tonelada_util\":\"0\"}]},\"produto_predominante\":{\"tipo_carga\":\"02\",\"nome\":\"XXXXXX\",\"gtin\":\"00000000000000\",\"ncm\":\"00000000\",\"lotacao\":{\"carregamento\":{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"},\"descarregamento\":{\"cep\":\"00000-000\",\"latitude\":\"00.000\",\"longitude\":\"00.000\"}}},\"seguro\":[{\"responsavel\":{\"tipo_responsavel\":\"2\",\"cnpj\":\"00000000000000\",\"cpf\":\"00000000000\"},\"seguradora\":{\"cnpj\":\"00000000000000\",\"nome_seguradora\":\"XXXXXXXXXXXX\"},\"numero_apolice\":\"000000000000\",\"numero_averbacao\":[\"000000000000\"]}],\"docs\":{\"xml\":\"<mdfeProc versao='3.00' xmlns=\\\"http://www.portalfiscal.inf.br/mdfe\\\">...</mdfeProc>\",\"pdf\":\"H4sIAAAAAAAAA+3BMQEAAADCoPVEAAA...\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-037 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-037";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfe\",\"filtros\":{\"empresa_uuid\":[\"00000000-0000-0000-0000-000000000000\"],\"categoria\":[\"recebidas\"],\"status\":[\"aprovado\"]},\"filtros_modelo\":{\"operacao\":[\"0\",1]},\"paginacao\":\"cursor\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_data_inicial();if(field.has_value())model.set_data_inicial(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_pesquisa();if(field.has_value())model.set_pesquisa(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_uf_carregamento();if(field.has_value())model.set_uf_carregamento(field.value());}
{auto field=model.get_uf_descarregamento();if(field.has_value())model.set_uf_descarregamento(field.value());}
{auto field=model.get_placa_veiculo();if(field.has_value())model.set_placa_veiculo(field.value());}
{auto field=model.get_uf_inicio_prestacao();if(field.has_value())model.set_uf_inicio_prestacao(field.value());}
{auto field=model.get_uf_termino_prestacao();if(field.has_value())model.set_uf_termino_prestacao(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_cursor();if(field.has_value())model.set_cursor(field.value());}
{auto field=model.get_paginacao();if(field.has_value())model.set_paginacao(field.value());}
{auto field=model.get_ordenar_por();if(field.has_value())model.set_ordenar_por(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
{auto field=model.get_novos_documentos();if(field.has_value())model.set_novos_documentos(field.value());}
{auto field=model.get_filtros();if(field.has_value())model.set_filtros(field.value());}
{auto field=model.get_filtros_modelo();if(field.has_value())model.set_filtros_modelo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-038 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-038";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfse\",\"filtros_modelo\":{\"ncm\":\"12345678\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-039 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-039";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"filtros_modelo\":{\"cfop\":\"1234\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-040 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-040";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"relatorio\":\"xml\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-041 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-041";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfe\",\"relatorio\":\"xml\",\"documentos\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-042 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-042";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfe\",\"categoria\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-043 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-043";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorSearchRequest::from_json("{\"modelo\":\"nfse\",\"serie_rps\":\"A1\",\"numero_rps\":\"2\",\"page\":1,\"per_page\":50}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_modelo();if(field.has_value())model.set_modelo(field.value());}
{auto field=model.get_ambiente();if(field.has_value())model.set_ambiente(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_data_inicial();if(field.has_value())model.set_data_inicial(field.value());}
{auto field=model.get_data_final();if(field.has_value())model.set_data_final(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_fornecedor();if(field.has_value())model.set_fornecedor(field.value());}
{auto field=model.get_pesquisa();if(field.has_value())model.set_pesquisa(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_cfop();if(field.has_value())model.set_cfop(field.value());}
{auto field=model.get_serie_rps();if(field.has_value())model.set_serie_rps(field.value());}
{auto field=model.get_numero_rps();if(field.has_value())model.set_numero_rps(field.value());}
{auto field=model.get_codigo_cnae();if(field.has_value())model.set_codigo_cnae(field.value());}
{auto field=model.get_codigo_servico();if(field.has_value())model.set_codigo_servico(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_uf_carregamento();if(field.has_value())model.set_uf_carregamento(field.value());}
{auto field=model.get_uf_descarregamento();if(field.has_value())model.set_uf_descarregamento(field.value());}
{auto field=model.get_placa_veiculo();if(field.has_value())model.set_placa_veiculo(field.value());}
{auto field=model.get_uf_inicio_prestacao();if(field.has_value())model.set_uf_inicio_prestacao(field.value());}
{auto field=model.get_uf_termino_prestacao();if(field.has_value())model.set_uf_termino_prestacao(field.value());}
{auto field=model.get_relatorio();if(field.has_value())model.set_relatorio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_cursor();if(field.has_value())model.set_cursor(field.value());}
{auto field=model.get_paginacao();if(field.has_value())model.set_paginacao(field.value());}
{auto field=model.get_ordenar_por();if(field.has_value())model.set_ordenar_por(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
{auto field=model.get_novos_documentos();if(field.has_value())model.set_novos_documentos(field.value());}
{auto field=model.get_filtros();if(field.has_value())model.set_filtros(field.value());}
{auto field=model.get_filtros_modelo();if(field.has_value())model.set_filtros_modelo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-044 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-044";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorManifestationRequest::from_json("{\"evento\":1,\"manifestacao\":3}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-045 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-045";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorManifestationRequest::from_json("{\"evento\":1,\"manifestacao\":3,\"justificativa\":\"Synthetic justified operation\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-046 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-046";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportRequest::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"chave\":\"00000000000000000000000000000000000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_url_arquivo_zip();if(field.has_value())model.set_url_arquivo_zip(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-047 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-047";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportRequest::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-048 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-048";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportRequest::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000000\",\"chave\":\"00000000000000000000000000000000000000000000\",\"xml\":\"PHRlc3QvPg==\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-049 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-049";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorImportStatus::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"processando\",\"processado\":0,\"importados\":[],\"descartados\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_processado();if(field.has_value())model.set_processado(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_importados();if(field.has_value())model.set_importados(field.value());}
{auto field=model.get_descartados();if(field.has_value())model.set_descartados(field.value());}
{auto field=model.get_erro();if(field.has_value())model.set_erro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-050 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-050";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAddress::from_json("{\"codigo_municipio\":3550308,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-documents-integer getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-monitor-documents-integer";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAddress::from_json("{\"codigo_municipio\":\"3550308\",\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-documents-string getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-monitor-documents-string";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAddress::from_json("{\"codigo_municipio\":3550308.5,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-documents-fractional getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:monitor-address-wire-monitor-documents-fractional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_documents::MonitorAddress::from_json("{\"codigo_municipio\":true,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-documents-boolean getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:monitor-address-wire-monitor-documents-boolean";return -1;}++checked;}
return checked;}
