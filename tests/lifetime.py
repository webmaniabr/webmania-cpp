#!/usr/bin/env python3
import subprocess,socket,threading,time,sys,pathlib,os
binary,worker=sys.argv[1:]
for mode in ('invalid','pre','cancel','timeout'):
 listener=socket.socket();listener.bind(('127.0.0.1',0));listener.listen(2);listener.settimeout(1);records=[];closed=threading.Event();ready=threading.Event();process=None
 def serve():
  try:
   conn,_=listener.accept();conn.settimeout(3)
   with conn:
    data=b''
    while b'\r\n\r\n' not in data:data+=conn.recv(65536)
    header,body=data.split(b'\r\n\r\n',1);length=int(next(x.split(b':',1)[1] for x in header.split(b'\r\n') if x.lower().startswith(b'content-length:')))
    while len(body)<length:body+=conn.recv(length-len(body))
    records.append(data);ready.wait(3)
    if mode=='cancel':
     children=(pathlib.Path('/proc')/str(process.pid)/'task'/str(process.pid)/'children').read_text().split();assert len(children)==1,children
     for pid in [str(process.pid)]+children:
      for item in ('cmdline','environ'):
       data=(pathlib.Path('/proc')/pid/item).read_bytes();assert b'synthetic'not in data and b'00000000-0000-4000-8000-000000000001'not in data,(pid,item)
     for fd in (pathlib.Path('/proc')/children[0]/'fd').iterdir():assert 'webmania-cpp-sentinel'not in os.readlink(fd),fd
     process.stdin.write(b'C');process.stdin.flush()
    assert conn.recv(65536)==b'';closed.set()
  except socket.timeout:pass
 thread=threading.Thread(target=serve);thread.start();process=subprocess.Popen([binary,mode,'http://127.0.0.1:'+str(listener.getsockname()[1]),worker],stdin=subprocess.PIPE,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
 ready.set()
 stdout,stderr=process.communicate(timeout=20) if mode!='cancel' else (process.stdout.read(),process.stderr.read())
 if mode=='cancel':process.stdin.close();process.wait(5)
 thread.join(4);listener.close();assert process.returncode==0,(mode,process.returncode,stderr);assert len(records)==(1 if mode in ('cancel','timeout') else 0),(mode,records);assert not records or closed.is_set(),mode;print(stdout.decode().strip(),flush=True)
