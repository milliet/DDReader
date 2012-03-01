/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIEventSource.idl
 */

#ifndef __gen_nsIEventSource_h__
#define __gen_nsIEventSource_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIScriptContext; /* forward declaration */

class nsPIDOMWindow; /* forward declaration */


/* starting interface:    nsIEventSource */
#define NS_IEVENTSOURCE_IID_STR "755e2d2d-a836-4539-83f4-16b51156341f"

#define NS_IEVENTSOURCE_IID \
  {0x755e2d2d, 0xa836, 0x4539, \
    { 0x83, 0xf4, 0x16, 0xb5, 0x11, 0x56, 0x34, 0x1f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEventSource : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTSOURCE_IID)

  /* readonly attribute DOMString url; */
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) = 0;

  enum { CONNECTING = 0U };

  enum { OPEN = 1U };

  enum { CLOSED = 2U };

  /* readonly attribute long readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState) = 0;

  /* attribute nsIDOMEventListener onopen; */
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) = 0;

  /* attribute nsIDOMEventListener onmessage; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url); */
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventSource, NS_IEVENTSOURCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTSOURCE \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTSOURCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return _to GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return _to GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return _to SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return _to GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return _to SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url) { return _to Init(principal, scriptContext, ownerWindow, url); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTSOURCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRInt32 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, scriptContext, ownerWindow, url); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventSource : public nsIEventSource
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTSOURCE

  nsEventSource();

private:
  ~nsEventSource();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEventSource, nsIEventSource)

nsEventSource::nsEventSource()
{
  /* member initializers and constructor code */
}

nsEventSource::~nsEventSource()
{
  /* destructor code */
}

/* readonly attribute DOMString url; */
NS_IMETHODIMP nsEventSource::GetUrl(nsAString & aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long readyState; */
NS_IMETHODIMP nsEventSource::GetReadyState(PRInt32 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onopen; */
NS_IMETHODIMP nsEventSource::GetOnopen(nsIDOMEventListener * *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEventSource::SetOnopen(nsIDOMEventListener *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onmessage; */
NS_IMETHODIMP nsEventSource::GetOnmessage(nsIDOMEventListener * *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEventSource::SetOnmessage(nsIDOMEventListener *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsEventSource::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEventSource::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsEventSource::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url); */
NS_IMETHODIMP nsEventSource::Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEventSource_h__ */
