/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/events/public/nsIEventListenerService.idl
 */

#ifndef __gen_nsIEventListenerService_h__
#define __gen_nsIEventListenerService_h__


#ifndef __gen_nsIDOMEventListener_h__
#include "nsIDOMEventListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventTarget; /* forward declaration */


/* starting interface:    nsIEventListenerInfo */
#define NS_IEVENTLISTENERINFO_IID_STR "cbc2ea6e-4043-4435-ba8f-64cbf6638622"

#define NS_IEVENTLISTENERINFO_IID \
  {0xcbc2ea6e, 0x4043, 0x4435, \
    { 0xba, 0x8f, 0x64, 0xcb, 0xf6, 0x63, 0x86, 0x22 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEventListenerInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTLISTENERINFO_IID)

  /* readonly attribute AString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute boolean capturing; */
  NS_SCRIPTABLE NS_IMETHOD GetCapturing(PRBool *aCapturing) = 0;

  /* readonly attribute boolean allowsUntrusted; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowsUntrusted(PRBool *aAllowsUntrusted) = 0;

  /* readonly attribute boolean inSystemEventGroup; */
  NS_SCRIPTABLE NS_IMETHOD GetInSystemEventGroup(PRBool *aInSystemEventGroup) = 0;

  /* AString toSource (); */
  NS_SCRIPTABLE NS_IMETHOD ToSource(nsAString & _retval NS_OUTPARAM) = 0;

  /* nsISupports getDebugObject (); */
  NS_SCRIPTABLE NS_IMETHOD GetDebugObject(nsISupports * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventListenerInfo, NS_IEVENTLISTENERINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTLISTENERINFO \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetCapturing(PRBool *aCapturing); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowsUntrusted(PRBool *aAllowsUntrusted); \
  NS_SCRIPTABLE NS_IMETHOD GetInSystemEventGroup(PRBool *aInSystemEventGroup); \
  NS_SCRIPTABLE NS_IMETHOD ToSource(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDebugObject(nsISupports * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTLISTENERINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetCapturing(PRBool *aCapturing) { return _to GetCapturing(aCapturing); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowsUntrusted(PRBool *aAllowsUntrusted) { return _to GetAllowsUntrusted(aAllowsUntrusted); } \
  NS_SCRIPTABLE NS_IMETHOD GetInSystemEventGroup(PRBool *aInSystemEventGroup) { return _to GetInSystemEventGroup(aInSystemEventGroup); } \
  NS_SCRIPTABLE NS_IMETHOD ToSource(nsAString & _retval NS_OUTPARAM) { return _to ToSource(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebugObject(nsISupports * *_retval NS_OUTPARAM) { return _to GetDebugObject(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTLISTENERINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetCapturing(PRBool *aCapturing) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCapturing(aCapturing); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowsUntrusted(PRBool *aAllowsUntrusted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowsUntrusted(aAllowsUntrusted); } \
  NS_SCRIPTABLE NS_IMETHOD GetInSystemEventGroup(PRBool *aInSystemEventGroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInSystemEventGroup(aInSystemEventGroup); } \
  NS_SCRIPTABLE NS_IMETHOD ToSource(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToSource(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebugObject(nsISupports * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDebugObject(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventListenerInfo : public nsIEventListenerInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTLISTENERINFO

  nsEventListenerInfo();

private:
  ~nsEventListenerInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEventListenerInfo, nsIEventListenerInfo)

nsEventListenerInfo::nsEventListenerInfo()
{
  /* member initializers and constructor code */
}

nsEventListenerInfo::~nsEventListenerInfo()
{
  /* destructor code */
}

/* readonly attribute AString type; */
NS_IMETHODIMP nsEventListenerInfo::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean capturing; */
NS_IMETHODIMP nsEventListenerInfo::GetCapturing(PRBool *aCapturing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean allowsUntrusted; */
NS_IMETHODIMP nsEventListenerInfo::GetAllowsUntrusted(PRBool *aAllowsUntrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean inSystemEventGroup; */
NS_IMETHODIMP nsEventListenerInfo::GetInSystemEventGroup(PRBool *aInSystemEventGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString toSource (); */
NS_IMETHODIMP nsEventListenerInfo::ToSource(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports getDebugObject (); */
NS_IMETHODIMP nsEventListenerInfo::GetDebugObject(nsISupports * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIEventListenerService */
#define NS_IEVENTLISTENERSERVICE_IID_STR "0cf94aa6-ea9a-44cb-a063-be834afa679d"

#define NS_IEVENTLISTENERSERVICE_IID \
  {0x0cf94aa6, 0xea9a, 0x44cb, \
    { 0xa0, 0x63, 0xbe, 0x83, 0x4a, 0xfa, 0x67, 0x9d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEventListenerService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTLISTENERSERVICE_IID)

  /* void getListenerInfoFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIEventListenerInfo aOutArray); */
  NS_SCRIPTABLE NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIEventListenerInfo * **aOutArray NS_OUTPARAM) = 0;

  /* void getEventTargetChainFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIDOMEventTarget aOutArray); */
  NS_SCRIPTABLE NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIDOMEventTarget * **aOutArray NS_OUTPARAM) = 0;

  /* boolean hasListenersFor (in nsIDOMEventTarget aEventTarget, in DOMString aType); */
  NS_SCRIPTABLE NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, PRBool *_retval NS_OUTPARAM) = 0;

  /* void addSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
  NS_SCRIPTABLE NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) = 0;

  /* void removeSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
  NS_SCRIPTABLE NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventListenerService, NS_IEVENTLISTENERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTLISTENERSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIEventListenerInfo * **aOutArray NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIDOMEventTarget * **aOutArray NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture); \
  NS_SCRIPTABLE NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTLISTENERSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIEventListenerInfo * **aOutArray NS_OUTPARAM) { return _to GetListenerInfoFor(aEventTarget, aCount, aOutArray); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIDOMEventTarget * **aOutArray NS_OUTPARAM) { return _to GetEventTargetChainFor(aEventTarget, aCount, aOutArray); } \
  NS_SCRIPTABLE NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, PRBool *_retval NS_OUTPARAM) { return _to HasListenersFor(aEventTarget, aType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) { return _to AddSystemEventListener(target, type, listener, useCapture); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) { return _to RemoveSystemEventListener(target, type, listener, useCapture); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTLISTENERSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIEventListenerInfo * **aOutArray NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListenerInfoFor(aEventTarget, aCount, aOutArray); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIDOMEventTarget * **aOutArray NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventTargetChainFor(aEventTarget, aCount, aOutArray); } \
  NS_SCRIPTABLE NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasListenersFor(aEventTarget, aType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddSystemEventListener(target, type, listener, useCapture); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveSystemEventListener(target, type, listener, useCapture); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventListenerService : public nsIEventListenerService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTLISTENERSERVICE

  nsEventListenerService();

private:
  ~nsEventListenerService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEventListenerService, nsIEventListenerService)

nsEventListenerService::nsEventListenerService()
{
  /* member initializers and constructor code */
}

nsEventListenerService::~nsEventListenerService()
{
  /* destructor code */
}

/* void getListenerInfoFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIEventListenerInfo aOutArray); */
NS_IMETHODIMP nsEventListenerService::GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIEventListenerInfo * **aOutArray NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getEventTargetChainFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIDOMEventTarget aOutArray); */
NS_IMETHODIMP nsEventListenerService::GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, PRUint32 *aCount NS_OUTPARAM, nsIDOMEventTarget * **aOutArray NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasListenersFor (in nsIDOMEventTarget aEventTarget, in DOMString aType); */
NS_IMETHODIMP nsEventListenerService::HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
NS_IMETHODIMP nsEventListenerService::AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
NS_IMETHODIMP nsEventListenerService::RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEventListenerService_h__ */
