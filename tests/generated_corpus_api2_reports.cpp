#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_reports(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_reports::ReportError::from_json("{\"error\":\"Synthetic report error\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_reports::ReportError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_reports::ReportError";return -1;}++checked;}
return checked;}
