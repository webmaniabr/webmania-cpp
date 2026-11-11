#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_monitor_management(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_monitor_management::MonitorError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
{auto field=model.get_success();if(field.has_value())model.set_success(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorPagination::from_json("{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_current_page();if(field.has_value())model.set_current_page(field.value());}
{auto field=model.get_last_page();if(field.has_value())model.set_last_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorPagination getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorPagination";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAddress::from_json("{\"codigo_municipio\":3550308,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorAddress getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorAddress";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCompany::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorCompany getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorCompany";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorMunicipalityRegistration::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"tipo_download\":1,\"municipio\":\"synthetic\",\"uf\":\"synthetic\",\"codigo_ibge\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_tipo_download();if(field.has_value())model.set_tipo_download(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorMunicipalityRegistration getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorMunicipalityRegistration";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAvailableMunicipality::from_json("{\"nativo\":false,\"im\":false,\"certificado\":false,\"login_senha\":false,\"cadastro_prefeitura\":false,\"domicilio_fiscal_municipio\":false,\"multiplos_servicos\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorAvailableMunicipality getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorAvailableMunicipality";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDownloadStatistics::from_json("{\"total_downloads\":0,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDownloadStatistics getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDownloadStatistics";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDownloadStatisticsEmpresasItem::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"total_downloads\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDownloadStatisticsEmpresasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDownloadStatisticsEmpresasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCompanyPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorCompanyPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorCompanyPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorMunicipalityPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorMunicipalityPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorMunicipalityPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAvailableMunicipalities::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorAvailableMunicipalities getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorAvailableMunicipalities";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorPerson::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorPerson getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorPerson";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorManifestationStateVariant0::from_json("{\"codigo\":0,\"descricao\":\"synthetic\",\"manifestado\":false,\"automatica\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
{auto field=model.get_manifestado();if(field.has_value())model.set_manifestado(field.value());}
{auto field=model.get_automatica();if(field.has_value())model.set_automatica(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorManifestationStateVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorManifestationStateVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfe::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"nfe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfe getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfe";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTotaisIssqn::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotaisIssqn getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotaisIssqn";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_imposto_importacao();if(field.has_value())model.set_imposto_importacao(field.value());}
{auto field=model.get_ipi();if(field.has_value())model.set_ipi(field.value());}
{auto field=model.get_cofins();if(field.has_value())model.set_cofins(field.value());}
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
{auto field=model.get_pis();if(field.has_value())model.set_pis(field.value());}
{auto field=model.get_issqn();if(field.has_value())model.set_issqn(field.value());}
{auto field=model.get_ipi_devolvido();if(field.has_value())model.set_ipi_devolvido(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosImpostoImportacao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ii_bc();if(field.has_value())model.set_ii_bc(field.value());}
{auto field=model.get_despesas_aduaneiras();if(field.has_value())model.set_despesas_aduaneiras(field.value());}
{auto field=model.get_ii_valor();if(field.has_value())model.set_ii_valor(field.value());}
{auto field=model.get_iof_valor();if(field.has_value())model.set_iof_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosImpostoImportacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosImpostoImportacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIpi::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIpi getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIpi";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosCofins::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cofins_bc();if(field.has_value())model.set_cofins_bc(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_cofins_valor();if(field.has_value())model.set_cofins_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_cofins_aliquota();if(field.has_value())model.set_cofins_aliquota(field.value());}
{auto field=model.get_cofins_aliquota_valor();if(field.has_value())model.set_cofins_aliquota_valor(field.value());}
{auto field=model.get_cofins_quantidade_bc();if(field.has_value())model.set_cofins_quantidade_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosCofins getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosCofins";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegular::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegular getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegular";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoRegularCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamental::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCompraGovernamentalCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoMonofasica::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoMonofasica getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTributacaoMonofasica";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTransferenciaCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTransferenciaCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsTransferenciaCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsAjusteCompetencia::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_competencia_apuracao();if(field.has_value())model.set_competencia_apuracao(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsAjusteCompetencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsAjusteCompetencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_ibs_condicionado_suspensao();if(field.has_value())model.set_valor_ibs_condicionado_suspensao(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_cbs_condicionado_suspensao();if(field.has_value())model.set_valor_cbs_condicionado_suspensao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumidoZfm::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_competencia_apuracao();if(field.has_value())model.set_competencia_apuracao(field.value());}
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumidoZfm getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsCreditoPresumidoZfm";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsEstornoCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIcms::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosPis::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_pis_aliquota();if(field.has_value())model.set_pis_aliquota(field.value());}
{auto field=model.get_pis_bc();if(field.has_value())model.set_pis_bc(field.value());}
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_pis_quantidade_bc();if(field.has_value())model.set_pis_quantidade_bc(field.value());}
{auto field=model.get_pis_valor();if(field.has_value())model.set_pis_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_base_calculo();if(field.has_value())model.set_base_calculo(field.value());}
{auto field=model.get_pis_aliquota_valor();if(field.has_value())model.set_pis_aliquota_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosPis getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosPis";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIssqn::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIssqn getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIssqn";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIpiDevolvido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_percentual_devolvido();if(field.has_value())model.set_percentual_devolvido(field.value());}
{auto field=model.get_ipi_devolvido_valor();if(field.has_value())model.set_ipi_devolvido_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIpiDevolvido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProdutosItemImpostosIpiDevolvido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProtocoloVariant1::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_data_recebimento();if(field.has_value())model.set_data_recebimento(field.value());}
{auto field=model.get_numero_protocolo();if(field.has_value())model.set_numero_protocolo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProtocoloVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProtocoloVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeProtocolo::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProtocolo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeProtocolo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTotais::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotais getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotais";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeFatura::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_desconto();if(field.has_value())model.set_valor_desconto(field.value());}
{auto field=model.get_valor_liquido();if(field.has_value())model.set_valor_liquido(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_original();if(field.has_value())model.set_valor_original(field.value());}
{auto field=model.get_desconto();if(field.has_value())model.set_desconto(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeFatura getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeFatura";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfePedido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfePedido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfePedido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeResponsavelTecnico::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_telefone();if(field.has_value())model.set_telefone(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_contato();if(field.has_value())model.set_contato(field.value());}
{auto field=model.get_email();if(field.has_value())model.set_email(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeResponsavelTecnico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeResponsavelTecnico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTransporte::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporte getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporte";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTransporteVeiculo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteVeiculo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteVeiculo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTransporteRetirada::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteRetirada getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteRetirada";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTransporteEntrega::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteEntrega getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteEntrega";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTransporteVolumesItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_especie();if(field.has_value())model.set_especie(field.value());}
{auto field=model.get_marca();if(field.has_value())model.set_marca(field.value());}
{auto field=model.get_numeracao();if(field.has_value())model.set_numeracao(field.value());}
{auto field=model.get_peso_liquido();if(field.has_value())model.set_peso_liquido(field.value());}
{auto field=model.get_peso_bruto();if(field.has_value())model.set_peso_bruto(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteVolumesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteVolumesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTransporteTransportadora::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteTransportadora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTransporteTransportadora";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeDocs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeParcelasItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_vencimento();if(field.has_value())model.set_vencimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeParcelasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeParcelasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTotaisIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotaisIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotaisIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfeTotaisIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotaisIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfeTotaisIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfse::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"nfse\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseTotais::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseTotais getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseTotais";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsLocalidadeIncidencia::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsLocalidadeIncidencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseImpostosIbsCbsLocalidadeIncidencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseIdentificacaoNfse::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data_competencia();if(field.has_value())model.set_data_competencia(field.value());}
{auto field=model.get_rps();if(field.has_value())model.set_rps(field.value());}
{auto field=model.get_codigo_verificacao();if(field.has_value())model.set_codigo_verificacao(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_provedor();if(field.has_value())model.set_provedor(field.value());}
{auto field=model.get_nfse_substituida();if(field.has_value())model.set_nfse_substituida(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseIdentificacaoNfse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseIdentificacaoNfse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseIdentificacaoNfseRps::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseIdentificacaoNfseRps getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseIdentificacaoNfseRps";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemLocalPrestacaoVariant1::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemLocalPrestacaoVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemLocalPrestacaoVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemLocalPrestacao::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemLocalPrestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemLocalPrestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsLocalidadeIncidencia::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_descricao();if(field.has_value())model.set_descricao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsLocalidadeIncidencia getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseServicosItemImpostosIbsCbsLocalidadeIncidencia";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseLocalPrestacaoVariant1::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseLocalPrestacaoVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseLocalPrestacaoVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseLocalPrestacao::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseLocalPrestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseLocalPrestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseDocs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentNfseFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentNfseFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentNfseFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfe::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"mdfe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfe getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfe";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeCarregamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_nome_municipio();if(field.has_value())model.set_nome_municipio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeCarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeCarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeCarregamentoItemDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeCarregamentoItemDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeCarregamentoItemDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeSeguroItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_responsavel();if(field.has_value())model.set_responsavel(field.value());}
{auto field=model.get_seguradora();if(field.has_value())model.set_seguradora(field.value());}
{auto field=model.get_numero_apolice();if(field.has_value())model.set_numero_apolice(field.value());}
{auto field=model.get_numero_averbacao();if(field.has_value())model.set_numero_averbacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeSeguroItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeSeguroItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeSeguroItemResponsavel::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_responsavel();if(field.has_value())model.set_tipo_responsavel(field.value());}
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeSeguroItemResponsavel getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeSeguroItemResponsavel";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeSeguroItemSeguradora::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_nome_seguradora();if(field.has_value())model.set_nome_seguradora(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeSeguroItemSeguradora getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeSeguroItemSeguradora";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfePercursoItemVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_ordem();if(field.has_value())model.set_ordem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfePercursoItemVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfePercursoItemVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfePercursoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfePercursoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfePercursoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeDescarregamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
{auto field=model.get_documentos_fiscais();if(field.has_value())model.set_documentos_fiscais(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_cidade();if(field.has_value())model.set_cidade(field.value());}
{auto field=model.get_nome_municipio();if(field.has_value())model.set_nome_municipio(field.value());}
{auto field=model.get_documentos();if(field.has_value())model.set_documentos(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDescarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDescarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeDescarregamentoItemDocumentosFiscaisItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDescarregamentoItemDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDescarregamentoItemDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeDescarregamentoItemDocumentosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDescarregamentoItemDocumentosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDescarregamentoItemDocumentosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeFerroviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_trem();if(field.has_value())model.set_trem(field.value());}
{auto field=model.get_vagoes();if(field.has_value())model.set_vagoes(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFerroviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFerroviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeFerroviarioTrem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_prefixo();if(field.has_value())model.set_prefixo(field.value());}
{auto field=model.get_data_liberacao();if(field.has_value())model.set_data_liberacao(field.value());}
{auto field=model.get_origem();if(field.has_value())model.set_origem(field.value());}
{auto field=model.get_destino();if(field.has_value())model.set_destino(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFerroviarioTrem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFerroviarioTrem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeFerroviarioVagoesItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_peso_bc();if(field.has_value())model.set_peso_bc(field.value());}
{auto field=model.get_peso_real();if(field.has_value())model.set_peso_real(field.value());}
{auto field=model.get_tipo_vagao();if(field.has_value())model.set_tipo_vagao(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_sequencia_vagao();if(field.has_value())model.set_sequencia_vagao(field.value());}
{auto field=model.get_tonelada_util();if(field.has_value())model.set_tonelada_util(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFerroviarioVagoesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFerroviarioVagoesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeProdutoPredominante::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_carga();if(field.has_value())model.set_tipo_carga(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_gtin();if(field.has_value())model.set_gtin(field.value());}
{auto field=model.get_ncm();if(field.has_value())model.set_ncm(field.value());}
{auto field=model.get_lotacao();if(field.has_value())model.set_lotacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominante getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominante";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_carregamento();if(field.has_value())model.set_carregamento(field.value());}
{auto field=model.get_descarregamento();if(field.has_value())model.set_descarregamento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacaoCarregamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacaoCarregamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacaoCarregamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacaoDescarregamento::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_latitude();if(field.has_value())model.set_latitude(field.value());}
{auto field=model.get_longitude();if(field.has_value())model.set_longitude(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacaoDescarregamento getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeProdutoPredominanteLotacaoDescarregamento";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAquaviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAquaviarioTerminalCarregamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioTerminalCarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioTerminalCarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAquaviarioTerminalDescarregamentoItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioTerminalDescarregamentoItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioTerminalDescarregamentoItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAquaviarioEmbarcacaoComboioItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo();if(field.has_value())model.set_codigo(field.value());}
{auto field=model.get_identificador_balsa();if(field.has_value())model.set_identificador_balsa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioEmbarcacaoComboioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioEmbarcacaoComboioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAquaviarioCargaVaziaItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificador();if(field.has_value())model.set_identificador(field.value());}
{auto field=model.get_tipo_unidade();if(field.has_value())model.set_tipo_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioCargaVaziaItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioCargaVaziaItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAquaviarioTransporteVazioItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_identificador();if(field.has_value())model.set_identificador(field.value());}
{auto field=model.get_tipo_unidade();if(field.has_value())model.set_tipo_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioTransporteVazioItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAquaviarioTransporteVazioItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioContratantesItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioContratantesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioContratantesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoReboqueItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_interno();if(field.has_value())model.set_codigo_interno(field.value());}
{auto field=model.get_placa();if(field.has_value())model.set_placa(field.value());}
{auto field=model.get_renavam();if(field.has_value())model.set_renavam(field.value());}
{auto field=model.get_tara();if(field.has_value())model.set_tara(field.value());}
{auto field=model.get_capacidade_kg();if(field.has_value())model.set_capacidade_kg(field.value());}
{auto field=model.get_capacidade_m3();if(field.has_value())model.set_capacidade_m3(field.value());}
{auto field=model.get_tipo_carroceria();if(field.has_value())model.set_tipo_carroceria(field.value());}
{auto field=model.get_uf_licenciamento();if(field.has_value())model.set_uf_licenciamento(field.value());}
{auto field=model.get_proprietario();if(field.has_value())model.set_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoReboqueItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoReboqueItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoReboqueItemProprietario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_tipo_proprietario();if(field.has_value())model.set_tipo_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoReboqueItemProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoReboqueItemProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioLacresItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioLacresItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioLacresItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculosItemCondutor::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculosItemCondutor getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculosItemCondutor";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioCiotItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_cpf_responsavel();if(field.has_value())model.set_cpf_responsavel(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_cpf_cnpj();if(field.has_value())model.set_cpf_cnpj(field.value());}
{auto field=model.get_codigo_ciot();if(field.has_value())model.set_codigo_ciot(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioCiotItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioCiotItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioContratanteItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioContratanteItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioContratanteItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioCondutorItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioCondutorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioCondutorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoTracao::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoTracao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoTracao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoTracaoProprietario::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_nome_completo();if(field.has_value())model.set_nome_completo(field.value());}
{auto field=model.get_ie();if(field.has_value())model.set_ie(field.value());}
{auto field=model.get_rntrc();if(field.has_value())model.set_rntrc(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_tipo_proprietario();if(field.has_value())model.set_tipo_proprietario(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoTracaoProprietario getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioVeiculoTracaoProprietario";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagioVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_fornecedor();if(field.has_value())model.set_cnpj_fornecedor(field.value());}
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_numero_comprovante();if(field.has_value())model.set_numero_comprovante(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagioVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagioVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagioVariant1Item::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj_fornecedor();if(field.has_value())model.set_cnpj_fornecedor(field.value());}
{auto field=model.get_cnpj_responsavel();if(field.has_value())model.set_cnpj_responsavel(field.value());}
{auto field=model.get_cpf_responsavel();if(field.has_value())model.set_cpf_responsavel(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_comprovante();if(field.has_value())model.set_comprovante(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagioVariant1Item getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagioVariant1Item";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagio::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagio getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeRodoviarioValePedagio";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeDocs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeAereo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nacionalidade_aeronave();if(field.has_value())model.set_nacionalidade_aeronave(field.value());}
{auto field=model.get_matricula_aeronave();if(field.has_value())model.set_matricula_aeronave(field.value());}
{auto field=model.get_numero_voo();if(field.has_value())model.set_numero_voo(field.value());}
{auto field=model.get_aerodromo_embarque();if(field.has_value())model.set_aerodromo_embarque(field.value());}
{auto field=model.get_aerodromo_destino();if(field.has_value())model.set_aerodromo_destino(field.value());}
{auto field=model.get_data_voo();if(field.has_value())model.set_data_voo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAereo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeAereo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentMdfeFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentMdfeFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCte::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"cte\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCte getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCte";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteDocumentosFiscaisItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteServico::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteServicoDocumentosOriginariosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoDocumentosOriginariosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoDocumentosOriginariosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteServicoComponentesValorItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoComponentesValorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoComponentesValorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteServicoInformacoesCarga::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_outras_caracteristicas();if(field.has_value())model.set_outras_caracteristicas(field.value());}
{auto field=model.get_cubagem();if(field.has_value())model.set_cubagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoInformacoesCarga getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoInformacoesCarga";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteServicoInformacoesCargaCubagem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoInformacoesCargaCubagem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteServicoInformacoesCargaCubagem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegular::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegular getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegular";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsTributacaoRegularCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamental::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCompraGovernamentalCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_ibs_condicionado_suspensao();if(field.has_value())model.set_valor_ibs_condicionado_suspensao(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_cbs_condicionado_suspensao();if(field.has_value())model.set_valor_cbs_condicionado_suspensao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIbsCbsEstornoCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteImpostosIcms::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_credito();if(field.has_value())model.set_valor_credito(field.value());}
{auto field=model.get_percentual_credito();if(field.has_value())model.set_percentual_credito(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteDocs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOs::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"cte_os\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsDocumentosFiscaisItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsDocumentosFiscaisItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsDocumentosFiscaisItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsServico::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServico getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServico";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsServicoDocumentosOriginariosItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo();if(field.has_value())model.set_tipo(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_serie();if(field.has_value())model.set_serie(field.value());}
{auto field=model.get_numero();if(field.has_value())model.set_numero(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoDocumentosOriginariosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoDocumentosOriginariosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsServicoComponentesValorItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nome();if(field.has_value())model.set_nome(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoComponentesValorItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoComponentesValorItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsServicoInformacoesCarga::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_total();if(field.has_value())model.set_valor_total(field.value());}
{auto field=model.get_produto_predominante();if(field.has_value())model.set_produto_predominante(field.value());}
{auto field=model.get_outras_caracteristicas();if(field.has_value())model.set_outras_caracteristicas(field.value());}
{auto field=model.get_cubagem();if(field.has_value())model.set_cubagem(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoInformacoesCarga getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoInformacoesCarga";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsServicoInformacoesCargaCubagem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_quantidade();if(field.has_value())model.set_quantidade(field.value());}
{auto field=model.get_unidade();if(field.has_value())model.set_unidade(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoInformacoesCargaCubagem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsServicoInformacoesCargaCubagem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostos::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_cbs();if(field.has_value())model.set_ibs_cbs(field.value());}
{auto field=model.get_icms();if(field.has_value())model.set_icms(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostos getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostos";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_aliquota_diferimento();if(field.has_value())model.set_aliquota_diferimento(field.value());}
{auto field=model.get_valor_diferimento();if(field.has_value())model.set_valor_diferimento(field.value());}
{auto field=model.get_valor_devolvido();if(field.has_value())model.set_valor_devolvido(field.value());}
{auto field=model.get_aliquota_reducao();if(field.has_value())model.set_aliquota_reducao(field.value());}
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegular::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegular getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegular";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota_efetiva();if(field.has_value())model.set_aliquota_efetiva(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsTributacaoRegularCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamental::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ibs_estadual();if(field.has_value())model.set_ibs_estadual(field.value());}
{auto field=model.get_ibs_municipal();if(field.has_value())model.set_ibs_municipal(field.value());}
{auto field=model.get_cbs();if(field.has_value())model.set_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamental getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamental";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsEstadual::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsEstadual getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsEstadual";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsMunicipal::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsMunicipal getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalIbsMunicipal";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalCbs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalCbs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCompraGovernamentalCbs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCreditoPresumido::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_classificacao();if(field.has_value())model.set_classificacao(field.value());}
{auto field=model.get_aliquota_ibs();if(field.has_value())model.set_aliquota_ibs(field.value());}
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_ibs_condicionado_suspensao();if(field.has_value())model.set_valor_ibs_condicionado_suspensao(field.value());}
{auto field=model.get_aliquota_cbs();if(field.has_value())model.set_aliquota_cbs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
{auto field=model.get_valor_cbs_condicionado_suspensao();if(field.has_value())model.set_valor_cbs_condicionado_suspensao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCreditoPresumido getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsCreditoPresumido";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsEstornoCredito::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_valor_ibs();if(field.has_value())model.set_valor_ibs(field.value());}
{auto field=model.get_valor_cbs();if(field.has_value())model.set_valor_cbs(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsEstornoCredito getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIbsCbsEstornoCredito";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsImpostosIcms::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_situacao_tributaria();if(field.has_value())model.set_situacao_tributaria(field.value());}
{auto field=model.get_valor();if(field.has_value())model.set_valor(field.value());}
{auto field=model.get_valor_credito();if(field.has_value())model.set_valor_credito(field.value());}
{auto field=model.get_percentual_credito();if(field.has_value())model.set_percentual_credito(field.value());}
{auto field=model.get_aliquota();if(field.has_value())model.set_aliquota(field.value());}
{auto field=model.get_percentual_reducao();if(field.has_value())model.set_percentual_reducao(field.value());}
{auto field=model.get_codigo_cfop();if(field.has_value())model.set_codigo_cfop(field.value());}
{auto field=model.get_bc();if(field.has_value())model.set_bc(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIcms getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsImpostosIcms";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsDocs::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_pdf();if(field.has_value())model.set_pdf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsDocs getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsDocs";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentCteOsFornecedorVariant0::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsFornecedorVariant0 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentCteOsFornecedorVariant0";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocument::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"nfe\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocument getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocument";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCursorPagination::from_json("{\"per_page\":1,\"next_cursor\":\"synthetic\",\"prev_cursor\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_next_cursor();if(field.has_value())model.set_next_cursor(field.value());}
{auto field=model.get_prev_cursor();if(field.has_value())model.set_prev_cursor(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorCursorPagination getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorCursorPagination";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDocumentPageMeta::from_json("{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDocumentPageMeta getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDocumentPageMeta";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorReport::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"relatorio\":\"xml\",\"modelo\":\"synthetic\",\"status\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorReport getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorReport";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorReportFiltros::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_selecao_manual();if(field.has_value())model.set_selecao_manual(field.value());}
{auto field=model.get_periodo();if(field.has_value())model.set_periodo(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
{auto field=model.get_categoria();if(field.has_value())model.set_categoria(field.value());}
{auto field=model.get_finalidade();if(field.has_value())model.set_finalidade(field.value());}
{auto field=model.get_operacao();if(field.has_value())model.set_operacao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorReportFiltros getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorReportFiltros";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorReportFiltrosPeriodo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_de();if(field.has_value())model.set_de(field.value());}
{auto field=model.get_ate();if(field.has_value())model.set_ate(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorReportFiltrosPeriodo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorReportFiltrosPeriodo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorReportPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorReportPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorReportPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequest::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestEmpresaUuid::from_json("\"00000000-0000-4000-8000-000000000001\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestEmpresaUuid getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestEmpresaUuid";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestCategoria::from_json("\"emitidas\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestCategoria getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestCategoria";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestStatus::from_json("\"aprovado\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestManifestacao::from_json("\"pendente\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestManifestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestManifestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFinalidade::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFinalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFinalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestOperacao::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestOperacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestOperacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestModalidade::from_json("1",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestModalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestModalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltros::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltros getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltros";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosEmpresaUuid::from_json("\"00000000-0000-4000-8000-000000000001\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosEmpresaUuid getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosEmpresaUuid";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosCategoria::from_json("\"emitidas\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosCategoria getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosCategoria";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosStatus::from_json("\"aprovado\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosManifestacao::from_json("\"pendente\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosManifestacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosManifestacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosModelo::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModelo getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModelo";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosModeloFinalidade::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModeloFinalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModeloFinalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosModeloOperacao::from_json("0",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModeloOperacao getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModeloOperacao";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorSearchRequestFiltrosModeloModalidade::from_json("1",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModeloModalidade getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorSearchRequestFiltrosModeloModalidade";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorEvent::from_json("{\"uuid\":\"synthetic\",\"documento_uuid\":\"synthetic\",\"registrado_em\":\"synthetic\",\"tipo_evento\":0,\"resumo\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorEvent getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorEvent";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorEventAlteracoesItem::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_grupo();if(field.has_value())model.set_grupo(field.value());}
{auto field=model.get_campo();if(field.has_value())model.set_campo(field.value());}
{auto field=model.get_alteracao();if(field.has_value())model.set_alteracao(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorEventAlteracoesItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorEventAlteracoesItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorEventMdfe::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_protocolo();if(field.has_value())model.set_protocolo(field.value());}
{auto field=model.get_data_emissao();if(field.has_value())model.set_data_emissao(field.value());}
{auto field=model.get_modalidade();if(field.has_value())model.set_modalidade(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorEventMdfe getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorEventMdfe";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorEventLog::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_nProt();if(field.has_value())model.set_nProt(field.value());}
{auto field=model.get_dhRegEvento();if(field.has_value())model.set_dhRegEvento(field.value());}
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xEvento();if(field.has_value())model.set_xEvento(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
{auto field=model.get_tpEvento();if(field.has_value())model.set_tpEvento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorEventLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorEventLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorManifestationRequest::from_json("{\"evento\":1,\"manifestacao\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_evento();if(field.has_value())model.set_evento(field.value());}
{auto field=model.get_manifestacao();if(field.has_value())model.set_manifestacao(field.value());}
{auto field=model.get_justificativa();if(field.has_value())model.set_justificativa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorManifestationRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorManifestationRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportRequest::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"url_arquivo_zip\":\"https://example.invalid/fiscal.zip\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_chave();if(field.has_value())model.set_chave(field.value());}
{auto field=model.get_xml();if(field.has_value())model.set_xml(field.value());}
{auto field=model.get_url_arquivo_zip();if(field.has_value())model.set_url_arquivo_zip(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportStatus::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"status\":\"synthetic\",\"processado\":0,\"importados\":[],\"descartados\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_processado();if(field.has_value())model.set_processado(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_importados();if(field.has_value())model.set_importados(field.value());}
{auto field=model.get_descartados();if(field.has_value())model.set_descartados(field.value());}
{auto field=model.get_erro();if(field.has_value())model.set_erro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportStatus getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportStatus";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportStatusImportadosItem::from_json("{\"arquivo\":\"synthetic\",\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_arquivo();if(field.has_value())model.set_arquivo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportStatusImportadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportStatusImportadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportStatusDescartadosItem::from_json("{\"arquivo\":\"synthetic\",\"motivo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_arquivo();if(field.has_value())model.set_arquivo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportStatusDescartadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportStatusDescartadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCreateCompanyRequest::from_json("{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"cep\":\"01001000\",\"certificado_base64\":\"PHRlc3QvPg==\",\"certificado_senha\":\"synthetic-placeholder\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_certificado_base64();if(field.has_value())model.set_certificado_base64(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_modelos_download();if(field.has_value())model.set_modelos_download(field.value());}
{auto field=model.get_categorias_download();if(field.has_value())model.set_categorias_download(field.value());}
{auto field=model.get_ambiente_download();if(field.has_value())model.set_ambiente_download(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_dfe_retroativas();if(field.has_value())model.set_dfe_retroativas(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorCreateCompanyRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorCreateCompanyRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorUpdateCompanyRequest::from_json("{\"modelos_download\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_certificado_base64();if(field.has_value())model.set_certificado_base64(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_modelos_download();if(field.has_value())model.set_modelos_download(field.value());}
{auto field=model.get_categorias_download();if(field.has_value())model.set_categorias_download(field.value());}
{auto field=model.get_ambiente_download();if(field.has_value())model.set_ambiente_download(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_dfe_retroativas();if(field.has_value())model.set_dfe_retroativas(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorUpdateCompanyRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorUpdateCompanyRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCreateMunicipalityRequest::from_json("{\"codigo_ibge\":\"3550308\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_senha();if(field.has_value())model.set_senha(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_tipo_download();if(field.has_value())model.set_tipo_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorCreateMunicipalityRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorCreateMunicipalityRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorUpdateMunicipalityRequest::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_senha();if(field.has_value())model.set_senha(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorUpdateMunicipalityRequest getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorUpdateMunicipalityRequest";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportNotificationData::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"processando\",\"empresa_uuid\":null,\"processado\":0,\"total\":null,\"importados\":[],\"descartados\":[],\"erro\":null}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_processado();if(field.has_value())model.set_processado(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
{auto field=model.get_importados();if(field.has_value())model.set_importados(field.value());}
{auto field=model.get_descartados();if(field.has_value())model.set_descartados(field.value());}
{auto field=model.get_erro();if(field.has_value())model.set_erro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportNotificationData getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportNotificationData";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportNotificationDataImportadosItem::from_json("{\"arquivo\":\"synthetic\",\"uuid\":\"00000000-0000-4000-8000-000000000001\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_arquivo();if(field.has_value())model.set_arquivo(field.value());}
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportNotificationDataImportadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportNotificationDataImportadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorImportNotificationDataDescartadosItem::from_json("{\"arquivo\":\"synthetic\",\"motivo\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_arquivo();if(field.has_value())model.set_arquivo(field.value());}
{auto field=model.get_motivo();if(field.has_value())model.set_motivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorImportNotificationDataDescartadosItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorImportNotificationDataDescartadosItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification1::from_json("{\"tipo_notificacao\":1,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"modelo\":\"nfe\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_notificacao();if(field.has_value())model.set_tipo_notificacao(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification1";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification2::from_json("{\"tipo_notificacao\":2,\"data\":{\"uuid\":\"synthetic\",\"documento_uuid\":\"synthetic\",\"registrado_em\":\"synthetic\",\"tipo_evento\":0,\"resumo\":false}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_notificacao();if(field.has_value())model.set_tipo_notificacao(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_documento();if(field.has_value())model.set_documento(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification2 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification2";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification3::from_json("{\"tipo_notificacao\":3,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_notificacao();if(field.has_value())model.set_tipo_notificacao(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification3 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification3";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification4::from_json("{\"tipo_notificacao\":4,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"erro\":\"synthetic\",\"data_erro\":\"synthetic\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_notificacao();if(field.has_value())model.set_tipo_notificacao(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification4 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification4";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification4Data::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"erro\":\"synthetic\",\"data_erro\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_tipo_download();if(field.has_value())model.set_tipo_download(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_erro();if(field.has_value())model.set_erro(field.value());}
{auto field=model.get_data_erro();if(field.has_value())model.set_data_erro(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification4Data getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification4Data";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification5::from_json("{\"tipo_notificacao\":5,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"processando\",\"empresa_uuid\":null,\"processado\":0,\"total\":null,\"importados\":[],\"descartados\":[],\"erro\":null}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_tipo_notificacao();if(field.has_value())model.set_tipo_notificacao(field.value());}
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification5 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification5";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification::from_json("{\"tipo_notificacao\":3,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorNotification getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorNotification";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorDeleteCompanyMunicipalityResponse::from_json("{\"msg\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_management::MonitorDeleteCompanyMunicipalityResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_management::MonitorDeleteCompanyMunicipalityResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCreateCompanyRequest::from_json("{\"cnpj\":\"00000000000000\",\"razao_social\":\"Synthetic company\",\"cep\":\"01001000\",\"certificado_base64\":\"PHRlc3QvPg==\",\"certificado_senha\":\"synthetic-placeholder\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_certificado_base64();if(field.has_value())model.set_certificado_base64(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_modelos_download();if(field.has_value())model.set_modelos_download(field.value());}
{auto field=model.get_categorias_download();if(field.has_value())model.set_categorias_download(field.value());}
{auto field=model.get_ambiente_download();if(field.has_value())model.set_ambiente_download(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_dfe_retroativas();if(field.has_value())model.set_dfe_retroativas(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-059 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-059";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCreateCompanyRequest::from_json("{\"razao_social\":\"Synthetic company\",\"cep\":\"01001000\",\"certificado_base64\":\"PHRlc3QvPg==\",\"certificado_senha\":\"synthetic-placeholder\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-060 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-060";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorUpdateCompanyRequest::from_json("{\"certificado_senha\":\"synthetic-placeholder\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-061 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-061";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorUpdateCompanyRequest::from_json("{\"modelos_download\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cnpj();if(field.has_value())model.set_cnpj(field.value());}
{auto field=model.get_cpf();if(field.has_value())model.set_cpf(field.value());}
{auto field=model.get_razao_social();if(field.has_value())model.set_razao_social(field.value());}
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_certificado_base64();if(field.has_value())model.set_certificado_base64(field.value());}
{auto field=model.get_certificado_senha();if(field.has_value())model.set_certificado_senha(field.value());}
{auto field=model.get_modelos_download();if(field.has_value())model.set_modelos_download(field.value());}
{auto field=model.get_categorias_download();if(field.has_value())model.set_categorias_download(field.value());}
{auto field=model.get_ambiente_download();if(field.has_value())model.set_ambiente_download(field.value());}
{auto field=model.get_url_notificacao();if(field.has_value())model.set_url_notificacao(field.value());}
{auto field=model.get_dfe_retroativas();if(field.has_value())model.set_dfe_retroativas(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-062 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-062";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCreateMunicipalityRequest::from_json("{\"codigo_ibge\":\"3550308\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_senha();if(field.has_value())model.set_senha(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
{auto field=model.get_tipo_download();if(field.has_value())model.set_tipo_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-063 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-063";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorCreateMunicipalityRequest::from_json("{\"codigo_ibge\":3550308}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-064 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-064";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification::from_json("{\"tipo_notificacao\":3,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000000\"}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-065 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-065";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorNotification::from_json("{\"tipo_notificacao\":5,\"data\":{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"status\":\"processando\",\"empresa_uuid\":null,\"processado\":0,\"total\":null,\"importados\":[],\"descartados\":[],\"erro\":null}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-066 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-066";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAddress::from_json("{\"codigo_municipio\":3550308,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-management-integer getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-monitor-management-integer";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAddress::from_json("{\"codigo_municipio\":\"3550308\",\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-management-string getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-monitor-management-string";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAddress::from_json("{\"codigo_municipio\":3550308.5,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-management-fractional getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:monitor-address-wire-monitor-management-fractional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_management::MonitorAddress::from_json("{\"codigo_municipio\":true,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-management-boolean getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:monitor-address-wire-monitor-management-boolean";return -1;}++checked;}
return checked;}
