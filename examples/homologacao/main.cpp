// Optional homologation run (ambiente 2) of the installed C++ SDK: read-only
// checks, then NF-e and NFS-e issue -> consult -> files -> cancel -> consult.
//
// Configuration comes only from environment variables (README, "Teste em
// homologação"). Without WEBMANIA_LIVE=1 it prints {"result":"blocked"} and
// exits 77 before any network work. Output is one JSON line per step with a
// short reference (sha256 prefix) instead of identifiers; files appear as size,
// sha256 and detected format. Credentials, payloads and bytes are never
// printed. A mutation is never resent: an unknown outcome stops the run with
// exit code 1 and stays in the ledger for reconciliation by consult; the nfe,
// nfse and all scopes therefore need a writable WEBMANIA_LIVE_LEDGER before any
// credential is read. Consults
// are bounded, with backoff; a cancellation is confirmed only by the status
// "cancelado", and one still pending when they run out is ledgered "unknown".
// Exit codes: 0 all steps succeeded, 1 a step failed or is unknown, 77 not
// enabled or not configured.
#include <webmania_cpp/webmania.hpp>
#include <algorithm>
#include <array>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <optional>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
#include <sys/stat.h>

namespace {
// ---- SHA-256 (FIPS 180-4) for short references and file digests ----
std::string sha256(const std::vector<unsigned char>& data) {
  static const std::uint32_t k[64] = {
      0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be,
      0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa,
      0x5cb0a9dc, 0x76f988da, 0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967, 0x27b70a85,
      0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
      0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f,
      0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
  auto ror = [](std::uint32_t x, int n) { return (x >> n) | (x << (32 - n)); };
  std::array<std::uint32_t, 8> h = {0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};
  std::vector<unsigned char> m(data);
  std::uint64_t bits = static_cast<std::uint64_t>(data.size()) * 8;
  m.push_back(0x80);
  while (m.size() % 64 != 56) m.push_back(0);
  for (int i = 7; i >= 0; --i) m.push_back(static_cast<unsigned char>(bits >> (8 * i)));
  for (std::size_t off = 0; off < m.size(); off += 64) {
    std::uint32_t w[64];
    for (int i = 0; i < 16; ++i)
      w[i] = std::uint32_t(m[off + 4 * i]) << 24 | std::uint32_t(m[off + 4 * i + 1]) << 16 | std::uint32_t(m[off + 4 * i + 2]) << 8 | m[off + 4 * i + 3];
    for (int i = 16; i < 64; ++i)
      w[i] = w[i - 16] + (ror(w[i - 15], 7) ^ ror(w[i - 15], 18) ^ (w[i - 15] >> 3)) + w[i - 7] + (ror(w[i - 2], 17) ^ ror(w[i - 2], 19) ^ (w[i - 2] >> 10));
    auto v = h;
    for (int i = 0; i < 64; ++i) {
      std::uint32_t t1 = v[7] + (ror(v[4], 6) ^ ror(v[4], 11) ^ ror(v[4], 25)) + ((v[4] & v[5]) ^ (~v[4] & v[6])) + k[i] + w[i];
      std::uint32_t t2 = (ror(v[0], 2) ^ ror(v[0], 13) ^ ror(v[0], 22)) + ((v[0] & v[1]) ^ (v[0] & v[2]) ^ (v[1] & v[2]));
      std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
      v[4] += t1;
      v[0] = t1 + t2;
    }
    for (int i = 0; i < 8; ++i) h[i] += v[i];
  }
  char out[65];
  for (int i = 0; i < 8; ++i) std::snprintf(out + 8 * i, 9, "%08x", h[i]);
  return std::string(out, 64);
}
std::string ref(const std::string& identifier) {
  return sha256(std::vector<unsigned char>(identifier.begin(), identifier.end())).substr(0, 12);
}
// Call sites qualify it as ::quoted: with a non-const std::string argument, unqualified lookup
// also finds std::quoted by argument-dependent lookup, and some standard libraries prefer it.
std::string quoted(const std::string& text) {
  std::string out = "\"";
  for (unsigned char c : text) {
    if (c == '"' || c == '\\') { out += '\\'; out += static_cast<char>(c); }
    else if (c < 0x20) { char b[8]; std::snprintf(b, sizeof b, "\\u%04x", c); out += b; }
    else out += static_cast<char>(c);
  }
  return out + "\"";
}

bool failed = false;
std::ofstream ledger;

void line(const std::string& step, const std::string& op, bool ok, int http, const std::string& outcome, const std::optional<std::string>& kind,
          const std::string& identifier, const std::string& extra = "") {
  std::cout << "{\"step\":" << quoted(step) << ",\"operation\":" << quoted(op) << ",\"ok\":" << (ok ? "true" : "false")
            << ",\"http_status\":" << (http > 0 ? std::to_string(http) : "null") << ",\"outcome\":" << quoted(outcome)
            << ",\"kind\":" << (kind ? quoted(*kind) : "null") << ",\"ref\":" << (identifier.empty() ? "null" : quoted(ref(identifier))) << extra << "}"
            << std::endl;
  if (!ok) failed = true;
}
void note(const std::string& step, const std::string& op, bool ok, const std::string& outcome, const std::string& identifier = "") {
  line(step, op, ok, 0, outcome, std::nullopt, identifier);
}
// Records an SDK failure; returns true when the outcome is unknown (stop).
bool fail(const std::string& step, const std::string& op, const webmania::Error& e, const std::string& identifier = "") {
  line(step, op, false, e.status(), e.outcome_unknown() ? "unknown" : "failed", e.kind(), identifier);
  return e.outcome_unknown();
}
// Unreadable file bytes are a failed step, never an abort before the cancellation.
void file_line(const std::string& step, const std::string& op, const webmania::FileResponse& f, const std::string& identifier) {
  std::vector<unsigned char> bytes;
  try { bytes = f.bytes(); } catch (const std::exception&) { line(step, op, false, f.status(), "invalid_bytes", std::nullopt, identifier); return; }
  line(step, op, true, f.status(), "success", f.kind(), identifier, ",\"size\":" + std::to_string(bytes.size()) + ",\"sha256\":" + quoted(sha256(bytes)));
}
void record(const std::string& model, const std::string& identifier, const std::string& status, const std::string& op) {
  if (!ledger.is_open()) return;
  ledger << "{\"model\":" << quoted(model) << ",\"identifier\":" << quoted(identifier) << ",\"status\":" << quoted(status) << ",\"operation\":" << quoted(op) << "}\n";
  ledger.flush();
  if (!ledger) failed = true;
}
[[noreturn]] void blocked(const std::string& reason) {
  std::cout << "{\"result\":\"blocked\",\"reason\":" << quoted(reason) << "}" << std::endl;
  std::exit(77);
}
std::optional<std::string> env(const char* name) {
  const char* v = std::getenv(name);
  if (!v || !*v) return std::nullopt;
  return std::string(v);
}
std::string host_of(const std::string& origin) {
  auto start = origin.find("://");
  std::string rest = start == std::string::npos ? origin : origin.substr(start + 3);
  // An authority with userinfo (user[:password]@host) is never trusted: its host is not the text before ':'.
  if (rest.substr(0, rest.find_first_of("/?#")).find('@') != std::string::npos) return std::string();
  rest = rest.substr(0, rest.find_first_of("/:?#"));
  std::transform(rest.begin(), rest.end(), rest.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
  return rest;
}
std::string origin_only(const std::string& base) {
  auto start = base.find("://");
  auto slash = base.find('/', start == std::string::npos ? 0 : start + 3);
  return slash == std::string::npos ? base : base.substr(0, slash);
}
std::string payload(const char* variable, const webmania::Config& probe) {
  auto path = env(variable);
  if (!path) blocked("payload not configured");
  std::ifstream in(*path, std::ios::binary);
  if (!in) blocked("payload unreadable");
  std::stringstream buffer;
  buffer << in.rdbuf();
  auto text = buffer.str();
  (void)probe;
  webmania::Map map(wm_map_from_json(text.data(), text.size()));
  if (!map.native_handle()) blocked("payload is not a JSON object");
  auto ambiente = map.get("ambiente");
  if (!ambiente || ambiente->to_json() != "2") blocked("payload ambiente must be 2");
  return text;
}
webmania::Config config(const std::string& worker, const std::string& base, bool files) {
  try {
    webmania::Config c;
    c.worker_path(worker);
    c.base_url(base);
    c.timeout(std::chrono::milliseconds(60000));
    if (files) c.trust_file_origin(origin_only(base));
    return c;
  } catch (const std::exception&) {
    blocked("invalid base URL or worker configuration");
  }
}
const std::vector<std::string> processing = {"processando", "processamento", "pendente"};
// After a cancellation the document can still be processing, or cancelling: an NFS-e can
// stay in processando_cancelamento until a later consult completes it.
const std::vector<std::string> cancelling = {"processando", "processamento", "contingencia", "pendente", "processando_cancelamento"};
constexpr int max_poll_attempts = 24;
// WEBMANIA_LIVE_POLL_ATTEMPTS can only lower the number of consults (1 to max_poll_attempts).
int poll_attempts = max_poll_attempts;

// No status yet, or one of `pending`: consult again while attempts remain.
bool pending_status(const std::string& status, const std::vector<std::string>& pending) {
  return status.empty() || std::find(pending.begin(), pending.end(), status) != pending.end();
}
// Waits 1 s before the second consult, doubling up to 10 s.
void backoff(int attempt) { std::this_thread::sleep_for(std::chrono::seconds(attempt >= 6 ? 10 : 1 << (attempt - 2))); }
// Bounded consult with backoff: at least one, then again only while the status is pending.
// Returns the last status; a failed consult ends the polling, and `unknown` says whether
// its outcome is unknown.
template <typename Fetch>
std::string poll(Fetch fetch, const std::string& step, const std::string& op, const std::string& uuid, const std::vector<std::string>& pending, bool& unknown) {
  std::string status;
  for (int attempt = 1; attempt <= poll_attempts; ++attempt) {
    if (attempt > 1) backoff(attempt);
    try { status = fetch(); } catch (const webmania::Error& e) { unknown = fail(step, op, e, uuid); break; }
    if (!pending_status(status, pending)) break;
  }
  return status;
}
// The cancellation is confirmed only by a consult with status "cancelado". A document still
// pending when the consults run out, or whose consult failed, has an unknown cancellation:
// the ledger records "unknown" for the cancel operation, the run is not a success and the
// cancel is never resent. Returns true only when cancelled.
bool cancel_verdict(const std::string& model, const std::string& uuid, const std::string& status, const std::string& step, const std::string& op,
                    const std::string& cancel_op) {
  if (status == "cancelado") {
    record(model, uuid, status, op);
    note(step, op, true, "success", uuid);
    return true;
  }
  if (!pending_status(status, cancelling)) {
    record(model, uuid, status, op);
    note(step, op, false, "not_cancelled", uuid);
    return false;
  }
  record(model, uuid, "unknown", cancel_op);
  note(step, op, false, "unknown", uuid);
  return false;
}
std::string text(const webmania::Field<std::string>& field) { return field.has_value() ? field.value() : std::string(); }

std::string nfe_status(const webmania::NfeClient& nfe, const webmania::Config& cfg, const std::string& uuid) {
  using namespace webmania::api1_fiscal;
  auto query = NfeGetDocumentQuery::from_json("{\"uuid\":" + ::quoted(uuid) + "}", cfg);
  auto response = nfe.get_document(query);
  try {
    return text(response.get_NfeDocument(cfg).get_status());
  } catch (const std::exception&) {
    auto list = response.get_List(cfg);
    if (!list.size()) return std::string();
    auto first = list.at(0);
    return first.has_value() ? text(first.value().get_status()) : std::string();
  }
}

// Returns false when an unknown outcome stopped the run.
bool nfe_cycle(const webmania::NfeClient& nfe, const webmania::NfeFilesClient& files, const webmania::Config& cfg, const std::string& json) {
  using namespace webmania::api1_fiscal;
  std::optional<NfeIssueRequest> body;
  try { body.emplace(NfeIssueRequest::from_json(json, cfg)); } catch (const std::exception&) { note("nfe.issue", "nfeIssueDocument", false, "invalid_payload"); return true; }
  std::string uuid;
  try {
    auto doc = nfe.issue_document(*body).get_NfeDocument(cfg);
    uuid = text(doc.get_uuid());
    record("nfe", uuid, text(doc.get_status()), "nfeIssueDocument");
  } catch (const webmania::Error& e) {
    if (fail("nfe.issue", "nfeIssueDocument", e)) { record("nfe", "", "unknown", "nfeIssueDocument"); return false; }
    return true;
  } catch (const std::exception&) {
    note("nfe.issue", "nfeIssueDocument", false, "not_a_document");
    return true;
  }
  if (uuid.empty()) { note("nfe.issue", "nfeIssueDocument", false, "not_a_document"); return true; }
  note("nfe.issue", "nfeIssueDocument", true, "success", uuid);
  auto consult = [&] { return nfe_status(nfe, cfg, uuid); };
  bool unknown = false;
  std::string status = poll(consult, "nfe.consult", "nfeGetDocument", uuid, processing, unknown);
  if (unknown) return false;
  record("nfe", uuid, status, "nfeGetDocument");
  if (status != "aprovado") {
    // Still processing: reconciliation consults it later, never a blind cancel or
    // resend. Rejected or denied documents need no cancellation.
    note("nfe.consult", "nfeGetDocument", false, "not_approved", uuid);
    return true;
  }
  note("nfe.consult", "nfeGetDocument", true, "success", uuid);
  try { nfe.query_document(NfeLookupRequest::from_json("{\"uuid\":" + ::quoted(uuid) + "}", cfg)); note("nfe.query", "nfeQueryDocument", true, "success", uuid); }
  catch (const webmania::Error& e) { fail("nfe.query", "nfeQueryDocument", e, uuid); }
  auto auth = webmania::FileAuth::company();
  try { file_line("nfe.danfe", "nfeDownloadDanfe", files.download_danfe(uuid, auth), uuid); } catch (const webmania::Error& e) { fail("nfe.danfe", "nfeDownloadDanfe", e, uuid); }
  try { file_line("nfe.danfe_simple", "nfeDownloadSimpleDanfe", files.download_simple_danfe(uuid, auth), uuid); } catch (const webmania::Error& e) { fail("nfe.danfe_simple", "nfeDownloadSimpleDanfe", e, uuid); }
  try { file_line("nfe.xml", "nfeDownloadXml", files.download_xml(uuid, webmania::api1_files::NfeDownloadXmlQuery::from_json("{}", cfg), auth), uuid); }
  catch (const webmania::Error& e) { fail("nfe.xml", "nfeDownloadXml", e, uuid); }
  // Cancellation is attempted for every approved document, even after a failed read.
  try {
    auto result = nfe.cancel_document(NfeCancelRequest::from_json("{\"uuid\":" + ::quoted(uuid) + ",\"motivo\":\"Cancelamento de teste em homologacao\"}", cfg));
    record("nfe", uuid, text(result.get_status()), "nfeCancelDocument");
    note("nfe.cancel", "nfeCancelDocument", true, "success", uuid);
  } catch (const webmania::Error& e) {
    if (fail("nfe.cancel", "nfeCancelDocument", e, uuid)) { record("nfe", uuid, "unknown", "nfeCancelDocument"); return false; }
    return true;
  }
  status = poll(consult, "nfe.consult_cancelled", "nfeGetDocument", uuid, cancelling, unknown);
  if (!cancel_verdict("nfe", uuid, status, "nfe.consult_cancelled", "nfeGetDocument", "nfeCancelDocument")) return true;
  try { file_line("nfe.cancellation_xml", "nfeDownloadCancellationXml", files.download_cancellation_xml(uuid, webmania::api1_files::NfeDownloadCancellationXmlQuery::from_json("{}", cfg), auth), uuid); }
  catch (const webmania::Error& e) { fail("nfe.cancellation_xml", "nfeDownloadCancellationXml", e, uuid); }
  return true;
}

// Returns false when an unknown outcome stopped the run.
bool nfse_cycle(const webmania::EmitterClient& emitter, const webmania::EmitterFilesClient& files, const webmania::Config& cfg, const std::string& json) {
  using namespace webmania::api2_nfse_issuance;
  std::optional<EmitterIssueNfsePayload> body;
  try { body.emplace(EmitterIssueNfsePayload::from_json(json, cfg)); } catch (const std::exception&) { note("nfse.issue", "emitterIssueNfse", false, "invalid_payload"); return true; }
  std::string uuid;
  try {
    auto issued = emitter.issue_nfse(*body);
    uuid = text(issued.get_uuid());
    record("nfse", uuid, text(issued.get_status()), "emitterIssueNfse");
  } catch (const webmania::Error& e) {
    if (fail("nfse.issue", "emitterIssueNfse", e)) { record("nfse", "", "unknown", "emitterIssueNfse"); return false; }
    return true;
  }
  if (uuid.empty()) { note("nfse.issue", "emitterIssueNfse", false, "not_a_document"); return true; }
  note("nfse.issue", "emitterIssueNfse", true, "success", uuid);
  auto consult = [&] { return text(emitter.get_nfse(uuid).get_status()); };
  bool unknown = false;
  std::string status = poll(consult, "nfse.consult", "emitterGetNfse", uuid, processing, unknown);
  if (unknown) return false;
  record("nfse", uuid, status, "emitterGetNfse");
  if (status != "aprovado") { note("nfse.consult", "emitterGetNfse", false, "not_approved", uuid); return true; }
  note("nfse.consult", "emitterGetNfse", true, "success", uuid);
  auto auth = webmania::FileAuth::issuer();
  try { file_line("nfse.xml", "fileGetNfseXml", files.get_nfse_xml(uuid, auth), uuid); } catch (const webmania::Error& e) { fail("nfse.xml", "fileGetNfseXml", e, uuid); }
  try {
    auto pdf = files.get_nfse_pdf(uuid, auth);
    if (auto file = pdf.file()) file_line("nfse.pdf", "fileGetNfsePdf", *file, uuid);
    else note("nfse.pdf", "fileGetNfsePdf", true, "pending_or_redirect", uuid);
  } catch (const webmania::Error& e) { fail("nfse.pdf", "fileGetNfsePdf", e, uuid); }
  try { file_line("nfse.rps_pdf", "fileGetNfseRpsPdf", files.get_nfse_rps_pdf(uuid, auth), uuid); } catch (const webmania::Error& e) { fail("nfse.rps_pdf", "fileGetNfseRpsPdf", e, uuid); }
  try {
    auto result = emitter.cancel_nfse(EmitterCancelNfsePayload::from_json("{\"uuid\":" + ::quoted(uuid) + ",\"motivo\":1,\"justificativa\":\"Cancelamento de teste em homologacao\"}", cfg));
    record("nfse", uuid, text(result.get_status()), "emitterCancelNfse");
    note("nfse.cancel", "emitterCancelNfse", true, "success", uuid);
  } catch (const webmania::Error& e) {
    if (fail("nfse.cancel", "emitterCancelNfse", e, uuid)) { record("nfse", uuid, "unknown", "emitterCancelNfse"); return false; }
    return true;
  }
  status = poll(consult, "nfse.consult_cancelled", "emitterGetNfse", uuid, cancelling, unknown);
  cancel_verdict("nfse", uuid, status, "nfse.consult_cancelled", "emitterGetNfse", "emitterCancelNfse");
  return true;
}
}  // namespace

int main() {
  if (env("WEBMANIA_LIVE") != std::optional<std::string>("1")) blocked("WEBMANIA_LIVE is not 1");
  std::string scope = env("WEBMANIA_LIVE_SCOPE").value_or("readonly");
  bool do_nfe = scope == "nfe" || scope == "all", do_nfse = scope == "nfse" || scope == "all";
  if (!do_nfe && !do_nfse && scope != "readonly") blocked("unsupported WEBMANIA_LIVE_SCOPE");
  if (auto attempts = env("WEBMANIA_LIVE_POLL_ATTEMPTS")) {
    if (attempts->size() > 2 || attempts->find_first_not_of("0123456789") != std::string::npos || (poll_attempts = std::stoi(*attempts)) < 1 ||
        poll_attempts > max_poll_attempts)
      blocked("WEBMANIA_LIVE_POLL_ATTEMPTS must be an integer from 1 to 24");
  }
  std::string api1 = env("WEBMANIA_API1_BASE_URL").value_or("https://webmania.com.br/api");
  std::string files_base = env("WEBMANIA_FILES_BASE_URL").value_or("https://nfe.webmania.com.br");
  std::string api2 = env("WEBMANIA_API2_BASE_URL").value_or("https://api.webmania.com.br");
  // The allow list is required: without it no origin is trusted (fail closed, before any credential).
  std::vector<std::string> hosts;
  std::stringstream list(env("WEBMANIA_LIVE_ALLOWED_HOSTS").value_or(""));
  for (std::string h; std::getline(list, h, ',');) {
    h.erase(0, h.find_first_not_of(" \t"));
    h.erase(h.find_last_not_of(" \t") + 1);
    std::transform(h.begin(), h.end(), h.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    if (!h.empty()) hosts.push_back(h);
  }
  if (hosts.empty()) blocked("WEBMANIA_LIVE_ALLOWED_HOSTS not configured");
  for (const auto& origin : {api1, files_base, api2})
    if (std::find(hosts.begin(), hosts.end(), host_of(origin)) == hosts.end()) blocked("configured origin outside WEBMANIA_LIVE_ALLOWED_HOSTS");
  auto worker = env("WEBMANIA_WORKER_PATH");
  if (!worker) blocked("worker path not configured");
  auto c1 = config(*worker, api1, false), cf = config(*worker, files_base, true), c2 = config(*worker, api2, false), c2f = config(*worker, api2, true);
  std::optional<std::string> nfe_json, nfse_json;
  if (do_nfe) nfe_json = payload("WEBMANIA_LIVE_NFE_PAYLOAD", c1);
  if (do_nfse) nfse_json = payload("WEBMANIA_LIVE_NFSE_PAYLOAD", c2);
  // An unknown outcome is recorded only in the ledger: a mutation scope needs it writable before any credential.
  auto ledger_path = env("WEBMANIA_LIVE_LEDGER");
  if ((do_nfe || do_nfse) && !ledger_path) blocked("WEBMANIA_LIVE_LEDGER not configured");
  if (ledger_path) {
    umask(077);
    ledger.open(*ledger_path, std::ios::app);
    if (!ledger) blocked("ledger unwritable");
  }
  auto key = env("WEBMANIA_CONSUMER_KEY"), secret = env("WEBMANIA_CONSUMER_SECRET"), token = env("WEBMANIA_ACCESS_TOKEN"), token_secret = env("WEBMANIA_ACCESS_TOKEN_SECRET");
  if (!key || !secret || !token || !token_secret) blocked("company credentials not configured");
  auto issuer_value = env("WEBMANIA_ISSUER_TOKEN");
  if (!issuer_value) blocked("issuer token not configured");
  webmania::CompanyCredentials company(*key, *secret, *token, *token_secret);
  webmania::IssuerToken issuer(*issuer_value);
  std::optional<webmania::NfeClient> nfe;
  std::optional<webmania::NfeFilesClient> nfe_files;
  std::optional<webmania::EmitterClient> emitter;
  std::optional<webmania::EmitterFilesClient> emitter_files;
  try {
    nfe.emplace(company, c1);
    nfe_files.emplace(company, cf);
    emitter.emplace(issuer, c2);
    emitter_files.emplace(issuer, c2f);
  } catch (const std::exception&) {
    blocked("invalid credentials or base URL configuration");
  }
  try { nfe->get_sefaz_status(); note("readonly.sefaz_status", "nfeGetSefazStatus", true, "success"); } catch (const webmania::Error& e) { fail("readonly.sefaz_status", "nfeGetSefazStatus", e); }
  try { nfe->get_certificate_validity(); note("readonly.certificate", "nfeGetCertificateValidity", true, "success"); } catch (const webmania::Error& e) { fail("readonly.certificate", "nfeGetCertificateValidity", e); }
  try { nfe->list_tax_classes(); note("readonly.tax_classes", "nfeListTaxClasses", true, "success"); } catch (const webmania::Error& e) { fail("readonly.tax_classes", "nfeListTaxClasses", e); }
  try {
    emitter->get_nfse_provider_status(webmania::api2_emitter_reads::EmitterGetNfseProviderStatusQuery::from_json("{}", c2));
    note("readonly.nfse_provider", "emitterGetNfseProviderStatus", true, "success");
  } catch (const webmania::Error& e) { fail("readonly.nfse_provider", "emitterGetNfseProviderStatus", e); }
  if (nfe_json && !nfe_cycle(*nfe, *nfe_files, c1, *nfe_json)) return 1;
  if (nfse_json && !nfse_cycle(*emitter, *emitter_files, c2, *nfse_json)) return 1;
  return failed ? 1 : 0;
}
