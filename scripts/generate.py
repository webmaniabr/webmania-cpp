#!/usr/bin/env python3
"""Generate nominal C++17 API from a separately installed, locked C SDK."""
import argparse,hashlib,json,pathlib,re
p=argparse.ArgumentParser();p.add_argument('--c-prefix',type=pathlib.Path,required=True);p.add_argument('--fixtures',type=pathlib.Path);a=p.parse_args()
ROOT=pathlib.Path(__file__).resolve().parents[1]
def write(path,text):
 if not path.exists() or path.read_text()!=text:path.write_text(text)
meta=json.loads((a.c_prefix/'share/webmania/api-metadata.json').read_text())
locked=json.loads((ROOT/'dependency-lock.json').read_text())
if hashlib.sha256((a.c_prefix/'share/webmania/api-metadata.json').read_bytes()).hexdigest()!=locked['api_metadata_sha256']:raise ValueError('C metadata does not match dependency-lock.json')
header=(a.c_prefix/'include/webmania/models.h').read_text()
functions=set(re.findall(r'\b(wm_\w+)\(',header))
def snake(s):
 s=re.sub(r'([A-Z]+)([A-Z][a-z])',r'\1_\2',s);return re.sub(r'([a-z0-9])([A-Z])',r'\1_\2',s).lower()
def pascal(s):return ''.join(x.title() for x in s.split('_'))
def unwrap(t):
 while any(t.startswith(x+'<') for x in ('Option','Nullable','Box')):t=t[t.index('<')+1:-1]
 return t
arrays={}
def cname(mod,t):
 t=unwrap(t)
 if t.startswith('crate::models::'):_,_,mod,t=t.split('::')
 if t.startswith('Vec<'):
  inner=t[4:-1];n='wm_array_'+mod+'_'+cname(mod,inner).removeprefix('wm_');arrays[n]=(mod,inner);return n
 return {'String':'char','i64':'int64_t','bool':'bool','Number':'wm_number','Scalar':'wm_scalar','Value':'wm_json','Map':'wm_map'}.get(t,'wm_'+mod+'_'+snake(t))
names={'wm_number':'Number','wm_scalar':'Scalar','wm_json':'Json','wm_map':'Map','wm_file_response':'FileResponse','wm_file_or_redirect':'FileOrRedirect'}
for m in meta['models']:names[cname(m['module'],m['name'])]=m['module']+'::'+m['name']
for m in meta['models']:
 for f in m['fields']:
  if f['type']!='Null':cname(m['module'],f['type'])
for o in meta['operations']:
 for p in o['params']:
  if p['type'].startswith('&crate::models::'):cname(o['module'],p['type'][1:])
 if o['returns'] not in ('crate::FileResponse','crate::FileOrRedirect'):cname(o['module'],o['returns'])
for c in arrays:names[c]='arrays::'+pascal(c.removeprefix('wm_array_'))
def cpp(mod,t):
 c=cname(mod,t);return {'char':'std::string','int64_t':'std::int64_t','bool':'bool'}.get(c,names.get(c))
def arg(mod,t):return 'std::string_view' if unwrap(t)=='String' else cpp(mod,t) if unwrap(t) in ('i64','bool') else 'const '+cpp(mod,t)+'&'
def val(t,v='value'):return v if unwrap(t) in ('i64','bool') else v+'.data(),'+v+'.size()' if unwrap(t)=='String' else v+'.native_handle()'
def fieldname(n):
 # C escapes C keywords; C++ escapes additional keywords independently.
 return 'field_'+n if n in set('auto case const continue default do else enum extern float for goto if inline int long register restrict return short signed sizeof static struct switch typedef union unsigned void volatile while'.split()) else n
reserved=set('alignas alignof and and_eq asm bitand bitor bool break catch char char16_t char32_t class compl concept consteval constexpr constinit const_cast co_await co_return co_yield decltype delete double dynamic_cast explicit export false friend mutable namespace new noexcept not not_eq nullptr operator or or_eq private protected public reinterpret_cast requires static_assert static_cast template this thread_local throw true try typeid typename using virtual wchar_t xor xor_eq'.split())
def safe(n):return n+'_' if n in reserved else n
decl=[];defs=[]
def emit_method(c,signature,body):
 decl.append('  '+signature+';')
 before,after=signature.split('(',1);ret,method=before.rsplit(' ',1)
 defs.append('inline '+ret+' '+names[c]+'::'+method+'('+after+' {'+body+'}')
