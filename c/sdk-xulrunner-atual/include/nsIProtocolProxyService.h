/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIProtocolProxyService.idl
 */

#ifndef __gen_nsIProtocolProxyService_h__
#define __gen_nsIProtocolProxyService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICancelable; /* forward declaration */

class nsIProtocolProxyCallback; /* forward declaration */

class nsIProtocolProxyFilter; /* forward declaration */

class nsIProxyInfo; /* forward declaration */

class nsIChannel; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIProtocolProxyService */
#define NS_IPROTOCOLPROXYSERVICE_IID_STR "d7ec6237-162e-40f5-a2b4-46ccd5fa83c9"

#define NS_IPROTOCOLPROXYSERVICE_IID \
  {0xd7ec6237, 0x162e, 0x40f5, \
    { 0xa2, 0xb4, 0x46, 0xcc, 0xd5, 0xfa, 0x83, 0xc9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIProtocolProxyService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROTOCOLPROXYSERVICE_IID)

  enum { RESOLVE_NON_BLOCKING = 1U };

  enum { RESOLVE_PREFER_SOCKS_PROXY = 2U };

  enum { RESOLVE_IGNORE_URI_SCHEME = 4U };

  enum { RESOLVE_PREFER_HTTPS_PROXY = 12U };

  enum { RESOLVE_ALWAYS_TUNNEL = 16U };

  /* nsIProxyInfo resolve (in nsIURI aURI, in unsigned long aFlags); */
  NS_SCRIPTABLE NS_IMETHOD Resolve(nsIURI *aURI, PRUint32 aFlags, nsIProxyInfo * *_retval NS_OUTPARAM) = 0;

  /* nsICancelable asyncResolve (in nsIURI aURI, in unsigned long aFlags, in nsIProtocolProxyCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(nsIURI *aURI, PRUint32 aFlags, nsIProtocolProxyCallback *aCallback, nsICancelable * *_retval NS_OUTPARAM) = 0;

  /* nsIProxyInfo newProxyInfo (in ACString aType, in AUTF8String aHost, in long aPort, in unsigned long aFlags, in unsigned long aFailoverTimeout, in nsIProxyInfo aFailoverProxy); */
  NS_SCRIPTABLE NS_IMETHOD NewProxyInfo(const nsACString & aType, const nsACString & aHost, PRInt32 aPort, PRUint32 aFlags, PRUint32 aFailoverTimeout, nsIProxyInfo *aFailoverProxy, nsIProxyInfo * *_retval NS_OUTPARAM) = 0;

  /* nsIProxyInfo getFailoverForProxy (in nsIProxyInfo aProxyInfo, in nsIURI aURI, in nsresult aReason); */
  NS_SCRIPTABLE NS_IMETHOD GetFailoverForProxy(nsIProxyInfo *aProxyInfo, nsIURI *aURI, nsresult aReason, nsIProxyInfo * *_retval NS_OUTPARAM) = 0;

  /* void registerFilter (in nsIProtocolProxyFilter aFilter, in unsigned long aPosition); */
  NS_SCRIPTABLE NS_IMETHOD RegisterFilter(nsIProtocolProxyFilter *aFilter, PRUint32 aPosition) = 0;

  /* void unregisterFilter (in nsIProtocolProxyFilter aFilter); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterFilter(nsIProtocolProxyFilter *aFilter) = 0;

  enum { PROXYCONFIG_DIRECT = 0U };

  enum { PROXYCONFIG_MANUAL = 1U };

  enum { PROXYCONFIG_PAC = 2U };

  enum { PROXYCONFIG_WPAD = 4U };

  enum { PROXYCONFIG_SYSTEM = 5U };

  /* readonly attribute unsigned long proxyConfigType; */
  NS_SCRIPTABLE NS_IMETHOD GetProxyConfigType(PRUint32 *aProxyConfigType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProtocolProxyService, NS_IPROTOCOLPROXYSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROTOCOLPROXYSERVICE \
  NS_SCRIPTABLE NS_IMETHOD Resolve(nsIURI *aURI, PRUint32 aFlags, nsIProxyInfo * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(nsIURI *aURI, PRUint32 aFlags, nsIProtocolProxyCallback *aCallback, nsICancelable * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NewProxyInfo(const nsACString & aType, const nsACString & aHost, PRInt32 aPort, PRUint32 aFlags, PRUint32 aFailoverTimeout, nsIProxyInfo *aFailoverProxy, nsIProxyInfo * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFailoverForProxy(nsIProxyInfo *aProxyInfo, nsIURI *aURI, nsresult aReason, nsIProxyInfo * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterFilter(nsIProtocolProxyFilter *aFilter, PRUint32 aPosition); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterFilter(nsIProtocolProxyFilter *aFilter); \
  NS_SCRIPTABLE NS_IMETHOD GetProxyConfigType(PRUint32 *aProxyConfigType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROTOCOLPROXYSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Resolve(nsIURI *aURI, PRUint32 aFlags, nsIProxyInfo * *_retval NS_OUTPARAM) { return _to Resolve(aURI, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(nsIURI *aURI, PRUint32 aFlags, nsIProtocolProxyCallback *aCallback, nsICancelable * *_retval NS_OUTPARAM) { return _to AsyncResolve(aURI, aFlags, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewProxyInfo(const nsACString & aType, const nsACString & aHost, PRInt32 aPort, PRUint32 aFlags, PRUint32 aFailoverTimeout, nsIProxyInfo *aFailoverProxy, nsIProxyInfo * *_retval NS_OUTPARAM) { return _to NewProxyInfo(aType, aHost, aPort, aFlags, aFailoverTimeout, aFailoverProxy, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFailoverForProxy(nsIProxyInfo *aProxyInfo, nsIURI *aURI, nsresult aReason, nsIProxyInfo * *_retval NS_OUTPARAM) { return _to GetFailoverForProxy(aProxyInfo, aURI, aReason, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterFilter(nsIProtocolProxyFilter *aFilter, PRUint32 aPosition) { return _to RegisterFilter(aFilter, aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterFilter(nsIProtocolProxyFilter *aFilter) { return _to UnregisterFilter(aFilter); } \
  NS_SCRIPTABLE NS_IMETHOD GetProxyConfigType(PRUint32 *aProxyConfigType) { return _to GetProxyConfigType(aProxyConfigType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROTOCOLPROXYSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Resolve(nsIURI *aURI, PRUint32 aFlags, nsIProxyInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Resolve(aURI, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(nsIURI *aURI, PRUint32 aFlags, nsIProtocolProxyCallback *aCallback, nsICancelable * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncResolve(aURI, aFlags, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewProxyInfo(const nsACString & aType, const nsACString & aHost, PRInt32 aPort, PRUint32 aFlags, PRUint32 aFailoverTimeout, nsIProxyInfo *aFailoverProxy, nsIProxyInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewProxyInfo(aType, aHost, aPort, aFlags, aFailoverTimeout, aFailoverProxy, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFailoverForProxy(nsIProxyInfo *aProxyInfo, nsIURI *aURI, nsresult aReason, nsIProxyInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFailoverForProxy(aProxyInfo, aURI, aReason, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterFilter(nsIProtocolProxyFilter *aFilter, PRUint32 aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterFilter(aFilter, aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterFilter(nsIProtocolProxyFilter *aFilter) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterFilter(aFilter); } \
  NS_SCRIPTABLE NS_IMETHOD GetProxyConfigType(PRUint32 *aProxyConfigType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProxyConfigType(aProxyConfigType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProtocolProxyService : public nsIProtocolProxyService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROTOCOLPROXYSERVICE

  nsProtocolProxyService();

private:
  ~nsProtocolProxyService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsProtocolProxyService, nsIProtocolProxyService)

nsProtocolProxyService::nsProtocolProxyService()
{
  /* member initializers and constructor code */
}

nsProtocolProxyService::~nsProtocolProxyService()
{
  /* destructor code */
}

/* nsIProxyInfo resolve (in nsIURI aURI, in unsigned long aFlags); */
NS_IMETHODIMP nsProtocolProxyService::Resolve(nsIURI *aURI, PRUint32 aFlags, nsIProxyInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsICancelable asyncResolve (in nsIURI aURI, in unsigned long aFlags, in nsIProtocolProxyCallback aCallback); */
NS_IMETHODIMP nsProtocolProxyService::AsyncResolve(nsIURI *aURI, PRUint32 aFlags, nsIProtocolProxyCallback *aCallback, nsICancelable * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProxyInfo newProxyInfo (in ACString aType, in AUTF8String aHost, in long aPort, in unsigned long aFlags, in unsigned long aFailoverTimeout, in nsIProxyInfo aFailoverProxy); */
NS_IMETHODIMP nsProtocolProxyService::NewProxyInfo(const nsACString & aType, const nsACString & aHost, PRInt32 aPort, PRUint32 aFlags, PRUint32 aFailoverTimeout, nsIProxyInfo *aFailoverProxy, nsIProxyInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProxyInfo getFailoverForProxy (in nsIProxyInfo aProxyInfo, in nsIURI aURI, in nsresult aReason); */
NS_IMETHODIMP nsProtocolProxyService::GetFailoverForProxy(nsIProxyInfo *aProxyInfo, nsIURI *aURI, nsresult aReason, nsIProxyInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerFilter (in nsIProtocolProxyFilter aFilter, in unsigned long aPosition); */
NS_IMETHODIMP nsProtocolProxyService::RegisterFilter(nsIProtocolProxyFilter *aFilter, PRUint32 aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterFilter (in nsIProtocolProxyFilter aFilter); */
NS_IMETHODIMP nsProtocolProxyService::UnregisterFilter(nsIProtocolProxyFilter *aFilter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long proxyConfigType; */
NS_IMETHODIMP nsProtocolProxyService::GetProxyConfigType(PRUint32 *aProxyConfigType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIProtocolProxyService_h__ */
