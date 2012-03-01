/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/threads/nsIThreadInternal.idl
 */

#ifndef __gen_nsIThreadInternal_h__
#define __gen_nsIThreadInternal_h__


#ifndef __gen_nsIThread_h__
#include "nsIThread.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIThreadObserver; /* forward declaration */

class nsIThreadEventFilter; /* forward declaration */


/* starting interface:    nsIThreadInternal */
#define NS_ITHREADINTERNAL_IID_STR "e0d35c22-53d5-4b48-8627-93e05b94cf2c"

#define NS_ITHREADINTERNAL_IID \
  {0xe0d35c22, 0x53d5, 0x4b48, \
    { 0x86, 0x27, 0x93, 0xe0, 0x5b, 0x94, 0xcf, 0x2c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIThreadInternal : public nsIThread {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITHREADINTERNAL_IID)

  /* attribute nsIThreadObserver observer; */
  NS_SCRIPTABLE NS_IMETHOD GetObserver(nsIThreadObserver * *aObserver) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetObserver(nsIThreadObserver *aObserver) = 0;

  /* void pushEventQueue (in nsIThreadEventFilter filter); */
  NS_SCRIPTABLE NS_IMETHOD PushEventQueue(nsIThreadEventFilter *filter) = 0;

  /* void popEventQueue (); */
  NS_SCRIPTABLE NS_IMETHOD PopEventQueue(void) = 0;

  /* readonly attribute unsigned long recursionDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetRecursionDepth(PRUint32 *aRecursionDepth) = 0;

  /* void addObserver (in nsIThreadObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIThreadObserver *observer) = 0;

  /* void removeObserver (in nsIThreadObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIThreadObserver *observer) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIThreadInternal, NS_ITHREADINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITHREADINTERNAL \
  NS_SCRIPTABLE NS_IMETHOD GetObserver(nsIThreadObserver * *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD SetObserver(nsIThreadObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD PushEventQueue(nsIThreadEventFilter *filter); \
  NS_SCRIPTABLE NS_IMETHOD PopEventQueue(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRecursionDepth(PRUint32 *aRecursionDepth); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIThreadObserver *observer); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIThreadObserver *observer); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITHREADINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetObserver(nsIThreadObserver * *aObserver) { return _to GetObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD SetObserver(nsIThreadObserver *aObserver) { return _to SetObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD PushEventQueue(nsIThreadEventFilter *filter) { return _to PushEventQueue(filter); } \
  NS_SCRIPTABLE NS_IMETHOD PopEventQueue(void) { return _to PopEventQueue(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRecursionDepth(PRUint32 *aRecursionDepth) { return _to GetRecursionDepth(aRecursionDepth); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIThreadObserver *observer) { return _to AddObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIThreadObserver *observer) { return _to RemoveObserver(observer); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITHREADINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetObserver(nsIThreadObserver * *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD SetObserver(nsIThreadObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD PushEventQueue(nsIThreadEventFilter *filter) { return !_to ? NS_ERROR_NULL_POINTER : _to->PushEventQueue(filter); } \
  NS_SCRIPTABLE NS_IMETHOD PopEventQueue(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PopEventQueue(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRecursionDepth(PRUint32 *aRecursionDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRecursionDepth(aRecursionDepth); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIThreadObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIThreadObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(observer); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsThreadInternal : public nsIThreadInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITHREADINTERNAL

  nsThreadInternal();

private:
  ~nsThreadInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsThreadInternal, nsIThreadInternal)

nsThreadInternal::nsThreadInternal()
{
  /* member initializers and constructor code */
}

nsThreadInternal::~nsThreadInternal()
{
  /* destructor code */
}

/* attribute nsIThreadObserver observer; */
NS_IMETHODIMP nsThreadInternal::GetObserver(nsIThreadObserver * *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsThreadInternal::SetObserver(nsIThreadObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pushEventQueue (in nsIThreadEventFilter filter); */
NS_IMETHODIMP nsThreadInternal::PushEventQueue(nsIThreadEventFilter *filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void popEventQueue (); */
NS_IMETHODIMP nsThreadInternal::PopEventQueue()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long recursionDepth; */
NS_IMETHODIMP nsThreadInternal::GetRecursionDepth(PRUint32 *aRecursionDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in nsIThreadObserver observer); */
NS_IMETHODIMP nsThreadInternal::AddObserver(nsIThreadObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in nsIThreadObserver observer); */
NS_IMETHODIMP nsThreadInternal::RemoveObserver(nsIThreadObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIThreadObserver */
#define NS_ITHREADOBSERVER_IID_STR "81d0b509-f198-4417-8020-08eb4271491f"

#define NS_ITHREADOBSERVER_IID \
  {0x81d0b509, 0xf198, 0x4417, \
    { 0x80, 0x20, 0x08, 0xeb, 0x42, 0x71, 0x49, 0x1f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIThreadObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITHREADOBSERVER_IID)

  /* void onDispatchedEvent (in nsIThreadInternal thread); */
  NS_SCRIPTABLE NS_IMETHOD OnDispatchedEvent(nsIThreadInternal *thread) = 0;

  /* void onProcessNextEvent (in nsIThreadInternal thread, in boolean mayWait, in unsigned long recursionDepth); */
  NS_SCRIPTABLE NS_IMETHOD OnProcessNextEvent(nsIThreadInternal *thread, PRBool mayWait, PRUint32 recursionDepth) = 0;

  /* void afterProcessNextEvent (in nsIThreadInternal thread, in unsigned long recursionDepth); */
  NS_SCRIPTABLE NS_IMETHOD AfterProcessNextEvent(nsIThreadInternal *thread, PRUint32 recursionDepth) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIThreadObserver, NS_ITHREADOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITHREADOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD OnDispatchedEvent(nsIThreadInternal *thread); \
  NS_SCRIPTABLE NS_IMETHOD OnProcessNextEvent(nsIThreadInternal *thread, PRBool mayWait, PRUint32 recursionDepth); \
  NS_SCRIPTABLE NS_IMETHOD AfterProcessNextEvent(nsIThreadInternal *thread, PRUint32 recursionDepth); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITHREADOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnDispatchedEvent(nsIThreadInternal *thread) { return _to OnDispatchedEvent(thread); } \
  NS_SCRIPTABLE NS_IMETHOD OnProcessNextEvent(nsIThreadInternal *thread, PRBool mayWait, PRUint32 recursionDepth) { return _to OnProcessNextEvent(thread, mayWait, recursionDepth); } \
  NS_SCRIPTABLE NS_IMETHOD AfterProcessNextEvent(nsIThreadInternal *thread, PRUint32 recursionDepth) { return _to AfterProcessNextEvent(thread, recursionDepth); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITHREADOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnDispatchedEvent(nsIThreadInternal *thread) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDispatchedEvent(thread); } \
  NS_SCRIPTABLE NS_IMETHOD OnProcessNextEvent(nsIThreadInternal *thread, PRBool mayWait, PRUint32 recursionDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnProcessNextEvent(thread, mayWait, recursionDepth); } \
  NS_SCRIPTABLE NS_IMETHOD AfterProcessNextEvent(nsIThreadInternal *thread, PRUint32 recursionDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->AfterProcessNextEvent(thread, recursionDepth); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsThreadObserver : public nsIThreadObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITHREADOBSERVER

  nsThreadObserver();

private:
  ~nsThreadObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsThreadObserver, nsIThreadObserver)

nsThreadObserver::nsThreadObserver()
{
  /* member initializers and constructor code */
}

nsThreadObserver::~nsThreadObserver()
{
  /* destructor code */
}

/* void onDispatchedEvent (in nsIThreadInternal thread); */
NS_IMETHODIMP nsThreadObserver::OnDispatchedEvent(nsIThreadInternal *thread)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onProcessNextEvent (in nsIThreadInternal thread, in boolean mayWait, in unsigned long recursionDepth); */
NS_IMETHODIMP nsThreadObserver::OnProcessNextEvent(nsIThreadInternal *thread, PRBool mayWait, PRUint32 recursionDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void afterProcessNextEvent (in nsIThreadInternal thread, in unsigned long recursionDepth); */
NS_IMETHODIMP nsThreadObserver::AfterProcessNextEvent(nsIThreadInternal *thread, PRUint32 recursionDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIThreadEventFilter */
#define NS_ITHREADEVENTFILTER_IID_STR "a0605c0b-17f5-4681-b8cd-a1cd75d42559"

#define NS_ITHREADEVENTFILTER_IID \
  {0xa0605c0b, 0x17f5, 0x4681, \
    { 0xb8, 0xcd, 0xa1, 0xcd, 0x75, 0xd4, 0x25, 0x59 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIThreadEventFilter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITHREADEVENTFILTER_IID)

  /* [notxpcom] boolean acceptEvent (in nsIRunnable event); */
  NS_IMETHOD_(PRBool) AcceptEvent(nsIRunnable *event) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIThreadEventFilter, NS_ITHREADEVENTFILTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITHREADEVENTFILTER \
  NS_IMETHOD_(PRBool) AcceptEvent(nsIRunnable *event); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITHREADEVENTFILTER(_to) \
  NS_IMETHOD_(PRBool) AcceptEvent(nsIRunnable *event) { return _to AcceptEvent(event); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITHREADEVENTFILTER(_to) \
  NS_IMETHOD_(PRBool) AcceptEvent(nsIRunnable *event) { return !_to ? NS_ERROR_NULL_POINTER : _to->AcceptEvent(event); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsThreadEventFilter : public nsIThreadEventFilter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITHREADEVENTFILTER

  nsThreadEventFilter();

private:
  ~nsThreadEventFilter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsThreadEventFilter, nsIThreadEventFilter)

nsThreadEventFilter::nsThreadEventFilter()
{
  /* member initializers and constructor code */
}

nsThreadEventFilter::~nsThreadEventFilter()
{
  /* destructor code */
}

/* [notxpcom] boolean acceptEvent (in nsIRunnable event); */
NS_IMETHODIMP_(PRBool) nsThreadEventFilter::AcceptEvent(nsIRunnable *event)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIThreadInternal_h__ */
