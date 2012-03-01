/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/protocol/http/nsIHttpProtocolHandler.idl
 */

#ifndef __gen_nsIHttpProtocolHandler_h__
#define __gen_nsIHttpProtocolHandler_h__


#ifndef __gen_nsIProxiedProtocolHandler_h__
#include "nsIProxiedProtocolHandler.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIHttpProtocolHandler */
#define NS_IHTTPPROTOCOLHANDLER_IID_STR "9814fdf0-5ac3-11e0-80e3-0800200c9a66"

#define NS_IHTTPPROTOCOLHANDLER_IID \
  {0x9814fdf0, 0x5ac3, 0x11e0, \
    { 0x80, 0xe3, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHttpProtocolHandler : public nsIProxiedProtocolHandler {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPPROTOCOLHANDLER_IID)

  /* readonly attribute ACString userAgent; */
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsACString & aUserAgent) = 0;

  /* readonly attribute ACString appName; */
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsACString & aAppName) = 0;

  /* readonly attribute ACString appVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsACString & aAppVersion) = 0;

  /* readonly attribute ACString product; */
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsACString & aProduct) = 0;

  /* readonly attribute ACString productSub; */
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsACString & aProductSub) = 0;

  /* readonly attribute ACString platform; */
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsACString & aPlatform) = 0;

  /* readonly attribute ACString oscpu; */
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsACString & aOscpu) = 0;

  /* readonly attribute ACString misc; */
  NS_SCRIPTABLE NS_IMETHOD GetMisc(nsACString & aMisc) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpProtocolHandler, NS_IHTTPPROTOCOLHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPPROTOCOLHANDLER \
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsACString & aUserAgent); \
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsACString & aAppName); \
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsACString & aAppVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsACString & aProduct); \
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsACString & aProductSub); \
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsACString & aPlatform); \
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsACString & aOscpu); \
  NS_SCRIPTABLE NS_IMETHOD GetMisc(nsACString & aMisc); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPPROTOCOLHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsACString & aUserAgent) { return _to GetUserAgent(aUserAgent); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsACString & aAppName) { return _to GetAppName(aAppName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsACString & aAppVersion) { return _to GetAppVersion(aAppVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsACString & aProduct) { return _to GetProduct(aProduct); } \
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsACString & aProductSub) { return _to GetProductSub(aProductSub); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsACString & aPlatform) { return _to GetPlatform(aPlatform); } \
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsACString & aOscpu) { return _to GetOscpu(aOscpu); } \
  NS_SCRIPTABLE NS_IMETHOD GetMisc(nsACString & aMisc) { return _to GetMisc(aMisc); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPPROTOCOLHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUserAgent(nsACString & aUserAgent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserAgent(aUserAgent); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppName(nsACString & aAppName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppName(aAppName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppVersion(nsACString & aAppVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppVersion(aAppVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetProduct(nsACString & aProduct) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProduct(aProduct); } \
  NS_SCRIPTABLE NS_IMETHOD GetProductSub(nsACString & aProductSub) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProductSub(aProductSub); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlatform(nsACString & aPlatform) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlatform(aPlatform); } \
  NS_SCRIPTABLE NS_IMETHOD GetOscpu(nsACString & aOscpu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOscpu(aOscpu); } \
  NS_SCRIPTABLE NS_IMETHOD GetMisc(nsACString & aMisc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMisc(aMisc); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpProtocolHandler : public nsIHttpProtocolHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPPROTOCOLHANDLER

  nsHttpProtocolHandler();

private:
  ~nsHttpProtocolHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHttpProtocolHandler, nsIHttpProtocolHandler)

nsHttpProtocolHandler::nsHttpProtocolHandler()
{
  /* member initializers and constructor code */
}

nsHttpProtocolHandler::~nsHttpProtocolHandler()
{
  /* destructor code */
}

/* readonly attribute ACString userAgent; */
NS_IMETHODIMP nsHttpProtocolHandler::GetUserAgent(nsACString & aUserAgent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString appName; */
NS_IMETHODIMP nsHttpProtocolHandler::GetAppName(nsACString & aAppName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString appVersion; */
NS_IMETHODIMP nsHttpProtocolHandler::GetAppVersion(nsACString & aAppVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString product; */
NS_IMETHODIMP nsHttpProtocolHandler::GetProduct(nsACString & aProduct)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString productSub; */
NS_IMETHODIMP nsHttpProtocolHandler::GetProductSub(nsACString & aProductSub)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString platform; */
NS_IMETHODIMP nsHttpProtocolHandler::GetPlatform(nsACString & aPlatform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString oscpu; */
NS_IMETHODIMP nsHttpProtocolHandler::GetOscpu(nsACString & aOscpu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString misc; */
NS_IMETHODIMP nsHttpProtocolHandler::GetMisc(nsACString & aMisc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// ----------- Categories ----------- 
/**
 * At initialization time, the HTTP handler will initialize each service
 * registered under this category:
 */
#define NS_HTTP_STARTUP_CATEGORY "http-startup-category"
// ----------- Observer topics ----------- 
/**
 * nsIObserver notification corresponding to startup category.  Services
 * registered under the startup category will receive this observer topic at
 * startup if they implement nsIObserver.  The "subject" of the notification
 * is the nsIHttpProtocolHandler instance.
 */
#define NS_HTTP_STARTUP_TOPIC "http-startup"
/**
 * Before an HTTP request is sent to the server, this observer topic is
 * notified.  The observer of this topic can then choose to set any additional
 * headers for this request before the request is actually sent to the server.
 * The "subject" of the notification is the nsIHttpChannel instance.
 */
#define NS_HTTP_ON_MODIFY_REQUEST_TOPIC "http-on-modify-request"
/**
 * After an HTTP server response is received, this observer topic is notified.
 * The observer of this topic can interrogate the response.  The "subject" of
 * the notification is the nsIHttpChannel instance.
 */
#define NS_HTTP_ON_EXAMINE_RESPONSE_TOPIC "http-on-examine-response"
/**
 * The observer of this topic is notified after the received HTTP response
 * is merged with data from the browser cache.  This means that, among other
 * things, the Content-Type header will be set correctly.
 */
#define NS_HTTP_ON_EXAMINE_MERGED_RESPONSE_TOPIC "http-on-examine-merged-response"
/**
 * The observer of this topic is notified before data is read from the cache.
 * The notification is sent if and only if there is no network communication
 * at all.
 */
#define NS_HTTP_ON_EXAMINE_CACHED_RESPONSE_TOPIC "http-on-examine-cached-response"

#endif /* __gen_nsIHttpProtocolHandler_h__ */
