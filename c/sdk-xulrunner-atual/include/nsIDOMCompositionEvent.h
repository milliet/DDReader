/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMCompositionEvent.idl
 */

#ifndef __gen_nsIDOMCompositionEvent_h__
#define __gen_nsIDOMCompositionEvent_h__


#ifndef __gen_nsIDOMUIEvent_h__
#include "nsIDOMUIEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMCompositionEvent */
#define NS_IDOMCOMPOSITIONEVENT_IID_STR "bf01c23c-cf5f-4a8e-86a7-040c6e45d685"

#define NS_IDOMCOMPOSITIONEVENT_IID \
  {0xbf01c23c, 0xcf5f, 0x4a8e, \
    { 0x86, 0xa7, 0x04, 0x0c, 0x6e, 0x45, 0xd6, 0x85 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMCompositionEvent : public nsIDOMUIEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCOMPOSITIONEVENT_IID)

  /* readonly attribute DOMString data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData) = 0;

  /* readonly attribute DOMString locale; */
  NS_SCRIPTABLE NS_IMETHOD GetLocale(nsAString & aLocale) = 0;

  /* void initCompositionEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in DOMString dataArg, in DOMString localeArg); */
  NS_SCRIPTABLE NS_IMETHOD InitCompositionEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, const nsAString & dataArg, const nsAString & localeArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCompositionEvent, NS_IDOMCOMPOSITIONEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCOMPOSITIONEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData); \
  NS_SCRIPTABLE NS_IMETHOD GetLocale(nsAString & aLocale); \
  NS_SCRIPTABLE NS_IMETHOD InitCompositionEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, const nsAString & dataArg, const nsAString & localeArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCOMPOSITIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocale(nsAString & aLocale) { return _to GetLocale(aLocale); } \
  NS_SCRIPTABLE NS_IMETHOD InitCompositionEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, const nsAString & dataArg, const nsAString & localeArg) { return _to InitCompositionEvent(typeArg, canBubbleArg, cancelableArg, viewArg, dataArg, localeArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCOMPOSITIONEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocale(nsAString & aLocale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocale(aLocale); } \
  NS_SCRIPTABLE NS_IMETHOD InitCompositionEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, const nsAString & dataArg, const nsAString & localeArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitCompositionEvent(typeArg, canBubbleArg, cancelableArg, viewArg, dataArg, localeArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCompositionEvent : public nsIDOMCompositionEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCOMPOSITIONEVENT

  nsDOMCompositionEvent();

private:
  ~nsDOMCompositionEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMCompositionEvent, nsIDOMCompositionEvent)

nsDOMCompositionEvent::nsDOMCompositionEvent()
{
  /* member initializers and constructor code */
}

nsDOMCompositionEvent::~nsDOMCompositionEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString data; */
NS_IMETHODIMP nsDOMCompositionEvent::GetData(nsAString & aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString locale; */
NS_IMETHODIMP nsDOMCompositionEvent::GetLocale(nsAString & aLocale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initCompositionEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in DOMString dataArg, in DOMString localeArg); */
NS_IMETHODIMP nsDOMCompositionEvent::InitCompositionEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, const nsAString & dataArg, const nsAString & localeArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCompositionEvent_h__ */
