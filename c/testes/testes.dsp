# Microsoft Developer Studio Project File - Name="testes" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=testes - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "testes.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "testes.mak" CFG="testes - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "testes - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "testes - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "testes - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "c:\temporarioscompilacao\lidadtestes\Release"
# PROP Intermediate_Dir "c:\temporarioscompilacao\lidadtestes\Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /Zi /O2 /I "..\sdk-gecko\include" /I "..\sdk-gecko-nss\Include\nss" /I "..\sdk-xmlsec\libxml2-2.7.3\include" /I "..\sdk-directx9\Include" /I "..\sdk-xmlsec\xmlsec1-1.2.11\include" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x416 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x416 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 ..\sdk-xmlsec\libxml2-2.7.3.win32\lib\libxml2.lib ..\sdk-gecko-nss\lib\nss3.lib /nologo /subsystem:windows /debug /machine:I386 /libpath:"..\sdk-sapi5\Lib\i386"

!ELSEIF  "$(CFG)" == "testes - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "c:\temporarioscompilacao\lidadtestes\Debug"
# PROP Intermediate_Dir "c:\temporarioscompilacao\lidadtestes\Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\sdk-gecko\include" /I "..\sdk-gecko-nss\Include\nss" /I "..\sdk-xmlsec\libxml2-2.7.3\include" /I "..\sdk-directx9\Include" /I "..\sdk-xmlsec\xmlsec1-1.2.11\include" /D "_DEBUG" /D "WIN32" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx_xmlsec.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x416 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x416 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 ..\sdk-gecko-nss\lib\nss3.lib ..\sdk-gecko\lib\nspr4.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept /libpath:"..\sdk-sapi5\Lib\i386"
# Begin Special Build Tool
IntDir=c:\temporarioscompilacao\lidadtestes\Debug
SOURCE="$(InputPath)"
PostBuild_Cmds=cmd /c "copy *.dll $(IntDir)"
# End Special Build Tool

!ENDIF 

# Begin Target

# Name "testes - Win32 Release"
# Name "testes - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\criptografia\cripto.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=..\directshow\directshow.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=..\directshow\InicializarIIDs.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\libxml_all_source.cpp"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\libxml_all_src2.cpp"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\libxml_all_src3.cpp"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\libxml_all_src4.cpp"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\libxml_all_src_extern.cpp"
# End Source File
# Begin Source File

SOURCE="..\sdk-sapi4\wrapper\sapi4_CTTSMode_mod.cpp"
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=..\sapitts\sapi4tts\sapi4tts.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=..\sapitts\sapi5tts\sapi5tts.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "testes - Win32 Release"

# ADD CPP /Yc"stdafx_xmlsec.h"

!ELSEIF  "$(CFG)" == "testes - Win32 Debug"

# ADD CPP /Yc"StdAfx_xmlsec.h"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\testes.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=.\testes.rc
# End Source File
# Begin Source File

SOURCE=.\testesDlg.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec_all_source.cpp"

!IF  "$(CFG)" == "testes - Win32 Release"

# ADD CPP /Yu"stdafx_xmlsec.h"

!ELSEIF  "$(CFG)" == "testes - Win32 Debug"

!ENDIF 

# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec_all_src2.cpp"

!IF  "$(CFG)" == "testes - Win32 Release"

# ADD CPP /Yu"stdafx_xmlsec.h"

!ELSEIF  "$(CFG)" == "testes - Win32 Debug"

!ENDIF 

# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\utils\COMinitializer.h
# End Source File
# Begin Source File

SOURCE=..\criptografia\cripto.h
# End Source File
# Begin Source File

SOURCE=..\directshow\directshow.h
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec1-1.2.11\src\globals.h"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec1-1.2.11\src\ltdl.h"
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE="..\sdk-sapi4\wrapper\sapi4_CTTSMode_mod.h"
# End Source File
# Begin Source File

SOURCE=..\sapitts\sapi4tts\sapi4tts.h
# End Source File
# Begin Source File

SOURCE=..\sapitts\sapi5tts\sapi5tts.h
# End Source File
# Begin Source File

SOURCE=..\sapitts\sapitts.h
# End Source File
# Begin Source File

SOURCE=.\stdafx_xmlsec.h
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\stdafx_xmlsec_base.h"
# End Source File
# Begin Source File

SOURCE=..\utils\StringConvertion.h
# End Source File
# Begin Source File

SOURCE=.\testes.h
# End Source File
# Begin Source File

SOURCE=.\testesDlg.h
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec1-1.2.11\src\xmlsec-ltdl.h"
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\testes.ico
# End Source File
# Begin Source File

SOURCE=.\res\testes.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
