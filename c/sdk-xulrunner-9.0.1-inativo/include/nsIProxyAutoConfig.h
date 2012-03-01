/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIProxyAutoConfig.idl
 */

#ifndef __gen_nsIProxyAutoConfig_h__
#define __gen_nsIProxyAutoConfig_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIProxyAutoConfig */
#define NS_IPROXYAUTOCONFIG_IID_STR "a42619df-0a1c-46fb-8154-0e9b8f8f1ea8"

#define NS_IPROXYAUTOCONFIG_IID \
  {0xa42619df, 0x0a1c, 0x46fb, \
    { 0x81, 0x54, 0x0e, 0x9b, 0x8f, 0x8f, 0x1e, 0xa8 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIProxyAutoConfig : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROXYAUTOCONFIG_IID)

  /* void init (in ACString aPACURI, in AString aPACScript); */
  NS_SCRIPTABLE NS_IMETHOD Init(const nsACString & aPACURI, const nsAString & aPACScript) = 0;

  /* ACString getProxyForURI (in ACString aTestURI, in ACString aTestHost); */
  NS_SCRIPTABLE NS_IMETHOD GetProxyForURI(const nsACString & aTestURI, const nsACString & aTestHost, nsACString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProxyAutoConfig, NS_IPROXYAUTOCONFIG_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROXYAUTOCONFIG \
  NS_SCRIPTABLE NS_IMETHOD Init(const nsACString & aPACURI, const nsAString & aPACScript); \
  NS_SCRIPTABLE NS_IMETHOD GetProxyForURI(const nsACString & aTestURI, const nsACString & aTestHost, nsACString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROXYAUTOCONFIG(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(const nsACString & aPACURI, const nsAString & aPACScript) { return _to Init(aPACURI, aPACScript); } \
  NS_SCRIPTABLE NS_IMETHOD GetProxyForURI(const nsACString & aTestURI, const nsACString & aTestHost, nsACString & _retval NS_OUTPARAM) { return _to GetProxyForURI(aTestURI, aTestHost, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROXYAUTOCONFIG(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(const nsACString & aPACURI, const nsAString & aPACScript) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aPACURI, aPACScript); } \
  NS_SCRIPTABLE NS_IMETHOD GetProxyForURI(const nsACString & aTestURI, const nsACString & aTestHost, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProxyForURI(aTestURI, aTestHost, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProxyAutoConfig : public nsIProxyAutoConfig
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROXYAUTOCONFIG

  nsProxyAutoConfig();

private:
  ~nsProxyAutoConfig();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsProxyAutoConfig, nsIProxyAutoConfig)

nsProxyAutoConfig::nsProxyAutoConfig()
{
  /* member initializers and constructor code */
}

nsProxyAutoConfig::~nsProxyAutoConfig()
{
  /* destructor code */
}

/* void init (in ACString aPACURI, in AString aPACScript); */
NS_IMETHODIMP nsProxyAutoConfig::Init(const nsACString & aPACURI, const nsAString & aPACScript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getProxyForURI (in ACString aTestURI, in ACString aTestHost); */
NS_IMETHODIMP nsProxyAutoConfig::GetProxyForURI(const nsACString & aTestURI, const nsACString & aTestHost, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIProxyAutoConfig_h__ */
