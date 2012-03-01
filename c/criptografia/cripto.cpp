#include "stdafx_xmlsec.h"

#include <string>

#include <windows.h>        // System includes
#include <atlbase.h>		// ATL
#include <objbase.h>
#include "..\..\sdk-sapi5\Include\sapi.h"           // SAPI includes


//para inicializar o COM
#include "..\..\utils\COMinitializer.h"

#include "cripto.h"


std::string xmlSec_registro_erros;
void xmlSec_registrar_erro(const char *str) 
{
	xmlSec_registro_erros += str;
	xmlSec_registro_erros += "\n";
}



/*
==============================================================
==============================================================
==============================================================
codigo que copiamos do xmlsec.exe e depois limpamos
*/


//arquivo cmdline.h
//vazio, tiramos tudo


//arquivo cmdline.c
//ja tiramos tudo


//arquivo crypto.h
/** 
 * XMLSec library
 *
 *
 * See Copyright for the status of this software.
 * 
 * Copyright (C) 2002-2003 Aleksey Sanin <aleksey@aleksey.com>
 */
#ifndef __XMLSEC_APPS_CRYPTO_H__
#define __XMLSEC_APPS_CRYPTO_H__    

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */ 

#include <libxml/tree.h>
#include <xmlsec/xmlsec.h>
#include <xmlsec/keys.h>
#include <xmlsec/keyinfo.h>
#include <xmlsec/keysmngr.h>
#include <xmlsec/crypto.h>

int	xmlSecAppCryptoInit					(const char* config);
int	xmlSecAppCryptoShutdown					(void);


/*****************************************************************************
 *
 * Simple keys manager
 *
 ****************************************************************************/
int	xmlSecAppCryptoSimpleKeysMngrInit			(xmlSecKeysMngrPtr mngr);
int	xmlSecAppCryptoSimpleKeysMngrLoad			(xmlSecKeysMngrPtr mngr, 
								 const char *filename);
int	xmlSecAppCryptoSimpleKeysMngrSave			(xmlSecKeysMngrPtr mngr, 
								 const char *filename,
								 xmlSecKeyDataType type);
int 	xmlSecAppCryptoSimpleKeysMngrBinaryKeyLoad		(xmlSecKeysMngrPtr mngr, 
								 const char* keyKlass, 
								 const std::string &senha_binhex_aeskey, 
								 const char *name);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __XMLSEC_APPS_CRYPTO_H__ */





//arquivo crypto.c
/** 
 *
 * XMLSec library
 * 
 * 
 * See Copyright for the status of this software.
 * 
 * Copyright (C) 2002-2003 Aleksey Sanin <aleksey@aleksey.com>
 */

#include <string.h>

#include <xmlsec/xmlsec.h>
#include <xmlsec/keys.h>
#include <xmlsec/transforms.h>
#include <xmlsec/errors.h>

//#include "crypto.h"

