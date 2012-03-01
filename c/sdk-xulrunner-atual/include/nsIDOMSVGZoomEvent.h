/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGZoomEvent.idl
 */

#ifndef __gen_nsIDOMSVGZoomEvent_h__
#define __gen_nsIDOMSVGZoomEvent_h__


#ifndef __gen_nsIDOMUIEvent_h__
#include "nsIDOMUIEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGRect; /* forward declaration */

class nsIDOMSVGPoint; /* forward declaration */


/* starting interface:    nsIDOMSVGZoomEvent */
#define NS_IDOMSVGZOOMEVENT_IID_STR "91f381f0-65ba-4392-bbf9-381fda450d76"

#define NS_IDOMSVGZOOMEVENT_IID \
  {0x91f381f0, 0x65ba, 0x4392, \
    { 0xbb, 0xf9, 0x38, 0x1f, 0xda, 0x45, 0x0d, 0x76 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGZoomEvent : public nsIDOMUIEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGZOOMEVENT_IID)

  /* readonly attribute nsIDOMSVGRect zoomRectScreen; */
  NS_SCRIPTABLE NS_IMETHOD GetZoomRectScreen(nsIDOMSVGRect * *aZoomRectScreen) = 0;

  /* readonly attribute float previousScale; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousScale(float *aPreviousScale) = 0;

  /* readonly attribute nsIDOMSVGPoint previousTranslate; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTranslate(nsIDOMSVGPoint * *aPreviousTranslate) = 0;

  /* readonly attribute float newScale; */
  NS_SCRIPTABLE NS_IMETHOD GetNewScale(float *aNewScale) = 0;

  /* readonly attribute nsIDOMSVGPoint newTranslate; */
  NS_SCRIPTABLE NS_IMETHOD GetNewTranslate(nsIDOMSVGPoint * *aNewTranslate) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGZoomEvent, NS_IDOMSVGZOOMEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGZOOMEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetZoomRectScreen(nsIDOMSVGRect * *aZoomRectScreen); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousScale(float *aPreviousScale); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTranslate(nsIDOMSVGPoint * *aPreviousTranslate); \
  NS_SCRIPTABLE NS_IMETHOD GetNewScale(float *aNewScale); \
  NS_SCRIPTABLE NS_IMETHOD GetNewTranslate(nsIDOMSVGPoint * *aNewTranslate); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGZOOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetZoomRectScreen(nsIDOMSVGRect * *aZoomRectScreen) { return _to GetZoomRectScreen(aZoomRectScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousScale(float *aPreviousScale) { return _to GetPreviousScale(aPreviousScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTranslate(nsIDOMSVGPoint * *aPreviousTranslate) { return _to GetPreviousTranslate(aPreviousTranslate); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewScale(float *aNewScale) { return _to GetNewScale(aNewScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewTranslate(nsIDOMSVGPoint * *aNewTranslate) { return _to GetNewTranslate(aNewTranslate); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGZOOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetZoomRectScreen(nsIDOMSVGRect * *aZoomRectScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZoomRectScreen(aZoomRectScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousScale(float *aPreviousScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousScale(aPreviousScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTranslate(nsIDOMSVGPoint * *aPreviousTranslate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousTranslate(aPreviousTranslate); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewScale(float *aNewScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewScale(aNewScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewTranslate(nsIDOMSVGPoint * *aNewTranslate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewTranslate(aNewTranslate); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGZoomEvent : public nsIDOMSVGZoomEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGZOOMEVENT

  nsDOMSVGZoomEvent();

private:
  ~nsDOMSVGZoomEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGZoomEvent, nsIDOMSVGZoomEvent)

nsDOMSVGZoomEvent::nsDOMSVGZoomEvent()
{
  /* member initializers and constructor code */
}

nsDOMSVGZoomEvent::~nsDOMSVGZoomEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGRect zoomRectScreen; */
NS_IMETHODIMP nsDOMSVGZoomEvent::GetZoomRectScreen(nsIDOMSVGRect * *aZoomRectScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float previousScale; */
NS_IMETHODIMP nsDOMSVGZoomEvent::GetPreviousScale(float *aPreviousScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGPoint previousTranslate; */
NS_IMETHODIMP nsDOMSVGZoomEvent::GetPreviousTranslate(nsIDOMSVGPoint * *aPreviousTranslate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float newScale; */
NS_IMETHODIMP nsDOMSVGZoomEvent::GetNewScale(float *aNewScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGPoint newTranslate; */
NS_IMETHODIMP nsDOMSVGZoomEvent::GetNewTranslate(nsIDOMSVGPoint * *aNewTranslate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGZoomEvent_h__ */