def output(t,call,length=None,union=False,presence=None):
 c=cname(current_mod,t);ct=cpp(current_mod,t);b=unwrap(t)
 if b=='String':init='const char* out=nullptr;';convert='std::string(out,'+length+')'
 elif b in ('i64','bool'):init=c+' out{};';convert='out'
 else:init=c+'* out=nullptr;';convert=ct+'(out)'
 body=init+('wm_error* error=nullptr;' if union else '')+'auto status='+call+';'
 if not union:body+='if(status==WM_ABSENT)return Field<'+ct+'>(Presence::missing);if(status==WM_NULL)return Field<'+ct+'>(Presence::null);'
 body+='detail::check(status'+(',error' if union else '')+');return '+('' if union else 'Field<'+ct+'>(')+convert+('' if union else (','+presence if presence else '')+')')+';'
 return body
for c,(current_mod,t) in arrays.items():
 ns,cls=names[c].split('::');decl+=['namespace '+ns+' {','class '+cls+' final : public detail::Owned<'+c+','+c+'_free> {','public:',f'  {cls}() : Owned({c}_new()) {{}}',f'  explicit {cls}({c}* p) : Owned(p) {{}}']
 emit_method(c,'std::size_t size() const',f'return {c}_count(native_handle());')
 emit_method(c,'void append('+arg(current_mod,t)+' value)',f'detail::check({c}_append'+('_n' if unwrap(t)=='String' else '')+'(native_handle(),'+val(t)+'));')
 if c+'_append_null' in functions:emit_method(c,'void append_null()',f'detail::check({c}_append_null(native_handle()));')
 emit_method(c,'Field<'+cpp(current_mod,t)+'> at(std::size_t index) const',output(t,c+'_get(native_handle(),index,&out)',c+'_length_at(native_handle(),index)'))
 emit_method(c,'std::string to_json() const',f'return detail::string({c}_to_json(native_handle()));')
 decl+=['};','}']
for m in meta['models']:
 current_mod=m['module'];c=cname(current_mod,m['name']);cls=m['name'];ns=m['module']
 decl+=['namespace '+ns+' {','class '+cls+' final : public detail::Owned<'+c+','+c+'_free> {','public:',f'  explicit {cls}({c}* p) : Owned(p) {{}}']
 if m['kind']=='struct':decl.append(f'  {cls}() : Owned({c}_new()) {{}}')
 emit_method(c,'std::string to_json() const',f'return detail::string({c}_to_json(native_handle()));')
 emit_method(c,'static '+cls+' from_json(std::string_view value, const Config& config)',f'wm_error* error=nullptr;auto*p={c}_from_json(value.data(),value.size(),config.native_handle(),&error);if(!p)throw Error(error,WM_INVALID);wm_error_free(error);return {cls}(p);')
 # Declaration is static but definition must not be static.
 defs[-1]=defs[-1].replace('inline static '+cls+' ','inline '+names[c]+' ')
 emit_method(c,cls+' validated_clone(const Config& config) const','return from_json(to_json(),config);')
 defs[-1]=defs[-1].replace('inline '+cls+' ','inline '+names[c]+' ',1)
 emit_method(c,'void validate(const Config& config) const',f'wm_error* error=nullptr;auto status={c}_validate(native_handle(),config.native_handle(),&error);detail::check(status,error);')
 for f in m['fields']:
  n=fieldname(f['name']);name=safe(f['name']);t=f['type'];b=unwrap(t)
  if m['kind']=='struct':
   emit_method(c,'void set_'+name+'('+arg(current_mod,t)+' value)',f'detail::check({c}_set_{n}'+('_n' if b=='String' else '')+'(native_handle(),'+val(t)+'));')
   emit_method(c,'Field<'+cpp(current_mod,t)+'> get_'+name+'() const',output(t,c+'_get_'+n+'(native_handle(),&out)',c+'_length_'+n+'(native_handle())',presence='static_cast<Presence>('+c+'_presence_'+n+'(native_handle()))'))
   emit_method(c,'Presence presence_'+name+'() const',f'return static_cast<Presence>({c}_presence_{n}(native_handle()));')
   if c+'_unset_'+n in functions:emit_method(c,'void unset_'+name+'()',f'detail::check({c}_unset_{n}(native_handle()));')
   if c+'_set_'+n+'_null' in functions:emit_method(c,'void set_'+name+'_null()',f'detail::check({c}_set_{n}_null(native_handle()));')
  else:
   emit_method(c,'static '+cls+' from_'+name+'('+('' if t=='Null' else arg(current_mod,t)+' value')+')',f'return {cls}({c}_from_{n}'+('_n' if b=='String' else '')+'('+('' if t=='Null' else val(t))+'));')
   defs[-1]=defs[-1].replace('inline static '+cls+' ','inline '+names[c]+' ')
   if t=='Null':emit_method(c,'void get_'+name+'(const Config& config) const',f'wm_error* error=nullptr;auto status={c}_get_{n}(native_handle(),config.native_handle(),&error);detail::check(status,error);')
   else:emit_method(c,cpp(current_mod,t)+' get_'+name+'(const Config& config) const',output(t,c+'_get_'+n+'(native_handle(),config.native_handle(),&out,&error)',c+'_length_'+n+'(native_handle())',True))
 if m['kind']=='struct' and m['pointer']:
  emit_method(c,'void set_extension(std::string_view key,const Json& value)',f'detail::check({c}_set_extension_n(native_handle(),key.data(),key.size(),value.native_handle()));')
  emit_method(c,'std::optional<Json> get_extension(std::string_view key) const',f'auto*p={c}_get_extension_n(native_handle(),key.data(),key.size());if(!p)return {{}};return Json(p);')
 decl+=['};','}']
