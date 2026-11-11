#include <webmania_cpp/models.hpp>
namespace webmania {
std::string api2_reports::ReportError::to_json() const {return detail::string(wm_api2_reports_report_error_to_json(native_handle()));}
api2_reports::ReportError api2_reports::ReportError::from_json(std::string_view value, const Config& config) {wm_error* error=nullptr;auto*p=wm_api2_reports_report_error_from_json(value.data(),value.size(),config.native_handle(),&error);if(!p)throw Error(error,WM_INVALID);wm_error_free(error);return ReportError(p);}
api2_reports::ReportError api2_reports::ReportError::validated_clone(const Config& config) const {return from_json(to_json(),config);}
void api2_reports::ReportError::validate(const Config& config) const {wm_error* error=nullptr;auto status=wm_api2_reports_report_error_validate(native_handle(),config.native_handle(),&error);detail::check(status,error);}
void api2_reports::ReportError::set_error(std::string_view value) {detail::check(wm_api2_reports_report_error_set_error_n(native_handle(),value.data(),value.size()));}
Field<std::string> api2_reports::ReportError::get_error() const {const char* out=nullptr;auto status=wm_api2_reports_report_error_get_error(native_handle(),&out);if(status==WM_ABSENT)return Field<std::string>(Presence::missing);if(status==WM_NULL)return Field<std::string>(Presence::null);detail::check(status);return Field<std::string>(std::string(out,wm_api2_reports_report_error_length_error(native_handle())),static_cast<Presence>(wm_api2_reports_report_error_presence_error(native_handle())));}
Presence api2_reports::ReportError::presence_error() const {return static_cast<Presence>(wm_api2_reports_report_error_presence_error(native_handle()));}
void api2_reports::ReportError::set_extension(std::string_view key,const Json& value) {detail::check(wm_api2_reports_report_error_set_extension_n(native_handle(),key.data(),key.size(),value.native_handle()));}
std::optional<Json> api2_reports::ReportError::get_extension(std::string_view key) const {auto*p=wm_api2_reports_report_error_get_extension_n(native_handle(),key.data(),key.size());if(!p)return {};return Json(p);}
}
