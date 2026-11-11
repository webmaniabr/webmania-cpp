#!/usr/bin/env python3
"""Offline fences of examples/homologacao and its run.sh, built against the installed packages.

The host allow list and the `ambiente` check must stop the example with exit 77 and one
blocked line before the payload, the credentials or any network, and the nfe, nfse and all
scopes need a writable ledger before the credentials. Credentials are never supplied
to a case that is expected to pass a gate, and every configured origin of the fully configured
cases is a closed loopback port, so a regressed gate cannot reach a remote host. run.sh must
refuse a disabled run, a C archive that does not match dependency-lock.json (the manifest of every
file but the README, the pinned library, worker, metadata and wire-name audit; plain directories and
regular files only) and a reused work directory before extracting or building anything. An archive
that differs only in its README is accepted, only its verified files are extracted, and run.sh
builds the example over the installed C prefix repacked. After the fences, the example runs the NF-e
and NFS-e cycles against a loopback fixture (see cancel_poll) with the installed C worker.
Usage: homologacao_gate.py <installed C++ prefix> <installed C prefix> <scratch directory>
"""
import hashlib,http.server,io,json,os,pathlib,shutil,subprocess,sys,tarfile,threading,urllib.parse
R=pathlib.Path(__file__).resolve().parents[1]
HOSTS='webmania.com.br,nfe.webmania.com.br,api.webmania.com.br'
NOT_LIVE='WEBMANIA_LIVE is not 1'
NOT_CONFIGURED='WEBMANIA_LIVE_ALLOWED_HOSTS not configured'
OUTSIDE='configured origin outside WEBMANIA_LIVE_ALLOWED_HOSTS'
AMBIENTE='payload ambiente must be 2'
WORKER='worker path not configured'
CREDENTIALS='company credentials not configured'
LEDGER='WEBMANIA_LIVE_LEDGER not configured'
UNWRITABLE='ledger unwritable'
LOCK='C archive differs from the lock'
NOT_FRESH='work directory is not fresh'
NO_CMAKE='C archive has no CMake package'
# The C archive members whose own digest dependency-lock.json pins, with the key of each.
PINNED=(('lib/libwebmania.a','c_library_sha256'),('libexec/webmania-native-worker','worker_sha256'),
        ('share/webmania/api-metadata.json','api_metadata_sha256'),('share/webmania/wire-name-audit.json','wire_audit_sha256'))
README='share/webmania/README.md'
DIRS=[(name,'dir',b'') for name in ('.','./include','./include/webmania','./lib','./lib/cmake','./lib/cmake/Webmania','./libexec','./share','./share/webmania')]
def manifest(files):
 """c_archive_manifest_sha256 of {path: bytes}: SHA-256 of the sorted "path<TAB>sha256" lines of every file but the README."""
 return hashlib.sha256(''.join(f'{n}\t{hashlib.sha256(files[n]).hexdigest()}\n' for n in sorted(files) if n!=README).encode()).hexdigest()
def stand_in(path,members):
 """Writes a gzip tar of (name, kind, data) members and returns its sha256: kind 'dir', 'file' (data: the bytes),
 'symlink' or 'hardlink' (data: the target) or 'fifo'."""
 with tarfile.open(path,'w:gz') as tar:
  for name,kind,data in members:
   info=tarfile.TarInfo(name);info.mtime=0;info.mode=0o755 if kind=='dir' or name.endswith('-worker') else 0o644
   if kind=='file':info.size=len(data);tar.addfile(info,io.BytesIO(data));continue
   info.type={'dir':tarfile.DIRTYPE,'symlink':tarfile.SYMTYPE,'hardlink':tarfile.LNKTYPE,'fifo':tarfile.FIFOTYPE}[kind]
   if kind in ('symlink','hardlink'):info.linkname=data
   tar.addfile(info)
 return hashlib.sha256(path.read_bytes()).hexdigest()
