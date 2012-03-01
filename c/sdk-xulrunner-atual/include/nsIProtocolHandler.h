/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIProtocolHandler.idl
 */

#ifndef __gen_nsIProtocolHandler_h__
#define __gen_nsIProtocolHandler_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsIProtocolHandler */
#define NS_IPROTOCOLHANDLER_IID_STR "15fd6940-8ea7-11d3-93ad-00104ba0fd40"

#define NS_IPROTOCOLHANDLER_IID \
  {0x15fd6940, 0x8ea7, 0x11d3, \
    { 0x93, 0xad, 0x00, 0x10, 0x4b, 0xa0, 0xfd, 0x40 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIProtocolHandler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROTOCOLHANDLER_IID)

  /* readonly attribute ACString scheme; */
  NS_SCRIPTABLE NS_IMETHOD GetScheme(nsACString & aScheme) = 0;

  /* readonly attribute long defaultPort; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPort(PRInt32 *aDefaultPort) = 0;

  /* readonly attribute unsigned long protocolFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetProtocolFlags(PRUint32 *aProtocolFlags) = 0;

  /* nsIURI newURI (in AUTF8String aSpec, in string aOriginCharset, in nsIURI aBaseURI); */
  NS_SCRIPTABLE NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* nsIChannel newChannel (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval NS_OUTPARAM) = 0;

  /* boolean allowPort (in long port, in string scheme); */
  NS_SCRIPTABLE NS_IMETHOD AllowPort(PRInt32 port, const char * scheme, PRBool *_retval NS_OUTPARAM) = 0;

  enum { URI_STD = 0U };

  enum { URI_NORELATIVE = 1U };

  enum { URI_NOAUTH = 2U };

  enum { URI_INHERITS_SECURITY_CONTEXT = 16U };

  enum { URI_FORBIDS_AUTOMATIC_DOCUMENT_REPLACEMENT = 32U };

  enum { URI_LOADABLE_BY_ANYONE = 64U };

  enum { URI_DANGEROUS_TO_LOAD = 128U };

  enum { URI_IS_UI_RESOURCE = 256U };

  enum { URI_IS_LOCAL_FILE = 512U };

  enum { URI_LOADABLE_BY_SUBSUMERS = 16384U };

  enum { URI_NON_PERSISTABLE = 1024U };

  enum { URI_DOES_NOT_RETURN_DATA = 2048U };

  enum { URI_IS_LOCAL_RESOURCE = 4096U };

  enum { URI_OPENING_EXECUTES_SCRIPT = 8192U };

  enum { ALLOWS_PROXY = 4U };

  enum { ALLOWS_PROXY_HTTP = 8U };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProtocolHandler, NS_IPROTOCOLHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROTOCOLHANDLER \
  NS_SCRIPTABLE NS_IMETHOD GetScheme(nsACString & aScheme); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPort(PRInt32 *aDefaultPort); \
  NS_SCRIPTABLE NS_IMETHOD GetProtocolFlags(PRUint32 *aProtocolFlags); \
  NS_SCRIPTABLE NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AllowPort(PRInt32 port, const char * scheme, PRBool *_retval NS_OUTPARAM); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROTOCOLHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetScheme(nsACString & aScheme) { return _to GetScheme(aScheme); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPort(PRInt32 *aDefaultPort) { return _to GetDefaultPort(aDefaultPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocolFlags(PRUint32 *aProtocolFlags) { return _to GetProtocolFlags(aProtocolFlags); } \
  NS_SCRIPTABLE NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM) { return _to NewURI(aSpec, aOriginCharset, aBaseURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval NS_OUTPARAM) { return _to NewChannel(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AllowPort(PRInt32 port, const char * scheme, PRBool *_retval NS_OUTPARAM) { return _to AllowPort(port, scheme, _retval); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROTOCOLHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetScheme(nsACString & aScheme) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScheme(aScheme); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPort(PRInt32 *aDefaultPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultPort(aDefaultPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocolFlags(PRUint32 *aProtocolFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocolFlags(aProtocolFlags); } \
  NS_SCRIPTABLE NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewURI(aSpec, aOriginCharset, aBaseURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewChannel(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AllowPort(PRInt32 port, const char * scheme, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AllowPort(port, scheme, _retval); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProtocolHandler : public nsIProtocolHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROTOCOLHANDLER

  nsProtocolHandler();

private:
  ~nsProtocolHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsProtocolHandler, nsIProtocolHandler)

nsProtocolHandler::nsProtocolHandler()
{
  /* member initializers and constructor code */
}

nsProtocolHandler::~nsProtocolHandler()
{
  /* destructor code */
}

/* readonly attribute ACString scheme; */
NS_IMETHODIMP nsProtocolHandler::GetScheme(nsACString & aScheme)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long defaultPort; */
NS_IMETHODIMP nsProtocolHandler::GetDefaultPort(PRInt32 *aDefaultPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long protocolFlags; */
NS_IMETHODIMP nsProtocolHandler::GetProtocolFlags(PRUint32 *aProtocolFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI newURI (in AUTF8String aSpec, in string aOriginCharset, in nsIURI aBaseURI); */
NS_IMETHODIMP nsProtocolHandler::NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIChannel newChannel (in nsIURI aURI); */
NS_IMETHODIMP nsProtocolHandler::NewChannel(nsIURI *aURI, nsIChannel * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean allowPort (in long port, in string scheme); */
NS_IMETHODIMP nsProtocolHandler::AllowPort(PRInt32 port, const char * scheme, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * Protocol handlers are registered with XPCOM under the following CONTRACTID prefix:
 */
#define NS_NETWORK_PROTOCOL_CONTRACTID_PREFIX "@mozilla.org/network/protocol;1?name="
/**
 * For example, "@mozilla.org/network/protocol;1?name=http"
 */

#endif /* __gen_nsIProtocolHandler_h__ */
