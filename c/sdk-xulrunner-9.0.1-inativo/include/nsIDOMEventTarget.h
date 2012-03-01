/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMEventTarget.idl
 */

#ifndef __gen_nsIDOMEventTarget_h__
#define __gen_nsIDOMEventTarget_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsEvent.h"
class nsPresContext;
class nsEventChainPreVisitor;
class nsEventChainPostVisitor;
struct JSContext;
class nsEventListenerManager;
class nsIScriptContext; /* forward declaration */

class nsIDOMEventListener; /* forward declaration */

class nsIDOMEvent; /* forward declaration */


/* starting interface:    nsIDOMEventTarget */
#define NS_IDOMEVENTTARGET_IID_STR "1797d5a4-b12a-428d-9eef-a0e13839728c"

#define NS_IDOMEVENTTARGET_IID \
  {0x1797d5a4, 0xb12a, 0x428d, \
    { 0x9e, 0xef, 0xa0, 0xe1, 0x38, 0x39, 0x72, 0x8c }}

class NS_SCRIPTABLE nsIDOMEventTarget : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMEVENTTARGET_IID)

  /* [optional_argc] void addEventListener (in DOMString type, in nsIDOMEventListener listener, [optional] in boolean useCapture, [optional] in boolean wantsUntrusted); */
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc) = 0;

    // non-virtual so it won't affect the vtable
  nsresult AddEventListener(const nsAString& aType,
                            nsIDOMEventListener* aListener,
                            PRBool aUseCapture)
  {
    return AddEventListener(aType, aListener, aUseCapture, PR_FALSE, 1);
  }
  // non-virtual so it won't affect the vtable
  nsresult AddEventListener(const nsAString& aType,
                            nsIDOMEventListener* aListener,
                            PRBool aUseCapture,
                            PRBool aWantsUntrusted)
  {
    return AddEventListener(aType, aListener, aUseCapture, aWantsUntrusted, 2);
  }
  /* void removeEventListener (in DOMString type, in nsIDOMEventListener listener, [optional] in boolean useCapture); */
  NS_SCRIPTABLE NS_IMETHOD RemoveEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) = 0;

  /* boolean dispatchEvent (in nsIDOMEvent evt) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD DispatchEvent(nsIDOMEvent *evt, PRBool *_retval NS_OUTPARAM) = 0;

  /* [nostdcall,notxpcom] nsIDOMEventTarget GetTargetForDOMEvent (); */
  virtual nsIDOMEventTarget * GetTargetForDOMEvent(void) = 0;

  /* [nostdcall,notxpcom] nsIDOMEventTarget GetTargetForEventTargetChain (); */
  virtual nsIDOMEventTarget * GetTargetForEventTargetChain(void) = 0;

  /* [noscript,nostdcall] void PreHandleEvent (in nsEventChainPreVisitorRef aVisitor); */
  virtual nsresult PreHandleEvent(nsEventChainPreVisitor & aVisitor) = 0;

  /* [noscript,nostdcall] void WillHandleEvent (in nsEventChainPostVisitorRef aVisitor); */
  virtual nsresult WillHandleEvent(nsEventChainPostVisitor & aVisitor) = 0;

  /* [noscript,nostdcall] void PostHandleEvent (in nsEventChainPostVisitorRef aVisitor); */
  virtual nsresult PostHandleEvent(nsEventChainPostVisitor & aVisitor) = 0;

  /* [noscript,nostdcall] void DispatchDOMEvent (in nsEventPtr aEvent, in nsIDOMEvent aDOMEvent, in nsPresContextPtr aPresContext, in nsEventStatusPtr aEventStatus); */
  virtual nsresult DispatchDOMEvent(nsEvent *aEvent, nsIDOMEvent *aDOMEvent, nsPresContext *aPresContext, nsEventStatus *aEventStatus) = 0;

  /* [nostdcall,notxpcom] nsEventListenerManagerPtr GetListenerManager (in boolean aMayCreate); */
  virtual nsEventListenerManager * GetListenerManager(PRBool aMayCreate) = 0;

  /* [nostdcall,notxpcom] nsIScriptContext GetContextForEventHandlers (out nsresult aRv); */
  virtual nsIScriptContext * GetContextForEventHandlers(nsresult *aRv NS_OUTPARAM) = 0;

  /* [nostdcall,notxpcom] JSContextPtr GetJSContextForEventHandlers (); */
  virtual JSContext * GetJSContextForEventHandlers(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMEventTarget, NS_IDOMEVENTTARGET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMEVENTTARGET \
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc); \
  NS_SCRIPTABLE NS_IMETHOD RemoveEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture); \
  NS_SCRIPTABLE NS_IMETHOD DispatchEvent(nsIDOMEvent *evt, PRBool *_retval NS_OUTPARAM); \
  virtual nsIDOMEventTarget * GetTargetForDOMEvent(void); \
  virtual nsIDOMEventTarget * GetTargetForEventTargetChain(void); \
  virtual nsresult PreHandleEvent(nsEventChainPreVisitor & aVisitor); \
  virtual nsresult WillHandleEvent(nsEventChainPostVisitor & aVisitor); \
  virtual nsresult PostHandleEvent(nsEventChainPostVisitor & aVisitor); \
  virtual nsresult DispatchDOMEvent(nsEvent *aEvent, nsIDOMEvent *aDOMEvent, nsPresContext *aPresContext, nsEventStatus *aEventStatus); \
  virtual nsEventListenerManager * GetListenerManager(PRBool aMayCreate); \
  virtual nsIScriptContext * GetContextForEventHandlers(nsresult *aRv NS_OUTPARAM); \
  virtual JSContext * GetJSContextForEventHandlers(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMEVENTTARGET(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc) { return _to AddEventListener(type, listener, useCapture, wantsUntrusted, _argc); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) { return _to RemoveEventListener(type, listener, useCapture); } \
  NS_SCRIPTABLE NS_IMETHOD DispatchEvent(nsIDOMEvent *evt, PRBool *_retval NS_OUTPARAM) { return _to DispatchEvent(evt, _retval); } \
  virtual nsIDOMEventTarget * GetTargetForDOMEvent(void) { return _to GetTargetForDOMEvent(); } \
  virtual nsIDOMEventTarget * GetTargetForEventTargetChain(void) { return _to GetTargetForEventTargetChain(); } \
  virtual nsresult PreHandleEvent(nsEventChainPreVisitor & aVisitor) { return _to PreHandleEvent(aVisitor); } \
  virtual nsresult WillHandleEvent(nsEventChainPostVisitor & aVisitor) { return _to WillHandleEvent(aVisitor); } \
  virtual nsresult PostHandleEvent(nsEventChainPostVisitor & aVisitor) { return _to PostHandleEvent(aVisitor); } \
  virtual nsresult DispatchDOMEvent(nsEvent *aEvent, nsIDOMEvent *aDOMEvent, nsPresContext *aPresContext, nsEventStatus *aEventStatus) { return _to DispatchDOMEvent(aEvent, aDOMEvent, aPresContext, aEventStatus); } \
  virtual nsEventListenerManager * GetListenerManager(PRBool aMayCreate) { return _to GetListenerManager(aMayCreate); } \
  virtual nsIScriptContext * GetContextForEventHandlers(nsresult *aRv NS_OUTPARAM) { return _to GetContextForEventHandlers(aRv); } \
  virtual JSContext * GetJSContextForEventHandlers(void) { return _to GetJSContextForEventHandlers(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMEVENTTARGET(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEventListener(type, listener, useCapture, wantsUntrusted, _argc); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveEventListener(type, listener, useCapture); } \
  NS_SCRIPTABLE NS_IMETHOD DispatchEvent(nsIDOMEvent *evt, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DispatchEvent(evt, _retval); } \
  virtual nsIDOMEventTarget * GetTargetForDOMEvent(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetForDOMEvent(); } \
  virtual nsIDOMEventTarget * GetTargetForEventTargetChain(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetForEventTargetChain(); } \
  virtual nsresult PreHandleEvent(nsEventChainPreVisitor & aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreHandleEvent(aVisitor); } \
  virtual nsresult WillHandleEvent(nsEventChainPostVisitor & aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->WillHandleEvent(aVisitor); } \
  virtual nsresult PostHandleEvent(nsEventChainPostVisitor & aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostHandleEvent(aVisitor); } \
  virtual nsresult DispatchDOMEvent(nsEvent *aEvent, nsIDOMEvent *aDOMEvent, nsPresContext *aPresContext, nsEventStatus *aEventStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->DispatchDOMEvent(aEvent, aDOMEvent, aPresContext, aEventStatus); } \
  virtual nsEventListenerManager * GetListenerManager(PRBool aMayCreate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListenerManager(aMayCreate); } \
  virtual nsIScriptContext * GetContextForEventHandlers(nsresult *aRv NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContextForEventHandlers(aRv); } \
  virtual JSContext * GetJSContextForEventHandlers(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSContextForEventHandlers(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMEventTarget : public nsIDOMEventTarget
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMEVENTTARGET

  nsDOMEventTarget();

private:
  ~nsDOMEventTarget();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMEventTarget, nsIDOMEventTarget)

nsDOMEventTarget::nsDOMEventTarget()
{
  /* member initializers and constructor code */
}

nsDOMEventTarget::~nsDOMEventTarget()
{
  /* destructor code */
}

/* [optional_argc] void addEventListener (in DOMString type, in nsIDOMEventListener listener, [optional] in boolean useCapture, [optional] in boolean wantsUntrusted); */
NS_IMETHODIMP nsDOMEventTarget::AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeEventListener (in DOMString type, in nsIDOMEventListener listener, [optional] in boolean useCapture); */
NS_IMETHODIMP nsDOMEventTarget::RemoveEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean dispatchEvent (in nsIDOMEvent evt) raises (DOMException); */
NS_IMETHODIMP nsDOMEventTarget::DispatchEvent(nsIDOMEvent *evt, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] nsIDOMEventTarget GetTargetForDOMEvent (); */
nsIDOMEventTarget * nsDOMEventTarget::GetTargetForDOMEvent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] nsIDOMEventTarget GetTargetForEventTargetChain (); */
nsIDOMEventTarget * nsDOMEventTarget::GetTargetForEventTargetChain()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall] void PreHandleEvent (in nsEventChainPreVisitorRef aVisitor); */
nsresult nsDOMEventTarget::PreHandleEvent(nsEventChainPreVisitor & aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall] void WillHandleEvent (in nsEventChainPostVisitorRef aVisitor); */
nsresult nsDOMEventTarget::WillHandleEvent(nsEventChainPostVisitor & aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall] void PostHandleEvent (in nsEventChainPostVisitorRef aVisitor); */
nsresult nsDOMEventTarget::PostHandleEvent(nsEventChainPostVisitor & aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall] void DispatchDOMEvent (in nsEventPtr aEvent, in nsIDOMEvent aDOMEvent, in nsPresContextPtr aPresContext, in nsEventStatusPtr aEventStatus); */
nsresult nsDOMEventTarget::DispatchDOMEvent(nsEvent *aEvent, nsIDOMEvent *aDOMEvent, nsPresContext *aPresContext, nsEventStatus *aEventStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] nsEventListenerManagerPtr GetListenerManager (in boolean aMayCreate); */
nsEventListenerManager * nsDOMEventTarget::GetListenerManager(PRBool aMayCreate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] nsIScriptContext GetContextForEventHandlers (out nsresult aRv); */
nsIScriptContext * nsDOMEventTarget::GetContextForEventHandlers(nsresult *aRv NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] JSContextPtr GetJSContextForEventHandlers (); */
JSContext * nsDOMEventTarget::GetJSContextForEventHandlers()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


typedef nsIDOMEventTarget nsPIDOMEventTarget;
#define NS_IMPL_DOMTARGET_DEFAULTS(_class) \
nsPIDOMEventTarget* _class::GetTargetForDOMEvent() { return this; } \
nsPIDOMEventTarget* _class::GetTargetForEventTargetChain() { return this; } \
nsresult _class::WillHandleEvent(nsEventChainPostVisitor& aVisitor) { return NS_OK; } \
JSContext* _class::GetJSContextForEventHandlers() { return nsnull; }

#endif /* __gen_nsIDOMEventTarget_h__ */