LOOPBACK={'WEBMANIA_API1_BASE_URL':'https://127.0.0.1:9/api','WEBMANIA_FILES_BASE_URL':'https://127.0.0.1:9','WEBMANIA_API2_BASE_URL':'https://127.0.0.1:9'}
SYNTHETIC={'WEBMANIA_CONSUMER_KEY':'synthetic-company-key','WEBMANIA_CONSUMER_SECRET':'synthetic-company-secret','WEBMANIA_ACCESS_TOKEN':'synthetic-company-access','WEBMANIA_ACCESS_TOKEN_SECRET':'synthetic-company-access-secret','WEBMANIA_ISSUER_TOKEN':'synthetic-issuer'}
def blocked(command,env,reason,label):
 p=subprocess.run(command,env={'PATH':os.environ.get('PATH','/usr/bin:/bin'),**env},capture_output=True,timeout=30)
 assert p.returncode==77,(label,p.returncode,p.stdout,p.stderr)
 expected={'result':'blocked'} if reason is None else {'result':'blocked','reason':reason}
 assert json.loads(p.stdout)==expected,(label,p.stdout,p.stderr)
 print(label+' -> 77 '+(reason or 'blocked')+' PASS',flush=True)
POLL_ATTEMPTS='WEBMANIA_LIVE_POLL_ATTEMPTS must be an integer from 1 to 24'
UUID='00000000-0000-4000-8000-000000000001'
XML=b'<?xml version="1.0"?><nfeProc><NFe/></nfeProc>'
READS={'/api/1/nfe/sefaz/':'nfeGetSefazStatus','/api/1/nfe/certificado/':'nfeGetCertificateValidity','/api/1/nfe/classe-imposto/':'nfeListTaxClasses','/2/nfse/status':'emitterGetNfseProviderStatus'}
# model, consult operation, cancel operation, pending status after the cancel, cancel request, consult request
MODELS=(('nfse','emitterGetNfse','emitterCancelNfse','processando_cancelamento',('PUT','/2/nfse/cancelar'),('GET','/2/nfse/consulta/'+UUID)),
        ('nfe','nfeGetDocument','nfeCancelDocument','processando',('PUT','/api/1/nfe/cancelar/'),('GET','/api/1/nfe/consulta/')))
