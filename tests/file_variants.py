#!/usr/bin/env python3
import decimal,json,pathlib,socket,ssl,subprocess,sys,threading,time
R=pathlib.Path(__file__).resolve().parents[1];binary,worker=sys.argv[1:3];results=[]
canary=socket.socket();canary.bind(('127.0.0.1',0));canary.listen();canary.setblocking(False);canary_url='http://127.0.0.1:'+str(canary.getsockname()[1])+'/NEVER-FETCH'
HTML=b'\x00\xff<!doctype html><html><script>fetch("'+canary_url.encode()+b'")</script><iframe src="'+canary_url.encode()+b'"></iframe>opaque\xe7\xa7\x81</html>'
PENDING=b'{"msg":"Synthetic pending previs\xc3\xa3o \xe9\x9b\xa8","big":9007199254740995,"tiny":1.2300e-200,"negzero":-0.000e0,"Case":null,"case":[true,{"x":"extension"}]}'
from file_fixtures import PDF,PROTECTED_PDF,XLSX
ZIP=b'PK\x05\x06'+bytes(18);CSV=b'id,value\r\n001,10.50\r\n'
routes={'nfse':'/nfse/','rps':'/darps/','cte':'/dacte/','correction':'/dacce/','mdfe':'/damdfe/','nfcom':'/danfecom/','dce':'/dace/','xml':'/xmlnfse/','report':'/relatorio/'}
def test(name,tls=False,op='nfse',auth='anonymous',body=PENDING,status=200,media='application/json',want='pending',kind=None,location=None,control='none',zero=False,timeout=3000):
 listener=socket.socket();listener.bind(('127.0.0.1',0));listener.listen(2);listener.settimeout(.1);port=listener.getsockname()[1];url=('https://localhost:' if tls else 'http://127.0.0.1:')+str(port);records=[];errors=[];done=threading.Event();ready=threading.Event();process=None;seen_eof=False
 def serve():
  nonlocal seen_eof
  try:
   while not done.is_set():
    try:conn,_=listener.accept();break
    except socket.timeout:continue
   else:return
   conn.settimeout(8)
   if tls:
    context=ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER);context.load_cert_chain(str(R/'tests/fixtures/tls/leaf.pem'),str(R/'tests/fixtures/tls/leaf.key'));conn=context.wrap_socket(conn,server_side=True)
   with conn:
    request=b''
    while b'\r\n\r\n' not in request:
     data=conn.recv(65536)
     if not data:return
     request+=data
    header,payload=request.split(b'\r\n\r\n',1);lines=header.decode().split('\r\n');headers={k.lower():v.strip() for k,v in (line.split(':',1) for line in lines[1:])};length=int(headers.get('content-length','0'))
    while len(payload)<length:payload+=conn.recv(length-len(payload))
    records.append((lines[0],headers,payload));ready.wait(3)
    if control in ('cancel','deadline'):
     if control=='cancel':process.stdin.write(b'C');process.stdin.flush()
     seen_eof=conn.recv(1)==b'';return
    extra=('Location: '+location+'\r\n') if location else ''
    conn.sendall(f'HTTP/1.1 {status} Synthetic\r\nContent-Type: {media}\r\nContent-Length: {len(body)}\r\n{extra}Connection: close\r\n\r\n'.encode()+body)
    if tls:
     try:conn.unwrap().close()
     except (ssl.SSLError,OSError):pass
  except (BrokenPipeError,ConnectionResetError,ssl.SSLEOFError):
   if control in ('cancel','deadline'):seen_eof=True
  except Exception as error:errors.append(repr(error))
 thread=threading.Thread(target=serve);thread.start();process=subprocess.Popen([binary,op,auth,url,str(R/'tests/fixtures/tls/ca.pem'),worker,str(timeout),control],stdin=subprocess.PIPE,stdout=subprocess.PIPE,stderr=subprocess.PIPE);ready.set();raw=process.stdout.read();stderr=process.stderr.read();process.stdin.close();code=process.wait(10);done.set();thread.join(9);assert not thread.is_alive(),name
 listener.setblocking(False);late=0
 while True:
  try:conn,_=listener.accept();conn.close();late+=1
  except BlockingIOError:break
 listener.close();assert code==0,(name,code,stderr);assert not errors,(name,errors);assert late==0,(name,'retry/follow/poll');value=json.loads(raw,parse_float=decimal.Decimal)
 if want in ('pending','file','redirect'):
  assert value['ok']is True,(name,value);result=value['result'];assert result['kind']==want,(name,value)
  if want=='file':assert result['status']==status and result['media_type']==media.split(';')[0].lower().strip() and result['file_kind']==kind and bytes.fromhex(result['bytes_hex'])==body,(name,value)
  elif want=='pending':
   assert result['status']==200 and result['media_type']=='application/json' and result['value']==json.loads(body,parse_float=decimal.Decimal),(name,value)
   assert 'bytes_hex'not in result and 'protected_location'not in result
   for lexeme in (b'"big":9007199254740995',b'"tiny":1.2300e-200',b'"negzero":-0.000e0'):
    if lexeme in body:assert lexeme in raw,(name,'number changed')
  else:assert result['protected_location']==location,(name,value)
 else:assert value['ok']is False and value['kind']==want,(name,value)
 assert len(records)==(0 if zero else 1),(name,len(records))
 if records:
  line,headers,payload=records[0];assert line.split(' ')[1].startswith(routes[op]),(name,line);assert not any(key.startswith('x-consumer')or key.startswith('x-access')for key in headers),(name,'company credentials sent')
  if auth=='issuer':assert headers.get('authorization')=='Bearer SyntheticIssuerForCAlpha3' and 'token='not in line,(name,headers)
  elif auth=='document_token':assert 'token=SyntheticDocumentForCAlpha3'in line and 'authorization'not in headers,(name,headers)
  else:assert 'authorization'not in headers and 'token='not in line,(name,headers)
 if control in ('cancel','deadline'):assert seen_eof and value['unknown']is True,(name,value)
 try:conn,_=canary.accept();conn.close();raise AssertionError((name,'canary fetched'))
 except BlockingIOError:pass
 results.append({'case':name,'tls':tls,'operation':op,'auth':auth,'kind':want,'requests':len(records),'canary':0});print(('TLS'if tls else'HTTP'),name,want,'PASS',flush=True)
