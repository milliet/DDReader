/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIImageLoadingContent.idl
 */

#ifndef __gen_nsIImageLoadingContent_h__
#define __gen_nsIImageLoadingContent_h__


#ifndef __gen_imgIDecoderObserver_h__
#include "imgIDecoderObserver.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class imgIRequest; /* forward declaration */

class nsIChannel; /* forward declaration */

class nsIStreamListener; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIDocument; /* forward declaration */


/* starting interface:    nsIImageLoadingContent */
#define NS_IIMAGELOADINGCONTENT_IID_STR "95c74255-df9a-4060-b5a0-0d111fcafe08"

#define NS_IIMAGELOADINGCONTENT_IID \
  {0x95c74255, 0xdf9a, 0x4060, \
    { 0xb5, 0xa0, 0x0d, 0x11, 0x1f, 0xca, 0xfe, 0x08 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIImageLoadingContent : public imgIDecoderObserver {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IIMAGELOADINGCONTENT_IID)

  enum { UNKNOWN_REQUEST = -1 };

  enum { CURRENT_REQUEST = 0 };

  enum { PENDING_REQUEST = 1 };

  /* attribute boolean loadingEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadingEnabled(PRBool *aLoadingEnabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLoadingEnabled(PRBool aLoadingEnabled) = 0;

  /* readonly attribute short imageBlockingStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetImageBlockingStatus(PRInt16 *aImageBlockingStatus) = 0;

  /* void addObserver (in imgIDecoderObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(imgIDecoderObserver *aObserver) = 0;

  /* void removeObserver (in imgIDecoderObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(imgIDecoderObserver *aObserver) = 0;

  /* imgIRequest getRequest (in long aRequestType); */
  NS_SCRIPTABLE NS_IMETHOD GetRequest(PRInt32 aRequestType, imgIRequest * *_retval NS_OUTPARAM) = 0;

  /* long getRequestType (in imgIRequest aRequest); */
  NS_SCRIPTABLE NS_IMETHOD GetRequestType(imgIRequest *aRequest, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIURI currentURI; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentURI(nsIURI * *aCurrentURI) = 0;

  /* nsIStreamListener loadImageWithChannel (in nsIChannel aChannel); */
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, nsIStreamListener * *_retval NS_OUTPARAM) = 0;

  /* void forceReload (); */
  NS_SCRIPTABLE NS_IMETHOD ForceReload(void) = 0;

  /* void forceImageState (in boolean aForce, in unsigned long long aState); */
  NS_SCRIPTABLE NS_IMETHOD ForceImageState(PRBool aForce, PRUint64 aState) = 0;

  /* [noscript,notxpcom] void NotifyOwnerDocumentChanged (in nsIDocument aOldDoc); */
  NS_IMETHOD_(void) NotifyOwnerDocumentChanged(nsIDocument *aOldDoc) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIImageLoadingContent, NS_IIMAGELOADINGCONTENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIIMAGELOADINGCONTENT \
  NS_SCRIPTABLE NS_IMETHOD GetLoadingEnabled(PRBool *aLoadingEnabled); \
  NS_SCRIPTABLE NS_IMETHOD SetLoadingEnabled(PRBool aLoadingEnabled); \
  NS_SCRIPTABLE NS_IMETHOD GetImageBlockingStatus(PRInt16 *aImageBlockingStatus); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(imgIDecoderObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(imgIDecoderObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD GetRequest(PRInt32 aRequestType, imgIRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestType(imgIRequest *aRequest, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentURI(nsIURI * *aCurrentURI); \
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, nsIStreamListener * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ForceReload(void); \
  NS_SCRIPTABLE NS_IMETHOD ForceImageState(PRBool aForce, PRUint64 aState); \
  NS_IMETHOD_(void) NotifyOwnerDocumentChanged(nsIDocument *aOldDoc); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIIMAGELOADINGCONTENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLoadingEnabled(PRBool *aLoadingEnabled) { return _to GetLoadingEnabled(aLoadingEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadingEnabled(PRBool aLoadingEnabled) { return _to SetLoadingEnabled(aLoadingEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetImageBlockingStatus(PRInt16 *aImageBlockingStatus) { return _to GetImageBlockingStatus(aImageBlockingStatus); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(imgIDecoderObserver *aObserver) { return _to AddObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(imgIDecoderObserver *aObserver) { return _to RemoveObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequest(PRInt32 aRequestType, imgIRequest * *_retval NS_OUTPARAM) { return _to GetRequest(aRequestType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestType(imgIRequest *aRequest, PRInt32 *_retval NS_OUTPARAM) { return _to GetRequestType(aRequest, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentURI(nsIURI * *aCurrentURI) { return _to GetCurrentURI(aCurrentURI); } \
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, nsIStreamListener * *_retval NS_OUTPARAM) { return _to LoadImageWithChannel(aChannel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ForceReload(void) { return _to ForceReload(); } \
  NS_SCRIPTABLE NS_IMETHOD ForceImageState(PRBool aForce, PRUint64 aState) { return _to ForceImageState(aForce, aState); } \
  NS_IMETHOD_(void) NotifyOwnerDocumentChanged(nsIDocument *aOldDoc) { return _to NotifyOwnerDocumentChanged(aOldDoc); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIIMAGELOADINGCONTENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLoadingEnabled(PRBool *aLoadingEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadingEnabled(aLoadingEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadingEnabled(PRBool aLoadingEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadingEnabled(aLoadingEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetImageBlockingStatus(PRInt16 *aImageBlockingStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImageBlockingStatus(aImageBlockingStatus); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(imgIDecoderObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(imgIDecoderObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequest(PRInt32 aRequestType, imgIRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequest(aRequestType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestType(imgIRequest *aRequest, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestType(aRequest, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentURI(nsIURI * *aCurrentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentURI(aCurrentURI); } \
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, nsIStreamListener * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadImageWithChannel(aChannel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ForceReload(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceReload(); } \
  NS_SCRIPTABLE NS_IMETHOD ForceImageState(PRBool aForce, PRUint64 aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceImageState(aForce, aState); } \
  NS_IMETHOD_(void) NotifyOwnerDocumentChanged(nsIDocument *aOldDoc) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyOwnerDocumentChanged(aOldDoc); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsImageLoadingContent : public nsIImageLoadingContent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIIMAGELOADINGCONTENT

  nsImageLoadingContent();

private:
  ~nsImageLoadingContent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsImageLoadingContent, nsIImageLoadingContent)

nsImageLoadingContent::nsImageLoadingContent()
{
  /* member initializers and constructor code */
}

nsImageLoadingContent::~nsImageLoadingContent()
{
  /* destructor code */
}

/* attribute boolean loadingEnabled; */
NS_IMETHODIMP nsImageLoadingContent::GetLoadingEnabled(PRBool *aLoadingEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsImageLoadingContent::SetLoadingEnabled(PRBool aLoadingEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short imageBlockingStatus; */
NS_IMETHODIMP nsImageLoadingContent::GetImageBlockingStatus(PRInt16 *aImageBlockingStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in imgIDecoderObserver aObserver); */
NS_IMETHODIMP nsImageLoadingContent::AddObserver(imgIDecoderObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in imgIDecoderObserver aObserver); */
NS_IMETHODIMP nsImageLoadingContent::RemoveObserver(imgIDecoderObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* imgIRequest getRequest (in long aRequestType); */
NS_IMETHODIMP nsImageLoadingContent::GetRequest(PRInt32 aRequestType, imgIRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getRequestType (in imgIRequest aRequest); */
NS_IMETHODIMP nsImageLoadingContent::GetRequestType(imgIRequest *aRequest, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI currentURI; */
NS_IMETHODIMP nsImageLoadingContent::GetCurrentURI(nsIURI * *aCurrentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIStreamListener loadImageWithChannel (in nsIChannel aChannel); */
NS_IMETHODIMP nsImageLoadingContent::LoadImageWithChannel(nsIChannel *aChannel, nsIStreamListener * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceReload (); */
NS_IMETHODIMP nsImageLoadingContent::ForceReload()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceImageState (in boolean aForce, in unsigned long long aState); */
NS_IMETHODIMP nsImageLoadingContent::ForceImageState(PRBool aForce, PRUint64 aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void NotifyOwnerDocumentChanged (in nsIDocument aOldDoc); */
NS_IMETHODIMP_(void) nsImageLoadingContent::NotifyOwnerDocumentChanged(nsIDocument *aOldDoc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIImageLoadingContent_h__ */
