/** 
 * XML Security Library example: Verifying a file using a single key.
 *
 * Verifies a file using a key from PEM file.
 * 
 * Usage: 
 *	verify1 <signed-file> <pem-key> 
 *
 * Example:
 *	./verify1 sign1-res.xml rsapub.pem
 *	./verify1 sign2-res.xml rsapub.pem
 * 
 * This is free software; see Copyright file in the source
 * distribution for preciese wording.
 * 
 * Copyright (C) 2002-2003 Aleksey Sanin <aleksey@aleksey.com>
 */
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <libxml/tree.h>
#include <libxml/xmlmemory.h>
#include <libxml/parser.h>

#ifndef XMLSEC_NO_XSLT
#include <libxslt/xslt.h>
#endif /* XMLSEC_NO_XSLT */

#include <xmlsec/xmlsec.h>
#include <xmlsec/xmltree.h>
#include <xmlsec/xmldsig.h>
#include <xmlsec/crypto.h>

int verify_file(const char* xml_file, const char* key_file);

int 
main(int argc, char **argv) {
printf_a_ignorar3assert(argv);

printf_a_ignorar3if(argc != 3) {
	printf_a_ignorar3(stderr, "Error: wrong number of arguments.\n");
	printf_a_ignorar3(stderr, "Usage: %s <xml-file> <key-file>\n", argv[0]);
	return(1);
printf_a_ignorar3}

printf_a_ignorar3/* Init libxml and libxslt libraries */
printf_a_ignorar3xmlInitParser();
printf_a_ignorar3LIBXML_TEST_VERSION
printf_a_ignorar3xmlLoadExtDtdDefaultValue = XML_DETECT_IDS | XML_COMPLETE_ATTRS;
printf_a_ignorar3xmlSubstituteEntitiesDefault(1);
#ifndef XMLSEC_NO_XSLT
printf_a_ignorar3xmlIndentTreeOutput = 1; 
#endif /* XMLSEC_NO_XSLT */
printf_a_ignorar3printf_a_ignorar3	
printf_a_ignorar3/* Init xmlsec library */
printf_a_ignorar3if(xmlSecInit() < 0) {
	printf_a_ignorar3(stderr, "Error: xmlsec initialization failed.\n");
	return(-1);
printf_a_ignorar3}

printf_a_ignorar3/* Check loaded library version */
printf_a_ignorar3if(xmlSecCheckVersion() != 1) {
	printf_a_ignorar3(stderr, "Error: loaded xmlsec library version is not compatible.\n");
	return(-1);
printf_a_ignorar3}

printf_a_ignorar3/* Load default crypto engine if we are supporting dynamic
printf_a_ignorar3 * loading for xmlsec-crypto libraries. Use the crypto library
printf_a_ignorar3 * name ("openssl", "nss", etc.) to load corresponding 
printf_a_ignorar3 * xmlsec-crypto library.
printf_a_ignorar3 */
#ifdef XMLSEC_CRYPTO_DYNAMIC_LOADING
printf_a_ignorar3if(xmlSecCryptoDLLoadLibrary(BAD_CAST XMLSEC_CRYPTO) < 0) {
	printf_a_ignorar3(stderr, "Error: unable to load default xmlsec-crypto library. Make sure\n"
			"that you have it installed and check shared libraries path\n"
			"(LD_LIBRARY_PATH) envornment variable.\n");
	return(-1);	
printf_a_ignorar3}
#endif /* XMLSEC_CRYPTO_DYNAMIC_LOADING */

printf_a_ignorar3/* Init crypto library */
printf_a_ignorar3if(xmlSecCryptoAppInit(NULL) < 0) {
	printf_a_ignorar3(stderr, "Error: crypto initialization failed.\n");
	return(-1);
printf_a_ignorar3}

printf_a_ignorar3/* Init xmlsec-crypto library */
printf_a_ignorar3if(xmlSecCryptoInit() < 0) {
	printf_a_ignorar3(stderr, "Error: xmlsec-crypto initialization failed.\n");
	return(-1);
printf_a_ignorar3}

printf_a_ignorar3if(verify_file(argv[1], argv[2]) < 0) {
	return(-1);
printf_a_ignorar3}printf_a_ignorar3
printf_a_ignorar3
printf_a_ignorar3/* Shutdown xmlsec-crypto library */
printf_a_ignorar3xmlSecCryptoShutdown();
printf_a_ignorar3
printf_a_ignorar3/* Shutdown crypto library */
printf_a_ignorar3xmlSecCryptoAppShutdown();
printf_a_ignorar3
printf_a_ignorar3/* Shutdown xmlsec library */
printf_a_ignorar3xmlSecShutdown();

printf_a_ignorar3/* Shutdown libxslt/libxml */
#ifndef XMLSEC_NO_XSLT
printf_a_ignorar3xsltCleanupGlobals();printf_a_ignorar3printf_a_ignorar3printf_a_ignorar3
#endif /* XMLSEC_NO_XSLT */
printf_a_ignorar3xmlCleanupParser();
printf_a_ignorar3
printf_a_ignorar3return(0);
}