int
xmlSecAppCryptoInit(const char* config) {
    if(xmlSecCryptoAppInit(config) < 0) {
	xmlSecErr_a_ignorar5(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecCryptoAppInit",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    XMLSEC_ERRORS_NO_MESSAGE);
	return(-1);
    }
    if(xmlSecCryptoInit() < 0) {
	xmlSecErr_a_ignorar5(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecCryptoInit",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    XMLSEC_ERRORS_NO_MESSAGE);
	return(-1);
    }
    
    return(0);
}

int
xmlSecAppCryptoShutdown(void) {
    if(xmlSecCryptoShutdown() < 0) {
	xmlSecErr_a_ignorar5(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecCryptoShutdown",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    XMLSEC_ERRORS_NO_MESSAGE);
	return(-1);
    }

    if(xmlSecCryptoAppShutdown() < 0) {
	xmlSecErr_a_ignorar5(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecCryptoAppShutdown",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    XMLSEC_ERRORS_NO_MESSAGE);
	return(-1);
    }
    return(0);
}

int
xmlSecAppCryptoSimpleKeysMngrInit(xmlSecKeysMngrPtr mngr) {
    xmlSecAssert2(mngr != NULL, -1);

    return(xmlSecCryptoAppDefaultKeysMngrInit(mngr));
}

int
xmlSecAppCryptoSimpleKeysMngrLoad(xmlSecKeysMngrPtr mngr, const char *filename) {
    xmlSecAssert2(mngr != NULL, -1);
    xmlSecAssert2(filename != NULL, -1);
    
    return(xmlSecCryptoAppDefaultKeysMngrLoad(mngr, filename));
}

int 
xmlSecAppCryptoSimpleKeysMngrSave(xmlSecKeysMngrPtr mngr, const char *filename, xmlSecKeyDataType type) {
    xmlSecAssert2(mngr != NULL, -1);
    xmlSecAssert2(filename != NULL, -1);
    
    return(xmlSecCryptoAppDefaultKeysMngrSave(mngr, filename, type));
}




int 
xmlSecAppCryptoSimpleKeysMngrBinaryKeyLoad(xmlSecKeysMngrPtr mngr, const char* keyKlass, 
										   const std::string &senha_binhex_aeskey, const char *name) {
    xmlSecKeyPtr key;
    xmlSecKeyDataId dataId;
    int ret;

    xmlSecAssert2(mngr != NULL, -1);
    xmlSecAssert2(keyKlass != NULL, -1);

    /* find requested data */
    dataId = xmlSecKeyDataIdListFindByName(xmlSecKeyDataIdsGet(), BAD_CAST keyKlass, 
					   xmlSecKeyDataUsageAny);
    if(dataId == xmlSecKeyDataIdUnknown) {
	xmlSecErr_a_ignorar6(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecKeyDataIdListFindByName",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    "name=%s",
		    xmlSecErrorsSafeString(keyKlass));
	return(-1);    
    }

	//vamos converter a senha de binhex para binario
#define TAMANHO_DA_CHAVE_BYTES (128/8)
	xmlSecByte senhaBin[TAMANHO_DA_CHAVE_BYTES + 10];

	//trabalhamos com maiusculas
	std::string hexCodeUp = "0123456789ABCDEF";
	std::string hexCodeLow = "0123456789abcdef";

	if(senha_binhex_aeskey.length() != TAMANHO_DA_CHAVE_BYTES * 2)
	{
		xmlSec_registrar_erro("Error: wrong key size");
		return -1;
	}
	for(int i = 0; i < TAMANHO_DA_CHAVE_BYTES; i++)
	{
		std::string::size_type pos1 = hexCodeUp.find(senha_binhex_aeskey[i*2]);
		if(pos1 == std::string::npos)
			pos1 = hexCodeLow.find(senha_binhex_aeskey[i*2]);
		if(pos1 == std::string::npos)
		{
			xmlSec_registrar_erro("Error: invalid binhex chars");
			return -1;
		}

		std::string::size_type pos2 = hexCodeUp.find(senha_binhex_aeskey[i*2 + 1]);
		if(pos2 == std::string::npos)
			pos2 = hexCodeLow.find(senha_binhex_aeskey[i*2 + 1]);
		if(pos2 == std::string::npos)
		{
			xmlSec_registrar_erro("Error: invalid binhex chars");
			return -1;
		}

		senhaBin[i] = pos1 * 16 + pos2;
	}


	key = xmlSecKeyReadMemory(dataId, senhaBin, TAMANHO_DA_CHAVE_BYTES);
    if(key == NULL) {
	xmlSecErr_a_ignorar5(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecKeyReadBinaryFile",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    XMLSEC_ERRORS_NO_MESSAGE);
	return(-1);    
    }
    
    ret = xmlSecKeySetName(key, BAD_CAST name);
    if(ret < 0) {
	xmlSecErr_a_ignorar6(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecKeySetName",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    "name=%s",
		    xmlSecErrorsSafeString(name));
	xmlSecKeyDestroy(key);
	return(-1);    
    }

    /* finally add it to keys manager */    
    ret = xmlSecCryptoAppDefaultKeysMngrAdoptKey(mngr, key);
    if(ret < 0) {
	xmlSecErr_a_ignorar5(XMLSEC_ERRORS_HERE,
		    NULL,
		    "xmlSecCryptoAppDefaultKeysMngrAdoptKey",
		    XMLSEC_ERRORS_R_XMLSEC_FAILED,
		    XMLSEC_ERRORS_NO_MESSAGE);
	xmlSecKeyDestroy(key);
	return(-1);
    }

    return(0);
}




//arquivo xmlsec.c
/** 
 * XML Security standards test: XMLDSig
 * 
 * See Copyright for the status of this software.
 * 
 * Copyright (C) 2002-2003 Aleksey Sanin <aleksey@aleksey.com>
 */
#include <stdlib.h>
#include <string.h>
#include <time.h>

#if defined(_MSC_VER)
#define snprintf _snprintf
#endif

#include <libxml/tree.h>
#include <libxml/xmlmemory.h>
#include <libxml/parser.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>

#ifndef XMLSEC_NO_XSLT
#include <libxslt/xslt.h>
#include <libxslt/extensions.h> 
#include <libxslt/xsltInternals.h>
#include <libxslt/xsltutils.h>
#include <libexslt/exslt.h>
#endif /* XMLSEC_NO_XSLT */

#include <xmlsec/xmlsec.h>
#include <xmlsec/xmltree.h>
#include <xmlsec/keys.h>
#include <xmlsec/keyinfo.h>
#include <xmlsec/keysmngr.h>
#include <xmlsec/transforms.h>
#include <xmlsec/xmldsig.h>
#include <xmlsec/xmlenc.h>
#include <xmlsec/xkms.h>
#include <xmlsec/parser.h>
#include <xmlsec/templates.h>
#include <xmlsec/errors.h>

//#include "crypto.h"
//#include "cmdline.h"



typedef struct _xmlSecAppXmlData				xmlSecAppXmlData,
								*xmlSecAppXmlDataPtr;
struct _xmlSecAppXmlData {
    xmlDocPtr	doc;
    xmlDtdPtr	dtd;
    xmlNodePtr	startNode;
};

static xmlSecAppXmlDataPtr	xmlSecAppXmlDataCreateFromText		(const char* texto_entrada,
								 const xmlChar* defStartNodeName,
								 const xmlChar* defStartNodeNs);
static void			xmlSecAppXmlDataDestroy		(xmlSecAppXmlDataPtr data);


static int			xmlSecAppInit			(void);
static void			xmlSecAppShutdown		(void);
static int			xmlSecAppLoadKeys		(const std::string &senha_binhex_aeskey);
static int			xmlSecAppPrepareKeyInfoReadCtx	(xmlSecKeyInfoCtxPtr ctx);

#ifndef XMLSEC_NO_XMLENC
static int			xmlSecAppDecryptText		(const char* texto_entrada, std::string &texto_saida);
static int			xmlSecAppPrepareEncCtx		(xmlSecEncCtxPtr encCtx);
#endif /* XMLSEC_NO_XMLENC */


static int			xmlSecAppWriteResultString		(xmlDocPtr doc,
								 xmlSecBufferPtr buffer, std::string &texto_saida);
static int 			xmlSecAppAddIDAttr		(xmlNodePtr cur,
								 const xmlChar* attr,
								 const xmlChar* node,
								 const xmlChar* nsHref);								 


xmlSecKeysMngrPtr gKeysMngr = NULL;
clock_t total_time = 0;
const char* xmlsec_crypto = XMLSEC_CRYPTO;

int xmlsec_descriptografar_arquivo_na_memoria(const char *texto_entrada, std::string &texto_saida, const char *senha_binhex_aeskey) 
{
    int res = 1;
            
    /* now init the xmlsec and all other libs */
	//xmlsec_crypto é o nome do engine
	//xmlsec_crypto = tmp;
    
    if(xmlSecAppInit() < 0) {
	xmlSec_registrar_erro("Error: initialization failed");
	goto fail;
    }    
    
    /* load keys */
    if(xmlSecAppLoadKeys(senha_binhex_aeskey) < 0) {
	xmlSec_registrar_erro("Error: keys manager creation failed");
	goto fail;
    }
    
    /* execute */
#ifndef XMLSEC_NO_XMLENC
	if(xmlSecAppDecryptText(texto_entrada, texto_saida) < 0) 
	{
	    xmlSec_registrar_erro("Error: failed to decrypt file ");
	    goto fail;
    }
#endif /* XMLSEC_NO_XMLENC */



    res = 0;
fail:
    if(gKeysMngr != NULL) {
	xmlSecKeysMngrDestroy(gKeysMngr);
	gKeysMngr = NULL;
    }

	//se chamamos, trava no firefox
	//mas temos que inicializar, ou nao funciona!
	//entao fica assim....
//    xmlSecAppShutdown();
    return(res);
}



#ifndef XMLSEC_NO_XMLENC


static int 
xmlSecAppDecryptText(const char* texto_entrada, std::string &texto_saida) {
    xmlSecAppXmlDataPtr data = NULL;
    xmlSecEncCtx encCtx;
    clock_t start_time;
    int res = -1;

    if(texto_entrada == NULL) {
	return(-1);
    }

    if(xmlSecEncCtxInitialize(&encCtx, gKeysMngr) < 0) {
	xmlSec_registrar_erro("Error: enc context initialization failed");
	return(-1);
    }
    if(xmlSecAppPrepareEncCtx(&encCtx) < 0) {
	xmlSec_registrar_erro("Error: enc context preparation failed");
	goto done;
    }

    /* parse template and select start node */
    data = xmlSecAppXmlDataCreateFromText(texto_entrada, xmlSecNodeEncryptedData, xmlSecEncNs);
    if(data == NULL) {
	xmlSec_registrar_erro("Error: failed to load template ");
	goto done;
    }

    start_time = clock();  
    if(xmlSecEncCtxDecrypt(&encCtx, data->startNode) < 0) {
	xmlSec_registrar_erro("Error: failed to decrypt file");
	goto done;
    }
    total_time += clock() - start_time;    
    
    /* print out result only once per execution */
	if(encCtx.resultReplaced) {
	    if(xmlSecAppWriteResultString(data->doc, NULL, texto_saida) < 0) {
		goto done;
	    }
	} else {
	    if(xmlSecAppWriteResultString(NULL, encCtx.result, texto_saida) < 0) {
		goto done;
	    }
	}	
    res = 0;    

done:
    xmlSecEncCtxFinalize(&encCtx);

    if(data != NULL) {
	xmlSecAppXmlDataDestroy(data);
    }
    return(res);
}

static int
xmlSecAppPrepareEncCtx(xmlSecEncCtxPtr encCtx) {    
    if(encCtx == NULL) {
	xmlSec_registrar_erro("Error: enc context is null");
	return(-1);
    }

    /* set key info params */
    if(xmlSecAppPrepareKeyInfoReadCtx(&(encCtx->keyInfoReadCtx)) < 0) {
	xmlSec_registrar_erro("Error: failed to prepare key info context");
	return(-1);
    }


    return(0);
}

#endif /* XMLSEC_NO_XMLENC */




static int 
xmlSecAppPrepareKeyInfoReadCtx(xmlSecKeyInfoCtxPtr keyInfoCtx) {
    
    if(keyInfoCtx == NULL) {
	xmlSec_registrar_erro("Error: key info context is null");
	return(-1);
    }



    return(0);
}

static int 
xmlSecAppLoadKeys(const std::string &senha_binhex_aeskey) {
    
    if(gKeysMngr != NULL) {
	xmlSecKeysMngrDestroy(gKeysMngr);
	gKeysMngr = NULL;
    }

    /* create and initialize keys manager */
    gKeysMngr = xmlSecKeysMngrCreate();
    if(gKeysMngr == NULL) {
	xmlSec_registrar_erro("Error: failed to create keys manager.");
	return(-1);
    }
    if(xmlSecAppCryptoSimpleKeysMngrInit(gKeysMngr) < 0) {
	xmlSec_registrar_erro("Error: failed to initialize keys manager.");
	return(-1);
    }    


    /* read all AES keys */
	if(xmlSecAppCryptoSimpleKeysMngrBinaryKeyLoad(gKeysMngr, 
		    "aes", senha_binhex_aeskey, "--aeskey") < 0) {
	    xmlSec_registrar_erro("Error: failed to load aes key from file.");
	    return(-1);
	}



    return(0);
}

static int intialized = 0;
static int
xmlSecAppInit(void) {
    if(intialized != 0) {
	return(0);
    }
    intialized = 1;
    
    /* Init libxml */     
    xmlInitParser();
    LIBXML_TEST_VERSION
    xmlTreeIndentString = "\t";
#ifndef XMLSEC_NO_XSLT
    xmlIndentTreeOutput = 1; 
#endif /* XMLSEC_NO_XSLT */
        	
    /* Init xmlsec */
    if(xmlSecInit() < 0) {
	xmlSec_registrar_erro("Error: xmlsec intialization failed.");
	return(-1);
    }
    if(xmlSecCheckVersion() != 1) {
	xmlSec_registrar_erro("Error: loaded xmlsec library version is not compatible.");
	return(-1);
    }

#if !defined(XMLSEC_NO_CRYPTO_DYNAMIC_LOADING) && defined(XMLSEC_CRYPTO_DYNAMIC_LOADING)
    if(xmlSecCryptoDLLoadLibrary(BAD_CAST xmlsec_crypto) < 0) {
	xmlSec_registrar_erro("Error: unable to load xmlsec-XXXX library. Make sure that you have\n"
			"this it installed, check shared libraries path (LD_LIBRARY_PATH)\n"
			"envornment variable or use \"--crypto\" option to specify different\n"
			"crypto engine.\n");
	return(-1);	
    }
#endif /* !defined(XMLSEC_NO_CRYPTO_DYNAMIC_LOADING) && defined(XMLSEC_CRYPTO_DYNAMIC_LOADING) */

    /* Init Crypto */
    if(xmlSecAppCryptoInit(NULL) < 0) {
	xmlSec_registrar_erro("Error: xmlsec crypto intialization failed.");
	return(-1);
    }
    return(0);
}

static void
xmlSecAppShutdown(void) {
    if(intialized == 0) {
	return;
    }
    intialized = 0;

    /* Shutdown Crypto */
    if(xmlSecAppCryptoShutdown() < 0) {
	xmlSec_registrar_erro("Error: xmlsec crypto shutdown failed.");
    }
    
    /* Shutdown xmlsec */
    if(xmlSecShutdown() < 0) {
	xmlSec_registrar_erro("Error: xmlsec shutdown failed.");
    }
    
    /* Shutdown libxslt/libxml */
#ifndef XMLSEC_NO_XSLT
    xsltCleanupGlobals();            
#endif /* XMLSEC_NO_XSLT */
    xmlCleanupParser();
}

static xmlSecAppXmlDataPtr 
xmlSecAppXmlDataCreateFromText(const char* texto_entrada, const xmlChar* defStartNodeName, const xmlChar* defStartNodeNs) {
    xmlSecAppXmlDataPtr data;
    xmlNodePtr cur = NULL;
        
    /* create object */
    data = (xmlSecAppXmlDataPtr) xmlMalloc(sizeof(xmlSecAppXmlData));
    if(data == NULL) {
	xmlSec_registrar_erro("Error: failed to create xml data");
	return(NULL);
    }
    memset(data, 0, sizeof(xmlSecAppXmlData));
    
    /* parse doc */
    data->doc = xmlSecParseMemory( (const unsigned char *)texto_entrada, strlen(texto_entrada), FALSE);
    if(data->doc == NULL) {
	xmlSec_registrar_erro("Error: failed to parse xml file ");
	xmlSecAppXmlDataDestroy(data);
	return(NULL);    
    }
    
    

    /* now find the start node */
	cur = xmlDocGetRootElement(data->doc);
	if(cur == NULL) {
	    xmlSec_registrar_erro("Error: failed to get root element"); 
	    xmlSecAppXmlDataDestroy(data);
	    return(NULL);    
	}
    
    if(defStartNodeName != NULL) {
	data->startNode = xmlSecFindNode(cur, defStartNodeName, defStartNodeNs);
	if(data->startNode == NULL) {
	    xmlSec_registrar_erro("Error: failed to find default node with name");
	    xmlSecAppXmlDataDestroy(data);
	    return(NULL);    
	}
    } else {
	data->startNode = cur;
    }
    
    return(data);
}

static void 
xmlSecAppXmlDataDestroy(xmlSecAppXmlDataPtr data) {
    if(data == NULL) {
	xmlSec_registrar_erro("Error: xml data is null");
	return;
    }
    if(data->dtd != NULL) {
	xmlFreeDtd(data->dtd);
    }
    if(data->doc != NULL) {
	xmlFreeDoc(data->doc);
    }
    memset(data, 0, sizeof(xmlSecAppXmlData));
    xmlFree(data);    
}

static int 
xmlSecAppWriteResultString(xmlDocPtr doc, xmlSecBufferPtr buffer, std::string &texto_saida) {
	texto_saida = "";


    if(doc != NULL) 
	{
		xmlChar *temporario = NULL;
		int size = 0;
		xmlDocDumpMemory(doc, &temporario, &size);
		texto_saida.append( (const char *)temporario, size);
		xmlFree(temporario);
    } 
	else 
	if((buffer != NULL) && (xmlSecBufferGetData(buffer) != NULL)) 
	{
    	//fwrite(xmlSecBufferGetData(buffer), xmlSecBufferGetSize(buffer), 1, f); 
		texto_saida.append( (const char *)xmlSecBufferGetData(buffer), xmlSecBufferGetSize(buffer));
    } 
	else 
	{
		xmlSec_registrar_erro("Error: both result doc and result buffer are null");	
		return(-1);
    }    
    
    return(0);
}

static int  
xmlSecAppAddIDAttr(xmlNodePtr node, const xmlChar* attrName, const xmlChar* nodeName, const xmlChar* nsHref) {
    xmlAttrPtr attr, tmpAttr;
    xmlNodePtr cur;
    xmlChar* id;
    
    if((node == NULL) || (attrName == NULL) || (nodeName == NULL)) {
	return(-1);
    }
    
    /* process children first because it does not matter much but does simplify code */
    cur = xmlSecGetNextElementNode(node->children);
    while(cur != NULL) {
	if(xmlSecAppAddIDAttr(cur, attrName, nodeName, nsHref) < 0) {
	    return(-1);
	}
	cur = xmlSecGetNextElementNode(cur->next);
    }
    
    /* node name must match */
    if(!xmlStrEqual(node->name, nodeName)) {
	return(0);
    }
	
    /* if nsHref is set then it also should match */    
    if((nsHref != NULL) && (node->ns != NULL) && (!xmlStrEqual(nsHref, node->ns->href))) {
	return(0);
    }
    
    /* the attribute with name equal to attrName should exist */
    for(attr = node->properties; attr != NULL; attr = attr->next) {
	if(xmlStrEqual(attr->name, attrName)) {
	    break;
	}
    }
    if(attr == NULL) {
	return(0);
    }
    
    /* and this attr should have a value */
    id = xmlNodeListGetString(node->doc, attr->children, 1);
    if(id == NULL) {
	return(0);
    }
    
    /* check that we don't have same ID already */
    tmpAttr = xmlGetID(node->doc, id);
    if(tmpAttr == NULL) {
	xmlAddID(NULL, node->doc, id, attr);
    } else if(tmpAttr != attr) {
	xmlSec_registrar_erro("Error: duplicate ID attribute ");	
	xmlFree(id);
	return(-1);
    }
    xmlFree(id);
    return(0);
}







/*
==============================================================
nossa rotina externa
retorno: 0 = OK, diferente de 0 erro, e vem emsnagem de log
*/

int xmlsec_descriptografar(const char *texto_entrada, std::string &texto_saida, const char *senha_binhex_aeskey, std::string &erros)
{
	xmlSec_registro_erros = "";
	int status = xmlsec_descriptografar_arquivo_na_memoria(texto_entrada, texto_saida, senha_binhex_aeskey);
	if(status != 0)
		xmlSec_registrar_erro("Unknown error");
	erros = xmlSec_registro_erros.c_str();
	return status;
}