from file_gate_cases import file_gate_cases
for tls in (False,True):
 for op in ('nfse','rps','cte','correction','mdfe','nfcom','dce'):
  for auth in (('issuer',)if op=='mdfe'else('issuer','document_token','anonymous')):test('html-'+op+'-'+auth,tls,op,auth,HTML,media='TeXt/HtMl; Charset=ISO-8859-1',want='file',kind='Html')
 for auth in ('issuer','document_token','anonymous'):test('pending-'+auth,tls,auth=auth)
 for key,val in [('error','false'),('error','null'),('error','""'),('error','0'),('error','{}'),('error','[]'),('success','false'),('erro','"meaningful"'),('errors','[1]')]:test('error-'+key+'-'+val,tls,body=('{"msg":"pending","'+key+'":'+val+'}').encode(),want='business')
 for key,val in [('success','true'),('erro','false'),('erro','null'),('errors','[]'),('erro','{}')]:test('pending-extra-'+key+'-'+val,tls,body=('{"msg":"","'+key+'":'+val+'}').encode())
 for name,body,want in [('number',b'{"msg":7}','response_schema'),('null',b'{"msg":null}','response_schema'),('missing',b'{"state":"queued"}','business'),('array',b'[]','response_schema'),('duplicate',b'{"msg":"a","msg":"b"}','protocol'),('truncated',b'{"msg":','protocol')]:test('invalid-pending-'+name,tls,body=body,want=want)
 test('wrong-route-pending',tls,op='rps',want='business');test('wrong-mime-json',tls,media='application/problem+json',want='protocol');test('undeclared-status',tls,status=201,want='protocol');test('http-error',tls,status=503,want='http')
 test('html-mislabeled-pdf',tls,body=HTML,media='application/pdf',want='protocol');test('html-wrong-route',tls,op='xml',body=HTML,media='text/html',want='protocol')
 test('pdf-regression',tls,body=PDF,media='application/pdf',want='file',kind='Pdf');test('xml-regression',tls,op='xml',body=b'<Nfse>synthetic</Nfse>',media='text/xml',want='file',kind='Xml');test('zip-regression',tls,op='xml',body=ZIP,media='application/zip',want='file',kind='Zip');test('report-csv',tls,op='report',auth='capability',body=CSV,media='text/csv',want='file',kind='Csv')
 test('redirect',tls,body=b'',status=302,media='text/plain',want='redirect',location=canary_url+'?token=SyntheticLocationCapability')
 for auth in ('anonymous','document_token'):test('mdfe-denied-'+auth,tls,op='mdfe',auth=auth,body=HTML,media='text/html',want='capability',zero=True)
 test('pre-cancel',tls,control='pre',want='cancelled',zero=True)
 test('cancel',tls,auth='issuer',control='cancel',want='cancelled');test('deadline',tls,auth='issuer',control='deadline',timeout=180,want='timeout')

 # Fresh paired FILE01/02 controls use coherent sealed positives and malformed pairs.
 for label,body,media,expected,kind in file_gate_cases():
  test('gate-'+label,tls,op='report',auth='capability',body=body,media=media,want=expected,kind=kind)
# Each is an explicit call; a completed Pending never schedules another request.
test('explicit-first-pending');test('explicit-second-html',body=HTML,media='text/html',want='file',kind='Html')
if '--large' in sys.argv:
 test('html-exact-16MiB',body=b'H'*(16*1024*1024),media='text/html',want='file',kind='Html',timeout=15000)
 test('html-over-16MiB',body=b'H'*(16*1024*1024+1),media='text/html',want='body_limit',timeout=15000)
 prefix=b'{"msg":"pending","x":"';suffix=b'"}';body=prefix+b'a'*(16*1024*1024-len(prefix)-len(suffix))+suffix
 test('pending-exact-16MiB',body=body,timeout=15000)
canary.close();path=pathlib.Path(sys.argv[3])if len(sys.argv)>3 else None
if path:path.write_text(json.dumps({'cases':len(results),'requests':sum(x['requests']for x in results),'canary_requests':0,'results':results},indent=2)+'\n')
print('C++ HTML/Pending/file/auth controls:',len(results),'PASS',flush=True)