forward=['namespace '+n.split('::')[0]+' { class '+n.split('::')[1]+'; }' for c,n in names.items() if c.startswith(('wm_api','wm_array'))]
out='#pragma once\n#include "core.hpp"\nnamespace webmania {\n'+'\n'.join(forward+decl)+'\n}\n'
write(ROOT/'include/webmania_cpp/models.hpp',out)
(ROOT/'src').mkdir(exist_ok=True)
chunks={}
for d in defs:
 owner=re.search(r'inline .*? (\w+)::\w+::\w+\(',d).group(1)
 chunks.setdefault(owner,[]).append(d.removeprefix('inline '))
for ns,definitions in chunks.items():write(ROOT/'src'/('generated_'+ns+'.cpp'),'#include <webmania_cpp/models.hpp>\nnamespace webmania {\n'+'\n'.join(definitions)+'\n}\n')
clients=['#pragma once','#include "models.hpp"','namespace webmania {']
for scope in ('Nfe','Reseller','Emitter','Monitor','NfeFiles','EmitterFiles'):
 cls=scope+'Client';c='wm_'+snake(cls);cred={'Nfe':'CompanyCredentials','Reseller':'ResellerCredentials','Emitter':'IssuerToken','Monitor':'MonitorToken','NfeFiles':'CompanyCredentials','EmitterFiles':'IssuerToken'}[scope]
 clients+=['class '+cls+' final {',f'  std::shared_ptr<{c}> client_;',f'  explicit {cls}(std::shared_ptr<{c}> value):client_(std::move(value)){{}}','public:',f'  {cls}(const {cred}& credentials,const Config& config):client_({c}_new(credentials.native_handle(),config.native_handle()),{c}_free){{if(!client_)throw std::invalid_argument("Invalid client configuration.");}}']
 if scope.endswith('Files'):clients.append(f'  explicit {cls}(const Config& config):client_({c}_new(nullptr,config.native_handle()),{c}_free){{if(!client_)throw std::invalid_argument("Invalid client configuration.");}}')
 clients += [f'  {cls}({cls}&&) noexcept=default;',f'  {cls}& operator=({cls}&&) noexcept=default;',f'  {cls}(const {cls}&)=delete;',f'  {cls}& operator=(const {cls}&)=delete;',f'  {cls} share()const{{if(!client_)throw std::logic_error("Moved-from client.");return {cls}(client_);}}']
 for o in meta['operations']:
  if o['scope']!=scope:continue
  current_mod=o['module'];params=[];args=['state.get()']
  for p in o['params']:
   n=p['name'];t=p['type']
   if t=='&str':params.append('std::string_view '+n);args.append('detail::cstring('+n+').c_str()')
   elif t=='i64':params.append('std::int64_t '+n);args.append(n)
   elif t=='&crate::FileAuth':params.append('const FileAuth& '+n);args.append(n+'.native_handle()')
   else:params.append('const '+cpp(current_mod,t[1:])+'& '+n);args.append(n+'.native_handle()')
  params.append('const Cancel* cancel=nullptr')
  ret=o['returns'];rc={'crate::FileResponse':'wm_file_response','crate::FileOrRedirect':'wm_file_or_redirect'}.get(ret) or cname(current_mod,ret);rt=names[rc]
  if not o['enabled']:
   ignored=''.join('(void)'+p['name']+';' for p in o['params'])+'(void)cancel;'
   clients.append('  '+rt+' '+o['method']+'('+','.join(params)+')const {'+ignored+rc+'*out=nullptr;wm_error*error=nullptr;auto status=wm_'+snake(o['id'])+'('+','.join(['nullptr']*(len(o['params'])+2)+['&out','&error'])+');throw Error(error,status);}')
   continue
  clients.append('  '+rt+' '+o['method']+'('+','.join(params)+')const {auto state=client_;if(!state)throw std::logic_error("Moved-from client.");auto token=cancel?cancel->keep_alive():std::shared_ptr<wm_cancel>{};'+rc+'*out=nullptr;wm_error*error=nullptr;auto status=wm_'+snake(o['id'])+'('+','.join(args+['token.get()','&out','&error'])+');if(status!=WM_OK){'+rc+'_free(out);throw Error(error,status);}wm_error_free(error);return '+rt+'(out);}')
 clients+=['};']
