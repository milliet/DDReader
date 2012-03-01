/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/protocol/websocket/nsIWebSocketChannel.idl
 */

#ifndef __gen_nsIWebSocketChannel_h__
#define __gen_nsIWebSocketChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

class nsILoadGroup; /* forward declaration */

class nsIWebSocketListener; /* forward declaration */


/* starting interface:    nsIWebSocketChannel */
#define NS_IWEBSOCKETCHANNEL_IID_STR "e8ae0371-c28f-4d61-b257-514e014a4686"

#define NS_IWEBSOCKETCHANNEL_IID \
  {0xe8ae0371, 0xc28f, 0x4d61, \
    { 0xb2, 0x57, 0x51, 0x4e, 0x01, 0x4a, 0x46, 0x86 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebSocketChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBSOCKETCHANNEL_IID)

  /* readonly attribute nsIURI originalURI; */
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) = 0;

  /* readonly attribute nsIURI URI; */
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* attribute nsIInterfaceRequestor notificationCallbacks; */
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) = 0;

  /* readonly attribute nsISupports securityInfo; */
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) = 0;

  /* attribute nsILoadGroup loadGroup; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadGroup(nsILoadGroup * *aLoadGroup) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLoadGroup(nsILoadGroup *aLoadGroup) = 0;

  /* attribute ACString protocol; */
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsACString & aProtocol) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetProtocol(const nsACString & aProtocol) = 0;

  /* readonly attribute ACString extensions; */
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsACString & aExtensions) = 0;

  /* void asyncOpen (in nsIURI aURI, in ACString aOrigin, in nsIWebSocketListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIURI *aURI, const nsACString & aOrigin, nsIWebSocketListener *aListener, nsISupports *aContext) = 0;

  /* void close (in unsigned short aCode, in AUTF8String aReason); */
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 aCode, const nsACString & aReason) = 0;

  enum { CLOSE_NORMAL = 1000U };

  enum { CLOSE_GOING_AWAY = 1001U };

  enum { CLOSE_PROTOCOL_ERROR = 1002U };

  enum { CLOSE_UNSUPPORTED = 1003U };

  enum { CLOSE_TOO_LARGE = 1004U };

  enum { CLOSE_NO_STATUS = 1005U };

  enum { CLOSE_ABNORMAL = 1006U };

  /* void sendMsg (in AUTF8String aMsg); */
  NS_SCRIPTABLE NS_IMETHOD SendMsg(const nsACString & aMsg) = 0;

  /* void sendBinaryMsg (in ACString aMsg); */
  NS_SCRIPTABLE NS_IMETHOD SendBinaryMsg(const nsACString & aMsg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebSocketChannel, NS_IWEBSOCKETCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBSOCKETCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI); \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks); \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks); \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo); \
  NS_SCRIPTABLE NS_IMETHOD GetLoadGroup(nsILoadGroup * *aLoadGroup); \
  NS_SCRIPTABLE NS_IMETHOD SetLoadGroup(nsILoadGroup *aLoadGroup); \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsACString & aProtocol); \
  NS_SCRIPTABLE NS_IMETHOD SetProtocol(const nsACString & aProtocol); \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsACString & aExtensions); \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIURI *aURI, const nsACString & aOrigin, nsIWebSocketListener *aListener, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 aCode, const nsACString & aReason); \
  NS_SCRIPTABLE NS_IMETHOD SendMsg(const nsACString & aMsg); \
  NS_SCRIPTABLE NS_IMETHOD SendBinaryMsg(const nsACString & aMsg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBSOCKETCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) { return _to GetOriginalURI(aOriginalURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return _to GetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) { return _to GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) { return _to SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) { return _to GetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadGroup(nsILoadGroup * *aLoadGroup) { return _to GetLoadGroup(aLoadGroup); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadGroup(nsILoadGroup *aLoadGroup) { return _to SetLoadGroup(aLoadGroup); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsACString & aProtocol) { return _to GetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD SetProtocol(const nsACString & aProtocol) { return _to SetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsACString & aExtensions) { return _to GetExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIURI *aURI, const nsACString & aOrigin, nsIWebSocketListener *aListener, nsISupports *aContext) { return _to AsyncOpen(aURI, aOrigin, aListener, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 aCode, const nsACString & aReason) { return _to Close(aCode, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD SendMsg(const nsACString & aMsg) { return _to SendMsg(aMsg); } \
  NS_SCRIPTABLE NS_IMETHOD SendBinaryMsg(const nsACString & aMsg) { return _to SendBinaryMsg(aMsg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBSOCKETCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalURI(aOriginalURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityInfo(aSecurityInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadGroup(nsILoadGroup * *aLoadGroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadGroup(aLoadGroup); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadGroup(nsILoadGroup *aLoadGroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadGroup(aLoadGroup); } \
  NS_SCRIPTABLE NS_IMETHOD GetProtocol(nsACString & aProtocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD SetProtocol(const nsACString & aProtocol) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProtocol(aProtocol); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtensions(nsACString & aExtensions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOpen(nsIURI *aURI, const nsACString & aOrigin, nsIWebSocketListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncOpen(aURI, aOrigin, aListener, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD Close(PRUint16 aCode, const nsACString & aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(aCode, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD SendMsg(const nsACString & aMsg) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMsg(aMsg); } \
  NS_SCRIPTABLE NS_IMETHOD SendBinaryMsg(const nsACString & aMsg) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendBinaryMsg(aMsg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebSocketChannel : public nsIWebSocketChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBSOCKETCHANNEL

  nsWebSocketChannel();

private:
  ~nsWebSocketChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebSocketChannel, nsIWebSocketChannel)

nsWebSocketChannel::nsWebSocketChannel()
{
  /* member initializers and constructor code */
}

nsWebSocketChannel::~nsWebSocketChannel()
{
  /* destructor code */
}

/* readonly attribute nsIURI originalURI; */
NS_IMETHODIMP nsWebSocketChannel::GetOriginalURI(nsIURI * *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsWebSocketChannel::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP nsWebSocketChannel::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocketChannel::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports securityInfo; */
NS_IMETHODIMP nsWebSocketChannel::GetSecurityInfo(nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILoadGroup loadGroup; */
NS_IMETHODIMP nsWebSocketChannel::GetLoadGroup(nsILoadGroup * *aLoadGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocketChannel::SetLoadGroup(nsILoadGroup *aLoadGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString protocol; */
NS_IMETHODIMP nsWebSocketChannel::GetProtocol(nsACString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebSocketChannel::SetProtocol(const nsACString & aProtocol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString extensions; */
NS_IMETHODIMP nsWebSocketChannel::GetExtensions(nsACString & aExtensions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOpen (in nsIURI aURI, in ACString aOrigin, in nsIWebSocketListener aListener, in nsISupports aContext); */
NS_IMETHODIMP nsWebSocketChannel::AsyncOpen(nsIURI *aURI, const nsACString & aOrigin, nsIWebSocketListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (in unsigned short aCode, in AUTF8String aReason); */
NS_IMETHODIMP nsWebSocketChannel::Close(PRUint16 aCode, const nsACString & aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendMsg (in AUTF8String aMsg); */
NS_IMETHODIMP nsWebSocketChannel::SendMsg(const nsACString & aMsg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendBinaryMsg (in ACString aMsg); */
NS_IMETHODIMP nsWebSocketChannel::SendBinaryMsg(const nsACString & aMsg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebSocketChannel_h__ */