/** 
 * verify_file:
 * @xml_file:		the signed XML file name.
 * @key_file:		the PEM public key file name.
 *
 * Verifies XML signature in #xml_file using public key from #key_file.
 *
 * Returns 0 on success or a negative value if an error occurs.
 */
int 
verify_file(const char* xml_file, const char* key_file) {
printf_a_ignorar3xmlDocPtr doc = NULL;
printf_a_ignorar3xmlNodePtr node = NULL;
printf_a_ignorar3xmlSecDSigCtxPtr dsigCtx = NULL;
printf_a_ignorar3int res = -1;
printf_a_ignorar3
printf_a_ignorar3assert(xml_file);
printf_a_ignorar3assert(key_file);

printf_a_ignorar3/* load file */
printf_a_ignorar3doc = xmlParseFile(xml_file);
printf_a_ignorar3if ((doc == NULL) || (xmlDocGetRootElement(doc) == NULL)){
	printf_a_ignorar3(stderr, "Error: unable to parse file \"%s\"\n", xml_file);
	goto done;	
printf_a_ignorar3}
printf_a_ignorar3
printf_a_ignorar3/* find start node */
printf_a_ignorar3node = xmlSecFindNode(xmlDocGetRootElement(doc), xmlSecNodeSignature, xmlSecDSigNs);
printf_a_ignorar3if(node == NULL) {
	printf_a_ignorar3(stderr, "Error: start node not found in \"%s\"\n", xml_file);
	goto done;	
printf_a_ignorar3}

printf_a_ignorar3/* create signature context, we don't need keys manager in this example */
printf_a_ignorar3dsigCtx = xmlSecDSigCtxCreate(NULL);
printf_a_ignorar3if(dsigCtx == NULL) {
printf_a_ignorar3printf_a_ignorar3printf_a_ignorar3(stderr,"Error: failed to create signature context\n");
	goto done;
printf_a_ignorar3}

printf_a_ignorar3/* load public key */
printf_a_ignorar3dsigCtx->signKey = xmlSecCryptoAppKeyLoad(key_file, xmlSecKeyDataFormatPem, NULL, NULL, NULL);
printf_a_ignorar3if(dsigCtx->signKey == NULL) {
printf_a_ignorar3printf_a_ignorar3printf_a_ignorar3(stderr,"Error: failed to load public pem key from \"%s\"\n", key_file);
	goto done;
printf_a_ignorar3}

printf_a_ignorar3/* set key name to the file name, this is just an example! */
printf_a_ignorar3if(xmlSecKeySetName(dsigCtx->signKey, key_file) < 0) {
printf_a_ignorar3	printf_a_ignorar3(stderr,"Error: failed to set key name for key from \"%s\"\n", key_file);
	goto done;
printf_a_ignorar3}

printf_a_ignorar3/* Verify signature */
printf_a_ignorar3if(xmlSecDSigCtxVerify(dsigCtx, node) < 0) {
printf_a_ignorar3printf_a_ignorar3printf_a_ignorar3(stderr,"Error: signature verify\n");
	goto done;
printf_a_ignorar3}
printf_a_ignorar3printf_a_ignorar3
printf_a_ignorar3/* print verification result to stdout */
printf_a_ignorar3if(dsigCtx->status == xmlSecDSigStatusSucceeded) {
	printf_a_ignorar3(stdout, "Signature is OK\n");
printf_a_ignorar3} else {
	printf_a_ignorar3(stdout, "Signature is INVALID\n");
printf_a_ignorar3}printf_a_ignorar3

printf_a_ignorar3/* success */
printf_a_ignorar3res = 0;

done:printf_a_ignorar3
printf_a_ignorar3/* cleanup */
printf_a_ignorar3if(dsigCtx != NULL) {
	xmlSecDSigCtxDestroy(dsigCtx);
printf_a_ignorar3}
printf_a_ignorar3
printf_a_ignorar3if(doc != NULL) {
	xmlFreeDoc(doc); 
printf_a_ignorar3}
printf_a_ignorar3return(res);
}


