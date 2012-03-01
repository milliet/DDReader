/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMCustomEvent.idl
 */

#ifndef __gen_nsIDOMCustomEvent_h__
#define __gen_nsIDOMCustomEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMCustomEvent */
#define NS_IDOMCUSTOMEVENT_IID_STR "e93f84c5-e72f-4429-b797-f0c28d87890f"

#define NS_IDOMCUSTOMEVENT_IID \
  {0xe93f84c5, 0xe72f, 0x4429, \
    { 0xb7, 0x97, 0xf0, 0xc2, 0x8d, 0x87, 0x89, 0x0f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMCustomEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCUSTOMEVENT_IID)

  /* readonly attribute nsIVariant detail; */
  NS_SCRIPTABLE NS_IMETHOD GetDetail(nsIVariant * *aDetail) = 0;

  /* void initCustomEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIVariant detailArg); */
  NS_SCRIPTABLE NS_IMETHOD InitCustomEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIVariant *detailArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCustomEvent, NS_IDOMCUSTOMEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCUSTOMEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetDetail(nsIVariant * *aDetail); \
  NS_SCRIPTABLE NS_IMETHOD InitCustomEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIVariant *detailArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCUSTOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDetail(nsIVariant * *aDetail) { return _to GetDetail(aDetail); } \
  NS_SCRIPTABLE NS_IMETHOD InitCustomEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIVariant *detailArg) { return _to InitCustomEvent(typeArg, canBubbleArg, cancelableArg, detailArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCUSTOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDetail(nsIVariant * *aDetail) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDetail(aDetail); } \
  NS_SCRIPTABLE NS_IMETHOD InitCustomEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIVariant *detailArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitCustomEvent(typeArg, canBubbleArg, cancelableArg, detailArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCustomEvent : public nsIDOMCustomEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCUSTOMEVENT

  nsDOMCustomEvent();

private:
  ~nsDOMCustomEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMCustomEvent, nsIDOMCustomEvent)

nsDOMCustomEvent::nsDOMCustomEvent()
{
  /* member initializers and constructor code */
}

nsDOMCustomEvent::~nsDOMCustomEvent()
{
  /* destructor code */
}

/* readonly attribute nsIVariant detail; */
NS_IMETHODIMP nsDOMCustomEvent::GetDetail(nsIVariant * *aDetail)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initCustomEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIVariant detailArg); */
NS_IMETHODIMP nsDOMCustomEvent::InitCustomEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIVariant *detailArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCustomEvent_h__ */
