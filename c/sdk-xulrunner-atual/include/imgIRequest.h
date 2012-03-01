/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libpr0n/public/imgIRequest.idl
 */

#ifndef __gen_imgIRequest_h__
#define __gen_imgIRequest_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIRequest_h__
#include "nsIRequest.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class imgIContainer; /* forward declaration */

class imgIDecoderObserver; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIPrincipal; /* forward declaration */


/* starting interface:    imgIRequest */
#define IMGIREQUEST_IID_STR "c3bf4e2a-f64b-4ac1-a84e-18631b1802ab"

#define IMGIREQUEST_IID \
  {0xc3bf4e2a, 0xf64b, 0x4ac1, \
    { 0xa8, 0x4e, 0x18, 0x63, 0x1b, 0x18, 0x02, 0xab }}

class NS_NO_VTABLE NS_SCRIPTABLE imgIRequest : public nsIRequest {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMGIREQUEST_IID)

  /* readonly attribute imgIContainer image; */
  NS_SCRIPTABLE NS_IMETHOD GetImage(imgIContainer * *aImage) = 0;

  enum { STATUS_NONE = 0 };

  enum { STATUS_SIZE_AVAILABLE = 1 };

  enum { STATUS_LOAD_PARTIAL = 2 };

  enum { STATUS_LOAD_COMPLETE = 4 };

  enum { STATUS_ERROR = 8 };

  enum { STATUS_FRAME_COMPLETE = 16 };

  enum { STATUS_DECODE_COMPLETE = 32 };

  /* readonly attribute unsigned long imageStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetImageStatus(PRUint32 *aImageStatus) = 0;

  /* readonly attribute nsIURI URI; */
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* readonly attribute imgIDecoderObserver decoderObserver; */
  NS_SCRIPTABLE NS_IMETHOD GetDecoderObserver(imgIDecoderObserver * *aDecoderObserver) = 0;

  /* readonly attribute string mimeType; */
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(char * *aMimeType) = 0;

  /* imgIRequest clone (in imgIDecoderObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD Clone(imgIDecoderObserver *aObserver, imgIRequest * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIPrincipal imagePrincipal; */
  NS_SCRIPTABLE NS_IMETHOD GetImagePrincipal(nsIPrincipal * *aImagePrincipal) = 0;

  enum { CORS_NONE = 1 };

  enum { CORS_ANONYMOUS = 2 };

  enum { CORS_USE_CREDENTIALS = 3 };

  /* readonly attribute long CORSMode; */
  NS_SCRIPTABLE NS_IMETHOD GetCORSMode(PRInt32 *aCORSMode) = 0;

  /* void cancelAndForgetObserver (in nsresult aStatus); */
  NS_SCRIPTABLE NS_IMETHOD CancelAndForgetObserver(nsresult aStatus) = 0;

  /* void requestDecode (); */
  NS_SCRIPTABLE NS_IMETHOD RequestDecode(void) = 0;

  /* void lockImage (); */
  NS_SCRIPTABLE NS_IMETHOD LockImage(void) = 0;

  /* void unlockImage (); */
  NS_SCRIPTABLE NS_IMETHOD UnlockImage(void) = 0;

  /* imgIRequest getStaticRequest (); */
  NS_SCRIPTABLE NS_IMETHOD GetStaticRequest(imgIRequest * *_retval NS_OUTPARAM) = 0;

  /* void incrementAnimationConsumers (); */
  NS_SCRIPTABLE NS_IMETHOD IncrementAnimationConsumers(void) = 0;

  /* void decrementAnimationConsumers (); */
  NS_SCRIPTABLE NS_IMETHOD DecrementAnimationConsumers(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(imgIRequest, IMGIREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMGIREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetImage(imgIContainer * *aImage); \
  NS_SCRIPTABLE NS_IMETHOD GetImageStatus(PRUint32 *aImageStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI); \
  NS_SCRIPTABLE NS_IMETHOD GetDecoderObserver(imgIDecoderObserver * *aDecoderObserver); \
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(char * *aMimeType); \
  NS_SCRIPTABLE NS_IMETHOD Clone(imgIDecoderObserver *aObserver, imgIRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetImagePrincipal(nsIPrincipal * *aImagePrincipal); \
  NS_SCRIPTABLE NS_IMETHOD GetCORSMode(PRInt32 *aCORSMode); \
  NS_SCRIPTABLE NS_IMETHOD CancelAndForgetObserver(nsresult aStatus); \
  NS_SCRIPTABLE NS_IMETHOD RequestDecode(void); \
  NS_SCRIPTABLE NS_IMETHOD LockImage(void); \
  NS_SCRIPTABLE NS_IMETHOD UnlockImage(void); \
  NS_SCRIPTABLE NS_IMETHOD GetStaticRequest(imgIRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IncrementAnimationConsumers(void); \
  NS_SCRIPTABLE NS_IMETHOD DecrementAnimationConsumers(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMGIREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetImage(imgIContainer * *aImage) { return _to GetImage(aImage); } \
  NS_SCRIPTABLE NS_IMETHOD GetImageStatus(PRUint32 *aImageStatus) { return _to GetImageStatus(aImageStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return _to GetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetDecoderObserver(imgIDecoderObserver * *aDecoderObserver) { return _to GetDecoderObserver(aDecoderObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(char * *aMimeType) { return _to GetMimeType(aMimeType); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(imgIDecoderObserver *aObserver, imgIRequest * *_retval NS_OUTPARAM) { return _to Clone(aObserver, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetImagePrincipal(nsIPrincipal * *aImagePrincipal) { return _to GetImagePrincipal(aImagePrincipal); } \
  NS_SCRIPTABLE NS_IMETHOD GetCORSMode(PRInt32 *aCORSMode) { return _to GetCORSMode(aCORSMode); } \
  NS_SCRIPTABLE NS_IMETHOD CancelAndForgetObserver(nsresult aStatus) { return _to CancelAndForgetObserver(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD RequestDecode(void) { return _to RequestDecode(); } \
  NS_SCRIPTABLE NS_IMETHOD LockImage(void) { return _to LockImage(); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockImage(void) { return _to UnlockImage(); } \
  NS_SCRIPTABLE NS_IMETHOD GetStaticRequest(imgIRequest * *_retval NS_OUTPARAM) { return _to GetStaticRequest(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IncrementAnimationConsumers(void) { return _to IncrementAnimationConsumers(); } \
  NS_SCRIPTABLE NS_IMETHOD DecrementAnimationConsumers(void) { return _to DecrementAnimationConsumers(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMGIREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetImage(imgIContainer * *aImage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImage(aImage); } \
  NS_SCRIPTABLE NS_IMETHOD GetImageStatus(PRUint32 *aImageStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImageStatus(aImageStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetDecoderObserver(imgIDecoderObserver * *aDecoderObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDecoderObserver(aDecoderObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(char * *aMimeType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMimeType(aMimeType); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(imgIDecoderObserver *aObserver, imgIRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(aObserver, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetImagePrincipal(nsIPrincipal * *aImagePrincipal) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImagePrincipal(aImagePrincipal); } \
  NS_SCRIPTABLE NS_IMETHOD GetCORSMode(PRInt32 *aCORSMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCORSMode(aCORSMode); } \
  NS_SCRIPTABLE NS_IMETHOD CancelAndForgetObserver(nsresult aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelAndForgetObserver(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD RequestDecode(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestDecode(); } \
  NS_SCRIPTABLE NS_IMETHOD LockImage(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->LockImage(); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockImage(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockImage(); } \
  NS_SCRIPTABLE NS_IMETHOD GetStaticRequest(imgIRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStaticRequest(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IncrementAnimationConsumers(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->IncrementAnimationConsumers(); } \
  NS_SCRIPTABLE NS_IMETHOD DecrementAnimationConsumers(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DecrementAnimationConsumers(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public imgIRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMGIREQUEST

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, imgIRequest)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute imgIContainer image; */
NS_IMETHODIMP _MYCLASS_::GetImage(imgIContainer * *aImage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long imageStatus; */
NS_IMETHODIMP _MYCLASS_::GetImageStatus(PRUint32 *aImageStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP _MYCLASS_::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute imgIDecoderObserver decoderObserver; */
NS_IMETHODIMP _MYCLASS_::GetDecoderObserver(imgIDecoderObserver * *aDecoderObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string mimeType; */
NS_IMETHODIMP _MYCLASS_::GetMimeType(char * *aMimeType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* imgIRequest clone (in imgIDecoderObserver aObserver); */
NS_IMETHODIMP _MYCLASS_::Clone(imgIDecoderObserver *aObserver, imgIRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIPrincipal imagePrincipal; */
NS_IMETHODIMP _MYCLASS_::GetImagePrincipal(nsIPrincipal * *aImagePrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long CORSMode; */
NS_IMETHODIMP _MYCLASS_::GetCORSMode(PRInt32 *aCORSMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelAndForgetObserver (in nsresult aStatus); */
NS_IMETHODIMP _MYCLASS_::CancelAndForgetObserver(nsresult aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestDecode (); */
NS_IMETHODIMP _MYCLASS_::RequestDecode()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void lockImage (); */
NS_IMETHODIMP _MYCLASS_::LockImage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unlockImage (); */
NS_IMETHODIMP _MYCLASS_::UnlockImage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* imgIRequest getStaticRequest (); */
NS_IMETHODIMP _MYCLASS_::GetStaticRequest(imgIRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void incrementAnimationConsumers (); */
NS_IMETHODIMP _MYCLASS_::IncrementAnimationConsumers()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void decrementAnimationConsumers (); */
NS_IMETHODIMP _MYCLASS_::DecrementAnimationConsumers()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_imgIRequest_h__ */
