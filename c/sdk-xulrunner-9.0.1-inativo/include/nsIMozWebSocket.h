/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIMozWebSocket.idl
 */

#ifndef __gen_nsIMozWebSocket_h__
#define __gen_nsIMozWebSocket_h__


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

class nsIDOMDOMStringList; /* forward declaration */

#include "nsTArray.h"
class nsString;

/* starting interface:    nsIMozWebSocket */
#define NS_IMOZWEBSOCKET_IID_STR "5b124f54-7d46-4bc0-8507-e58ed22c19b9"

#define NS_IMOZWEBSOCKET_IID \
  {0x5b124f54, 0x7d46, 0x4bc0, \
    { 0x85, 0x07, 0xe5, 0x8e, 0xd2, 0x2c, 0x19, 0xb9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMozWebSocket : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOZWEBSOCKET_IID)

  /* readonly attribute DOMString url; */
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) = 0;

  /* readonly attribute DOMString extensions; */
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions) = 0;

  /* readonly attribute DOMString protocol; */
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol) = 0;

  enum { CONNECTING = 0U };

  enum { OPEN = 1U };

  enum { CLOSING = 2U };

  enum { CLOSED = 3U };

  /* readonly attribute unsigned short readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) = 0;

  /* readonly attribute unsigned long bufferedAmount; */
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount) = 0;

  /* attribute nsIDOMEventListener onopen; */
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) = 0;

  /* attribute nsIDOMEventListener onmessage; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

  /* attribute nsIDOMEventListener onclose; */
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose) = 0;

  /* void send (in DOMString data); */
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & data) = 0;

  /* [optional_argc] void close ([optional] in unsigned short code, [optional] in DOMString reason); */
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc) = 0;

  /* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url, in nsStringTArrayRef protocol); */
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMozWebSocket, NS_IMOZWEBSOCKET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOZWEBSOCKET \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl); \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions); \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount); \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose); \
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose); \
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & data); \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc); \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOZWEBSOCKET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return _to GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions) { return _to GetExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol) { return _to GetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount) { return _to GetBufferedAmount(aBufferedAmount); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return _to GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return _to SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return _to GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return _to SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose) { return _to GetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose) { return _to SetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & data) { return _to Send(data); } \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc) { return _to Close(code, reason, _argc); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol) { return _to Init(principal, scriptContext, ownerWindow, url, protocol); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOZWEBSOCKET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(nsAString & aUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsAString & aExtensions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsAString & aProtocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetBufferedAmount(PRUint32 *aBufferedAmount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBufferedAmount(aBufferedAmount); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnopen(nsIDOMEventListener * *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnopen(nsIDOMEventListener *aOnopen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnopen(aOnopen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(nsIDOMEventListener * *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(nsIDOMEventListener *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmessage(aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnclose(nsIDOMEventListener * *aOnclose) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnclose(nsIDOMEventListener *aOnclose) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnclose(aOnclose); } \
  NS_SCRIPTABLE NS_IMETHOD Send(const nsAString & data) { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(data); } \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 code, const nsAString & reason, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(code, reason, _argc); } \
  NS_IMETHOD Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(principal, scriptContext, ownerWindow, url, protocol); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMozWebSocket : public nsIMozWebSocket
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOZWEBSOCKET

  nsMozWebSocket();

private:
  ~nsMozWebSocket();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMozWebSocket, nsIMozWebSocket)

nsMozWebSocket::nsMozWebSocket()
{
  /* member initializers and constructor code */
}

nsMozWebSocket::~nsMozWebSocket()
{
  /* destructor code */
}

/* readonly attribute DOMString url; */
NS_IMETHODIMP nsMozWebSocket::GetUrl(nsAString & aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString extensions; */
NS_IMETHODIMP nsMozWebSocket::GetExtensions(nsAString & aExtensions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString protocol; */
NS_IMETHODIMP nsMozWebSocket::GetProtocol(nsAString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short readyState; */
NS_IMETHODIMP nsMozWebSocket::GetReadyState(PRUint16 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long bufferedAmount; */
NS_IMETHODIMP nsMozWebSocket::GetBufferedAmount(PRUint32 *aBufferedAmount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onopen; */
NS_IMETHODIMP nsMozWebSocket::GetOnopen(nsIDOMEventListener * *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMozWebSocket::SetOnopen(nsIDOMEventListener *aOnopen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onmessage; */
NS_IMETHODIMP nsMozWebSocket::GetOnmessage(nsIDOMEventListener * *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMozWebSocket::SetOnmessage(nsIDOMEventListener *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsMozWebSocket::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMozWebSocket::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onclose; */
NS_IMETHODIMP nsMozWebSocket::GetOnclose(nsIDOMEventListener * *aOnclose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMozWebSocket::SetOnclose(nsIDOMEventListener *aOnclose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void send (in DOMString data); */
NS_IMETHODIMP nsMozWebSocket::Send(const nsAString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void close ([optional] in unsigned short code, [optional] in DOMString reason); */
NS_IMETHODIMP nsMozWebSocket::Close(PRUint16 code, const nsAString & reason, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIPrincipal principal, in nsIScriptContext scriptContext, in nsPIDOMWindow ownerWindow, in DOMString url, in nsStringTArrayRef protocol); */
NS_IMETHODIMP nsMozWebSocket::Init(nsIPrincipal *principal, nsIScriptContext *scriptContext, nsPIDOMWindow *ownerWindow, const nsAString & url, nsTArray<nsString> & protocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMozWebSocket_h__ */