def cancel_poll(example,worker,out):
 """NF-e and NFS-e issue -> consult -> files -> cancel -> consult against a loopback fixture.

 After the cancellation the example consults again (bounded, with backoff) while the document is
 processing or cancelling, and succeeds only with "cancelado". A cancellation still pending when
 the consults run out is ledgered "unknown" for the cancel operation and the run exits 1. In every
 case the cancel is sent exactly once. Synthetic credentials and payloads only; loopback only."""
 cases={c['operation']:c for c in json.loads((R/'tests/fixtures/operations.json').read_text())['cases']}
 pdf=(R/'tests/fixtures/canonical_plain.pdf').read_bytes()
 count=0
 for model,consult_op,cancel_op,pending,cancel_request,consult_request in MODELS:
  payload=out/('cancel-'+model+'.json')
  payload.write_text(json.dumps({**cases['emitterIssueNfse' if model=='nfse' else 'nfeIssueDocument']['request'],'ambiente':2}))
  for after,attempts in ((['cancelado'],None),([pending,'cancelado'],None),([pending],'3'),(['aprovado'],None)):
   label=f'{model} after cancel {after} attempts {attempts or "default"}'
   seen=[];state={'after':None}
   def status():
    left=state['after']
    if left is None:return 'aprovado'
    return left.pop(0) if len(left)>1 else left[0]
   def reply(method,path):
    if path in READS:return 200,'application/json',json.dumps(cases[READS[path]]['response']).encode()
    if model=='nfse' and (method,path)==('POST','/2/nfse/emissao'):body={'uuid':UUID,'modelo':'nfse','status':'processando'}
    elif model=='nfse' and (method,path)==consult_request:body={**cases['emitterGetNfse']['response'],'uuid':UUID,'status':status()}
    elif model=='nfse' and (method,path)==cancel_request:state['after']=list(after);body={'uuid':UUID,'modelo':'nfse','status':'processando_cancelamento'}
    elif model=='nfe' and (method,path)==('POST','/api/1/nfe/emissao/'):body={'uuid':UUID,'status':'processando'}
    elif model=='nfe' and (method,path)==consult_request:body={'uuid':UUID,'status':status()}
    elif model=='nfe' and (method,path)==('POST','/api/1/nfe/consulta/'):body={'uuid':UUID,'status':'aprovado'}
    elif model=='nfe' and (method,path)==cancel_request:state['after']=list(after);body={'status':'processando'}
    elif path=='/xmlnfse/'+UUID:return 200,'text/xml',XML
    elif path in ('/xmlnfe/'+UUID+'/','/xmlnfe/'+UUID+'/cancelamento'):return 200,'application/xml',XML
    elif path in ('/nfse/'+UUID,'/darps/'+UUID,'/danfe/'+UUID+'/','/danfe/simples/'+UUID+'/'):return 200,'application/pdf',pdf
    else:return 404,'application/json',b'{}'
    return 200,'application/json',json.dumps(body).encode()
   class Handler(http.server.BaseHTTPRequestHandler):
    protocol_version='HTTP/1.1'
    def log_message(self,*args):pass
    def handle_one_request(self):
     try:super().handle_one_request()
     except ConnectionError:self.close_connection=True
    def answer(self):
     length=int(self.headers.get('Content-Length') or 0)
     if length:self.rfile.read(length)
     path=urllib.parse.urlsplit(self.path).path;seen.append((self.command,path))
     code,media,data=reply(self.command,path)
     self.send_response(code);self.send_header('Content-Type',media);self.send_header('Content-Length',str(len(data)));self.end_headers();self.wfile.write(data)
    do_GET=do_POST=do_PUT=answer
   server=http.server.ThreadingHTTPServer(('127.0.0.1',0),Handler);server.daemon_threads=True
   thread=threading.Thread(target=server.serve_forever,daemon=True);thread.start()
   origin='http://127.0.0.1:%d'%server.server_address[1];ledger=out/f'cancel-{model}-{count}.ledger'
   env={'PATH':os.environ.get('PATH','/usr/bin:/bin'),**SYNTHETIC,'WEBMANIA_LIVE':'1','WEBMANIA_LIVE_SCOPE':model,'WEBMANIA_WORKER_PATH':worker,
        'WEBMANIA_API1_BASE_URL':origin+'/api','WEBMANIA_FILES_BASE_URL':origin,'WEBMANIA_API2_BASE_URL':origin,'WEBMANIA_LIVE_ALLOWED_HOSTS':'127.0.0.1',
        'WEBMANIA_LIVE_LEDGER':str(ledger),'WEBMANIA_LIVE_NFE_PAYLOAD':str(payload),'WEBMANIA_LIVE_NFSE_PAYLOAD':str(payload)}
   if attempts:env['WEBMANIA_LIVE_POLL_ATTEMPTS']=attempts
   try:p=subprocess.run(example,env=env,capture_output=True,timeout=120)
   finally:server.shutdown();server.server_close()
   lines=[json.loads(l) for l in p.stdout.decode().splitlines() if l.strip()]
   detail=(label,p.returncode,seen,p.stdout,p.stderr)
   assert seen.count(cancel_request)==1,('exactly one cancel request',detail)
   at=seen.index(cancel_request)
   assert seen[:at].count(consult_request)==1,('one consult before the cancel',detail)
   consults=seen[at:].count(consult_request);xml=seen.count(('GET','/xmlnfe/'+UUID+'/cancelamento'))
   entries=[json.loads(l) for l in ledger.read_text().splitlines() if l.strip()];last=entries[-1]
   verdict=[l for l in lines if l.get('step')==model+'.consult_cancelled'][-1]
   assert [l['ok'] for l in lines if l.get('step')==model+'.cancel']==[True],('cancel succeeded',detail)
   assert last['model']==model and last['identifier']==UUID,('ledger names the document',detail)
   assert xml==(1 if model=='nfe' and after[-1]=='cancelado' else 0),('cancellation XML only after cancelado',detail)
   if after[-1]=='cancelado':
    assert consults==len(after),('consulted until cancelado',detail)
    assert (verdict['ok'],verdict['outcome'])==(True,'success') and (last['status'],last['operation'])==('cancelado',consult_op) and p.returncode==0,('cancelado is success',detail)
   elif after[-1]=='aprovado':
    assert consults==1,('a final status other than cancelado stops the consults',detail)
    assert (verdict['ok'],verdict['outcome'])==(False,'not_cancelled') and (last['status'],last['operation'])==('aprovado',consult_op) and p.returncode==1,('not cancelled',detail)
   else:
    assert consults==3,('bounded by WEBMANIA_LIVE_POLL_ATTEMPTS',detail)
    assert (verdict['ok'],verdict['outcome'])==(False,'unknown') and (last['status'],last['operation'])==('unknown',cancel_op) and p.returncode==1,('pending cancellation is unknown',detail)
   print(label+f' -> exit {p.returncode}, {consults} consults after the cancel PASS',flush=True)
   count+=1
 print(f'Homologation cancellation consults: {count} loopback cycles PASS',flush=True)
