#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_monitor_reads(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
{auto field=model.get_success();if(field.has_value())model.set_success(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorPagination::from_json("{\"current_page\":1,\"last_page\":1,\"per_page\":50,\"total\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_current_page();if(field.has_value())model.set_current_page(field.value());}
{auto field=model.get_last_page();if(field.has_value())model.set_last_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_total();if(field.has_value())model.set_total(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorPagination getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorPagination";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAddress::from_json("{\"codigo_municipio\":3550308,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorAddress getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorAddress";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompany::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelos_download\":[\"nfse\"],\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorCompany getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorCompany";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorMunicipalityRegistration::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"tipo_download\":1,\"municipio\":\"synthetic\",\"uf\":\"synthetic\",\"codigo_ibge\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_uuid();if(field.has_value())model.set_uuid(field.value());}
{auto field=model.get_tipo_download();if(field.has_value())model.set_tipo_download(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
{auto field=model.get_login();if(field.has_value())model.set_login(field.value());}
{auto field=model.get_im();if(field.has_value())model.set_im(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorMunicipalityRegistration getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorMunicipalityRegistration";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAvailableMunicipality::from_json("{\"nativo\":false,\"im\":false,\"certificado\":false,\"login_senha\":false,\"cadastro_prefeitura\":false,\"domicilio_fiscal_municipio\":false,\"multiplos_servicos\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorAvailableMunicipality getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorAvailableMunicipality";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorDownloadStatistics::from_json("{\"total_downloads\":0,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorDownloadStatistics getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorDownloadStatistics";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorDownloadStatisticsEmpresasItem::from_json("{\"empresa_uuid\":\"00000000-0000-4000-8000-000000000001\",\"total_downloads\":0}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_empresa_uuid();if(field.has_value())model.set_empresa_uuid(field.value());}
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorDownloadStatisticsEmpresasItem getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorDownloadStatisticsEmpresasItem";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompanyPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":50,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorCompanyPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorCompanyPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorMunicipalityPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":1,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorMunicipalityPage getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorMunicipalityPage";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAvailableMunicipalities::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorAvailableMunicipalities getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorAvailableMunicipalities";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorListCompaniesQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_pesquisa();if(field.has_value())model.set_pesquisa(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorListCompaniesQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorListCompaniesQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorListCompanyMunicipalitiesQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_page();if(field.has_value())model.set_page(field.value());}
{auto field=model.get_per_page();if(field.has_value())model.set_per_page(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_uf();if(field.has_value())model.set_uf(field.value());}
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorListCompanyMunicipalitiesQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorListCompanyMunicipalitiesQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorListAvailableMunicipalitiesResponse::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorListAvailableMunicipalitiesResponse getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorListAvailableMunicipalitiesResponse";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorListAvailableMunicipalitiesQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_codigo_ibge();if(field.has_value())model.set_codigo_ibge(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorListAvailableMunicipalitiesQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorListAvailableMunicipalitiesQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorGetDownloadStatisticsQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_ano();if(field.has_value())model.set_ano(field.value());}
{auto field=model.get_mes();if(field.has_value())model.set_mes(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_monitor_reads::MonitorGetDownloadStatisticsQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_monitor_reads::MonitorGetDownloadStatisticsQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompanyPage::from_json("{\"data\":[],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":50,\"total\":0}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-051 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-051";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompanyPage::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-052 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-052";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompany::from_json("{\"uuid\":\"00000000-0000-4000-8000-000000000000\",\"modelos_download\":[\"nfse\"],\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-053 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-053";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompany::from_json("{\"status\":1}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-054 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-054";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAvailableMunicipality::from_json("{\"nativo\":false,\"im\":false,\"certificado\":false,\"login_senha\":false,\"cadastro_prefeitura\":false,\"domicilio_fiscal_municipio\":false,\"multiplos_servicos\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
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
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-055 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-055";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAvailableMunicipality::from_json("{\"nativo\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-056 getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:API2-SCHEMA-056";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAvailableMunicipalities::from_json("{\"data\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-057 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-057";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorDownloadStatistics::from_json("{\"total_downloads\":0,\"empresas\":[]}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_total_downloads();if(field.has_value())model.set_total_downloads(field.value());}
{auto field=model.get_empresas();if(field.has_value())model.set_empresas(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:API2-SCHEMA-058 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:API2-SCHEMA-058";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAddress::from_json("{\"codigo_municipio\":3550308,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-reads-integer getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-monitor-reads-integer";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAddress::from_json("{\"codigo_municipio\":\"3550308\",\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cep();if(field.has_value())model.set_cep(field.value());}
{auto field=model.get_municipio();if(field.has_value())model.set_municipio(field.value());}
{auto field=model.get_estado();if(field.has_value())model.set_estado(field.value());}
{auto field=model.get_codigo_municipio();if(field.has_value())model.set_codigo_municipio(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-reads-string getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-monitor-reads-string";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAddress::from_json("{\"codigo_municipio\":3550308.5,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-reads-fractional getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:monitor-address-wire-monitor-reads-fractional";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorAddress::from_json("{\"codigo_municipio\":true,\"cep\":\"00000-000\",\"future\":false}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-monitor-reads-boolean getter/setter failed";return -1;}}if(accepted!=false){std::cerr<<"api2:monitor-address-wire-monitor-reads-boolean";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_monitor_reads::MonitorCompanyPage::from_json("{\"data\":[{\"uuid\":\"00000000-0000-4000-8000-000000000001\",\"endereco\":{\"codigo_municipio\":3550308}},{\"uuid\":\"00000000-0000-4000-8000-000000000002\",\"endereco\":{\"codigo_municipio\":\"3550308\"}}],\"meta\":{\"current_page\":1,\"last_page\":1,\"per_page\":10,\"total\":2}}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_data();if(field.has_value())model.set_data(field.value());}
{auto field=model.get_meta();if(field.has_value())model.set_meta(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2:monitor-address-wire-company-page-mixed-representations getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2:monitor-address-wire-company-page-mixed-representations";return -1;}++checked;}
return checked;}
