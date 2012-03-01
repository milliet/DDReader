/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/cookie/nsICookiePermission.idl
 */

#ifndef __gen_nsICookiePermission_h__
#define __gen_nsICookiePermission_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICookie2; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */

typedef PRInt32  nsCookieAccess;


/* starting interface:    nsICookiePermission */
#define NS_ICOOKIEPERMISSION_IID_STR "4b1a775d-f6d3-4389-be2e-9dfbaf2ab47b"

#define NS_ICOOKIEPERMISSION_IID \
  {0x4b1a775d, 0xf6d3, 0x4389, \
    { 0xbe, 0x2e, 0x9d, 0xfb, 0xaf, 0x2a, 0xb4, 0x7b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICookiePermission : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOOKIEPERMISSION_IID)

  enum { ACCESS_DEFAULT = 0 };

  enum { ACCESS_ALLOW = 1 };

  enum { ACCESS_DENY = 2 };

  enum { ACCESS_SESSION = 8 };

  /* void setAccess (in nsIURI aURI, in nsCookieAccess aAccess); */
  NS_SCRIPTABLE NS_IMETHOD SetAccess(nsIURI *aURI, nsCookieAccess aAccess) = 0;

  /* nsCookieAccess canAccess (in nsIURI aURI, in nsIChannel aChannel); */
  NS_SCRIPTABLE NS_IMETHOD CanAccess(nsIURI *aURI, nsIChannel *aChannel, nsCookieAccess *_retval NS_OUTPARAM) = 0;

  /* boolean canSetCookie (in nsIURI aURI, in nsIChannel aChannel, in nsICookie2 aCookie, inout boolean aIsSession, inout PRInt64 aExpiry); */
  NS_SCRIPTABLE NS_IMETHOD CanSetCookie(nsIURI *aURI, nsIChannel *aChannel, nsICookie2 *aCookie, PRBool *aIsSession NS_INOUTPARAM, PRInt64 *aExpiry NS_INOUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* nsIURI getOriginatingURI (in nsIChannel aChannel); */
  NS_SCRIPTABLE NS_IMETHOD GetOriginatingURI(nsIChannel *aChannel, nsIURI * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICookiePermission, NS_ICOOKIEPERMISSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOOKIEPERMISSION \
  NS_SCRIPTABLE NS_IMETHOD SetAccess(nsIURI *aURI, nsCookieAccess aAccess); \
  NS_SCRIPTABLE NS_IMETHOD CanAccess(nsIURI *aURI, nsIChannel *aChannel, nsCookieAccess *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CanSetCookie(nsIURI *aURI, nsIChannel *aChannel, nsICookie2 *aCookie, PRBool *aIsSession NS_INOUTPARAM, PRInt64 *aExpiry NS_INOUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOriginatingURI(nsIChannel *aChannel, nsIURI * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOOKIEPERMISSION(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetAccess(nsIURI *aURI, nsCookieAccess aAccess) { return _to SetAccess(aURI, aAccess); } \
  NS_SCRIPTABLE NS_IMETHOD CanAccess(nsIURI *aURI, nsIChannel *aChannel, nsCookieAccess *_retval NS_OUTPARAM) { return _to CanAccess(aURI, aChannel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CanSetCookie(nsIURI *aURI, nsIChannel *aChannel, nsICookie2 *aCookie, PRBool *aIsSession NS_INOUTPARAM, PRInt64 *aExpiry NS_INOUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CanSetCookie(aURI, aChannel, aCookie, aIsSession, aExpiry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOriginatingURI(nsIChannel *aChannel, nsIURI * *_retval NS_OUTPARAM) { return _to GetOriginatingURI(aChannel, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOOKIEPERMISSION(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetAccess(nsIURI *aURI, nsCookieAccess aAccess) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccess(aURI, aAccess); } \
  NS_SCRIPTABLE NS_IMETHOD CanAccess(nsIURI *aURI, nsIChannel *aChannel, nsCookieAccess *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanAccess(aURI, aChannel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CanSetCookie(nsIURI *aURI, nsIChannel *aChannel, nsICookie2 *aCookie, PRBool *aIsSession NS_INOUTPARAM, PRInt64 *aExpiry NS_INOUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanSetCookie(aURI, aChannel, aCookie, aIsSession, aExpiry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOriginatingURI(nsIChannel *aChannel, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginatingURI(aChannel, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCookiePermission : public nsICookiePermission
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOOKIEPERMISSION

  nsCookiePermission();

private:
  ~nsCookiePermission();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCookiePermission, nsICookiePermission)

nsCookiePermission::nsCookiePermission()
{
  /* member initializers and constructor code */
}

nsCookiePermission::~nsCookiePermission()
{
  /* destructor code */
}

/* void setAccess (in nsIURI aURI, in nsCookieAccess aAccess); */
NS_IMETHODIMP nsCookiePermission::SetAccess(nsIURI *aURI, nsCookieAccess aAccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsCookieAccess canAccess (in nsIURI aURI, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookiePermission::CanAccess(nsIURI *aURI, nsIChannel *aChannel, nsCookieAccess *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canSetCookie (in nsIURI aURI, in nsIChannel aChannel, in nsICookie2 aCookie, inout boolean aIsSession, inout PRInt64 aExpiry); */
NS_IMETHODIMP nsCookiePermission::CanSetCookie(nsIURI *aURI, nsIChannel *aChannel, nsICookie2 *aCookie, PRBool *aIsSession NS_INOUTPARAM, PRInt64 *aExpiry NS_INOUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getOriginatingURI (in nsIChannel aChannel); */
NS_IMETHODIMP nsCookiePermission::GetOriginatingURI(nsIChannel *aChannel, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * The nsICookiePermission implementation is an XPCOM service registered
 * under the ContractID:
 */
#define NS_COOKIEPERMISSION_CONTRACTID "@mozilla.org/cookie/permission;1"

#endif /* __gen_nsICookiePermission_h__ */
