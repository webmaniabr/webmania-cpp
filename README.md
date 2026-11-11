<p align="center"><img src=".github/assets/webmania-logo.png" alt="Webmania" width="320"></p>

# Webmania SDK para C++

Através do emissor fiscal da Webmania®, você conta com a emissão e o arquivamento dos seus documentos fiscais, cálculo automático de impostos, geração do DANFE para impressão e envio automático de e-mails para os clientes. Com este SDK, o seu sistema em C++ se integra à nossa REST API para emitir, consultar e cancelar NF-e, NFC-e, NFS-e, CT-e, MDF-e, NFCom e DC-e, baixar XML e PDF dos documentos e usar o Monitor Fiscal.

- Emissor de Nota Fiscal Webmania®: [Saiba mais](https://webmania.com.br/nota-fiscal-eletronica/)
- Documentação da REST API: [Visualizar](https://webmania.com.br/docs/)
- Índice da documentação para assistentes de IA: [llms.txt](https://webmania.com.br/docs/llms.txt)

## Requisitos

- Contrate um dos planos de Nota Fiscal Eletrônica da Webmania®: [Assine agora mesmo](https://webmania.com.br/nota-fiscal-eletronica/#plans-section).
- Compilador C++17 e CMake 3.16 ou superior.
- Linux arm64 com glibc 2.36 ou superior.
- O SDK para C instalado a partir do clone de [webmania-c](https://github.com/webmaniabr/webmania-c) (seção Instalação do README dele); os digests esperados da biblioteca, do worker e dos metadados estão em [dependency-lock.json](dependency-lock.json).
- Credenciais de acesso da sua empresa, disponíveis no [Painel de Controle](https://webmania.com.br/painel/).

## Instalação

O SDK é distribuído pelo repositório [github.com/webmaniabr/webmania-cpp](https://github.com/webmaniabr/webmania-cpp) e ainda não está publicado em registro de pacotes. Com o SDK para C instalado em `/caminho/c`, clone o repositório e instale a facade C++:

```sh
git clone https://github.com/webmaniabr/webmania-cpp.git
cd webmania-cpp
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/caminho/c -DCMAKE_INSTALL_PREFIX=/caminho/cpp
cmake --build build --parallel 1
cmake --install build
```

Na sua aplicação, use este `CMakeLists.txt`:

```cmake
cmake_minimum_required(VERSION 3.16)
project(WebmaniaConsumer LANGUAGES CXX)
find_package(WebmaniaCpp CONFIG REQUIRED)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE Webmania::cpp)
```

E compile informando os dois prefixos:

```sh
cmake -S . -B app-build -DCMAKE_PREFIX_PATH="/caminho/cpp;/caminho/c"
cmake --build app-build --parallel 1
```

## Credenciais

Cada serviço usa a sua própria credencial. Guarde-as em variáveis de ambiente (ou em um cofre de segredos) no servidor e nunca as escreva no código-fonte:

| Variável de ambiente | Uso |
|---|---|
| `WEBMANIA_CONSUMER_KEY`, `WEBMANIA_CONSUMER_SECRET`, `WEBMANIA_ACCESS_TOKEN`, `WEBMANIA_ACCESS_TOKEN_SECRET` | NF-e e NFC-e (`webmania::NfeClient`) e arquivos da NF-e (`webmania::NfeFilesClient`) |
| `WEBMANIA_ISSUER_TOKEN` | NFS-e, CT-e, MDF-e, NFCom e DC-e (`webmania::EmitterClient`) e seus arquivos (`webmania::EmitterFilesClient`) |
| `WEBMANIA_MONITOR_TOKEN` | Monitor Fiscal (`webmania::MonitorClient`) |

```cpp
#include <webmania_cpp/webmania.hpp>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

webmania::CompanyCredentials credenciais(
    std::getenv("WEBMANIA_CONSUMER_KEY"), std::getenv("WEBMANIA_CONSUMER_SECRET"),
    std::getenv("WEBMANIA_ACCESS_TOKEN"), std::getenv("WEBMANIA_ACCESS_TOKEN_SECRET"));
webmania::IssuerToken token_emissor(std::getenv("WEBMANIA_ISSUER_TOKEN"));

webmania::Config config;
config.worker_path(std::getenv("WEBMANIA_WORKER_PATH"));  // libexec/webmania-native-worker do prefixo C instalado

webmania::NfeClient nfe(credenciais, config);              // NF-e e NFC-e
webmania::EmitterClient emissor(token_emissor, config);    // NFS-e, CT-e, MDF-e, NFCom e DC-e

// Os campos de resposta são opcionais: este auxiliar devolve o texto ou vazio.
auto texto = [](const webmania::Field<std::string>& campo) { return campo.has_value() ? campo.value() : std::string(); };
```

Os trechos seguintes ficam dentro de uma função da sua aplicação, depois desta configuração. As falhas são lançadas como `webmania::Error` (veja [Tratamento de erros](#tratamento-de-erros)).

## Utilização

Os exemplos abaixo usam o ambiente de **homologação** (`ambiente` 2), em que os documentos não têm validade fiscal. Para emitir em produção, envie `ambiente` 1. Os pedidos são montados a partir de JSON; informe valores decimais como texto (`"44.90"`) para manter a precisão.

### Status do SEFAZ e certificado A1

```cpp
auto sefaz = nfe.get_sefaz_status();
std::cout << texto(sefaz.get_status()) << '\n';  // online ou offline

auto certificado = nfe.get_certificate_validity();
auto dias = certificado.get_expiration();      // dias restantes até o vencimento do certificado A1
if (dias.has_value()) std::cout << dias.value() << " dias\n";
```

### Emitir NF-e

Para emitir uma NF-e, monte o pedido a partir do JSON da nota e use `issue_document`. O mesmo método emite NFC-e com `"modelo": 2`.

```cpp
using namespace webmania::api1_fiscal;

auto pedido = NfeIssueRequest::from_json(R"({
  "operacao": 1,
  "natureza_operacao": "Venda de produção do estabelecimento",
  "modelo": 1,
  "finalidade": 1,
  "ambiente": 2,
  "cliente": {
    "cpf": "000.000.000-00", "nome_completo": "Nome do Cliente",
    "endereco": "Av. Brg. Faria Lima", "numero": "1000", "bairro": "Itaim Bibi",
    "cidade": "São Paulo", "uf": "SP", "cep": "00000-000", "email": "nome@email.com"
  },
  "produtos": [{
    "nome": "Nome do produto", "codigo": "nome-do-produto", "ncm": "6109.10.00",
    "quantidade": "1", "unidade": "UN", "origem": 0,
    "subtotal": "44.90", "total": "44.90", "classe_imposto": "REF1000"
  }],
  "pedido": {"presenca": 2, "modalidade_frete": 9, "pagamento": 0, "forma_pagamento": "01", "total": "44.90"}
})", config);

auto nota = nfe.issue_document(pedido).get_NfeDocument(config);
std::string uuid = texto(nota.get_uuid());          // identificador único da nota fiscal
std::cout << texto(nota.get_status()) << '\n';      // aprovado, reprovado, processamento...
std::cout << texto(nota.get_chave()) << '\n';       // chave de acesso
std::cout << texto(nota.get_xml()) << '\n';         // URL do XML
std::cout << texto(nota.get_danfe()) << '\n';       // URL do DANFE (PDF)
std::cout << texto(nota.get_motivo()) << '\n';      // retorno do SEFAZ
```

Somente o status `aprovado` indica uma nota autorizada. Quando o retorno for `processamento`, consulte a nota alguns segundos depois.

### Consultar NF-e

```cpp
auto consulta = nfe.get_document(NfeGetDocumentQuery::from_json(R"({"uuid": ")" + uuid + R"("})", config));
std::cout << texto(consulta.get_NfeDocument(config).get_status()) << '\n';
```

A consulta também aceita a chave de acesso (`{"chave": "..."}`).

### Cancelar NF-e

```cpp
auto cancelamento = nfe.cancel_document(NfeCancelRequest::from_json(
    R"({"uuid": ")" + uuid + R"(", "motivo": "Cancelamento por erro no pedido."})", config));  // motivo: mínimo de 15 caracteres
std::cout << texto(cancelamento.get_status()) << '\n';
```

### Baixar o DANFE e o XML

O cliente de arquivos usa uma configuração própria, que confia na origem pública dos arquivos da NF-e:

```cpp
webmania::Config config_arquivos;
config_arquivos.worker_path(std::getenv("WEBMANIA_WORKER_PATH"));
config_arquivos.trust_file_origin("https://nfe.webmania.com.br");
webmania::NfeFilesClient arquivos(credenciais, config_arquivos);
auto acesso = webmania::FileAuth::company();

auto danfe = arquivos.download_danfe(uuid, acesso).bytes();
std::ofstream("danfe.pdf", std::ios::binary).write(reinterpret_cast<const char*>(danfe.data()), danfe.size());

auto xml = arquivos.download_xml(uuid, webmania::api1_files::NfeDownloadXmlQuery::from_json("{}", config_arquivos), acesso).bytes();
std::ofstream("nfe.xml", std::ios::binary).write(reinterpret_cast<const char*>(xml.data()), xml.size());
```

### Emitir, consultar e cancelar NFS-e

A NFS-e é emitida a partir de um ou mais RPS com o método `issue_nfse` do `webmania::EmitterClient`:

```cpp
using namespace webmania::api2_nfse_issuance;

auto nfse = emissor.issue_nfse(EmitterIssueNfsePayload::from_json(R"({
  "ambiente": 2,
  "rps": [{
    "servico": {
      "valor_servicos": "15.00",
      "discriminacao": "Prestação de serviço referente ao mês 10/2026",
      "classe_imposto": "REF000000"
    },
    "tomador": {"cpf": "000.000.000-00", "nome_completo": "Nome do tomador"}
  }]
})", config));
std::string uuid_nfse = texto(nfse.get_uuid());
std::cout << texto(nfse.get_status()) << '\n';

auto consulta_nfse = emissor.get_nfse(uuid_nfse);
std::cout << texto(consulta_nfse.get_status()) << ' ' << texto(consulta_nfse.get_numero()) << '\n';

auto cancelada = emissor.cancel_nfse(EmitterCancelNfsePayload::from_json(
    R"({"uuid": ")" + uuid_nfse + R"(", "motivo": "1", "justificativa": "Serviço cancelado a pedido do tomador."})",
    config));  // motivo: código do motivo (veja a documentação da NFS-e); justificativa: mínimo de 15 caracteres
std::cout << texto(cancelada.get_status()) << '\n';
```

### Tratamento de erros

Toda falha lança `webmania::Error`:

```cpp
try {
  auto emitida = nfe.issue_document(pedido);
} catch (const webmania::Error& erro) {
  std::cerr << erro.kind() << '\n';    // validation (dados recusados antes do envio), business (recusa da API ou do SEFAZ), http, timeout...
  std::cerr << erro.status() << '\n';  // status HTTP, quando houver
  std::cerr << erro.what() << '\n';    // mensagem, com dados sensíveis mascarados
  if (erro.outcome_unknown()) {
    // A requisição pode ter sido processada: consulte a nota antes de emitir de novo.
  }
}
```

O SDK não repete requisições automaticamente. Se uma emissão ou um cancelamento terminar com `outcome_unknown()` verdadeiro, consulte o documento antes de tentar novamente, para não emitir em duplicidade.

## Métodos disponíveis

**NF-e e NFC-e** — `webmania::NfeClient`

- **issue_document**: Emissão de NF-e ou NFC-e junto ao SEFAZ.
- **get_document**: Consulta da nota fiscal pelo UUID, pela chave de acesso ou pelo ID do pedido.
- **cancel_document**: Cancelamento de NF-e ou NFC-e.
- **create_correction**: Carta de correção.
- **void_numbering**: Inutilização de sequência de numeração.
- **issue_return**: Emissão de NF-e de devolução.
- **issue_complement**: Emissão de NF-e complementar.
- **issue_adjustment**: Emissão de NF-e de ajuste.
- **create_manifestation**: Manifestação do destinatário.
- **create_payment_event** / **cancel_payment_event**: Evento de conciliação financeira (ECONF) e o seu cancelamento.
- **create_ibs_cbs_event** / **cancel_ibs_cbs_event**: Eventos de IBS/CBS e o seu cancelamento.
- **list_tax_classes** / **save_tax_classes** / **delete_tax_classes**: Classes de imposto.
- **create_or_poll_report**: Relatórios fiscais.
- **update_company**: Atualização dos dados da empresa emissora.
- **get_sefaz_status**: Verifica se o SEFAZ está online ou offline.
- **get_certificate_validity**: Verifica quantos dias faltam para o certificado A1 expirar.

**NFS-e** — `webmania::EmitterClient`

- **issue_nfse**: Emissão de NFS-e a partir de RPS.
- **get_nfse**: Consulta da NFS-e.
- **cancel_nfse**: Cancelamento da NFS-e.
- **replace_nfse**: Substituição de NFS-e.
- **manifest_nfse**: Manifestação sobre NFS-e nacional.
- **get_nfse_provider_status**: Recursos do provedor de NFS-e do município da empresa.

**CT-e e CT-e OS** — `webmania::EmitterClient`

- **issue_cte** / **issue_simplified_cte**: Emissão de CT-e, CT-e OS e CT-e simplificado.
- **get_cte**: Consulta do CT-e.
- **cancel_cte**: Cancelamento do CT-e.
- **correct_cte**: Carta de correção do CT-e.
- **confirm_cte_delivery** / **cancel_cte_delivery**: Comprovante de entrega e o seu cancelamento.
- **link_cte_payment** / **cancel_cte_payment_link** / **get_cte_payment_events**: Eventos de pagamento do CT-e.

**MDF-e** — `webmania::EmitterClient`

- **issue_mdfe**: Emissão do MDF-e.
- **get_mdfe**: Consulta do MDF-e pela chave de acesso.
- **close_mdfe**: Encerramento do MDF-e.
- **cancel_mdfe**: Cancelamento do MDF-e.
- **add_mdfe_conductor**: Inclusão de condutor.

**NFCom e DC-e** — `webmania::EmitterClient`

- **issue_nfcom** / **get_nfcom** / **cancel_nfcom**: Emissão, consulta e cancelamento da NFCom.
- **get_nfcom_payment_events**: Eventos de pagamento da NFCom.
- **get_nfcom_service_status**: Disponibilidade do serviço da NFCom no SEFAZ.
- **issue_dce** / **get_dce** / **cancel_dce**: Emissão, consulta e cancelamento da DC-e.

**Arquivos (XML e PDF)** — `webmania::NfeFilesClient` e `webmania::EmitterFilesClient`

- **download_danfe** / **download_simple_danfe** / **download_label_danfe**: DANFE completo, simplificado e etiqueta.
- **download_xml** / **download_cancellation_xml**: XML da NF-e e do cancelamento.
- **download_correction_pdf** / **download_correction_xml**: PDF e XML da carta de correção.
- **get_nfse_xml** / **get_nfse_pdf** / **get_nfse_rps_pdf**: XML e PDF da NFS-e e PDF do RPS.
- **get_cte_xml** / **get_cte_pdf** / **get_mdfe_xml** / **get_mdfe_pdf** / **get_nfcom_xml** / **get_nfcom_pdf** / **get_dce_xml** / **get_dce_pdf**: XML e PDF de CT-e, MDF-e, NFCom e DC-e.

**Monitor Fiscal** — `webmania::MonitorClient`

- **search_documents** / **get_document** / **list_document_events**: Busca e consulta de documentos recebidos e do histórico de eventos.
- **manifest_document**: Manifestação do destinatário.
- **import_document** / **get_import_status**: Importação por chave de acesso, XML ou ZIP.
- **list_companies** / **create_company** / **update_company**: Empresas monitoradas.

**Gerencial B2B** — `webmania::ResellerClient`

- **create_companies** / **list_companies** / **get_processed_requests**: Cadastro de empresas, listagem e contagem de notas processadas por empresa.

A lista completa, com todos os métodos do Monitor Fiscal e dos arquivos, está em [docs/OPERATIONS.md](docs/OPERATIONS.md).

## Exemplo completo em homologação

A pasta [examples/homologacao](examples/homologacao) traz um programa que emite, consulta, baixa os arquivos e cancela uma NF-e e uma NFS-e em homologação, usando as credenciais das variáveis de ambiente. Por segurança, ele só envia requisições quando `WEBMANIA_LIVE=1` está definido e `WEBMANIA_LIVE_ALLOWED_HOSTS` lista os hosts da API. Para rodar só as consultas (status do SEFAZ, certificado e provedor de NFS-e):

```sh
WEBMANIA_LIVE=1 WEBMANIA_LIVE_SCOPE=readonly WEBMANIA_LIVE_ALLOWED_HOSTS=webmania.com.br,nfe.webmania.com.br,api.webmania.com.br sh examples/homologacao/run.sh
```

As variáveis aceitas e o formato da saída estão em [examples/homologacao/README.md](examples/homologacao/README.md).

## Documentação

- Documentação da REST API: [NF-e / NFC-e](https://webmania.com.br/docs/rest-api-nfe/) · [NFS-e](https://webmania.com.br/docs/rest-api-nfse/) · [CT-e](https://webmania.com.br/docs/rest-api-cte/) · [MDF-e](https://webmania.com.br/docs/rest-api-mdfe/) · [NFCom](https://webmania.com.br/docs/rest-api-nfcom/) · [DC-e](https://webmania.com.br/docs/rest-api-dce/) · [Monitor Fiscal](https://webmania.com.br/docs/rest-api-monitor-fiscal/) · [Gerencial B2B](https://webmania.com.br/docs/rest-api-gerencial-b2b/)
- Contratos OpenAPI: [API 2.0](https://api.webmania.com.br/docs/openapi) e [NF-e](https://webmania.com.br/docs/rest-api-nfe/?format=openapi)
- Detalhes técnicos do SDK (URL base, arquivos, relatórios, limites): [docs/INTEGRATION.md](docs/INTEGRATION.md)
- Lista completa de métodos: [docs/OPERATIONS.md](docs/OPERATIONS.md)
- Desenvolvimento e testes do SDK: [docs/TESTING.md](docs/TESTING.md)
- Histórico de versões: [CHANGELOG.md](CHANGELOG.md)

## Suporte

Qualquer dúvida entre em contato na nossa [Central de Ajuda](https://ajuda.webmania.com.br) ou acesse o [Painel de Controle](https://webmania.com.br/painel/) para conversar em tempo real no Chat ou Abrir um chamado.

## Licença

Licença proprietária Webmania®: veja [LICENSE](LICENSE) e os [Termos de Uso](https://webmania.com.br/termos-de-uso/). As dependências de terceiros mantêm as suas próprias licenças.
