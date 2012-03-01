/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/dns/nsIEffectiveTLDService.idl
 */

#ifndef __gen_nsIEffectiveTLDService_h__
#define __gen_nsIEffectiveTLDService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsIEffectiveTLDService */
#define NS_IEFFECTIVETLDSERVICE_IID_STR "6852369e-baa9-4c9a-bbcd-5123fc54a297"

#define NS_IEFFECTIVETLDSERVICE_IID \
  {0x6852369e, 0xbaa9, 0x4c9a, \
    { 0xbb, 0xcd, 0x51, 0x23, 0xfc, 0x54, 0xa2, 0x97 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEffectiveTLDService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEFFECTIVETLDSERVICE_IID)

  /* ACString getPublicSuffix (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffix(nsIURI *aURI, nsACString & _retval NS_OUTPARAM) = 0;

  /* ACString getBaseDomain (in nsIURI aURI, [optional] in PRUint32 aAdditionalParts); */
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aURI, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM) = 0;

  /* ACString getPublicSuffixFromHost (in AUTF8String aHost); */
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffixFromHost(const nsACString & aHost, nsACString & _retval NS_OUTPARAM) = 0;

  /* ACString getBaseDomainFromHost (in AUTF8String aHost, [optional] in PRUint32 aAdditionalParts); */
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomainFromHost(const nsACString & aHost, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEffectiveTLDService, NS_IEFFECTIVETLDSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEFFECTIVETLDSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffix(nsIURI *aURI, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aURI, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffixFromHost(const nsACString & aHost, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomainFromHost(const nsACString & aHost, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEFFECTIVETLDSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffix(nsIURI *aURI, nsACString & _retval NS_OUTPARAM) { return _to GetPublicSuffix(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aURI, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM) { return _to GetBaseDomain(aURI, aAdditionalParts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffixFromHost(const nsACString & aHost, nsACString & _retval NS_OUTPARAM) { return _to GetPublicSuffixFromHost(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomainFromHost(const nsACString & aHost, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM) { return _to GetBaseDomainFromHost(aHost, aAdditionalParts, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEFFECTIVETLDSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffix(nsIURI *aURI, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPublicSuffix(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aURI, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseDomain(aURI, aAdditionalParts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPublicSuffixFromHost(const nsACString & aHost, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPublicSuffixFromHost(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomainFromHost(const nsACString & aHost, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseDomainFromHost(aHost, aAdditionalParts, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEffectiveTLDService : public nsIEffectiveTLDService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEFFECTIVETLDSERVICE

  nsEffectiveTLDService();

private:
  ~nsEffectiveTLDService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEffectiveTLDService, nsIEffectiveTLDService)

nsEffectiveTLDService::nsEffectiveTLDService()
{
  /* member initializers and constructor code */
}

nsEffectiveTLDService::~nsEffectiveTLDService()
{
  /* destructor code */
}

/* ACString getPublicSuffix (in nsIURI aURI); */
NS_IMETHODIMP nsEffectiveTLDService::GetPublicSuffix(nsIURI *aURI, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getBaseDomain (in nsIURI aURI, [optional] in PRUint32 aAdditionalParts); */
NS_IMETHODIMP nsEffectiveTLDService::GetBaseDomain(nsIURI *aURI, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getPublicSuffixFromHost (in AUTF8String aHost); */
NS_IMETHODIMP nsEffectiveTLDService::GetPublicSuffixFromHost(const nsACString & aHost, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getBaseDomainFromHost (in AUTF8String aHost, [optional] in PRUint32 aAdditionalParts); */
NS_IMETHODIMP nsEffectiveTLDService::GetBaseDomainFromHost(const nsACString & aHost, PRUint32 aAdditionalParts, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEffectiveTLDService_h__ */