clients+=['}'];write(ROOT/'include/webmania_cpp/clients.hpp','\n'.join(clients)+'\n')
if a.fixtures:
 cases={x['operation']:x for x in json.loads((a.fixtures/'operations.json').read_text())['cases']}
 lines=['#include <webmania_cpp/webmania.hpp>','#include <fstream>','#include <iostream>','#include <iterator>','using namespace webmania;', 'int main(int argc,char**argv){try{if(argc!=5)return 90;Config cfg;cfg.base_url(argv[2]);cfg.worker_path(argv[4]);std::ifstream in(argv[3]);cfg.ca_pem(std::string(std::istreambuf_iterator<char>(in),{}));cfg.trust_file_origin(argv[2]);CompanyCredentials company("synthetic-company-key","synthetic-secret","synthetic-token","synthetic-secret2");ResellerCredentials reseller("synthetic-reseller-key","synthetic-secret","synthetic-token","synthetic-secret2");IssuerToken issuer("synthetic-issuer");MonitorToken monitor("synthetic-monitor");NfeClient nfe(company,cfg);ResellerClient b2b(reseller,cfg);EmitterClient emitter(issuer,cfg);MonitorClient mon(monitor,cfg);NfeFilesClient nfefiles(company,cfg);EmitterFilesClient emitterfiles(issuer,cfg);auto companyauth=FileAuth::company();auto issuerauth=FileAuth::issuer();auto capabilityauth=FileAuth::public_report();switch(std::stoi(argv[1])){']
 cm={'Nfe':'nfe','Reseller':'b2b','Emitter':'emitter','Monitor':'mon','NfeFiles':'nfefiles','EmitterFiles':'emitterfiles'}
 for i,o in enumerate(meta['operations']):
  case=cases[o['id']];lines.append('case '+str(i)+':{');args=[]
  for p in o['params']:
   n=p['name'];t=p['type']
   if n in ('body','query'):
    data=json.dumps(case['query'] if n=='query' else case['request'],ensure_ascii=False,separators=(',',':'));ty=cpp(o['module'],t[1:]);lines.append('auto '+n+'='+ty+'::from_json('+json.dumps(data,ensure_ascii=True)+',cfg);');args.append(n)
   elif n=='auth':args.append('capabilityauth' if o['id']=='fiscalDownloadReport' else 'companyauth' if o['scope']=='NfeFiles' else 'issuerauth')
   elif t=='&str':args.append(json.dumps(str(case['path_params'][n])))
   else:args.append(str(case['path_params'][n]))
  call=cm[o['scope']]+'.'+o['method']+'('+','.join(args)+')'
  if not o['enabled']:lines.append('try{auto result='+call+';(void)result;return 92;}catch(const Error&e){if(e.kind()!="capability")throw;std::cout<<"blocked";}')
  else:
   lines.append('auto result='+call+';')
   if o['returns'] in ('crate::FileResponse','crate::FileOrRedirect'):
    lines.append('auto bytes='+('result.file()->bytes()' if o['returns']=='crate::FileOrRedirect' else 'result.bytes()')+';constexpr char digits[]="0123456789abcdef";for(auto b:bytes)std::cout<<digits[b>>4]<<digits[b&15];')
   else:lines.append('std::cout<<result.to_json();')
  lines.append('break;}')
 lines+=['default:return 96;}return 0;}catch(const Error&e){std::cerr<<e.kind()<<": "<<e.what();return 93;}catch(const std::exception&e){std::cerr<<e.what();return 94;}}']
 write(ROOT/'tests/generated_matrix.cpp','\n'.join(lines)+'\n')
 models={m['module']+'::'+m['name']:m for m in meta['models']}
 pointers={(m['module'],m['pointer']):m for m in meta['models'] if m['pointer']}
 corpus=json.loads((a.fixtures/'model-corpus.json').read_text());assert len(corpus['cases'])==len(meta['models']) and not corpus['unsampled']
 tests=[(models[c['model']],c['value'],True,c['model']) for c in corpus['cases']]
 for case in json.loads((a.fixtures/'semantic_cases.json').read_text())['cases']:
  m=pointers.get((case['module'],case['pointer']))
  if m:tests.append((m,case['instance'],case['valid'],case['id']))
 groups={}
 for m,value,valid,label in tests:groups.setdefault(m['module'],[]).append((m,value,valid,label))
 main=['#include <webmania_cpp/webmania.hpp>','#include <iostream>']
 for ns,items in groups.items():
  main.append('int corpus_'+ns+'(const webmania::Config&);')
  lines=['#include <webmania_cpp/webmania.hpp>','#include <iostream>','using namespace webmania;','int corpus_'+ns+'(const Config& cfg){int checked=0;']
  for m,value,valid,label in items:
   ty=m['module']+'::'+m['name'];encoded=json.dumps(json.dumps(value,ensure_ascii=False,separators=(',',':')),ensure_ascii=True)
   lines.append('{bool accepted=false;try{auto model='+ty+'::from_json('+encoded+',cfg);accepted=true;auto encoded=model.to_json();if(encoded.empty())return -1;')
   if valid and m['kind']=='struct':
    # Exercise every typed getter and each present setter against a real projected instance.
    for f in m['fields']:
     name=safe(f['name']);lines.append('{auto field=model.get_'+name+'();if(field.has_value())model.set_'+name+'(field.value());}')
   lines.append('}catch(const Error&){if(accepted){std::cerr<<'+json.dumps(label+' getter/setter failed')+';return -1;}}if(accepted!='+('true' if valid else 'false')+'){std::cerr<<'+json.dumps(label)+';return -1;}++checked;}')
  lines.append('return checked;}')
  write(ROOT/'tests'/('generated_corpus_'+ns+'.cpp'),'\n'.join(lines)+'\n')
 main.append('int main(int argc,char**argv){if(argc!=2)return 90;webmania::Config cfg;cfg.worker_path(argv[1]);int total=0;')
 for ns in groups:main.append('{int count=corpus_'+ns+'(cfg);if(count<0)return 1;total+=count;}')
 main.append('std::cout<<"C++ nominal corpus: "<<total<<" model/semantic cases PASS\\n";return 0;}')
 write(ROOT/'tests/generated_models.cpp','\n'.join(main)+'\n')
print(json.dumps({'structs':sum(m['kind']=='struct' for m in meta['models']),'unions':sum(m['kind']=='enum' for m in meta['models']),'arrays':len(arrays),'operations':len(meta['operations']),'enabled':sum(o['enabled'] for o in meta['operations']),'metadata_sha256':hashlib.sha256((a.c_prefix/'share/webmania/api-metadata.json').read_bytes()).hexdigest()}))
