/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMEvent.idl
 */

#ifndef __gen_nsIDOMEvent_h__
#define __gen_nsIDOMEvent_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventTarget; /* forward declaration */


/* starting interface:    nsIDOMEvent */
#define NS_IDOMEVENT_IID_STR "548137e8-fd2c-48c4-8635-3033f7db79e0"

#define NS_IDOMEVENT_IID \
  {0x548137e8, 0xfd2c, 0x48c4, \
    { 0x86, 0x35, 0x30, 0x33, 0xf7, 0xdb, 0x79, 0xe0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMEVENT_IID)

  enum { CAPTURING_PHASE = 1U };

  enum { AT_TARGET = 2U };

  enum { BUBBLING_PHASE = 3U };

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute nsIDOMEventTarget target; */
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) = 0;

  /* readonly attribute nsIDOMEventTarget currentTarget; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) = 0;

  /* readonly attribute unsigned short eventPhase; */
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase) = 0;

  /* readonly attribute boolean bubbles; */
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(PRBool *aBubbles) = 0;

  /* readonly attribute boolean cancelable; */
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(PRBool *aCancelable) = 0;

  /* readonly attribute DOMTimeStamp timeStamp; */
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) = 0;

  /* void stopPropagation (); */
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void) = 0;

  /* void preventDefault (); */
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void) = 0;

  /* void initEvent (in DOMString eventTypeArg, in boolean canBubbleArg, in boolean cancelableArg); */
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, PRBool canBubbleArg, PRBool cancelableArg) = 0;

  /* readonly attribute boolean defaultPrevented; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(PRBool *aDefaultPrevented) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMEvent, NS_IDOMEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget); \
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase); \
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(PRBool *aBubbles); \
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(PRBool *aCancelable); \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp); \
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void); \
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void); \
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, PRBool canBubbleArg, PRBool cancelableArg); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(PRBool *aDefaultPrevented); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) { return _to GetTarget(aTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) { return _to GetCurrentTarget(aCurrentTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase) { return _to GetEventPhase(aEventPhase); } \
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(PRBool *aBubbles) { return _to GetBubbles(aBubbles); } \
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(PRBool *aCancelable) { return _to GetCancelable(aCancelable); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) { return _to GetTimeStamp(aTimeStamp); } \
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void) { return _to StopPropagation(); } \
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void) { return _to PreventDefault(); } \
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, PRBool canBubbleArg, PRBool cancelableArg) { return _to InitEvent(eventTypeArg, canBubbleArg, cancelableArg); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(PRBool *aDefaultPrevented) { return _to GetDefaultPrevented(aDefaultPrevented); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentTarget(aCurrentTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventPhase(aEventPhase); } \
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(PRBool *aBubbles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBubbles(aBubbles); } \
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(PRBool *aCancelable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCancelable(aCancelable); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeStamp(aTimeStamp); } \
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopPropagation(); } \
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreventDefault(); } \
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, PRBool canBubbleArg, PRBool cancelableArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitEvent(eventTypeArg, canBubbleArg, cancelableArg); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(PRBool *aDefaultPrevented) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultPrevented(aDefaultPrevented); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMEvent : public nsIDOMEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMEVENT

  nsDOMEvent();

private:
  ~nsDOMEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMEvent, nsIDOMEvent)

nsDOMEvent::nsDOMEvent()
{
  /* member initializers and constructor code */
}

nsDOMEvent::~nsDOMEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMEvent::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget target; */
NS_IMETHODIMP nsDOMEvent::GetTarget(nsIDOMEventTarget * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget currentTarget; */
NS_IMETHODIMP nsDOMEvent::GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short eventPhase; */
NS_IMETHODIMP nsDOMEvent::GetEventPhase(PRUint16 *aEventPhase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean bubbles; */
NS_IMETHODIMP nsDOMEvent::GetBubbles(PRBool *aBubbles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean cancelable; */
NS_IMETHODIMP nsDOMEvent::GetCancelable(PRBool *aCancelable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp timeStamp; */
NS_IMETHODIMP nsDOMEvent::GetTimeStamp(DOMTimeStamp *aTimeStamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopPropagation (); */
NS_IMETHODIMP nsDOMEvent::StopPropagation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preventDefault (); */
NS_IMETHODIMP nsDOMEvent::PreventDefault()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initEvent (in DOMString eventTypeArg, in boolean canBubbleArg, in boolean cancelableArg); */
NS_IMETHODIMP nsDOMEvent::InitEvent(const nsAString & eventTypeArg, PRBool canBubbleArg, PRBool cancelableArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean defaultPrevented; */
NS_IMETHODIMP nsDOMEvent::GetDefaultPrevented(PRBool *aDefaultPrevented)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMEvent_h__ */
