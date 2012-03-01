/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIChannel.idl
 */

#ifndef __gen_nsIChannel_h__
#define __gen_nsIChannel_h__


#ifndef __gen_nsIRequest_h__
#include "nsIRequest.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIStreamListener; /* forward declaration */


/* starting interface:    nsIChannel */
#define NS_ICHANNEL_IID_STR "06f6ada3-7729-4e72-8d3f-bf8ba630ff9b"

#define NS_ICHANNEL_IID \
  {0x06f6ada3, 0x7729, 0x4e72, \
    { 0x8d, 0x3f, 0xbf, 0x8b, 0xa6, 0x30, 0xff, 0x9b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIChannel : public nsIRequest {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICHANNEL_IID)

  /* attribute nsIURI originalURI; */
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) = 0;

  /* readonly attribute nsIURI URI; */
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* attribute nsISupports owner; */
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner) = 0;

  /* attribute nsIInterfaceRequestor notificationCallbacks; */
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) = 0;

  /* readonly attribute nsISupports securityInfo; */
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) = 0;

  /* attribute ACString contentType; */
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType) = 0;

  /* attribute ACString contentCharset; */
  NS_SCRIPTABLE NS_IMETHOD GetContentCharset(nsACString & aContentCharset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) = 0;

  /* attribute long contentLength; */
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt32 *aContentLength) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentLength(PRInt32 aContentLength) = 0;

  /* nsIInputStream open (); */
  NS_SCRIPTABLE NS_IMETHOD Open(nsIInputStream * *_retval NS_OUTPARAM) = 0;

  /* void asyncOpen (in nsIStreamListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) = 0;

  enum { LOAD_DOCUMENT_URI = 65536U };

  enum { LOAD_RETARGETED_DOCUMENT_URI = 131072U };

  enum { LOAD_REPLACE = 262144U };

  enum { LOAD_INITIAL_DOCUMENT_URI = 524288U };

  enum { LOAD_TARGETED = 1048576U };

  enum { LOAD_CALL_CONTENT_SNIFFERS = 2097152U };

  enum { LOAD_CLASSIFY_URI = 4194304U };

  /* readonly attribute unsigned long contentDisposition; */
  NS_SCRIPTABLE NS_IMETHOD GetContentDisposition(PRUint32 *aContentDisposition) = 0;

  enum { DISPOSITION_INLINE = 0U };

  enum { DISPOSITION_ATTACHMENT = 1U };

  /* readonly attribute AString contentDispositionFilename; */
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) = 0;

  /* readonly attribute ACString contentDispositionHeader; */
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIChannel, NS_ICHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI); \
  NS_SCRIPTABLE NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI); \
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner); \
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner); \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks); \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks); \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo); \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType); \
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetContentCharset(nsACString & aContentCharset); \
  NS_SCRIPTABLE NS_IMETHOD SetContentCharset(const nsACString & aContentCharset); \
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt32 *aContentLength); \
  NS_SCRIPTABLE NS_IMETHOD SetContentLength(PRInt32 aContentLength); \
  NS_SCRIPTABLE NS_IMETHOD Open(nsIInputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD GetContentDisposition(PRUint32 *aContentDisposition); \
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename); \
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) { return _to GetOriginalURI(aOriginalURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) { return _to SetOriginalURI(aOriginalURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return _to GetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner) { return _to GetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner) { return _to SetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) { return _to GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) { return _to SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) { return _to GetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) { return _to GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType) { return _to SetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentCharset(nsACString & aContentCharset) { return _to GetContentCharset(aContentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) { return _to SetContentCharset(aContentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt32 *aContentLength) { return _to GetContentLength(aContentLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentLength(PRInt32 aContentLength) { return _to SetContentLength(aContentLength); } \
  NS_SCRIPTABLE NS_IMETHOD Open(nsIInputStream * *_retval NS_OUTPARAM) { return _to Open(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) { return _to AsyncOpen(aListener, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentDisposition(PRUint32 *aContentDisposition) { return _to GetContentDisposition(aContentDisposition); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) { return _to GetContentDispositionFilename(aContentDispositionFilename); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) { return _to GetContentDispositionHeader(aContentDispositionHeader); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalURI(aOriginalURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOriginalURI(aOriginalURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentCharset(nsACString & aContentCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentCharset(aContentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentCharset(aContentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentLength(PRInt32 *aContentLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentLength(aContentLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentLength(PRInt32 aContentLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentLength(aContentLength); } \
  NS_SCRIPTABLE NS_IMETHOD Open(nsIInputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncOpen(aListener, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentDisposition(PRUint32 *aContentDisposition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDisposition(aContentDisposition); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDispositionFilename(aContentDispositionFilename); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDispositionHeader(aContentDispositionHeader); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsChannel : public nsIChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHANNEL

  nsChannel();

private:
  ~nsChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsChannel, nsIChannel)

nsChannel::nsChannel()
{
  /* member initializers and constructor code */
}

nsChannel::~nsChannel()
{
  /* destructor code */
}

/* attribute nsIURI originalURI; */
NS_IMETHODIMP nsChannel::GetOriginalURI(nsIURI * *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetOriginalURI(nsIURI *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsChannel::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports owner; */
NS_IMETHODIMP nsChannel::GetOwner(nsISupports * *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetOwner(nsISupports *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP nsChannel::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports securityInfo; */
NS_IMETHODIMP nsChannel::GetSecurityInfo(nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString contentType; */
NS_IMETHODIMP nsChannel::GetContentType(nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentType(const nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString contentCharset; */
NS_IMETHODIMP nsChannel::GetContentCharset(nsACString & aContentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentCharset(const nsACString & aContentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long contentLength; */
NS_IMETHODIMP nsChannel::GetContentLength(PRInt32 *aContentLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentLength(PRInt32 aContentLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream open (); */
NS_IMETHODIMP nsChannel::Open(nsIInputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOpen (in nsIStreamListener aListener, in nsISupports aContext); */
NS_IMETHODIMP nsChannel::AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long contentDisposition; */
NS_IMETHODIMP nsChannel::GetContentDisposition(PRUint32 *aContentDisposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString contentDispositionFilename; */
NS_IMETHODIMP nsChannel::GetContentDispositionFilename(nsAString & aContentDispositionFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString contentDispositionHeader; */
NS_IMETHODIMP nsChannel::GetContentDispositionHeader(nsACString & aContentDispositionHeader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIChannel_h__ */
