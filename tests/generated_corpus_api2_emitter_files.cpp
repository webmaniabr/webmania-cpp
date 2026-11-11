#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api2_emitter_files(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api2_emitter_files::FiscalFileError::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_files::FiscalFileError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_files::FiscalFileError";return -1;}++checked;}
{bool accepted=false;try{auto model=api2_emitter_files::NfsePdfPending::from_json("{\"msg\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_msg();if(field.has_value())model.set_msg(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api2_emitter_files::NfsePdfPending getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api2_emitter_files::NfsePdfPending";return -1;}++checked;}
return checked;}
