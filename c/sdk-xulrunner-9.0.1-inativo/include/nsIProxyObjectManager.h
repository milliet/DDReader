/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/proxy/public/nsIProxyObjectManager.idl
 */

#ifndef __gen_nsIProxyObjectManager_h__
#define __gen_nsIProxyObjectManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIEventTarget; /* forward declaration */


/* starting interface:    nsIProxyObjectManager */
#define NS_IPROXYOBJECTMANAGER_IID_STR "ee8ce1e3-0319-4bd9-8f70-7258b21c7733"

#define NS_IPROXYOBJECTMANAGER_IID \
  {0xee8ce1e3, 0x0319, 0x4bd9, \
    { 0x8f, 0x70, 0x72, 0x58, 0xb2, 0x1c, 0x77, 0x33 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIProxyObjectManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROXYOBJECTMANAGER_IID)

  enum { INVOKE_SYNC = 1 };

  enum { INVOKE_ASYNC = 2 };

  enum { FORCE_PROXY_CREATION = 4 };

  /* void getProxyForObject (in nsIEventTarget target, in nsIIDRef iid, in nsISupports object, in PRInt32 proxyType, [iid_is (iid), retval] out nsQIResult result); */
  NS_SCRIPTABLE NS_IMETHOD GetProxyForObject(nsIEventTarget *target, const nsIID & iid, nsISupports *object, PRInt32 proxyType, void **result NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProxyObjectManager, NS_IPROXYOBJECTMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROXYOBJECTMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetProxyForObject(nsIEventTarget *target, const nsIID & iid, nsISupports *object, PRInt32 proxyType, void **result NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROXYOBJECTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetProxyForObject(nsIEventTarget *target, const nsIID & iid, nsISupports *object, PRInt32 proxyType, void **result NS_OUTPARAM) { return _to GetProxyForObject(target, iid, object, proxyType, result); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROXYOBJECTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetProxyForObject(nsIEventTarget *target, const nsIID & iid, nsISupports *object, PRInt32 proxyType, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProxyForObject(target, iid, object, proxyType, result); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProxyObjectManager : public nsIProxyObjectManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROXYOBJECTMANAGER

  nsProxyObjectManager();

private:
  ~nsProxyObjectManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsProxyObjectManager, nsIProxyObjectManager)

nsProxyObjectManager::nsProxyObjectManager()
{
  /* member initializers and constructor code */
}

nsProxyObjectManager::~nsProxyObjectManager()
{
  /* destructor code */
}

/* void getProxyForObject (in nsIEventTarget target, in nsIIDRef iid, in nsISupports object, in PRInt32 proxyType, [iid_is (iid), retval] out nsQIResult result); */
NS_IMETHODIMP nsProxyObjectManager::GetProxyForObject(nsIEventTarget *target, const nsIID & iid, nsISupports *object, PRInt32 proxyType, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * convenience macros
 */
#define NS_PROXY_SYNC    nsIProxyObjectManager::INVOKE_SYNC
#define NS_PROXY_ASYNC   nsIProxyObjectManager::INVOKE_ASYNC
#define NS_PROXY_ALWAYS  nsIProxyObjectManager::FORCE_PROXY_CREATION
/**
 * Pass this value as the target to {NS_}GetProxyForObject to specify the current
 * thread as the target for the proxy object.
 */
#define NS_PROXY_TO_CURRENT_THREAD  ((nsIEventTarget *) 0)
/**
 * Pass this value as the target to NS_GetProxyForObject to specify the main
 * thread as the target for the proxy object.
 */
#define NS_PROXY_TO_MAIN_THREAD  ((nsIEventTarget *) 1)
#ifdef MOZILLA_INTERNAL_API
/**
 * Helper function for code that already has a link-time dependency on the
 * internal API (MOZILLA_INTERNAL_API) and needs to get proxies in a bunch of
 * different places.  This way, the caller isn't forced to get the proxy object
 * manager themselves every single time, thus making the calling code more
 * readable.  The parameters are the same as for GetProxyForObject.
 */
extern nsresult
NS_GetProxyForObject(nsIEventTarget *target, REFNSIID iid, nsISupports* object,
                     PRInt32 proxyType, void** result);
#endif

#endif /* __gen_nsIProxyObjectManager_h__ */
