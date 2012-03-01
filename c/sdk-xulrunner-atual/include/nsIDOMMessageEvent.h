/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMMessageEvent.idl
 */

#ifndef __gen_nsIDOMMessageEvent_h__
#define __gen_nsIDOMMessageEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMessageEvent */
#define NS_IDOMMESSAGEEVENT_IID_STR "9ac4fa26-4d19-4f4e-807e-b30cd0dbe56a"

#define NS_IDOMMESSAGEEVENT_IID \
  {0x9ac4fa26, 0x4d19, 0x4f4e, \
    { 0x80, 0x7e, 0xb3, 0x0c, 0xd0, 0xdb, 0xe5, 0x6a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMessageEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMESSAGEEVENT_IID)

  /* [implicit_jscontext] readonly attribute jsval data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(JSContext* cx, JS::Value *aData) = 0;

  /* readonly attribute DOMString origin; */
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) = 0;

  /* readonly attribute DOMString lastEventId; */
  NS_SCRIPTABLE NS_IMETHOD GetLastEventId(nsAString & aLastEventId) = 0;

  /* readonly attribute nsIDOMWindow source; */
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIDOMWindow * *aSource) = 0;

  /* void initMessageEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in jsval aData, in DOMString aOrigin, in DOMString aLastEventId, in nsIDOMWindow aSource); */
  NS_SCRIPTABLE NS_IMETHOD InitMessageEvent(const nsAString & aType, PRBool aCanBubble, PRBool aCancelable, const JS::Value & aData, const nsAString & aOrigin, const nsAString & aLastEventId, nsIDOMWindow *aSource) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMessageEvent, NS_IDOMMESSAGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMESSAGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetData(JSContext* cx, JS::Value *aData); \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetLastEventId(nsAString & aLastEventId); \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIDOMWindow * *aSource); \
  NS_SCRIPTABLE NS_IMETHOD InitMessageEvent(const nsAString & aType, PRBool aCanBubble, PRBool aCancelable, const JS::Value & aData, const nsAString & aOrigin, const nsAString & aLastEventId, nsIDOMWindow *aSource); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMESSAGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetData(JSContext* cx, JS::Value *aData) { return _to GetData(cx, aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return _to GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastEventId(nsAString & aLastEventId) { return _to GetLastEventId(aLastEventId); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIDOMWindow * *aSource) { return _to GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD InitMessageEvent(const nsAString & aType, PRBool aCanBubble, PRBool aCancelable, const JS::Value & aData, const nsAString & aOrigin, const nsAString & aLastEventId, nsIDOMWindow *aSource) { return _to InitMessageEvent(aType, aCanBubble, aCancelable, aData, aOrigin, aLastEventId, aSource); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMESSAGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetData(JSContext* cx, JS::Value *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(cx, aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastEventId(nsAString & aLastEventId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastEventId(aLastEventId); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsIDOMWindow * *aSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD InitMessageEvent(const nsAString & aType, PRBool aCanBubble, PRBool aCancelable, const JS::Value & aData, const nsAString & aOrigin, const nsAString & aLastEventId, nsIDOMWindow *aSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitMessageEvent(aType, aCanBubble, aCancelable, aData, aOrigin, aLastEventId, aSource); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMessageEvent : public nsIDOMMessageEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMESSAGEEVENT

  nsDOMMessageEvent();

private:
  ~nsDOMMessageEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMessageEvent, nsIDOMMessageEvent)

nsDOMMessageEvent::nsDOMMessageEvent()
{
  /* member initializers and constructor code */
}

nsDOMMessageEvent::~nsDOMMessageEvent()
{
  /* destructor code */
}

/* [implicit_jscontext] readonly attribute jsval data; */
NS_IMETHODIMP nsDOMMessageEvent::GetData(JSContext* cx, JS::Value *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString origin; */
NS_IMETHODIMP nsDOMMessageEvent::GetOrigin(nsAString & aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString lastEventId; */
NS_IMETHODIMP nsDOMMessageEvent::GetLastEventId(nsAString & aLastEventId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow source; */
NS_IMETHODIMP nsDOMMessageEvent::GetSource(nsIDOMWindow * *aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initMessageEvent (in DOMString aType, in boolean aCanBubble, in boolean aCancelable, in jsval aData, in DOMString aOrigin, in DOMString aLastEventId, in nsIDOMWindow aSource); */
NS_IMETHODIMP nsDOMMessageEvent::InitMessageEvent(const nsAString & aType, PRBool aCanBubble, PRBool aCancelable, const JS::Value & aData, const nsAString & aOrigin, const nsAString & aLastEventId, nsIDOMWindow *aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMessageEvent_h__ */
