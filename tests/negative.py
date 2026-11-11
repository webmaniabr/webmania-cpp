#!/usr/bin/env python3
"""Installed compiler-negative checks: nominal models, scopes and move-only ownership."""
import pathlib,subprocess,sys
cpp,c,out=map(pathlib.Path,sys.argv[1:]);out.mkdir(parents=True,exist_ok=True)
cases={
 'wrong_model':'void test(webmania::NfeClient& c,webmania::api1_fiscal::NfeCancelRequest& b){c.issue_document(b);}',
 'wrong_scope':'void test(webmania::MonitorToken& token,webmania::Config& cfg){webmania::NfeClient c(token,cfg);}',
 'missing_auth':'void test(webmania::NfeFilesClient& c){c.download_danfe("id");}',
 'copy_model':'void test(webmania::api1_fiscal::NfeDocument& a){auto b=a;}',
 'copy_client':'void test(webmania::NfeClient& a){auto b=a;}',
 'copy_cancel':'void test(webmania::Cancel& a){auto b=a;}',
 'wrong_array':'void test(webmania::arrays::Api1FiscalApi1FiscalNfeDocument& a,webmania::api1_fiscal::NfeCancelRequest& b){a.append(b);}',
 'required_unset':'void test(webmania::api1_b2b::ResellerCreateCompaniesRequest& a){a.unset_quantidade();}',
 'nonnullable_null':'void test(webmania::api1_b2b::ResellerCreateCompaniesRequest& a){a.set_quantidade_null();}',
 'wrong_helper_return':'void test(){webmania::bounded_poll<webmania::Number>([](const webmania::Cancel*){return 1;},[](const webmania::Number&){return false;});}',
 'copy_pending':'void test(webmania::api2_emitter_files::NfsePdfPending& a){auto b=a;}',
 'pending_is_not_file':'void test(webmania::FileOrRedirect& result){webmania::FileResponse file=result.pending();}',
 'raw_type_wrong_value':'void test(webmania::api1_fiscal::TaxClassListItem& item,webmania::Number& value){item.set_type(value);}'
}
flags=['g++','-std=c++17','-Wall','-Wextra','-Werror','-fsyntax-only','-I'+str(cpp/'include'),'-I'+str(c/'include')]
# Positive control first: the same flags must accept a valid consumer, so a wrong
# include prefix or a missing installed header cannot make every negative pass.
control=out/'positive_control.cpp';control.write_text('#include <webmania_cpp/webmania.hpp>\nvoid test(webmania::NfeClient& c){auto r=c.get_sefaz_status();(void)r;}\n')
p=subprocess.run(flags+[str(control)],capture_output=True);assert p.returncode==0,p.stderr.decode(errors='replace');print('positive control compiled PASS',flush=True)
for name,body in cases.items():
 source=out/(name+'.cpp');source.write_text('#include <webmania_cpp/webmania.hpp>\n'+body+'\n')
 process=subprocess.run(flags+[str(source)],capture_output=True)
 (out/(name+'.log')).write_bytes(process.stderr);assert process.returncode!=0,name;assert b'error:'in process.stderr,name;print(name+' rejected PASS',flush=True)
print(str(len(cases))+' installed C++ compiler negatives PASS')
# The homologation example is built against the same installed packages and its fences (allow list,
# ambiente, run.sh) are checked offline.
import homologacao_gate;homologacao_gate.run(cpp,c,out/'homologacao')
