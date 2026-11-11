# Detalhes técnicos de integração

Este documento reúne os detalhes técnicos do SDK para C++ que complementam o [README](../README.md): autenticação, URL base, limites de transporte, arquivos, relatórios e o tratamento do resultado fiscal. O texto é o mesmo que estava no README até esta versão.

## Escopo e disponibilidade

Integração de **Emissor Fiscal e Monitor Fiscal** em aplicações de servidor. O Emissor abrange NF-e/NFC-e na API1 e NFS-e, CT-e/CT-e OS, MDF-e, NFCom e DC-e na API2, com arquivos, eventos e as três operações gerenciais B2B públicas da API1. O Monitor mantém apenas as famílias de documentos e capacidades do seu contrato documentado.

Disponível no repositório público [github.com/webmaniabr/webmania-cpp](https://github.com/webmaniabr/webmania-cpp), com instalação a partir do clone (veja a seção Instalação). Ainda não há publicação em registro de pacotes; os nomes e versões abaixo identificam os pacotes gerados a partir desta fonte. Regras do provedor, aceitação fiscal real e plataformas adicionais permanecem com limitações explícitas.

## Visão geral para desenvolvedores

| Item | Detalhe |
|---|---|
| Status | Disponível no GitHub: versão `0.1.0-alpha.6` (facade C++ sobre o SDK C `0.1.0-alpha.7`), instalada a partir do clone do repositório; ainda sem publicação em registro de pacotes |
| Runtime | C++ com CMake (`find_package(WebmaniaCpp)`, alvo `Webmania::cpp`); perfil medido Linux arm64/glibc 2.36; requer o pacote C exato de [dependency-lock.json](../dependency-lock.json) |
| Clientes (`<webmania_cpp/webmania.hpp>`) | `webmania::NfeClient` (NF-e/NFC-e API 1.0), `NfeFilesClient`, `ResellerClient` (gerencial B2B API 1.0), `EmitterClient` (emissor API 2.0), `EmitterFilesClient`, `MonitorClient` (Monitor Fiscal) |
| Erros | `webmania::Error` (deriva de `std::exception`), com `kind()`, `status()` e `outcome_unknown()` |
| Contrato | Herdado do SDK C (contrato fixado por conteúdo, `contract_digest` `371a499f74012bb6b41f23642869dee4954e8394dcba7642edc701aedb3dd59e`, 14 módulos), cujos artefatos estão fixados por digest em [dependency-lock.json](../dependency-lock.json) |

### Autenticação

- **NF-e/NFC-e (API 1.0)** — `webmania::CompanyCredentials(consumer_key, consumer_secret, access_token, access_token_secret)` é enviada pelo SDK C nos cabeçalhos `X-Consumer-Key`, `X-Consumer-Secret`, `X-Access-Token` e `X-Access-Token-Secret`. `ResellerClient` usa credenciais de revenda próprias.
- **API 2.0** — `EmitterClient` recebe um `IssuerToken` e `MonitorClient` um token do Monitor; ambos são enviados como `Authorization: Bearer <token>` e são credenciais distintas.

O exemplo abaixo lê as credenciais com `std::getenv` (`WEBMANIA_CONSUMER_KEY`, `WEBMANIA_CONSUMER_SECRET`, `WEBMANIA_ACCESS_TOKEN`, `WEBMANIA_ACCESS_TOKEN_SECRET`) e o worker de `WEBMANIA_WORKER_PATH`.

## Requisitos

Pacote C++ **0.1.0-alpha.6**, sobre o C SDK **0.1.0-alpha.7**. Os digests de fonte, binário, metadados e worker do pacote C estão em [dependency-lock.json](../dependency-lock.json). Perfil atual: Linux arm64/glibc 2.36. Instale também o worker e os avisos de terceiros do pacote C; não troque sua versão isoladamente.

## Instalação

Instale primeiro o SDK C `0.1.0-alpha.7` a partir do clone de [webmania-c](https://github.com/webmaniabr/webmania-c) (seção Instalação do README dele); os digests esperados da biblioteca, do worker e dos metadados estão em dependency-lock.json. A facade é então instalada a partir do clone deste repositório:

```sh
git clone https://github.com/webmaniabr/webmania-cpp.git
cd webmania-cpp
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/caminho/c -DCMAKE_INSTALL_PREFIX=/caminho/cpp
cmake --build build --parallel 1
cmake --install build
```

O prefixo do SDK C (`/caminho/c`) fornece os headers, a biblioteca, o worker e seus avisos de terceiros. Ainda não há pacotes binários publicados.

Em uma pasta de aplicação, salve o exemplo abaixo como `main.cpp` e use este `CMakeLists.txt`:

```cmake
cmake_minimum_required(VERSION 3.16)
project(WebmaniaConsumer LANGUAGES CXX)
find_package(WebmaniaCpp CONFIG REQUIRED)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE Webmania::cpp)
```

Forneça os dois prefixos e construa a aplicação:

```sh
cmake -S . -B app-build -DCMAKE_PREFIX_PATH="/caminho/cpp;/caminho/c"
cmake --build app-build --parallel 1
```

O consumidor instalado não precisa de gerador, Rust ou fonte do SDK.

## Primeira consulta

Configure somente a credencial do serviço escolhido, por instância, a partir de ambiente privado ou cofre de segredos. O exemplo não emite nem cancela documentos. Execute consultas apenas com conta e ambiente autorizados; uma origem de fixture controlada deve ser configurada explicitamente pela API do cliente.

```cpp
#include <webmania_cpp/webmania.hpp>
#include <cstdlib>
#include <stdexcept>
#include <iostream>
const char* secret(const char* name) {
  const auto* value = std::getenv(name);
  if (!value) throw std::runtime_error("Configure as credenciais.");
  return value;
}
int main() {
  try {
    webmania::Config config;
    config.worker_path(secret("WEBMANIA_WORKER_PATH"));
    if (const auto* base = std::getenv("WEBMANIA_BASE_URL")) config.base_url(base);
    webmania::CompanyCredentials credentials(
        secret("WEBMANIA_CONSUMER_KEY"), secret("WEBMANIA_CONSUMER_SECRET"),
        secret("WEBMANIA_ACCESS_TOKEN"), secret("WEBMANIA_ACCESS_TOKEN_SECRET"));
    webmania::NfeClient client(credentials, config);
    auto result = client.get_sefaz_status();
    const auto status = result.get_status();
    if (status.has_value()) std::cout << status.value() << '\n';
    return 0;
  } catch (const webmania::Error& error) {
    std::cerr << error.kind() << " (" << error.status() << ")\n";
    return error.outcome_unknown() ? 3 : 2;
  } catch (const std::exception&) {
    std::cerr << "Falha local de configuracao ou validacao.\n";
    return 1;
  }
}
```

`WEBMANIA_WORKER_PATH` deve apontar para `libexec/webmania-native-worker` do prefixo C instalado. `WEBMANIA_BASE_URL` é opcional para configurar uma origem documentada ou fixture controlada; não troque a origem com credenciais reais sem autorização. As quatro variáveis de credencial pertencem à empresa API1.

A construção do cliente não comprova habilitação da conta. Respostas de sucesso e conversões explícitas para JSON podem conter dados fiscais, credenciais novas ou URLs privadas. Exponha apenas os campos necessários à aplicação.

## Ambiente e URL base

Sem configuração, cada cliente usa a origem pública do seu serviço: `NfeClient` em `https://webmania.com.br/api`, `ResellerClient` em `https://webmania.com.br`, `NfeFilesClient` em `https://nfe.webmania.com.br` e `EmitterClient`, `EmitterFilesClient` e `MonitorClient` em `https://api.webmania.com.br`. Para outro ambiente autorizado, use um `webmania::Config` por serviço com `base_url(...)` (origem HTTPS explícita e prefixo opcional); clientes de arquivo também exigem `trust_file_origin(...)` com a mesma origem. Cada cliente envia requisições somente para a origem e o prefixo configurados, e uma origem inválida lança `webmania::Error` de configuração antes de DNS ou conexão. O exemplo de homologação lê `WEBMANIA_API1_BASE_URL`, `WEBMANIA_FILES_BASE_URL` e `WEBMANIA_API2_BASE_URL`.

## Integração e limites

Modelos, arrays, credenciais, configuração, arquivos e clientes usam RAII e são move-only. `Field<T>` distingue omissão, null e valor. Number preserva lexema exato. Getters retornam cópias próprias; native_handle empresta o ponteiro e não transfere propriedade. Objetos movidos não podem ser reutilizados.

`validated_clone(config)`, from_json e getters de união podem executar validação local no worker, sem chamada fiscal. Strings e extensões usam entradas de comprimento explícito quando disponíveis, preservando NUL. Entradas C terminadas em NUL rejeitam NUL embutido.

Clientes copiam credenciais/configuração. client.share e cancel.share criam facades independentes sobre a mesma propriedade; cada chamada retém cliente e token durante sua execução. Não invoque/destrua a mesma facade concorrentemente, nem altere o modelo usado por uma chamada. A destruição RAII libera os recursos; uma facade compartilhada não cancela por si a chamada de outra.

FileOrRedirect::result_kind distingue file, redirect e pending. pending devolve um modelo próprio NfsePdfPending; acessar a alternativa errada lança logic_error. HTML mantém bytes opacos com kind Html. FileAuth é obrigatório; Error preserva kind, status, outcome_unknown e acessos deliberados a recuperação/Location. what é sanitizado.

`bounded_poll<T>` e `bounded_pages<T>` recebem callbacks de leitura, exigem limites finitos e param no primeiro erro. O prazo agregado é observado entre chamadas; configure também o timeout do cliente e passe o cancelamento fornecido para limitar cada troca. Não há retry automático.

O vínculo fiscal contextual de alguns nomes JSON NFCom ainda depende de confirmação; o mapeamento de wire não encerra essa condição do contrato.

## Credenciais e resultado fiscal

Credenciais da empresa API1, revenda API1, Bearer do emissor API2 e Bearer Monitor pertencem a escopos diferentes. Arquivos exigem a modalidade de acesso documentada. Uma falha não autoriza trocar automaticamente o modo ou a credencial. Mantenha segredos no servidor.

O catálogo contém 103 operações nomeadas, 102 habilitadas. `nfeDownloadIbsCbsEventXml` não está disponível nesta versão do SDK: o método existe, mas lança erro `capability` sem enviar requisição. Condições fiscais, municipais, de cadastro, provedor e implantação ainda pendentes continuam sujeitas ao contrato e ao serviço. Validação local, cálculo ou prévia não comprovam autorização fiscal.

Relatórios atuais são baixados com `EmitterFilesClient::download_report_v2` (`/relatorios/{uuid}` na API2), usando a `url` devolvida pela criação/consulta do relatório: aceite somente uma URL da origem e do prefixo configurados seguida de `/relatorios/<uuid>`, com `FileAuth::anonymous()` (a URL é a capability) ou `FileAuth::issuer()`. Redirecionamentos não são seguidos. Relatórios legados continuam em `NfeFilesClient::download_report` com `FileAuth::public_report()`: CSV e XLSX chegam rotulados `text/xml` e o formato é identificado pelos bytes (assinatura ZIP = XLSX, caso contrário CSV completo preservado byte a byte); XML, HTML e JSON nunca são aceitos como relatório.

O download público do relatório API1 pode consumir quota mesmo por GET. Uma falha ambígua após possível envio preserva Unknown; uma rejeição completa conhecida e falhas anteriores ao envio mantêm sua classificação. A capability do relatório não é uma referência de recuperação e não autoriza repetição automática.

Não há retry automático de operação nem seguimento automático de redirects. Depois de possível envio de uma operação com efeito, uma falha pode indicar resultado desconhecido. Preserve o seletor original com segurança, consulte a tentativa anterior e decida explicitamente como prosseguir. Uma referência protegida exige acesso deliberado e pode estar ausente; não é uma chave de idempotência.

## Arquivos e processamento

Verifique tipo de resultado, status e representação antes de consumir bytes. JSON pendente, HTML e redirect não comprovam PDF pronto. Proteção de PDF/ZIP é distinta da autorização de download; não há descriptografia automática nem confirmação de autenticidade fiscal. O reconhecimento de formatos cobre somente o perfil documentado desta implementação. Uma Location revelada continua privada e exige decisão explícita de origem e autenticação para outra transferência.

Paginação e espera são optativas e limitadas quando disponíveis. Um estado futuro ou desconhecido não significa conclusão. Não repita emissão, cancelamento ou importação inicial como se fossem consultas de processamento.

Para migrar uma integração anterior, remapeie métodos, modelos e escopos de credencial pela referência desta versão. Não há promessa de substituição automática de outro SDK; compare também o changelog quando disponível.

## Documentação para assistentes e contratos

Índices em Markdown para assistentes: [documentação Webmania](https://webmania.com.br/docs/llms.txt) e [API 2.0](https://api.webmania.com.br/llms.txt). Contratos OpenAPI: [API 2.0](https://api.webmania.com.br/docs/openapi) e [NF-e](https://webmania.com.br/docs/rest-api-nfe/?format=openapi).

No catálogo de SDKs, `cpp` aparece como disponível no repositório público, com instalação pelo clone; plataformas C++ e Linux arm64. Estar listado nesses índices não amplia a cobertura documentada deste SDK.
