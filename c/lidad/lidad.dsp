# Microsoft Developer Studio Project File - Name="lidad" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=lidad - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "lidad.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "lidad.mak" CFG="lidad - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "lidad - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe
# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "c:\temporarioscompilacao\lidad\Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "LIDAD_EXPORTS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "..\sdk-gecko\idl" /I "..\sdk-gecko\include" /I "..\sdk-gecko-nss\Include\nss" /I "..\sdk-directx9\Include" /I "..\sdk-xmlsec\xmlsec1-1.2.11\include" /I "..\sdk-xmlsec\libxml2-2.7.3\include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "LIDAD_EXPORTS" /Yu"stdafx_xmlsec.h" /FD /c
# SUBTRACT CPP /Fr
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x416 /d "NDEBUG"
# ADD RSC /l 0x416 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 nspr4.lib xpcom.lib xpcomglue_s.lib kernel32.lib ole32.lib user32.lib ..\sdk-gecko-nss\lib\nss3.lib /nologo /dll /machine:I386 /libpath:"..\sdk-gecko\lib" /libpath:"..\sdk-sapi5\Lib\i386"
# SUBTRACT LINK32 /nodefaultlib
# Begin Special Build Tool
SOURCE="$(InputPath)"
PostBuild_Cmds=copyfiles_release.bat
# End Special Build Tool
# Begin Target

# Name "lidad - Win32 Release"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\CLidaAudio.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=".\comp-module.cpp"
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE=.\comp.idl
# PROP Ignore_Default_Tool 1
# Begin Custom Build - compilando idl
InputPath=.\comp.idl
InputName=comp

"$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	xpidl-build.bat $(InputName)

# End Custom Build
# End Source File
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
# ADD CPP /Yu"stdafx_xmlsec.h"
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

SOURCE=.\lidad.cpp
# ADD CPP /Yu"stdafx_xmlsec.h"
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
# ADD CPP /Yc"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec_all_source.cpp"
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# Begin Source File

SOURCE="..\sdk-xmlsec\xmlsec_all_src2.cpp"
# ADD CPP /Yu"stdafx_xmlsec.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\CLidaAudio.h
# End Source File
# Begin Source File

SOURCE=.\comp.h
# End Source File
# Begin Source File

SOURCE=..\criptografia\cripto.h
# End Source File
# Begin Source File

SOURCE=..\directshow\directshow.h
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
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
