#pragma once
#include <webmania/webmania.h>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <thread>
#include <utility>
#include <vector>

namespace webmania {
namespace api2_emitter_files { class NfsePdfPending; }
namespace detail {
template<class C, void (*Free)(C*)> class Owned {
  C* value_;
public:
  explicit Owned(C* value) : value_(value) { if (!value) throw std::bad_alloc(); }
  ~Owned() { Free(value_); }
  Owned(Owned&& other) noexcept : value_(std::exchange(other.value_,nullptr)) {}
  Owned& operator=(Owned&& other) noexcept {if(this!=&other){Free(value_);value_=std::exchange(other.value_,nullptr);}return *this;}
  Owned(const Owned&) = delete;
  Owned& operator=(const Owned&) = delete;
  C* native_handle() const { if (!value_) throw std::logic_error("Moved-from Webmania object."); return value_; }
};
inline std::string string(char* value) {
  if (!value) throw std::bad_alloc();
  std::unique_ptr<char, decltype(&wm_string_free)> owned(value, wm_string_free);
  return std::string(value);
}
inline std::string text(const char* value) { return value ? std::string(value) : std::string(); }
inline std::string cstring(std::string_view value) {
  if (value.find('\0') != std::string_view::npos) throw std::invalid_argument("Embedded NUL is unsupported in this C argument.");
  return std::string(value);
}
}
enum class Presence { missing, null, present };
template<class T> class Field {
  Presence presence_;
  std::optional<T> value_;
public:
  explicit Field(Presence p) : presence_(p) {}
  explicit Field(T value,Presence presence=Presence::present) : presence_(presence), value_(std::move(value)) {}
  Presence presence() const noexcept { return presence_; }
  bool has_value() const noexcept { return value_.has_value(); }
  T& value() & { return value_.value(); }
  const T& value() const & { return value_.value(); }
  T&& value() && { return std::move(value_.value()); }
};
class Json final : public detail::Owned<wm_json, wm_json_free> {
public:
  explicit Json(wm_json* value) : Owned(value) {}
  static Json parse(std::string_view value) { auto* p=wm_json_parse(value.data(),value.size()); if(!p) throw std::invalid_argument("Invalid exact JSON."); return Json(p); }
  std::string to_json() const { return detail::string(wm_json_to_string(native_handle())); }
  Json clone() const { return parse(to_json()); }
};
class Number final : public detail::Owned<wm_number, wm_number_free> {
public:
  explicit Number(wm_number* value) : Owned(value) {}
  static Number parse(std::string_view value) { auto s=detail::cstring(value);auto* p=wm_number_parse(s.c_str());if(!p)throw std::invalid_argument("Invalid exact number.");return Number(p); }
  std::string lexeme() const { return detail::text(wm_number_lexeme(native_handle())); }
  Number clone() const { return parse(lexeme()); }
};
class Scalar final : public detail::Owned<wm_scalar, wm_scalar_free> {
public:
  explicit Scalar(wm_scalar* value) : Owned(value) {}
  static Scalar text(std::string_view v) { return Scalar(wm_scalar_text_n(v.data(),v.size())); }
  static Scalar number(const Number& v) { return Scalar(wm_scalar_number(v.native_handle())); }
  static Scalar boolean(bool v) { return Scalar(wm_scalar_boolean(v)); }
  static Scalar null() { return Scalar(wm_scalar_null()); }
  std::string to_json() const { return detail::string(wm_scalar_to_json(native_handle())); }
};
class Map final : public detail::Owned<wm_map, wm_map_free> {
public:
  Map() : Owned(wm_map_new()) {}
  explicit Map(wm_map* p) : Owned(p) {}
  void set(std::string_view key,const Json& value);
  std::optional<Json> get(std::string_view key) const { auto* p=wm_map_get_n(native_handle(),key.data(),key.size());if(!p)return {};return Json(p); }
  std::size_t size() const { return wm_map_count(native_handle()); }
  std::string key_at(std::size_t index) const {std::size_t n=0;auto*p=wm_map_key_at(native_handle(),index,&n);if(!p)throw std::out_of_range("Map index.");return std::string(p,n);}
  std::string to_json() const { return detail::string(wm_map_to_json(native_handle())); }
  Map clone() const { auto s=to_json();return Map(wm_map_from_json(s.data(),s.size())); }
};
class Error final : public std::exception {
  std::shared_ptr<wm_error> error_;
  wm_status code_;
public:
  explicit Error(wm_error* value,wm_status code=WM_ERROR) : error_(value,wm_error_free),code_(code) {}
  const char* what() const noexcept override { auto*p=wm_error_message(error_.get());return p?p:"Webmania operation failed."; }
  std::string kind() const { return detail::text(wm_error_kind(error_.get())); }
  wm_status code() const noexcept { return code_; }
  int status() const { return wm_error_status(error_.get()); }
  bool outcome_unknown() const { return wm_error_outcome_unknown(error_.get()); }
  std::string reveal_location() const { return detail::text(wm_error_reveal_location(error_.get())); }
  std::optional<Json> reveal_recovery() const { auto*p=wm_error_reveal_recovery(error_.get());if(!p)return {};return Json(p); }
};
namespace detail {
inline void check(wm_status status,wm_error* error=nullptr) { if(status!=WM_OK)throw Error(error,status);wm_error_free(error); }
}
inline void Map::set(std::string_view key,const Json& value) { detail::check(wm_map_set_n(native_handle(),key.data(),key.size(),value.native_handle())); }
class Config final : public detail::Owned<wm_config,wm_config_free> {
public:
  Config() : Owned(wm_config_new()) {}
  void worker_path(std::string_view value) {auto s=detail::cstring(value);detail::check(wm_config_set_worker_path(native_handle(),s.c_str()));}
  void base_url(std::string_view value) {auto s=detail::cstring(value);detail::check(wm_config_set_base_url(native_handle(),s.c_str()));}
  void ca_pem(std::string_view value) {auto s=detail::cstring(value);detail::check(wm_config_set_ca_pem(native_handle(),s.c_str()));}
  void trust_file_origin(std::string_view value) {auto s=detail::cstring(value);detail::check(wm_config_trust_file_origin(native_handle(),s.c_str()));}
  void timeout(std::chrono::milliseconds value) {detail::check(wm_config_set_timeout_ms(native_handle(),value.count()));}
  void max_response_bytes(std::int64_t value) {detail::check(wm_config_set_max_response_bytes(native_handle(),value));}
  void max_header_bytes(std::int64_t value) {detail::check(wm_config_set_max_header_bytes(native_handle(),value));}
};
class Cancel final {
  std::shared_ptr<wm_cancel> token_;
  std::shared_ptr<std::atomic_bool> requested_;
  Cancel(std::shared_ptr<wm_cancel> p,std::shared_ptr<std::atomic_bool> r):token_(std::move(p)),requested_(std::move(r)){}
public:
  Cancel() : token_(wm_cancel_new(),wm_cancel_free),requested_(std::make_shared<std::atomic_bool>(false)) {if(!token_)throw std::bad_alloc();}
  Cancel(Cancel&&) noexcept=default;
  Cancel& operator=(Cancel&&) noexcept=default;
  Cancel(const Cancel&)=delete;
  Cancel& operator=(const Cancel&)=delete;
  Cancel share() const {if(!token_)throw std::logic_error("Moved-from cancel.");return Cancel(token_,requested_);}
  void request() const {if(!token_)throw std::logic_error("Moved-from cancel.");requested_->store(true);wm_cancel_request(token_.get());}
  bool requested() const {if(!token_)throw std::logic_error("Moved-from cancel.");return requested_->load();}
  std::shared_ptr<wm_cancel> keep_alive() const {if(!token_)throw std::logic_error("Moved-from cancel.");return token_;}
};
#define WM_CPP_CREDENTIAL(NAME,C,FREE) class NAME final : public detail::Owned<C,FREE> { public: explicit NAME(C* p):Owned(p){}
WM_CPP_CREDENTIAL(CompanyCredentials,wm_company_credentials,wm_company_credentials_free)
  CompanyCredentials(std::string_view a,std::string_view b,std::string_view c,std::string_view d):Owned(wm_company_credentials_new(detail::cstring(a).c_str(),detail::cstring(b).c_str(),detail::cstring(c).c_str(),detail::cstring(d).c_str())){} };
