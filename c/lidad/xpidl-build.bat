rem ante do ff9
rem ..\sdk-xulrunner-atual\sdk\bin\xpidl.exe -m header -I..\sdk-xulrunner-atual\idl %1.idl
rem depois do ff9
"..\Portable Python 2.7.2.1\App\python.exe" ..\sdk-xulrunner-atual\sdk\bin\header.py  -I..\sdk-xulrunner-atual\idl -o %1.h %1.idl

rem ante do ff9:
rem ..\sdk-xulrunner-atual\sdk\bin\xpidl.exe -m typelib -I..\sdk-xulrunner-atual\idl %1.idl
rem depois do ff9
"..\Portable Python 2.7.2.1\App\python.exe" ..\sdk-xulrunner-atual\sdk\bin\typelib.py  -I..\sdk-xulrunner-atual\idl -o %1.xpt %1.idl