def run(cpp,c,out):
 cpp,c,out=pathlib.Path(cpp),pathlib.Path(c),pathlib.Path(out);out.mkdir(parents=True,exist_ok=True)
 build=out/'example'
 subprocess.run(['cmake','-S',str(R/'examples/homologacao'),'-B',str(build),'-DCMAKE_PREFIX_PATH='+str(cpp)+';'+str(c),'-DCMAKE_CXX_FLAGS=-Werror'],check=True,stdout=subprocess.DEVNULL)
 subprocess.run(['cmake','--build',str(build),'--parallel','1'],check=True,stdout=subprocess.DEVNULL)
 example=[str(build/'homologacao')];worker=str(c/'libexec/webmania-native-worker')
 payloads={}
 for name,text in {'text':'{"ambiente":"2"}','nested':'{"dados":{"ambiente":2}}','nested_top_1':'{"ambiente":1,"dados":{"ambiente":2}}','decimal':'{"ambiente":2.0}','exponent':'{"ambiente":2e0}','production':'{"ambiente":1}','missing':'{}','integer':'{"ambiente":2}'}.items():
  path=out/(name+'.json');path.write_text(text);payloads[name]=str(path)
 count=0
 def case(env,reason,label,command=example):
  nonlocal count;blocked(command,env,reason,label);count+=1
 live={'WEBMANIA_LIVE':'1'}
 case({},NOT_LIVE,'not enabled')
 case({'WEBMANIA_LIVE':'0'},NOT_LIVE,'WEBMANIA_LIVE=0')
 # (a) The allow list is required and fail-closed, ahead of the worker, payload and credential gates.
 case(live,NOT_CONFIGURED,'allow list missing')
 case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':''},NOT_CONFIGURED,'allow list empty')
 case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':' , \t,'},NOT_CONFIGURED,'allow list blank')
 case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':'example.org'},OUTSIDE,'allow list foreign')
 case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':'webmania.com.br,nfe.webmania.com.br'},OUTSIDE,'allow list without the API2 host')
 case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':HOSTS,'WEBMANIA_API1_BASE_URL':'https://example.org/api'},OUTSIDE,'foreign API1 origin')
 for origin in ('https://api.webmania.com.br@example.org/','https://api.webmania.com.br:x@example.org/','https://user:@api.webmania.com.br/'):
  case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':HOSTS,'WEBMANIA_API2_BASE_URL':origin},OUTSIDE,'userinfo origin '+origin.split('://',1)[1].rstrip('/'))
 case({**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':' WEBMANIA.com.br , NFE.webmania.com.br ,api.webmania.com.br '},WORKER,'allow list trimmed and case-insensitive passes to the next gate')
 # The same gates with everything else configured (loopback origins, synthetic credentials, payloads).
 full={**live,**LOOPBACK,**SYNTHETIC,'WEBMANIA_WORKER_PATH':worker,'WEBMANIA_LIVE_SCOPE':'all','WEBMANIA_LIVE_NFE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_NFSE_PAYLOAD':payloads['integer']}
 case(full,NOT_CONFIGURED,'fully configured, allow list missing')
 case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':' , '},NOT_CONFIGURED,'fully configured, allow list blank')
 case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':'example.org'},OUTSIDE,'fully configured, allow list foreign')
 case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':'127.0.0.1','WEBMANIA_API2_BASE_URL':'https://127.0.0.1:x@localhost:9'},OUTSIDE,'fully configured, userinfo origin')
 # (b) ambiente must decode to the integer 2 at the top level; the integer 2 reaches the credential gate.
 gate={**live,'WEBMANIA_LIVE_ALLOWED_HOSTS':HOSTS,'WEBMANIA_WORKER_PATH':worker}
 for name in ('text','nested','nested_top_1','decimal','exponent','production','missing'):
  case({**gate,'WEBMANIA_LIVE_SCOPE':'nfe','WEBMANIA_LIVE_NFE_PAYLOAD':payloads[name]},AMBIENTE,'NF-e ambiente '+name)
 case({**gate,'WEBMANIA_LIVE_SCOPE':'nfse','WEBMANIA_LIVE_NFSE_PAYLOAD':payloads['text']},AMBIENTE,'NFS-e ambiente text')
 case({**gate,'WEBMANIA_LIVE_SCOPE':'all','WEBMANIA_LIVE_NFE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_NFSE_PAYLOAD':payloads['decimal']},AMBIENTE,'all scopes, NFS-e ambiente decimal')
 ledger=out/'gate.ledger'
 case({**gate,'WEBMANIA_LIVE_SCOPE':'nfe','WEBMANIA_LIVE_NFE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_LEDGER':str(ledger)},CREDENTIALS,'NF-e ambiente integer 2 passes to the next gate')
 case({**gate,'WEBMANIA_LIVE_SCOPE':'all','WEBMANIA_LIVE_NFE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_NFSE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_LEDGER':str(ledger)},CREDENTIALS,'all scopes, ambiente integer 2 passes to the next gate')
 case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':'127.0.0.1','WEBMANIA_LIVE_NFSE_PAYLOAD':payloads['text']},AMBIENTE,'fully configured, NFS-e ambiente text')
 # (c) A mutation scope needs a writable ledger before any credential is read, also with credentials
 # configured; the read-only scope makes no mutation and needs none.
 for scope in ('nfe','nfse','all'):
  case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':'127.0.0.1','WEBMANIA_LIVE_SCOPE':scope},LEDGER,'fully configured '+scope+', ledger missing')
  case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':'127.0.0.1','WEBMANIA_LIVE_SCOPE':scope,'WEBMANIA_LIVE_LEDGER':str(out/'absent'/'ledger.jsonl')},UNWRITABLE,'fully configured '+scope+', ledger unwritable')
  fresh=out/(scope+'-writable.ledger')
  case({**gate,'WEBMANIA_LIVE_SCOPE':scope,'WEBMANIA_LIVE_NFE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_NFSE_PAYLOAD':payloads['integer'],'WEBMANIA_LIVE_LEDGER':str(fresh)},CREDENTIALS,scope+', writable ledger passes to the credential gate')
  assert fresh.exists(),('the ledger is opened before the credential gate',scope)
 case({**gate,'WEBMANIA_LIVE_SCOPE':'readonly'},CREDENTIALS,'read-only scope without a ledger passes to the credential gate')
 assert not (out/'absent').exists(),'an unwritable ledger path was created'
 # WEBMANIA_LIVE_POLL_ATTEMPTS can only lower the number of consults: 1 to 24, nothing else.
 for attempts in ('0','25','-1','1.5',' 3','abc','100'):
  case({**full,'WEBMANIA_LIVE_ALLOWED_HOSTS':'127.0.0.1','WEBMANIA_LIVE_POLL_ATTEMPTS':attempts},POLL_ATTEMPTS,'fully configured, WEBMANIA_LIVE_POLL_ATTEMPTS '+repr(attempts))
 # run.sh: nothing runs unless WEBMANIA_LIVE=1; the C archive must match the lock; work trees must be fresh.
 script=R/'examples/homologacao/run.sh';work=out/'run-sh-work'
 case({},None,'run.sh not enabled',['sh',str(script)])
 case({'WEBMANIA_LIVE':'0','WEBMANIA_EXAMPLE_WORK':str(work)},None,'run.sh WEBMANIA_LIVE=0',['sh',str(script)])
 foreign=out/'foreign-archive.tar.gz';foreign.write_bytes(b'not the pinned C archive')
 case({**live,'WEBMANIA_C_ARCHIVE':str(foreign),'WEBMANIA_EXAMPLE_WORK':str(work)},LOCK,'run.sh archive differs from the lock',['sh',str(script)])
 case({**live,'WEBMANIA_C_ARCHIVE':str(out/'absent-archive.tar.gz'),'WEBMANIA_EXAMPLE_WORK':str(work)},LOCK,'run.sh archive missing',['sh',str(script)])
 assert not work.exists(),'run.sh wrote its work directory while blocked'
 # Copies of examples/homologacao whose lock pins a synthetic archive: its archive digest, its manifest
 # (c_archive_manifest_sha256) and the digests of its library, worker, metadata and wire-name audit; the other locks
 # lack the manifest or every content digest. Every refusal happens before anything is extracted.
 files={'include/webmania/webmania.h':b'/* synthetic header */\n','lib/cmake/Webmania/WebmaniaTargets.cmake':b'# synthetic targets\n',
        'lib/libwebmania.a':b'synthetic library\n','libexec/webmania-native-worker':b'synthetic worker\n',
        'share/webmania/api-metadata.json':b'{"schema":1}\n','share/webmania/wire-name-audit.json':b'{}\n'}
 def members(content,readme=b'synthetic readme\n'):
  return DIRS+[('./'+name,'file',data) for name,data in content.items()]+[('./'+README,'file',readme)]
 def without(name):return [m for m in members(files) if m[0]!=name]
 pinned=out/'stand-in.tar.gz';pinned_digest=stand_in(pinned,members(files))
 digests={key:hashlib.sha256(files[name]).hexdigest() for name,key in PINNED}
 trees={}
 for label,lock in (('content',{'c_binary_sha256':pinned_digest,'c_archive_manifest_sha256':manifest(files),**digests}),
                    ('no manifest',{'c_binary_sha256':pinned_digest,**digests}),('archive only',{'c_binary_sha256':pinned_digest})):
  tree=out/('run-sh-tree-'+label.replace(' ','-'));shutil.copytree(R/'examples/homologacao',tree/'examples/homologacao')
  (tree/'dependency-lock.json').write_text(json.dumps(lock));trees[label]=['sh',str(tree/'examples/homologacao/run.sh')]
 for name in ('c-prefix','build','prefix','example'):
  reused=out/('reused-'+name);(reused/name).mkdir(parents=True,exist_ok=True);(reused/name/'keep').write_text('keep')
  case({**live,'WEBMANIA_C_ARCHIVE':str(pinned),'WEBMANIA_EXAMPLE_WORK':str(reused)},NOT_FRESH,'run.sh reused '+name+' directory',trees['content'])
  assert sorted(p.name for p in reused.iterdir())==[name] and (reused/name/'keep').read_text()=='keep','run.sh changed a reused work directory'
 # The archive digest changes with any documentation file inside it: an archive that differs from the lock only in its
 # README is accepted, and only its verified files are extracted (the next fence: the synthetic one has no CMake config).
 readme=out/'readme-only.tar.gz';assert stand_in(readme,members(files,b'edited readme\n'))!=pinned_digest
 fresh=out/'readme-only-work'
 case({**live,'WEBMANIA_C_ARCHIVE':str(readme),'WEBMANIA_EXAMPLE_WORK':str(fresh)},NO_CMAKE,'run.sh archive differing from the lock only in its README',trees['content'])
 prefix=fresh/'c-prefix'
 assert sorted(str(p.relative_to(prefix)) for p in prefix.rglob('*') if not p.is_dir())==sorted(files),'run.sh extracted other files than the verified ones'
 assert all((prefix/name).read_bytes()==data for name,data in files.items()),'run.sh extracted other bytes than the verified ones'
 # Mode bits, not access(2): a root process, or a bind mount of Docker Desktop, reports X_OK even for 0644.
 modes={name:os.stat(prefix/name).st_mode&0o111 for name in ('libexec/webmania-native-worker','lib/libwebmania.a')}
 assert modes['libexec/webmania-native-worker'] and not modes['lib/libwebmania.a'],('extracted modes',modes)
 # Anything else blocks before anything is extracted: a lock without the manifest or the content digests, any file
 # changed, missing or added, an extra directory, and every member that is not a plain directory or regular file.
 refused={'lock without the content digests':(members(files),trees['archive only']),'lock without the manifest':(members(files),trees['no manifest'])}
 for name in files:
  refused['modified '+name]=(members({**files,name:files[name]+b'modified\n'}),trees['content'])
  refused['missing '+name]=(members({n:d for n,d in files.items() if n!=name}),trees['content'])
 for label,extra in (('extra file',('./lib/libextra.a','file',b'extra\n')),('extra documentation file',('./share/webmania/NOTES.md','file',b'notes\n')),
                     ('extra empty directory',('./etc','dir',b'')),('library twice, modified copy last',('./lib/libwebmania.a','file',b'modified\n')),
                     ('hard link',('./lib/libcopy.a','hardlink','./lib/libwebmania.a')),('fifo',('./lib/pipe','fifo',b'')),
                     ('absolute path',('/tmp/webmania-absolute','file',b'absolute\n')),('parent directory component',('./../webmania-escape','file',b'escape\n')),
                     ('dot component',('./lib/./libwebmania.a','file',files['lib/libwebmania.a']))):
  refused[label]=(members(files)+[extra],trees['content'])
 refused['worker as a symbolic link']=(without('./libexec/webmania-native-worker')+[('./libexec/webmania-native-worker','symlink','/bin/sh')],trees['content'])
 refused['README as a symbolic link']=(without('./'+README)+[('./'+README,'symlink','/etc/hostname')],trees['content'])
 refused['libexec as a symbolic link']=(without('./libexec')+[('./libexec','symlink','/usr/libexec')],trees['content'])
 for index,(label,(content,command)) in enumerate(refused.items()):
  archive=out/f'refused-{index}.tar.gz';stand_in(archive,content);work=out/f'refused-{index}-work'
  case({**live,'WEBMANIA_C_ARCHIVE':str(archive),'WEBMANIA_EXAMPLE_WORK':str(work)},LOCK,'run.sh '+label,command)
  assert not work.exists(),('run.sh extracted a refused archive',label)
 # c_archive.py in process: a regular member whose data tarfile cannot return (extractfile gives None) is refused
 # with exit 1, which run.sh turns into the 77 above, and nothing is printed (never a traceback).
 sys.dont_write_bytecode=True;sys.path.insert(0,str(R/'examples/homologacao'));import c_archive,contextlib
 lock_file=out/'run-sh-tree-content/dependency-lock.json'
 assert c_archive.main(['verify',str(lock_file),str(pinned)])==0,'c_archive.py refuses the synthetic archive in process'
 original=tarfile.TarFile.extractfile;tarfile.TarFile.extractfile=lambda self,member:None
 try:
  printed=io.StringIO()
  with contextlib.redirect_stdout(printed),contextlib.redirect_stderr(printed):code=c_archive.main(['verify',str(lock_file),str(pinned)])
 finally:tarfile.TarFile.extractfile=original
 assert code==1 and printed.getvalue()=='',('member without data',code,printed.getvalue())
 print('c_archive.py member without data -> 1, nothing printed PASS',flush=True)
 # The installed C prefix repacked: another archive digest, the content dependency-lock.json pins. run.sh builds
 # this facade and the example over it in fresh trees, and the example stops at its first fence.
 repacked=out/'repacked-c.tar.gz'
 with tarfile.open(repacked,'w:gz') as tar:tar.add(str(c),arcname='.')
 assert hashlib.sha256(repacked.read_bytes()).hexdigest()!=json.loads((R/'dependency-lock.json').read_text())['c_binary_sha256']
 work=out/'run-sh-repacked'
 p=subprocess.run(['sh',str(script)],env={'PATH':os.environ.get('PATH','/usr/bin:/bin'),**live,'WEBMANIA_C_ARCHIVE':str(repacked),'WEBMANIA_EXAMPLE_WORK':str(work)},capture_output=True,timeout=1800)
 assert p.returncode==77 and json.loads(p.stdout)=={'result':'blocked','reason':NOT_CONFIGURED},('run.sh over the repacked C prefix',p.returncode,p.stdout,p.stderr[-4000:])
 assert (work/'example/homologacao').is_file(),'run.sh did not build the example'
 print('run.sh over the repacked installed C prefix -> built, 77 '+NOT_CONFIGURED+' PASS',flush=True);count+=1
 print(f'Homologation example fences: {count} blocked cases PASS',flush=True)
 cancel_poll(example,worker,out)
if __name__=='__main__':run(sys.argv[1],sys.argv[2],sys.argv[3])
