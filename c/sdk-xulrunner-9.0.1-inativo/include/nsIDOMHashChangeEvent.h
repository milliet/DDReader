/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMHashChangeEvent.idl
 */

#ifndef __gen_nsIDOMHashChangeEvent_h__
#define __gen_nsIDOMHashChangeEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHashChangeEvent */
#define NS_IDOMHASHCHANGEEVENT_IID_STR "34850f11-8b88-43ce-8d55-9aa8b18753bd"

#define NS_IDOMHASHCHANGEEVENT_IID \
  {0x34850f11, 0x8b88, 0x43ce, \
    { 0x8d, 0x55, 0x9a, 0xa8, 0xb1, 0x87, 0x53, 0xbd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHashChangeEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHASHCHANGEEVENT_IID)

  /* readonly attribute DOMString oldURL; */
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL) = 0;

  /* readonly attribute DOMString newURL; */
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL) = 0;

  /* void initHashChangeEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in DOMString oldURLArg, in DOMString newURLArg); */
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHashChangeEvent, NS_IDOMHASHCHANGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHASHCHANGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL); \
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL); \
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHASHCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL) { return _to GetOldURL(aOldURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL) { return _to GetNewURL(aNewURL); } \
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg) { return _to InitHashChangeEvent(typeArg, canBubbleArg, cancelableArg, oldURLArg, newURLArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHASHCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOldURL(nsAString & aOldURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOldURL(aOldURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewURL(nsAString & aNewURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewURL(aNewURL); } \
  NS_SCRIPTABLE NS_IMETHOD InitHashChangeEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitHashChangeEvent(typeArg, canBubbleArg, cancelableArg, oldURLArg, newURLArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHashChangeEvent : public nsIDOMHashChangeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHASHCHANGEEVENT

  nsDOMHashChangeEvent();

private:
  ~nsDOMHashChangeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHashChangeEvent, nsIDOMHashChangeEvent)

nsDOMHashChangeEvent::nsDOMHashChangeEvent()
{
  /* member initializers and constructor code */
}

nsDOMHashChangeEvent::~nsDOMHashChangeEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString oldURL; */
NS_IMETHODIMP nsDOMHashChangeEvent::GetOldURL(nsAString & aOldURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString newURL; */
NS_IMETHODIMP nsDOMHashChangeEvent::GetNewURL(nsAString & aNewURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initHashChangeEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in DOMString oldURLArg, in DOMString newURLArg); */
NS_IMETHODIMP nsDOMHashChangeEvent::InitHashChangeEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, const nsAString & oldURLArg, const nsAString & newURLArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHashChangeEvent_h__ */
