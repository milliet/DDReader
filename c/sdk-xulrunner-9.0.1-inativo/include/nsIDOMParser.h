/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIDOMParser.idl
 */

#ifndef __gen_nsIDOMParser_h__
#define __gen_nsIDOMParser_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */

class nsIDOMDocument; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIScriptGlobalObject; /* forward declaration */


/* starting interface:    nsIDOMParser */
#define NS_IDOMPARSER_IID_STR "5677f36e-1842-4c6f-a39c-2e5576ab8b40"

#define NS_IDOMPARSER_IID \
  {0x5677f36e, 0x1842, 0x4c6f, \
    { 0xa3, 0x9c, 0x2e, 0x55, 0x76, 0xab, 0x8b, 0x40 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMParser : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPARSER_IID)

  /* nsIDOMDocument parseFromString (in wstring str, in string contentType); */
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const PRUnichar * str, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDocument parseFromBuffer ([array, size_is (bufLen), const] in octet buf, in PRUint32 bufLen, in string contentType); */
  NS_SCRIPTABLE NS_IMETHOD ParseFromBuffer(const PRUint8 *buf, PRUint32 bufLen, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDocument parseFromStream (in nsIInputStream stream, in string charset, in long contentLength, in string contentType); */
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, PRInt32 contentLength, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) = 0;

  /* [noscript] void init (in nsIPrincipal principal, in nsIURI documentURI, in nsIURI baseURI, in nsIScriptGlobalObject scriptObject); */
  NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI, nsIScriptGlobalObject *scriptObject) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMParser, NS_IDOMPARSER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPARSER \
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const PRUnichar * str, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ParseFromBuffer(const PRUint8 *buf, PRUint32 bufLen, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, PRInt32 contentLength, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM); \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI, nsIScriptGlobalObject *scriptObject); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPARSER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const PRUnichar * str, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) { return _to ParseFromString(str, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromBuffer(const PRUint8 *buf, PRUint32 bufLen, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) { return _to ParseFromBuffer(buf, bufLen, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, PRInt32 contentLength, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) { return _to ParseFromStream(stream, charset, contentLength, contentType, _retval); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI, nsIScriptGlobalObject *scriptObject) { return _to Init(principal, documentURI, baseURI, scriptObject); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPARSER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const PRUnichar * str, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParseFromString(str, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromBuffer(const PRUint8 *buf, PRUint32 bufLen, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParseFromBuffer(buf, bufLen, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, PRInt32 contentLength, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParseFromStream(stream, charset, contentLength, contentType, _retval); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI, nsIScriptGlobalObject *scriptObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, documentURI, baseURI, scriptObject); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMParser : public nsIDOMParser
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPARSER

  nsDOMParser();

private:
  ~nsDOMParser();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMParser, nsIDOMParser)

nsDOMParser::nsDOMParser()
{
  /* member initializers and constructor code */
}

nsDOMParser::~nsDOMParser()
{
  /* destructor code */
}

/* nsIDOMDocument parseFromString (in wstring str, in string contentType); */
NS_IMETHODIMP nsDOMParser::ParseFromString(const PRUnichar * str, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDocument parseFromBuffer ([array, size_is (bufLen), const] in octet buf, in PRUint32 bufLen, in string contentType); */
NS_IMETHODIMP nsDOMParser::ParseFromBuffer(const PRUint8 *buf, PRUint32 bufLen, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDocument parseFromStream (in nsIInputStream stream, in string charset, in long contentLength, in string contentType); */
NS_IMETHODIMP nsDOMParser::ParseFromStream(nsIInputStream *stream, const char * charset, PRInt32 contentLength, const char * contentType, nsIDOMDocument * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIPrincipal principal, in nsIURI documentURI, in nsIURI baseURI, in nsIScriptGlobalObject scriptObject); */
NS_IMETHODIMP nsDOMParser::Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI, nsIScriptGlobalObject *scriptObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMParserJS */
#define NS_IDOMPARSERJS_IID_STR "ba6bcd6c-63d8-49b3-bc8a-1e5e895645bc"

#define NS_IDOMPARSERJS_IID \
  {0xba6bcd6c, 0x63d8, 0x49b3, \
    { 0xbc, 0x8a, 0x1e, 0x5e, 0x89, 0x56, 0x45, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMParserJS : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPARSERJS_IID)

  /* void init ([optional] in nsIPrincipal principal, [optional] in nsIURI documentURI, [optional] in nsIURI baseURI); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMParserJS, NS_IDOMPARSERJS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPARSERJS \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPARSERJS(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI) { return _to Init(principal, documentURI, baseURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPARSERJS(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, documentURI, baseURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMParserJS : public nsIDOMParserJS
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPARSERJS

  nsDOMParserJS();

private:
  ~nsDOMParserJS();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMParserJS, nsIDOMParserJS)

nsDOMParserJS::nsDOMParserJS()
{
  /* member initializers and constructor code */
}

nsDOMParserJS::~nsDOMParserJS()
{
  /* destructor code */
}

/* void init ([optional] in nsIPrincipal principal, [optional] in nsIURI documentURI, [optional] in nsIURI baseURI); */
NS_IMETHODIMP nsDOMParserJS::Init(nsIPrincipal *principal, nsIURI *documentURI, nsIURI *baseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_DOMPARSER_CID                            \
 { /* 3a8a3a50-512c-11d4-9a54-000064657374 */       \
   0x3a8a3a50, 0x512c, 0x11d4,                      \
  {0x9a, 0x54, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74} }
#define NS_DOMPARSER_CONTRACTID \
"@mozilla.org/xmlextras/domparser;1"

#endif /* __gen_nsIDOMParser_h__ */
