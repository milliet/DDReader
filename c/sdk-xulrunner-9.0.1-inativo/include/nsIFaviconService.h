/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/nsIFaviconService.idl
 */

#ifndef __gen_nsIFaviconService_h__
#define __gen_nsIFaviconService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIFaviconDataCallback; /* forward declaration */


/* starting interface:    nsIFaviconService */
#define NS_IFAVICONSERVICE_IID_STR "2cf188f4-3c96-4bca-b668-36b25aaf7c1d"

#define NS_IFAVICONSERVICE_IID \
  {0x2cf188f4, 0x3c96, 0x4bca, \
    { 0xb6, 0x68, 0x36, 0xb2, 0x5a, 0xaf, 0x7c, 0x1d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFaviconService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFAVICONSERVICE_IID)

  /* void setFaviconUrlForPage (in nsIURI aPageURI, in nsIURI aFaviconURI); */
  NS_SCRIPTABLE NS_IMETHOD SetFaviconUrlForPage(nsIURI *aPageURI, nsIURI *aFaviconURI) = 0;

  /* [deprecated] void setAndLoadFaviconForPage (in nsIURI aPageURI, in nsIURI aFaviconURI, in boolean aForceReload, [optional] in nsIFaviconDataCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD SetAndLoadFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, PRBool aForceReload, nsIFaviconDataCallback *aCallback) = 0;

  /* void setFaviconData (in nsIURI aFaviconURI, [array, size_is (aDataLen), const] in octet aData, in unsigned long aDataLen, in AUTF8String aMimeType, in PRTime aExpiration); */
  NS_SCRIPTABLE NS_IMETHOD SetFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration) = 0;

  /* void setFaviconDataFromDataURL (in nsIURI aFaviconURI, in AString aDataURL, in PRTime aExpiration); */
  NS_SCRIPTABLE NS_IMETHOD SetFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration) = 0;

  /* void getFaviconData (in nsIURI aFaviconURI, out AUTF8String aMimeType, [optional] out unsigned long aDataLen, [array, size_is (aDataLen), retval] out octet aData); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconData(nsIURI *aFaviconURI, nsACString & aMimeType NS_OUTPARAM, PRUint32 *aDataLen NS_OUTPARAM, PRUint8 **aData NS_OUTPARAM) = 0;

  /* AString getFaviconDataAsDataURL (in nsIURI aFaviconURI); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataAsDataURL(nsIURI *aFaviconURI, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIURI getFaviconForPage (in nsIURI aPageURI); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* nsIURI getFaviconImageForPage (in nsIURI aPageURI); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconImageForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* nsIURI getFaviconLinkForIcon (in nsIURI aFaviconURI); */
  NS_SCRIPTABLE NS_IMETHOD GetFaviconLinkForIcon(nsIURI *aFaviconURI, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* void expireAllFavicons (); */
  NS_SCRIPTABLE NS_IMETHOD ExpireAllFavicons(void) = 0;

  /* void addFailedFavicon (in nsIURI aFaviconURI); */
  NS_SCRIPTABLE NS_IMETHOD AddFailedFavicon(nsIURI *aFaviconURI) = 0;

  /* void removeFailedFavicon (in nsIURI aFaviconURI); */
  NS_SCRIPTABLE NS_IMETHOD RemoveFailedFavicon(nsIURI *aFaviconURI) = 0;

  /* boolean isFailedFavicon (in nsIURI aFaviconURI); */
  NS_SCRIPTABLE NS_IMETHOD IsFailedFavicon(nsIURI *aFaviconURI, PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIURI defaultFavicon; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultFavicon(nsIURI * *aDefaultFavicon) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFaviconService, NS_IFAVICONSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFAVICONSERVICE \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconUrlForPage(nsIURI *aPageURI, nsIURI *aFaviconURI); \
  NS_SCRIPTABLE NS_IMETHOD SetAndLoadFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, PRBool aForceReload, nsIFaviconDataCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration); \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconData(nsIURI *aFaviconURI, nsACString & aMimeType NS_OUTPARAM, PRUint32 *aDataLen NS_OUTPARAM, PRUint8 **aData NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataAsDataURL(nsIURI *aFaviconURI, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconImageForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconLinkForIcon(nsIURI *aFaviconURI, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExpireAllFavicons(void); \
  NS_SCRIPTABLE NS_IMETHOD AddFailedFavicon(nsIURI *aFaviconURI); \
  NS_SCRIPTABLE NS_IMETHOD RemoveFailedFavicon(nsIURI *aFaviconURI); \
  NS_SCRIPTABLE NS_IMETHOD IsFailedFavicon(nsIURI *aFaviconURI, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultFavicon(nsIURI * *aDefaultFavicon); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFAVICONSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconUrlForPage(nsIURI *aPageURI, nsIURI *aFaviconURI) { return _to SetFaviconUrlForPage(aPageURI, aFaviconURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetAndLoadFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, PRBool aForceReload, nsIFaviconDataCallback *aCallback) { return _to SetAndLoadFaviconForPage(aPageURI, aFaviconURI, aForceReload, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration) { return _to SetFaviconData(aFaviconURI, aData, aDataLen, aMimeType, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration) { return _to SetFaviconDataFromDataURL(aFaviconURI, aDataURL, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconData(nsIURI *aFaviconURI, nsACString & aMimeType NS_OUTPARAM, PRUint32 *aDataLen NS_OUTPARAM, PRUint8 **aData NS_OUTPARAM) { return _to GetFaviconData(aFaviconURI, aMimeType, aDataLen, aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataAsDataURL(nsIURI *aFaviconURI, nsAString & _retval NS_OUTPARAM) { return _to GetFaviconDataAsDataURL(aFaviconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM) { return _to GetFaviconForPage(aPageURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconImageForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM) { return _to GetFaviconImageForPage(aPageURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconLinkForIcon(nsIURI *aFaviconURI, nsIURI * *_retval NS_OUTPARAM) { return _to GetFaviconLinkForIcon(aFaviconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExpireAllFavicons(void) { return _to ExpireAllFavicons(); } \
  NS_SCRIPTABLE NS_IMETHOD AddFailedFavicon(nsIURI *aFaviconURI) { return _to AddFailedFavicon(aFaviconURI); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFailedFavicon(nsIURI *aFaviconURI) { return _to RemoveFailedFavicon(aFaviconURI); } \
  NS_SCRIPTABLE NS_IMETHOD IsFailedFavicon(nsIURI *aFaviconURI, PRBool *_retval NS_OUTPARAM) { return _to IsFailedFavicon(aFaviconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultFavicon(nsIURI * *aDefaultFavicon) { return _to GetDefaultFavicon(aDefaultFavicon); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFAVICONSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconUrlForPage(nsIURI *aPageURI, nsIURI *aFaviconURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFaviconUrlForPage(aPageURI, aFaviconURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetAndLoadFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, PRBool aForceReload, nsIFaviconDataCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAndLoadFaviconForPage(aPageURI, aFaviconURI, aForceReload, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFaviconData(aFaviconURI, aData, aDataLen, aMimeType, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD SetFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFaviconDataFromDataURL(aFaviconURI, aDataURL, aExpiration); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconData(nsIURI *aFaviconURI, nsACString & aMimeType NS_OUTPARAM, PRUint32 *aDataLen NS_OUTPARAM, PRUint8 **aData NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconData(aFaviconURI, aMimeType, aDataLen, aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconDataAsDataURL(nsIURI *aFaviconURI, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconDataAsDataURL(aFaviconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconForPage(aPageURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconImageForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconImageForPage(aPageURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFaviconLinkForIcon(nsIURI *aFaviconURI, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconLinkForIcon(aFaviconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExpireAllFavicons(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExpireAllFavicons(); } \
  NS_SCRIPTABLE NS_IMETHOD AddFailedFavicon(nsIURI *aFaviconURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddFailedFavicon(aFaviconURI); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFailedFavicon(nsIURI *aFaviconURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFailedFavicon(aFaviconURI); } \
  NS_SCRIPTABLE NS_IMETHOD IsFailedFavicon(nsIURI *aFaviconURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsFailedFavicon(aFaviconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultFavicon(nsIURI * *aDefaultFavicon) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultFavicon(aDefaultFavicon); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFaviconService : public nsIFaviconService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFAVICONSERVICE

  nsFaviconService();

private:
  ~nsFaviconService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFaviconService, nsIFaviconService)

nsFaviconService::nsFaviconService()
{
  /* member initializers and constructor code */
}

nsFaviconService::~nsFaviconService()
{
  /* destructor code */
}

/* void setFaviconUrlForPage (in nsIURI aPageURI, in nsIURI aFaviconURI); */
NS_IMETHODIMP nsFaviconService::SetFaviconUrlForPage(nsIURI *aPageURI, nsIURI *aFaviconURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] void setAndLoadFaviconForPage (in nsIURI aPageURI, in nsIURI aFaviconURI, in boolean aForceReload, [optional] in nsIFaviconDataCallback aCallback); */
NS_IMETHODIMP nsFaviconService::SetAndLoadFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, PRBool aForceReload, nsIFaviconDataCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFaviconData (in nsIURI aFaviconURI, [array, size_is (aDataLen), const] in octet aData, in unsigned long aDataLen, in AUTF8String aMimeType, in PRTime aExpiration); */
NS_IMETHODIMP nsFaviconService::SetFaviconData(nsIURI *aFaviconURI, const PRUint8 *aData, PRUint32 aDataLen, const nsACString & aMimeType, PRTime aExpiration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFaviconDataFromDataURL (in nsIURI aFaviconURI, in AString aDataURL, in PRTime aExpiration); */
NS_IMETHODIMP nsFaviconService::SetFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getFaviconData (in nsIURI aFaviconURI, out AUTF8String aMimeType, [optional] out unsigned long aDataLen, [array, size_is (aDataLen), retval] out octet aData); */
NS_IMETHODIMP nsFaviconService::GetFaviconData(nsIURI *aFaviconURI, nsACString & aMimeType NS_OUTPARAM, PRUint32 *aDataLen NS_OUTPARAM, PRUint8 **aData NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getFaviconDataAsDataURL (in nsIURI aFaviconURI); */
NS_IMETHODIMP nsFaviconService::GetFaviconDataAsDataURL(nsIURI *aFaviconURI, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getFaviconForPage (in nsIURI aPageURI); */
NS_IMETHODIMP nsFaviconService::GetFaviconForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getFaviconImageForPage (in nsIURI aPageURI); */
NS_IMETHODIMP nsFaviconService::GetFaviconImageForPage(nsIURI *aPageURI, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getFaviconLinkForIcon (in nsIURI aFaviconURI); */
NS_IMETHODIMP nsFaviconService::GetFaviconLinkForIcon(nsIURI *aFaviconURI, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void expireAllFavicons (); */
NS_IMETHODIMP nsFaviconService::ExpireAllFavicons()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addFailedFavicon (in nsIURI aFaviconURI); */
NS_IMETHODIMP nsFaviconService::AddFailedFavicon(nsIURI *aFaviconURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFailedFavicon (in nsIURI aFaviconURI); */
NS_IMETHODIMP nsFaviconService::RemoveFailedFavicon(nsIURI *aFaviconURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isFailedFavicon (in nsIURI aFaviconURI); */
NS_IMETHODIMP nsFaviconService::IsFailedFavicon(nsIURI *aFaviconURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI defaultFavicon; */
NS_IMETHODIMP nsFaviconService::GetDefaultFavicon(nsIURI * *aDefaultFavicon)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFaviconDataCallback */
#define NS_IFAVICONDATACALLBACK_IID_STR "22ebd780-f4ab-11de-8a39-0800200c9a66"

#define NS_IFAVICONDATACALLBACK_IID \
  {0x22ebd780, 0xf4ab, 0x11de, \
    { 0x8a, 0x39, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFaviconDataCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFAVICONDATACALLBACK_IID)

  /* void onFaviconDataAvailable (in nsIURI aURI, in unsigned long aDataLen, [array, size_is (aDataLen), const] in octet aData, in AUTF8String aMimeType); */
  NS_SCRIPTABLE NS_IMETHOD OnFaviconDataAvailable(nsIURI *aURI, PRUint32 aDataLen, const PRUint8 *aData, const nsACString & aMimeType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFaviconDataCallback, NS_IFAVICONDATACALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFAVICONDATACALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnFaviconDataAvailable(nsIURI *aURI, PRUint32 aDataLen, const PRUint8 *aData, const nsACString & aMimeType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFAVICONDATACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnFaviconDataAvailable(nsIURI *aURI, PRUint32 aDataLen, const PRUint8 *aData, const nsACString & aMimeType) { return _to OnFaviconDataAvailable(aURI, aDataLen, aData, aMimeType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFAVICONDATACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnFaviconDataAvailable(nsIURI *aURI, PRUint32 aDataLen, const PRUint8 *aData, const nsACString & aMimeType) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnFaviconDataAvailable(aURI, aDataLen, aData, aMimeType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFaviconDataCallback : public nsIFaviconDataCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFAVICONDATACALLBACK

  nsFaviconDataCallback();

private:
  ~nsFaviconDataCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFaviconDataCallback, nsIFaviconDataCallback)

nsFaviconDataCallback::nsFaviconDataCallback()
{
  /* member initializers and constructor code */
}

nsFaviconDataCallback::~nsFaviconDataCallback()
{
  /* destructor code */
}

/* void onFaviconDataAvailable (in nsIURI aURI, in unsigned long aDataLen, [array, size_is (aDataLen), const] in octet aData, in AUTF8String aMimeType); */
NS_IMETHODIMP nsFaviconDataCallback::OnFaviconDataAvailable(nsIURI *aURI, PRUint32 aDataLen, const PRUint8 *aData, const nsACString & aMimeType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/**
 * Notification sent when all favicons are expired.
 */
#define NS_PLACES_FAVICONS_EXPIRED_TOPIC_ID "places-favicons-expired"
#define FAVICON_DEFAULT_URL "chrome://mozapps/skin/places/defaultFavicon.png"
#define FAVICON_ERRORPAGE_URL "chrome://global/skin/icons/warning-16.png"

#endif /* __gen_nsIFaviconService_h__ */
