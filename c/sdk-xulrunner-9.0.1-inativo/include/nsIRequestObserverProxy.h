/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIRequestObserverProxy.idl
 */

#ifndef __gen_nsIRequestObserverProxy_h__
#define __gen_nsIRequestObserverProxy_h__


#ifndef __gen_nsIRequestObserver_h__
#include "nsIRequestObserver.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIEventTarget; /* forward declaration */


/* starting interface:    nsIRequestObserverProxy */
#define NS_IREQUESTOBSERVERPROXY_IID_STR "7df8845f-938a-4437-9ea4-b11b850048f1"

#define NS_IREQUESTOBSERVERPROXY_IID \
  {0x7df8845f, 0x938a, 0x4437, \
    { 0x9e, 0xa4, 0xb1, 0x1b, 0x85, 0x00, 0x48, 0xf1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIRequestObserverProxy : public nsIRequestObserver {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IREQUESTOBSERVERPROXY_IID)

  /* void init (in nsIRequestObserver observer, in nsIEventTarget target); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIRequestObserver *observer, nsIEventTarget *target) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIRequestObserverProxy, NS_IREQUESTOBSERVERPROXY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIREQUESTOBSERVERPROXY \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIRequestObserver *observer, nsIEventTarget *target); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIREQUESTOBSERVERPROXY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIRequestObserver *observer, nsIEventTarget *target) { return _to Init(observer, target); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIREQUESTOBSERVERPROXY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIRequestObserver *observer, nsIEventTarget *target) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(observer, target); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsRequestObserverProxy : public nsIRequestObserverProxy
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIREQUESTOBSERVERPROXY

  nsRequestObserverProxy();

private:
  ~nsRequestObserverProxy();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsRequestObserverProxy, nsIRequestObserverProxy)

nsRequestObserverProxy::nsRequestObserverProxy()
{
  /* member initializers and constructor code */
}

nsRequestObserverProxy::~nsRequestObserverProxy()
{
  /* destructor code */
}

/* void init (in nsIRequestObserver observer, in nsIEventTarget target); */
NS_IMETHODIMP nsRequestObserverProxy::Init(nsIRequestObserver *observer, nsIEventTarget *target)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIRequestObserverProxy_h__ */
