// lidad.cpp : Defines the entry point for the DLL application.
//

#include "stdafx_xmlsec.h"

//#include <libxml\threads.h>
BOOL xmlDllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);
//BOOL xmlDllMain(void *hinstDLL, unsigned long fdwReason, void *lpvReserved);

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	//deveriamos chamar... ou nao... é só limpexa, sei la
	//so libera a memoria, entao pode deixar alguma sujeira, foda-se
	//xmlDllMain((struct HINSTANCE__ *)hModule, ul_reason_for_call, lpReserved);

    return TRUE;
}

