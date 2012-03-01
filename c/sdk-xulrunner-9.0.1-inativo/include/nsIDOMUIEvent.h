/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMUIEvent.idl
 */

#ifndef __gen_nsIDOMUIEvent_h__
#define __gen_nsIDOMUIEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMUIEvent */
#define NS_IDOMUIEVENT_IID_STR "4f3032d1-bdc5-4f37-bece-af8056d71c5c"

#define NS_IDOMUIEVENT_IID \
  {0x4f3032d1, 0xbdc5, 0x4f37, \
    { 0xbe, 0xce, 0xaf, 0x80, 0x56, 0xd7, 0x1c, 0x5c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMUIEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMUIEVENT_IID)

  /* readonly attribute nsIDOMWindow view; */
  NS_SCRIPTABLE NS_IMETHOD GetView(nsIDOMWindow * *aView) = 0;

  /* readonly attribute long detail; */
  NS_SCRIPTABLE NS_IMETHOD GetDetail(PRInt32 *aDetail) = 0;

  /* void initUIEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in long detailArg); */
  NS_SCRIPTABLE NS_IMETHOD InitUIEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg) = 0;

  enum { SCROLL_PAGE_UP = -32768 };

  enum { SCROLL_PAGE_DOWN = 32768 };

  /* readonly attribute long layerX; */
  NS_SCRIPTABLE NS_IMETHOD GetLayerX(PRInt32 *aLayerX) = 0;

  /* readonly attribute long layerY; */
  NS_SCRIPTABLE NS_IMETHOD GetLayerY(PRInt32 *aLayerY) = 0;

  /* readonly attribute long pageX; */
  NS_SCRIPTABLE NS_IMETHOD GetPageX(PRInt32 *aPageX) = 0;

  /* readonly attribute long pageY; */
  NS_SCRIPTABLE NS_IMETHOD GetPageY(PRInt32 *aPageY) = 0;

  /* readonly attribute unsigned long which; */
  NS_SCRIPTABLE NS_IMETHOD GetWhich(PRUint32 *aWhich) = 0;

  /* readonly attribute nsIDOMNode rangeParent; */
  NS_SCRIPTABLE NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) = 0;

  /* readonly attribute long rangeOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetRangeOffset(PRInt32 *aRangeOffset) = 0;

  /* attribute boolean cancelBubble; */
  NS_SCRIPTABLE NS_IMETHOD GetCancelBubble(PRBool *aCancelBubble) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCancelBubble(PRBool aCancelBubble) = 0;

  /* readonly attribute boolean isChar; */
  NS_SCRIPTABLE NS_IMETHOD GetIsChar(PRBool *aIsChar) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMUIEvent, NS_IDOMUIEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMUIEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetView(nsIDOMWindow * *aView); \
  NS_SCRIPTABLE NS_IMETHOD GetDetail(PRInt32 *aDetail); \
  NS_SCRIPTABLE NS_IMETHOD InitUIEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg); \
  NS_SCRIPTABLE NS_IMETHOD GetLayerX(PRInt32 *aLayerX); \
  NS_SCRIPTABLE NS_IMETHOD GetLayerY(PRInt32 *aLayerY); \
  NS_SCRIPTABLE NS_IMETHOD GetPageX(PRInt32 *aPageX); \
  NS_SCRIPTABLE NS_IMETHOD GetPageY(PRInt32 *aPageY); \
  NS_SCRIPTABLE NS_IMETHOD GetWhich(PRUint32 *aWhich); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeOffset(PRInt32 *aRangeOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetCancelBubble(PRBool *aCancelBubble); \
  NS_SCRIPTABLE NS_IMETHOD SetCancelBubble(PRBool aCancelBubble); \
  NS_SCRIPTABLE NS_IMETHOD GetIsChar(PRBool *aIsChar); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMUIEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetView(nsIDOMWindow * *aView) { return _to GetView(aView); } \
  NS_SCRIPTABLE NS_IMETHOD GetDetail(PRInt32 *aDetail) { return _to GetDetail(aDetail); } \
  NS_SCRIPTABLE NS_IMETHOD InitUIEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg) { return _to InitUIEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayerX(PRInt32 *aLayerX) { return _to GetLayerX(aLayerX); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayerY(PRInt32 *aLayerY) { return _to GetLayerY(aLayerY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageX(PRInt32 *aPageX) { return _to GetPageX(aPageX); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageY(PRInt32 *aPageY) { return _to GetPageY(aPageY); } \
  NS_SCRIPTABLE NS_IMETHOD GetWhich(PRUint32 *aWhich) { return _to GetWhich(aWhich); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) { return _to GetRangeParent(aRangeParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeOffset(PRInt32 *aRangeOffset) { return _to GetRangeOffset(aRangeOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetCancelBubble(PRBool *aCancelBubble) { return _to GetCancelBubble(aCancelBubble); } \
  NS_SCRIPTABLE NS_IMETHOD SetCancelBubble(PRBool aCancelBubble) { return _to SetCancelBubble(aCancelBubble); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsChar(PRBool *aIsChar) { return _to GetIsChar(aIsChar); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMUIEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetView(nsIDOMWindow * *aView) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetView(aView); } \
  NS_SCRIPTABLE NS_IMETHOD GetDetail(PRInt32 *aDetail) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDetail(aDetail); } \
  NS_SCRIPTABLE NS_IMETHOD InitUIEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitUIEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayerX(PRInt32 *aLayerX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayerX(aLayerX); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayerY(PRInt32 *aLayerY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayerY(aLayerY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageX(PRInt32 *aPageX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageX(aPageX); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageY(PRInt32 *aPageY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageY(aPageY); } \
  NS_SCRIPTABLE NS_IMETHOD GetWhich(PRUint32 *aWhich) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWhich(aWhich); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeParent(aRangeParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeOffset(PRInt32 *aRangeOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeOffset(aRangeOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetCancelBubble(PRBool *aCancelBubble) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCancelBubble(aCancelBubble); } \
  NS_SCRIPTABLE NS_IMETHOD SetCancelBubble(PRBool aCancelBubble) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCancelBubble(aCancelBubble); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsChar(PRBool *aIsChar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsChar(aIsChar); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMUIEvent : public nsIDOMUIEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMUIEVENT

  nsDOMUIEvent();

private:
  ~nsDOMUIEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMUIEvent, nsIDOMUIEvent)

nsDOMUIEvent::nsDOMUIEvent()
{
  /* member initializers and constructor code */
}

nsDOMUIEvent::~nsDOMUIEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMWindow view; */
NS_IMETHODIMP nsDOMUIEvent::GetView(nsIDOMWindow * *aView)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long detail; */
NS_IMETHODIMP nsDOMUIEvent::GetDetail(PRInt32 *aDetail)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initUIEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in long detailArg); */
NS_IMETHODIMP nsDOMUIEvent::InitUIEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long layerX; */
NS_IMETHODIMP nsDOMUIEvent::GetLayerX(PRInt32 *aLayerX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long layerY; */
NS_IMETHODIMP nsDOMUIEvent::GetLayerY(PRInt32 *aLayerY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pageX; */
NS_IMETHODIMP nsDOMUIEvent::GetPageX(PRInt32 *aPageX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pageY; */
NS_IMETHODIMP nsDOMUIEvent::GetPageY(PRInt32 *aPageY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long which; */
NS_IMETHODIMP nsDOMUIEvent::GetWhich(PRUint32 *aWhich)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode rangeParent; */
NS_IMETHODIMP nsDOMUIEvent::GetRangeParent(nsIDOMNode * *aRangeParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long rangeOffset; */
NS_IMETHODIMP nsDOMUIEvent::GetRangeOffset(PRInt32 *aRangeOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cancelBubble; */
NS_IMETHODIMP nsDOMUIEvent::GetCancelBubble(PRBool *aCancelBubble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMUIEvent::SetCancelBubble(PRBool aCancelBubble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isChar; */
NS_IMETHODIMP nsDOMUIEvent::GetIsChar(PRBool *aIsChar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMUIEvent_h__ */
