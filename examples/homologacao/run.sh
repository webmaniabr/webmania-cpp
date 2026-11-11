#!/bin/sh
# Builds this C++ SDK over the pinned C SDK binary archive, builds the optional
# homologation example and runs it. Configuration comes only from the environment;
# see README, "Teste em homologação". Without WEBMANIA_LIVE=1 it exits 77 before
# any network. WEBMANIA_C_ARCHIVE is the C SDK binary archive; its content is verified
# against dependency-lock.json before anything is extracted (see c_archive.py).
set -eu
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
if [ "${WEBMANIA_LIVE:-}" != "1" ]; then
  printf '%s\n' '{"result":"blocked"}'
  exit 77
fi
ARCHIVE="${WEBMANIA_C_ARCHIVE:-/deps/c/webmania-c-binary.tar.gz}"
# The archive digest changes with any documentation file inside it, so its content is checked instead:
# c_archive.py accepts only plain directories and regular files whose manifest (every file but the inert
# README) and pinned files match dependency-lock.json, and extracts only what it verified. Anything else blocks.
CHECK="$ROOT/examples/homologacao/c_archive.py"
python3 -I "$CHECK" verify "$ROOT/dependency-lock.json" "$ARCHIVE" || { printf '%s\n' '{"result":"blocked","reason":"C archive differs from the lock"}'; exit 77; }
WORK="${WEBMANIA_EXAMPLE_WORK:-$(mktemp -d)}"
blocked() { printf '{"result":"blocked","reason":"%s"}\n' "$1"; exit 77; }
# Fresh trees only: a reused prefix or CMake cache could resolve another C SDK package.
for d in c-prefix build prefix example; do [ ! -e "$WORK/$d" ] || blocked "work directory is not fresh"; done
mkdir -p "$WORK/c-prefix"
python3 -I "$CHECK" extract "$ROOT/dependency-lock.json" "$ARCHIVE" "$WORK/c-prefix" || blocked "C archive differs from the lock"
config_dir() { for d in "$1/lib/cmake/$2" "$1/lib64/cmake/$2"; do [ -f "$d/${2}Config.cmake" ] && { printf '%s\n' "$d"; return 0; }; done; return 1; }
# Both configures are pinned to the CMake package extracted from the verified archive.
C_DIR="$(config_dir "$WORK/c-prefix" Webmania)" || blocked "C archive has no CMake package"
cmake -S "$ROOT" -B "$WORK/build" -DWebmania_DIR:PATH="$C_DIR" -DCMAKE_PREFIX_PATH="$WORK/c-prefix" -DCMAKE_INSTALL_PREFIX="$WORK/prefix" >/dev/null
grep -qxF "Webmania_DIR:PATH=$C_DIR" "$WORK/build/CMakeCache.txt" || blocked "C SDK package resolved outside the verified archive"
cmake --build "$WORK/build" --parallel 1 >/dev/null
cmake --install "$WORK/build" >/dev/null
CPP_DIR="$(config_dir "$WORK/prefix" WebmaniaCpp)" || blocked "C++ SDK package not installed"
cmake -S "$ROOT/examples/homologacao" -B "$WORK/example" -DWebmaniaCpp_DIR:PATH="$CPP_DIR" -DWebmania_DIR:PATH="$C_DIR" -DCMAKE_PREFIX_PATH="$WORK/prefix;$WORK/c-prefix" >/dev/null
grep -qxF "Webmania_DIR:PATH=$C_DIR" "$WORK/example/CMakeCache.txt" || blocked "C SDK package resolved outside the verified archive"
grep -qxF "WebmaniaCpp_DIR:PATH=$CPP_DIR" "$WORK/example/CMakeCache.txt" || blocked "C++ SDK package resolved outside this build"
cmake --build "$WORK/example" --parallel 1 >/dev/null
WEBMANIA_WORKER_PATH="$WORK/c-prefix/libexec/webmania-native-worker" exec "$WORK/example/homologacao"
