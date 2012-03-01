/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLVideoElement.idl
 */

#ifndef __gen_nsIDOMHTMLVideoElement_h__
#define __gen_nsIDOMHTMLVideoElement_h__


#ifndef __gen_nsIDOMHTMLMediaElement_h__
#include "nsIDOMHTMLMediaElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLVideoElement */
#define NS_IDOMHTMLVIDEOELEMENT_IID_STR "bebdbca4-05be-480a-bfb9-949fc7ff793f"

#define NS_IDOMHTMLVIDEOELEMENT_IID \
  {0xbebdbca4, 0x05be, 0x480a, \
    { 0xbf, 0xb9, 0x94, 0x9f, 0xc7, 0xff, 0x79, 0x3f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLVideoElement : public nsIDOMHTMLMediaElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLVIDEOELEMENT_IID)

  /* attribute long width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth) = 0;

  /* attribute long height; */
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight) = 0;

  /* readonly attribute unsigned long videoWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetVideoWidth(PRUint32 *aVideoWidth) = 0;

  /* readonly attribute unsigned long videoHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetVideoHeight(PRUint32 *aVideoHeight) = 0;

  /* attribute DOMString poster; */
  NS_SCRIPTABLE NS_IMETHOD GetPoster(nsAString & aPoster) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPoster(const nsAString & aPoster) = 0;

  /* readonly attribute unsigned long mozParsedFrames; */
  NS_SCRIPTABLE NS_IMETHOD GetMozParsedFrames(PRUint32 *aMozParsedFrames) = 0;

  /* readonly attribute unsigned long mozDecodedFrames; */
  NS_SCRIPTABLE NS_IMETHOD GetMozDecodedFrames(PRUint32 *aMozDecodedFrames) = 0;

  /* readonly attribute unsigned long mozPresentedFrames; */
  NS_SCRIPTABLE NS_IMETHOD GetMozPresentedFrames(PRUint32 *aMozPresentedFrames) = 0;

  /* readonly attribute unsigned long mozPaintedFrames; */
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintedFrames(PRUint32 *aMozPaintedFrames) = 0;

  /* readonly attribute double mozFrameDelay; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameDelay(double *aMozFrameDelay) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLVideoElement, NS_IDOMHTMLVIDEOELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLVIDEOELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetVideoWidth(PRUint32 *aVideoWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetVideoHeight(PRUint32 *aVideoHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetPoster(nsAString & aPoster); \
  NS_SCRIPTABLE NS_IMETHOD SetPoster(const nsAString & aPoster); \
  NS_SCRIPTABLE NS_IMETHOD GetMozParsedFrames(PRUint32 *aMozParsedFrames); \
  NS_SCRIPTABLE NS_IMETHOD GetMozDecodedFrames(PRUint32 *aMozDecodedFrames); \
  NS_SCRIPTABLE NS_IMETHOD GetMozPresentedFrames(PRUint32 *aMozPresentedFrames); \
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintedFrames(PRUint32 *aMozPaintedFrames); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameDelay(double *aMozFrameDelay); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLVIDEOELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth) { return _to SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) { return _to GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight) { return _to SetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideoWidth(PRUint32 *aVideoWidth) { return _to GetVideoWidth(aVideoWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideoHeight(PRUint32 *aVideoHeight) { return _to GetVideoHeight(aVideoHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetPoster(nsAString & aPoster) { return _to GetPoster(aPoster); } \
  NS_SCRIPTABLE NS_IMETHOD SetPoster(const nsAString & aPoster) { return _to SetPoster(aPoster); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozParsedFrames(PRUint32 *aMozParsedFrames) { return _to GetMozParsedFrames(aMozParsedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozDecodedFrames(PRUint32 *aMozDecodedFrames) { return _to GetMozDecodedFrames(aMozDecodedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPresentedFrames(PRUint32 *aMozPresentedFrames) { return _to GetMozPresentedFrames(aMozPresentedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintedFrames(PRUint32 *aMozPaintedFrames) { return _to GetMozPaintedFrames(aMozPaintedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameDelay(double *aMozFrameDelay) { return _to GetMozFrameDelay(aMozFrameDelay); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLVIDEOELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideoWidth(PRUint32 *aVideoWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVideoWidth(aVideoWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideoHeight(PRUint32 *aVideoHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVideoHeight(aVideoHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetPoster(nsAString & aPoster) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPoster(aPoster); } \
  NS_SCRIPTABLE NS_IMETHOD SetPoster(const nsAString & aPoster) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPoster(aPoster); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozParsedFrames(PRUint32 *aMozParsedFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozParsedFrames(aMozParsedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozDecodedFrames(PRUint32 *aMozDecodedFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozDecodedFrames(aMozDecodedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPresentedFrames(PRUint32 *aMozPresentedFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozPresentedFrames(aMozPresentedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintedFrames(PRUint32 *aMozPaintedFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozPaintedFrames(aMozPaintedFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameDelay(double *aMozFrameDelay) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFrameDelay(aMozFrameDelay); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLVideoElement : public nsIDOMHTMLVideoElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLVIDEOELEMENT

  nsDOMHTMLVideoElement();

private:
  ~nsDOMHTMLVideoElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLVideoElement, nsIDOMHTMLVideoElement)

nsDOMHTMLVideoElement::nsDOMHTMLVideoElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLVideoElement::~nsDOMHTMLVideoElement()
{
  /* destructor code */
}

/* attribute long width; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetWidth(PRInt32 *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLVideoElement::SetWidth(PRInt32 aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long height; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetHeight(PRInt32 *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLVideoElement::SetHeight(PRInt32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long videoWidth; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetVideoWidth(PRUint32 *aVideoWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long videoHeight; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetVideoHeight(PRUint32 *aVideoHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString poster; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetPoster(nsAString & aPoster)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLVideoElement::SetPoster(const nsAString & aPoster)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozParsedFrames; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetMozParsedFrames(PRUint32 *aMozParsedFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozDecodedFrames; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetMozDecodedFrames(PRUint32 *aMozDecodedFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozPresentedFrames; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetMozPresentedFrames(PRUint32 *aMozPresentedFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozPaintedFrames; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetMozPaintedFrames(PRUint32 *aMozPaintedFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double mozFrameDelay; */
NS_IMETHODIMP nsDOMHTMLVideoElement::GetMozFrameDelay(double *aMozFrameDelay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLVideoElement_h__ */
