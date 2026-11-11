# Testes e desenvolvimento

Como compilar e testar o SDK para C++ a partir da fonte. O contrato fixado e a versão estão descritos em [INTEGRATION.md](INTEGRATION.md).

As suítes em [tests](../tests) (programas C++ e drivers Python, com projeto CMake próprio em [tests/CMakeLists.txt](../tests/CMakeLists.txt)) usam HTTP/TLS loopback com fixtures sintéticas; os certificados em [tests/fixtures/tls](../tests/fixtures/tls) são exclusivos de teste.
