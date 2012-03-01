/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMMozTouchEvent.idl
 */

#ifndef __gen_nsIDOMMozTouchEvent_h__
#define __gen_nsIDOMMozTouchEvent_h__


#ifndef __gen_nsIDOMMouseEvent_h__
#include "nsIDOMMouseEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMozTouchEvent */
#define NS_IDOMMOZTOUCHEVENT_IID_STR "e680bab6-740a-4097-b5e0-5e9d7d381cbc"

#define NS_IDOMMOZTOUCHEVENT_IID \
  {0xe680bab6, 0x740a, 0x4097, \
    { 0xb5, 0xe0, 0x5e, 0x9d, 0x7d, 0x38, 0x1c, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozTouchEvent : public nsIDOMMouseEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZTOUCHEVENT_IID)

  /* readonly attribute unsigned long streamId; */
  NS_SCRIPTABLE NS_IMETHOD GetStreamId(PRUint32 *aStreamId) = 0;

  /* void initMozTouchEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in long detailArg, in long screenXArg, in long screenYArg, in long clientXArg, in long clientYArg, in boolean ctrlKeyArg, in boolean altKeyArg, in boolean shiftKeyArg, in boolean metaKeyArg, in unsigned short buttonArg, in nsIDOMEventTarget relatedTargetArg, in unsigned long streamIdArg); */
  NS_SCRIPTABLE NS_IMETHOD InitMozTouchEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, PRBool ctrlKeyArg, PRBool altKeyArg, PRBool shiftKeyArg, PRBool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 streamIdArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozTouchEvent, NS_IDOMMOZTOUCHEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZTOUCHEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetStreamId(PRUint32 *aStreamId); \
  NS_SCRIPTABLE NS_IMETHOD InitMozTouchEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, PRBool ctrlKeyArg, PRBool altKeyArg, PRBool shiftKeyArg, PRBool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 streamIdArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZTOUCHEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStreamId(PRUint32 *aStreamId) { return _to GetStreamId(aStreamId); } \
  NS_SCRIPTABLE NS_IMETHOD InitMozTouchEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, PRBool ctrlKeyArg, PRBool altKeyArg, PRBool shiftKeyArg, PRBool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 streamIdArg) { return _to InitMozTouchEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg, streamIdArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZTOUCHEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStreamId(PRUint32 *aStreamId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStreamId(aStreamId); } \
  NS_SCRIPTABLE NS_IMETHOD InitMozTouchEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, PRBool ctrlKeyArg, PRBool altKeyArg, PRBool shiftKeyArg, PRBool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 streamIdArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitMozTouchEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg, streamIdArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozTouchEvent : public nsIDOMMozTouchEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZTOUCHEVENT

  nsDOMMozTouchEvent();

private:
  ~nsDOMMozTouchEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozTouchEvent, nsIDOMMozTouchEvent)

nsDOMMozTouchEvent::nsDOMMozTouchEvent()
{
  /* member initializers and constructor code */
}

nsDOMMozTouchEvent::~nsDOMMozTouchEvent()
{
  /* destructor code */
}

/* readonly attribute unsigned long streamId; */
NS_IMETHODIMP nsDOMMozTouchEvent::GetStreamId(PRUint32 *aStreamId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initMozTouchEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in long detailArg, in long screenXArg, in long screenYArg, in long clientXArg, in long clientYArg, in boolean ctrlKeyArg, in boolean altKeyArg, in boolean shiftKeyArg, in boolean metaKeyArg, in unsigned short buttonArg, in nsIDOMEventTarget relatedTargetArg, in unsigned long streamIdArg); */
NS_IMETHODIMP nsDOMMozTouchEvent::InitMozTouchEvent(const nsAString & typeArg, PRBool canBubbleArg, PRBool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, PRBool ctrlKeyArg, PRBool altKeyArg, PRBool shiftKeyArg, PRBool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 streamIdArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMozTouchEvent_h__ */
