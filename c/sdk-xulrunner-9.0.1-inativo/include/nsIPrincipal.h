/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/caps/idl/nsIPrincipal.idl
 */

#ifndef __gen_nsIPrincipal_h__
#define __gen_nsIPrincipal_h__


#ifndef __gen_nsISerializable_h__
#include "nsISerializable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
struct JSContext;
struct JSPrincipals;
class nsIURI; /* forward declaration */

class nsIContentSecurityPolicy; /* forward declaration */


/* starting interface:    nsIPrincipal */
#define NS_IPRINCIPAL_IID_STR "b406a2db-e547-4c95-b8e2-ad09ecb54ce0"

#define NS_IPRINCIPAL_IID \
  {0xb406a2db, 0xe547, 0x4c95, \
    { 0xb8, 0xe2, 0xad, 0x09, 0xec, 0xb5, 0x4c, 0xe0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPrincipal : public nsISerializable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRINCIPAL_IID)

  enum { ENABLE_DENIED = 1 };

  enum { ENABLE_UNKNOWN = 2 };

  enum { ENABLE_WITH_USER_PERMISSION = 3 };

  enum { ENABLE_GRANTED = 4 };

  /* void getPreferences (out string prefBranch, out string id, out string subjectName, out string grantedList, out string deniedList, out boolean isTrusted); */
  NS_SCRIPTABLE NS_IMETHOD GetPreferences(char * *prefBranch NS_OUTPARAM, char * *id NS_OUTPARAM, char * *subjectName NS_OUTPARAM, char * *grantedList NS_OUTPARAM, char * *deniedList NS_OUTPARAM, PRBool *isTrusted NS_OUTPARAM) = 0;

  /* boolean equals (in nsIPrincipal other); */
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean equalsIgnoringDomain (in nsIPrincipal other); */
  NS_SCRIPTABLE NS_IMETHOD EqualsIgnoringDomain(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) = 0;

  /* [noscript] readonly attribute unsigned long hashValue; */
  NS_IMETHOD GetHashValue(PRUint32 *aHashValue) = 0;

  /* [noscript] JSPrincipals getJSPrincipals (in JSContext cx); */
  NS_IMETHOD GetJSPrincipals(JSContext *cx, JSPrincipals **_retval NS_OUTPARAM) = 0;

  /* [noscript] attribute voidPtr securityPolicy; */
  NS_IMETHOD GetSecurityPolicy(void **aSecurityPolicy) = 0;
  NS_IMETHOD SetSecurityPolicy(void *aSecurityPolicy) = 0;

  /* [noscript] short canEnableCapability (in string capability); */
  NS_IMETHOD CanEnableCapability(const char * capability, PRInt16 *_retval NS_OUTPARAM) = 0;

  /* [noscript] void setCanEnableCapability (in string capability, in short canEnable); */
  NS_IMETHOD SetCanEnableCapability(const char * capability, PRInt16 canEnable) = 0;

  /* [noscript] boolean isCapabilityEnabled (in string capability, in voidPtr annotation); */
  NS_IMETHOD IsCapabilityEnabled(const char * capability, void *annotation, PRBool *_retval NS_OUTPARAM) = 0;

  /* [noscript] void enableCapability (in string capability, inout voidPtr annotation); */
  NS_IMETHOD EnableCapability(const char * capability, void **annotation NS_INOUTPARAM) = 0;

  /* [noscript] void revertCapability (in string capability, inout voidPtr annotation); */
  NS_IMETHOD RevertCapability(const char * capability, void **annotation NS_INOUTPARAM) = 0;

  /* [noscript] void disableCapability (in string capability, inout voidPtr annotation); */
  NS_IMETHOD DisableCapability(const char * capability, void **annotation NS_INOUTPARAM) = 0;

  /* readonly attribute nsIURI URI; */
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* [noscript] attribute nsIURI domain; */
  NS_IMETHOD GetDomain(nsIURI * *aDomain) = 0;
  NS_IMETHOD SetDomain(nsIURI *aDomain) = 0;

  /* readonly attribute string origin; */
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(char * *aOrigin) = 0;

  /* readonly attribute boolean hasCertificate; */
  NS_SCRIPTABLE NS_IMETHOD GetHasCertificate(PRBool *aHasCertificate) = 0;

  /* readonly attribute AUTF8String fingerprint; */
  NS_SCRIPTABLE NS_IMETHOD GetFingerprint(nsACString & aFingerprint) = 0;

  /* readonly attribute AUTF8String prettyName; */
  NS_SCRIPTABLE NS_IMETHOD GetPrettyName(nsACString & aPrettyName) = 0;

  /* boolean subsumes (in nsIPrincipal other); */
  NS_SCRIPTABLE NS_IMETHOD Subsumes(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) = 0;

  /* void checkMayLoad (in nsIURI uri, in boolean report); */
  NS_SCRIPTABLE NS_IMETHOD CheckMayLoad(nsIURI *uri, PRBool report) = 0;

  /* readonly attribute AUTF8String subjectName; */
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsACString & aSubjectName) = 0;

  /* readonly attribute nsISupports certificate; */
  NS_SCRIPTABLE NS_IMETHOD GetCertificate(nsISupports * *aCertificate) = 0;

  /* [noscript] attribute nsIContentSecurityPolicy csp; */
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) = 0;
  NS_IMETHOD SetCsp(nsIContentSecurityPolicy *aCsp) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrincipal, NS_IPRINCIPAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINCIPAL \
  NS_SCRIPTABLE NS_IMETHOD GetPreferences(char * *prefBranch NS_OUTPARAM, char * *id NS_OUTPARAM, char * *subjectName NS_OUTPARAM, char * *grantedList NS_OUTPARAM, char * *deniedList NS_OUTPARAM, PRBool *isTrusted NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EqualsIgnoringDomain(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD GetHashValue(PRUint32 *aHashValue); \
  NS_IMETHOD GetJSPrincipals(JSContext *cx, JSPrincipals **_retval NS_OUTPARAM); \
  NS_IMETHOD GetSecurityPolicy(void **aSecurityPolicy); \
  NS_IMETHOD SetSecurityPolicy(void *aSecurityPolicy); \
  NS_IMETHOD CanEnableCapability(const char * capability, PRInt16 *_retval NS_OUTPARAM); \
  NS_IMETHOD SetCanEnableCapability(const char * capability, PRInt16 canEnable); \
  NS_IMETHOD IsCapabilityEnabled(const char * capability, void *annotation, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD EnableCapability(const char * capability, void **annotation NS_INOUTPARAM); \
  NS_IMETHOD RevertCapability(const char * capability, void **annotation NS_INOUTPARAM); \
  NS_IMETHOD DisableCapability(const char * capability, void **annotation NS_INOUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI); \
  NS_IMETHOD GetDomain(nsIURI * *aDomain); \
  NS_IMETHOD SetDomain(nsIURI *aDomain); \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(char * *aOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetHasCertificate(PRBool *aHasCertificate); \
  NS_SCRIPTABLE NS_IMETHOD GetFingerprint(nsACString & aFingerprint); \
  NS_SCRIPTABLE NS_IMETHOD GetPrettyName(nsACString & aPrettyName); \
  NS_SCRIPTABLE NS_IMETHOD Subsumes(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckMayLoad(nsIURI *uri, PRBool report); \
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsACString & aSubjectName); \
  NS_SCRIPTABLE NS_IMETHOD GetCertificate(nsISupports * *aCertificate); \
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp); \
  NS_IMETHOD SetCsp(nsIContentSecurityPolicy *aCsp); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINCIPAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPreferences(char * *prefBranch NS_OUTPARAM, char * *id NS_OUTPARAM, char * *subjectName NS_OUTPARAM, char * *grantedList NS_OUTPARAM, char * *deniedList NS_OUTPARAM, PRBool *isTrusted NS_OUTPARAM) { return _to GetPreferences(prefBranch, id, subjectName, grantedList, deniedList, isTrusted); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) { return _to Equals(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EqualsIgnoringDomain(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) { return _to EqualsIgnoringDomain(other, _retval); } \
  NS_IMETHOD GetHashValue(PRUint32 *aHashValue) { return _to GetHashValue(aHashValue); } \
  NS_IMETHOD GetJSPrincipals(JSContext *cx, JSPrincipals **_retval NS_OUTPARAM) { return _to GetJSPrincipals(cx, _retval); } \
  NS_IMETHOD GetSecurityPolicy(void **aSecurityPolicy) { return _to GetSecurityPolicy(aSecurityPolicy); } \
  NS_IMETHOD SetSecurityPolicy(void *aSecurityPolicy) { return _to SetSecurityPolicy(aSecurityPolicy); } \
  NS_IMETHOD CanEnableCapability(const char * capability, PRInt16 *_retval NS_OUTPARAM) { return _to CanEnableCapability(capability, _retval); } \
  NS_IMETHOD SetCanEnableCapability(const char * capability, PRInt16 canEnable) { return _to SetCanEnableCapability(capability, canEnable); } \
  NS_IMETHOD IsCapabilityEnabled(const char * capability, void *annotation, PRBool *_retval NS_OUTPARAM) { return _to IsCapabilityEnabled(capability, annotation, _retval); } \
  NS_IMETHOD EnableCapability(const char * capability, void **annotation NS_INOUTPARAM) { return _to EnableCapability(capability, annotation); } \
  NS_IMETHOD RevertCapability(const char * capability, void **annotation NS_INOUTPARAM) { return _to RevertCapability(capability, annotation); } \
  NS_IMETHOD DisableCapability(const char * capability, void **annotation NS_INOUTPARAM) { return _to DisableCapability(capability, annotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return _to GetURI(aURI); } \
  NS_IMETHOD GetDomain(nsIURI * *aDomain) { return _to GetDomain(aDomain); } \
  NS_IMETHOD SetDomain(nsIURI *aDomain) { return _to SetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(char * *aOrigin) { return _to GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasCertificate(PRBool *aHasCertificate) { return _to GetHasCertificate(aHasCertificate); } \
  NS_SCRIPTABLE NS_IMETHOD GetFingerprint(nsACString & aFingerprint) { return _to GetFingerprint(aFingerprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrettyName(nsACString & aPrettyName) { return _to GetPrettyName(aPrettyName); } \
  NS_SCRIPTABLE NS_IMETHOD Subsumes(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) { return _to Subsumes(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckMayLoad(nsIURI *uri, PRBool report) { return _to CheckMayLoad(uri, report); } \
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsACString & aSubjectName) { return _to GetSubjectName(aSubjectName); } \
  NS_SCRIPTABLE NS_IMETHOD GetCertificate(nsISupports * *aCertificate) { return _to GetCertificate(aCertificate); } \
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) { return _to GetCsp(aCsp); } \
  NS_IMETHOD SetCsp(nsIContentSecurityPolicy *aCsp) { return _to SetCsp(aCsp); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINCIPAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPreferences(char * *prefBranch NS_OUTPARAM, char * *id NS_OUTPARAM, char * *subjectName NS_OUTPARAM, char * *grantedList NS_OUTPARAM, char * *deniedList NS_OUTPARAM, PRBool *isTrusted NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreferences(prefBranch, id, subjectName, grantedList, deniedList, isTrusted); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EqualsIgnoringDomain(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EqualsIgnoringDomain(other, _retval); } \
  NS_IMETHOD GetHashValue(PRUint32 *aHashValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHashValue(aHashValue); } \
  NS_IMETHOD GetJSPrincipals(JSContext *cx, JSPrincipals **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSPrincipals(cx, _retval); } \
  NS_IMETHOD GetSecurityPolicy(void **aSecurityPolicy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityPolicy(aSecurityPolicy); } \
  NS_IMETHOD SetSecurityPolicy(void *aSecurityPolicy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSecurityPolicy(aSecurityPolicy); } \
  NS_IMETHOD CanEnableCapability(const char * capability, PRInt16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanEnableCapability(capability, _retval); } \
  NS_IMETHOD SetCanEnableCapability(const char * capability, PRInt16 canEnable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCanEnableCapability(capability, canEnable); } \
  NS_IMETHOD IsCapabilityEnabled(const char * capability, void *annotation, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCapabilityEnabled(capability, annotation, _retval); } \
  NS_IMETHOD EnableCapability(const char * capability, void **annotation NS_INOUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableCapability(capability, annotation); } \
  NS_IMETHOD RevertCapability(const char * capability, void **annotation NS_INOUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RevertCapability(capability, annotation); } \
  NS_IMETHOD DisableCapability(const char * capability, void **annotation NS_INOUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisableCapability(capability, annotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_IMETHOD GetDomain(nsIURI * *aDomain) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomain(aDomain); } \
  NS_IMETHOD SetDomain(nsIURI *aDomain) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(char * *aOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasCertificate(PRBool *aHasCertificate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasCertificate(aHasCertificate); } \
  NS_SCRIPTABLE NS_IMETHOD GetFingerprint(nsACString & aFingerprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFingerprint(aFingerprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrettyName(nsACString & aPrettyName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrettyName(aPrettyName); } \
  NS_SCRIPTABLE NS_IMETHOD Subsumes(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Subsumes(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckMayLoad(nsIURI *uri, PRBool report) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckMayLoad(uri, report); } \
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsACString & aSubjectName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubjectName(aSubjectName); } \
  NS_SCRIPTABLE NS_IMETHOD GetCertificate(nsISupports * *aCertificate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCertificate(aCertificate); } \
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCsp(aCsp); } \
  NS_IMETHOD SetCsp(nsIContentSecurityPolicy *aCsp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCsp(aCsp); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrincipal : public nsIPrincipal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINCIPAL

  nsPrincipal();

private:
  ~nsPrincipal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPrincipal, nsIPrincipal)

nsPrincipal::nsPrincipal()
{
  /* member initializers and constructor code */
}

nsPrincipal::~nsPrincipal()
{
  /* destructor code */
}

/* void getPreferences (out string prefBranch, out string id, out string subjectName, out string grantedList, out string deniedList, out boolean isTrusted); */
NS_IMETHODIMP nsPrincipal::GetPreferences(char * *prefBranch NS_OUTPARAM, char * *id NS_OUTPARAM, char * *subjectName NS_OUTPARAM, char * *grantedList NS_OUTPARAM, char * *deniedList NS_OUTPARAM, PRBool *isTrusted NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equals (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::Equals(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equalsIgnoringDomain (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::EqualsIgnoringDomain(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute unsigned long hashValue; */
NS_IMETHODIMP nsPrincipal::GetHashValue(PRUint32 *aHashValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] JSPrincipals getJSPrincipals (in JSContext cx); */
NS_IMETHODIMP nsPrincipal::GetJSPrincipals(JSContext *cx, JSPrincipals **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute voidPtr securityPolicy; */
NS_IMETHODIMP nsPrincipal::GetSecurityPolicy(void **aSecurityPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPrincipal::SetSecurityPolicy(void *aSecurityPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] short canEnableCapability (in string capability); */
NS_IMETHODIMP nsPrincipal::CanEnableCapability(const char * capability, PRInt16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setCanEnableCapability (in string capability, in short canEnable); */
NS_IMETHODIMP nsPrincipal::SetCanEnableCapability(const char * capability, PRInt16 canEnable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean isCapabilityEnabled (in string capability, in voidPtr annotation); */
NS_IMETHODIMP nsPrincipal::IsCapabilityEnabled(const char * capability, void *annotation, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void enableCapability (in string capability, inout voidPtr annotation); */
NS_IMETHODIMP nsPrincipal::EnableCapability(const char * capability, void **annotation NS_INOUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void revertCapability (in string capability, inout voidPtr annotation); */
NS_IMETHODIMP nsPrincipal::RevertCapability(const char * capability, void **annotation NS_INOUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void disableCapability (in string capability, inout voidPtr annotation); */
NS_IMETHODIMP nsPrincipal::DisableCapability(const char * capability, void **annotation NS_INOUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsPrincipal::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute nsIURI domain; */
NS_IMETHODIMP nsPrincipal::GetDomain(nsIURI * *aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPrincipal::SetDomain(nsIURI *aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string origin; */
NS_IMETHODIMP nsPrincipal::GetOrigin(char * *aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasCertificate; */
NS_IMETHODIMP nsPrincipal::GetHasCertificate(PRBool *aHasCertificate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String fingerprint; */
NS_IMETHODIMP nsPrincipal::GetFingerprint(nsACString & aFingerprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String prettyName; */
NS_IMETHODIMP nsPrincipal::GetPrettyName(nsACString & aPrettyName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean subsumes (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::Subsumes(nsIPrincipal *other, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkMayLoad (in nsIURI uri, in boolean report); */
NS_IMETHODIMP nsPrincipal::CheckMayLoad(nsIURI *uri, PRBool report)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String subjectName; */
NS_IMETHODIMP nsPrincipal::GetSubjectName(nsACString & aSubjectName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports certificate; */
NS_IMETHODIMP nsPrincipal::GetCertificate(nsISupports * *aCertificate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute nsIContentSecurityPolicy csp; */
NS_IMETHODIMP nsPrincipal::GetCsp(nsIContentSecurityPolicy * *aCsp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPrincipal::SetCsp(nsIContentSecurityPolicy *aCsp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrincipal_h__ */
