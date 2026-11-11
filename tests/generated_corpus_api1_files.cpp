#include <webmania_cpp/webmania.hpp>
#include <iostream>
using namespace webmania;
int corpus_api1_files(const Config& cfg){int checked=0;
{bool accepted=false;try{auto model=api1_files::Api1Error::from_json("{\"error\":\"synthetic\"}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_error();if(field.has_value())model.set_error(field.value());}
{auto field=model.get_message();if(field.has_value())model.set_message(field.value());}
{auto field=model.get_code();if(field.has_value())model.set_code(field.value());}
{auto field=model.get_status();if(field.has_value())model.set_status(field.value());}
{auto field=model.get_log();if(field.has_value())model.set_log(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::Api1Error getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::Api1Error";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::Api1ErrorError::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_files::Api1ErrorError getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::Api1ErrorError";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::Api1ErrorLogVariant1::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_cStat();if(field.has_value())model.set_cStat(field.value());}
{auto field=model.get_xMotivo();if(field.has_value())model.set_xMotivo(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::Api1ErrorLogVariant1 getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::Api1ErrorLogVariant1";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::Api1ErrorLog::from_json("\"synthetic\"",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
}catch(const Error&){if(accepted){std::cerr<<"api1_files::Api1ErrorLog getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::Api1ErrorLog";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadXmlQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadXmlQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadXmlQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadCancellationXmlQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadCancellationXmlQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadCancellationXmlQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadCorrectionXmlQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadCorrectionXmlQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadCorrectionXmlQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadCorrectionXmlSequenceQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadCorrectionXmlSequenceQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadCorrectionXmlSequenceQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadManifestationXmlQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadManifestationXmlQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadManifestationXmlQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadPaymentEventXmlQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadPaymentEventXmlQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadPaymentEventXmlQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadPaymentEventXmlSequenceQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadPaymentEventXmlSequenceQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadPaymentEventXmlSequenceQuery";return -1;}++checked;}
{bool accepted=false;try{auto model=api1_files::NfeDownloadIbsCbsEventXmlQuery::from_json("{}",cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;
{auto field=model.get_download();if(field.has_value())model.set_download(field.value());}
}catch(const Error&){if(accepted){std::cerr<<"api1_files::NfeDownloadIbsCbsEventXmlQuery getter/setter failed";return -1;}}if(accepted!=true){std::cerr<<"api1_files::NfeDownloadIbsCbsEventXmlQuery";return -1;}++checked;}
return checked;}
