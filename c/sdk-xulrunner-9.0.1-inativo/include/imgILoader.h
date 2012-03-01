/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libpr0n/public/imgILoader.idl
 */

#ifndef __gen_imgILoader_h__
#define __gen_imgILoader_h__


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
class imgIDecoderObserver; /* forward declaration */

class imgIRequest; /* forward declaration */

class nsIChannel; /* forward declaration */

class nsILoadGroup; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIStreamListener; /* forward declaration */

class nsIURI; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */

class nsIChannelPolicy; /* forward declaration */


/* starting interface:    imgILoader */
#define IMGILOADER_IID_STR "20a5e3e9-0d5b-482c-9f41-942b5f19e5a3"

#define IMGILOADER_IID \
  {0x20a5e3e9, 0x0d5b, 0x482c, \
    { 0x9f, 0x41, 0x94, 0x2b, 0x5f, 0x19, 0xe5, 0xa3 }}

class NS_NO_VTABLE NS_SCRIPTABLE imgILoader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMGILOADER_IID)

  enum { LOAD_CORS_ANONYMOUS = 65536U };

  enum { LOAD_CORS_USE_CREDENTIALS = 131072U };

  /* imgIRequest loadImage (in nsIURI aURI, in nsIURI aInitialDocumentURL, in nsIURI aReferrerURI, in nsIPrincipal aLoadingPrincipal, in nsILoadGroup aLoadGroup, in imgIDecoderObserver aObserver, in nsISupports aCX, in nsLoadFlags aLoadFlags, in nsISupports cacheKey, in imgIRequest aRequest, in nsIChannelPolicy channelPolicy); */
  NS_SCRIPTABLE NS_IMETHOD LoadImage(nsIURI *aURI, nsIURI *aInitialDocumentURL, nsIURI *aReferrerURI, nsIPrincipal *aLoadingPrincipal, nsILoadGroup *aLoadGroup, imgIDecoderObserver *aObserver, nsISupports *aCX, nsLoadFlags aLoadFlags, nsISupports *cacheKey, imgIRequest *aRequest, nsIChannelPolicy *channelPolicy, imgIRequest * *_retval NS_OUTPARAM) = 0;

  /* imgIRequest loadImageWithChannel (in nsIChannel aChannel, in imgIDecoderObserver aObserver, in nsISupports cx, out nsIStreamListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, imgIDecoderObserver *aObserver, nsISupports *cx, nsIStreamListener * *aListener NS_OUTPARAM, imgIRequest * *_retval NS_OUTPARAM) = 0;

  /* boolean supportImageWithMimeType (in string mimeType); */
  NS_SCRIPTABLE NS_IMETHOD SupportImageWithMimeType(const char * mimeType, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(imgILoader, IMGILOADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMGILOADER \
  NS_SCRIPTABLE NS_IMETHOD LoadImage(nsIURI *aURI, nsIURI *aInitialDocumentURL, nsIURI *aReferrerURI, nsIPrincipal *aLoadingPrincipal, nsILoadGroup *aLoadGroup, imgIDecoderObserver *aObserver, nsISupports *aCX, nsLoadFlags aLoadFlags, nsISupports *cacheKey, imgIRequest *aRequest, nsIChannelPolicy *channelPolicy, imgIRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, imgIDecoderObserver *aObserver, nsISupports *cx, nsIStreamListener * *aListener NS_OUTPARAM, imgIRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SupportImageWithMimeType(const char * mimeType, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMGILOADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoadImage(nsIURI *aURI, nsIURI *aInitialDocumentURL, nsIURI *aReferrerURI, nsIPrincipal *aLoadingPrincipal, nsILoadGroup *aLoadGroup, imgIDecoderObserver *aObserver, nsISupports *aCX, nsLoadFlags aLoadFlags, nsISupports *cacheKey, imgIRequest *aRequest, nsIChannelPolicy *channelPolicy, imgIRequest * *_retval NS_OUTPARAM) { return _to LoadImage(aURI, aInitialDocumentURL, aReferrerURI, aLoadingPrincipal, aLoadGroup, aObserver, aCX, aLoadFlags, cacheKey, aRequest, channelPolicy, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, imgIDecoderObserver *aObserver, nsISupports *cx, nsIStreamListener * *aListener NS_OUTPARAM, imgIRequest * *_retval NS_OUTPARAM) { return _to LoadImageWithChannel(aChannel, aObserver, cx, aListener, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SupportImageWithMimeType(const char * mimeType, PRBool *_retval NS_OUTPARAM) { return _to SupportImageWithMimeType(mimeType, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMGILOADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoadImage(nsIURI *aURI, nsIURI *aInitialDocumentURL, nsIURI *aReferrerURI, nsIPrincipal *aLoadingPrincipal, nsILoadGroup *aLoadGroup, imgIDecoderObserver *aObserver, nsISupports *aCX, nsLoadFlags aLoadFlags, nsISupports *cacheKey, imgIRequest *aRequest, nsIChannelPolicy *channelPolicy, imgIRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadImage(aURI, aInitialDocumentURL, aReferrerURI, aLoadingPrincipal, aLoadGroup, aObserver, aCX, aLoadFlags, cacheKey, aRequest, channelPolicy, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadImageWithChannel(nsIChannel *aChannel, imgIDecoderObserver *aObserver, nsISupports *cx, nsIStreamListener * *aListener NS_OUTPARAM, imgIRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadImageWithChannel(aChannel, aObserver, cx, aListener, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SupportImageWithMimeType(const char * mimeType, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SupportImageWithMimeType(mimeType, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public imgILoader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMGILOADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, imgILoader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* imgIRequest loadImage (in nsIURI aURI, in nsIURI aInitialDocumentURL, in nsIURI aReferrerURI, in nsIPrincipal aLoadingPrincipal, in nsILoadGroup aLoadGroup, in imgIDecoderObserver aObserver, in nsISupports aCX, in nsLoadFlags aLoadFlags, in nsISupports cacheKey, in imgIRequest aRequest, in nsIChannelPolicy channelPolicy); */
NS_IMETHODIMP _MYCLASS_::LoadImage(nsIURI *aURI, nsIURI *aInitialDocumentURL, nsIURI *aReferrerURI, nsIPrincipal *aLoadingPrincipal, nsILoadGroup *aLoadGroup, imgIDecoderObserver *aObserver, nsISupports *aCX, nsLoadFlags aLoadFlags, nsISupports *cacheKey, imgIRequest *aRequest, nsIChannelPolicy *channelPolicy, imgIRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* imgIRequest loadImageWithChannel (in nsIChannel aChannel, in imgIDecoderObserver aObserver, in nsISupports cx, out nsIStreamListener aListener); */
NS_IMETHODIMP _MYCLASS_::LoadImageWithChannel(nsIChannel *aChannel, imgIDecoderObserver *aObserver, nsISupports *cx, nsIStreamListener * *aListener NS_OUTPARAM, imgIRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean supportImageWithMimeType (in string mimeType); */
NS_IMETHODIMP _MYCLASS_::SupportImageWithMimeType(const char * mimeType, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_imgILoader_h__ */
