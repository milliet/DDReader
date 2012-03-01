/*
configuracoes de compilacao do xmlsec e dependencias
*/

#ifndef stdafx_xmlsec_h
#define stdafx_xmlsec_h

/*
é melhor nao mexer nisto....
*/

#define XMLSEC_NO_XSLT


#define XMLSEC_CRYPTO "nss"
#define XMLSEC_CRYPTO_NSS
#undef XMLSEC_CRYPTO_DYNAMIC_LOADING
#define XMLSEC_NO_CRYPTO_DYNAMIC_LOADING

#undef XMLSEC_ERROS_COMPILACAO

#define XMLSEC_EXPORT
#define XMLSEC_STATIC
#define XMLSEC_CRYPTO_EXPORT
#define XMLSEC_EXPORT_VAR extern


#define PACKAGE "xmlsec"
#define HAVE_STRCMP 1
#define HAVE_STRCHR 1
#define HAVE_STRRCHR 1
#define HAVE_MEMCPY 1

//tirar  o fprintf 
#define printf_a_ignorar2(x1,x2) 
#define printf_a_ignorar3(x1,x2,x3) 
#define printf_a_ignorar4(x1,x2,x3,x4) 
#define printf_a_ignorar5(x1,x2,x3,x4,x5) 
#define printf_a_ignorar6(x1,x2,x3,x4,x5,x6) 
#define printf_a_ignorar7(x1,x2,x3,x4,x5,x6,x7) 

//tirar o xmlSecError
#define xmlSecErr_a_ignorar4(x1,x2,x3,x4) 
#define xmlSecErr_a_ignorar5(x1,x2,x3,x4,x5) 
#define xmlSecErr_a_ignorar6(x1,x2,x3,x4,x5,x6) 
#define xmlSecErr_a_ignorar7(x1,x2,x3,x4,x5,x6,x7) 
#define xmlSecErr_a_ignorar8(x1,x2,x3,x4,x5,x6,x7,x8) 
#define xmlSecErr_a_ignorar9(x1,x2,x3,x4,x5,x6,x7,x8,x9) 

/*
coisas do libxml
*/
#define HAVE_WIN32_THREADS
#undef HAVE_ZLIB_H
#undef LIBXML_DEBUG_ENABLED
#define LIBXML_STATIC_FOR_DLL
#define LIBXML_STATIC

#endif //#ifndef stdafx_xmlsec_h