WM_CPP_CREDENTIAL(ResellerCredentials,wm_reseller_credentials,wm_reseller_credentials_free)
  ResellerCredentials(std::string_view a,std::string_view b,std::string_view c,std::string_view d):Owned(wm_reseller_credentials_new(detail::cstring(a).c_str(),detail::cstring(b).c_str(),detail::cstring(c).c_str(),detail::cstring(d).c_str())){} };
WM_CPP_CREDENTIAL(IssuerToken,wm_issuer_token,wm_issuer_token_free)
  explicit IssuerToken(std::string_view a):Owned(wm_issuer_token_new(detail::cstring(a).c_str())){} };
WM_CPP_CREDENTIAL(MonitorToken,wm_monitor_token,wm_monitor_token_free)
  explicit MonitorToken(std::string_view a):Owned(wm_monitor_token_new(detail::cstring(a).c_str())){} };
#undef WM_CPP_CREDENTIAL
class FileAuth final : public detail::Owned<wm_file_auth,wm_file_auth_free> {
public:
  explicit FileAuth(wm_file_auth*p):Owned(p){}
  static FileAuth company(){return FileAuth(wm_file_auth_company());}
  static FileAuth issuer(){return FileAuth(wm_file_auth_issuer());}
  static FileAuth document_token(std::string_view value){auto s=detail::cstring(value);return FileAuth(wm_file_auth_document_token(s.c_str()));}
  static FileAuth anonymous(){return FileAuth(wm_file_auth_anonymous());}
  static FileAuth public_report(){return FileAuth(wm_file_auth_public_report());}
};
class FileResponse final : public detail::Owned<wm_file_response,wm_file_response_free> {
public:
  explicit FileResponse(wm_file_response*p):Owned(p){}
  int status()const{return wm_file_response_status(native_handle());}
  std::string media_type()const{return detail::text(wm_file_response_media_type(native_handle()));}
  std::string kind()const{return detail::text(wm_file_response_kind(native_handle()));}
  std::vector<unsigned char> bytes()const{std::size_t n=0;auto*p=wm_file_response_bytes(native_handle(),&n);if(!p&&n)throw std::runtime_error("Invalid file bytes.");if(!n)return {};return {p,p+n};}
};
enum class FileResultKind { file, redirect, pending };
class FileOrRedirect final : public detail::Owned<wm_file_or_redirect,wm_file_or_redirect_free> {
public:
  explicit FileOrRedirect(wm_file_or_redirect*p):Owned(p){}
  bool is_redirect()const{return wm_file_or_redirect_is_redirect(native_handle());}
  bool is_pending()const{return wm_file_or_redirect_is_pending(native_handle());}
  FileResultKind result_kind()const{auto*p=native_handle();return wm_file_or_redirect_is_pending(p)?FileResultKind::pending:wm_file_or_redirect_is_redirect(p)?FileResultKind::redirect:FileResultKind::file;}
  std::string reveal_location()const{if(result_kind()!=FileResultKind::redirect)throw std::logic_error("File result is not a redirect.");return detail::text(wm_file_or_redirect_reveal_location(native_handle()));}
  std::optional<FileResponse> file()const{if(result_kind()!=FileResultKind::file)return {};return FileResponse(wm_file_or_redirect_file(native_handle()));}
  int pending_status()const{if(result_kind()!=FileResultKind::pending)throw std::logic_error("File result is not Pending.");return wm_file_or_redirect_pending_status(native_handle());}
  std::string pending_media_type()const{if(result_kind()!=FileResultKind::pending)throw std::logic_error("File result is not Pending.");return detail::text(wm_file_or_redirect_pending_media_type(native_handle()));}
  api2_emitter_files::NfsePdfPending pending()const;
};
inline std::string version(){return "0.1.0-alpha.6";}
inline std::string c_version(){return detail::text(wm_version());}
}
