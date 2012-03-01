/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMPerformanceTiming.idl
 */

#ifndef __gen_nsIDOMPerformanceTiming_h__
#define __gen_nsIDOMPerformanceTiming_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMPerformanceTiming */
#define NS_IDOMPERFORMANCETIMING_IID_STR "8e09c825-da49-4a39-876b-ce2ff767dbe1"

#define NS_IDOMPERFORMANCETIMING_IID \
  {0x8e09c825, 0xda49, 0x4a39, \
    { 0x87, 0x6b, 0xce, 0x2f, 0xf7, 0x67, 0xdb, 0xe1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPerformanceTiming : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPERFORMANCETIMING_IID)

  /* readonly attribute DOMTimeMilliSec navigationStart; */
  NS_SCRIPTABLE NS_IMETHOD GetNavigationStart(DOMTimeMilliSec *aNavigationStart) = 0;

  /* readonly attribute DOMTimeMilliSec unloadEventStart; */
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventStart(DOMTimeMilliSec *aUnloadEventStart) = 0;

  /* readonly attribute DOMTimeMilliSec unloadEventEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventEnd(DOMTimeMilliSec *aUnloadEventEnd) = 0;

  /* readonly attribute DOMTimeMilliSec redirectStart; */
  NS_SCRIPTABLE NS_IMETHOD GetRedirectStart(DOMTimeMilliSec *aRedirectStart) = 0;

  /* readonly attribute DOMTimeMilliSec redirectEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetRedirectEnd(DOMTimeMilliSec *aRedirectEnd) = 0;

  /* readonly attribute DOMTimeMilliSec fetchStart; */
  NS_SCRIPTABLE NS_IMETHOD GetFetchStart(DOMTimeMilliSec *aFetchStart) = 0;

  /* readonly attribute DOMTimeMilliSec domainLookupStart; */
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupStart(DOMTimeMilliSec *aDomainLookupStart) = 0;

  /* readonly attribute DOMTimeMilliSec domainLookupEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupEnd(DOMTimeMilliSec *aDomainLookupEnd) = 0;

  /* readonly attribute DOMTimeMilliSec connectStart; */
  NS_SCRIPTABLE NS_IMETHOD GetConnectStart(DOMTimeMilliSec *aConnectStart) = 0;

  /* readonly attribute DOMTimeMilliSec connectEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetConnectEnd(DOMTimeMilliSec *aConnectEnd) = 0;

  /* readonly attribute DOMTimeMilliSec requestStart; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestStart(DOMTimeMilliSec *aRequestStart) = 0;

  /* readonly attribute DOMTimeMilliSec responseStart; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStart(DOMTimeMilliSec *aResponseStart) = 0;

  /* readonly attribute DOMTimeMilliSec responseEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseEnd(DOMTimeMilliSec *aResponseEnd) = 0;

  /* readonly attribute DOMTimeMilliSec domLoading; */
  NS_SCRIPTABLE NS_IMETHOD GetDomLoading(DOMTimeMilliSec *aDomLoading) = 0;

  /* readonly attribute DOMTimeMilliSec domInteractive; */
  NS_SCRIPTABLE NS_IMETHOD GetDomInteractive(DOMTimeMilliSec *aDomInteractive) = 0;

  /* readonly attribute DOMTimeMilliSec domContentLoadedEventStart; */
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventStart(DOMTimeMilliSec *aDomContentLoadedEventStart) = 0;

  /* readonly attribute DOMTimeMilliSec domContentLoadedEventEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventEnd(DOMTimeMilliSec *aDomContentLoadedEventEnd) = 0;

  /* readonly attribute DOMTimeMilliSec domComplete; */
  NS_SCRIPTABLE NS_IMETHOD GetDomComplete(DOMTimeMilliSec *aDomComplete) = 0;

  /* readonly attribute DOMTimeMilliSec loadEventStart; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventStart(DOMTimeMilliSec *aLoadEventStart) = 0;

  /* readonly attribute DOMTimeMilliSec loadEventEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventEnd(DOMTimeMilliSec *aLoadEventEnd) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPerformanceTiming, NS_IDOMPERFORMANCETIMING_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPERFORMANCETIMING \
  NS_SCRIPTABLE NS_IMETHOD GetNavigationStart(DOMTimeMilliSec *aNavigationStart); \
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventStart(DOMTimeMilliSec *aUnloadEventStart); \
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventEnd(DOMTimeMilliSec *aUnloadEventEnd); \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectStart(DOMTimeMilliSec *aRedirectStart); \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectEnd(DOMTimeMilliSec *aRedirectEnd); \
  NS_SCRIPTABLE NS_IMETHOD GetFetchStart(DOMTimeMilliSec *aFetchStart); \
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupStart(DOMTimeMilliSec *aDomainLookupStart); \
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupEnd(DOMTimeMilliSec *aDomainLookupEnd); \
  NS_SCRIPTABLE NS_IMETHOD GetConnectStart(DOMTimeMilliSec *aConnectStart); \
  NS_SCRIPTABLE NS_IMETHOD GetConnectEnd(DOMTimeMilliSec *aConnectEnd); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestStart(DOMTimeMilliSec *aRequestStart); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStart(DOMTimeMilliSec *aResponseStart); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseEnd(DOMTimeMilliSec *aResponseEnd); \
  NS_SCRIPTABLE NS_IMETHOD GetDomLoading(DOMTimeMilliSec *aDomLoading); \
  NS_SCRIPTABLE NS_IMETHOD GetDomInteractive(DOMTimeMilliSec *aDomInteractive); \
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventStart(DOMTimeMilliSec *aDomContentLoadedEventStart); \
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventEnd(DOMTimeMilliSec *aDomContentLoadedEventEnd); \
  NS_SCRIPTABLE NS_IMETHOD GetDomComplete(DOMTimeMilliSec *aDomComplete); \
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventStart(DOMTimeMilliSec *aLoadEventStart); \
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventEnd(DOMTimeMilliSec *aLoadEventEnd); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPERFORMANCETIMING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNavigationStart(DOMTimeMilliSec *aNavigationStart) { return _to GetNavigationStart(aNavigationStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventStart(DOMTimeMilliSec *aUnloadEventStart) { return _to GetUnloadEventStart(aUnloadEventStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventEnd(DOMTimeMilliSec *aUnloadEventEnd) { return _to GetUnloadEventEnd(aUnloadEventEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectStart(DOMTimeMilliSec *aRedirectStart) { return _to GetRedirectStart(aRedirectStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectEnd(DOMTimeMilliSec *aRedirectEnd) { return _to GetRedirectEnd(aRedirectEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetFetchStart(DOMTimeMilliSec *aFetchStart) { return _to GetFetchStart(aFetchStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupStart(DOMTimeMilliSec *aDomainLookupStart) { return _to GetDomainLookupStart(aDomainLookupStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupEnd(DOMTimeMilliSec *aDomainLookupEnd) { return _to GetDomainLookupEnd(aDomainLookupEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetConnectStart(DOMTimeMilliSec *aConnectStart) { return _to GetConnectStart(aConnectStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetConnectEnd(DOMTimeMilliSec *aConnectEnd) { return _to GetConnectEnd(aConnectEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestStart(DOMTimeMilliSec *aRequestStart) { return _to GetRequestStart(aRequestStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStart(DOMTimeMilliSec *aResponseStart) { return _to GetResponseStart(aResponseStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseEnd(DOMTimeMilliSec *aResponseEnd) { return _to GetResponseEnd(aResponseEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomLoading(DOMTimeMilliSec *aDomLoading) { return _to GetDomLoading(aDomLoading); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomInteractive(DOMTimeMilliSec *aDomInteractive) { return _to GetDomInteractive(aDomInteractive); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventStart(DOMTimeMilliSec *aDomContentLoadedEventStart) { return _to GetDomContentLoadedEventStart(aDomContentLoadedEventStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventEnd(DOMTimeMilliSec *aDomContentLoadedEventEnd) { return _to GetDomContentLoadedEventEnd(aDomContentLoadedEventEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomComplete(DOMTimeMilliSec *aDomComplete) { return _to GetDomComplete(aDomComplete); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventStart(DOMTimeMilliSec *aLoadEventStart) { return _to GetLoadEventStart(aLoadEventStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventEnd(DOMTimeMilliSec *aLoadEventEnd) { return _to GetLoadEventEnd(aLoadEventEnd); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPERFORMANCETIMING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNavigationStart(DOMTimeMilliSec *aNavigationStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNavigationStart(aNavigationStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventStart(DOMTimeMilliSec *aUnloadEventStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnloadEventStart(aUnloadEventStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnloadEventEnd(DOMTimeMilliSec *aUnloadEventEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnloadEventEnd(aUnloadEventEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectStart(DOMTimeMilliSec *aRedirectStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedirectStart(aRedirectStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectEnd(DOMTimeMilliSec *aRedirectEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedirectEnd(aRedirectEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetFetchStart(DOMTimeMilliSec *aFetchStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFetchStart(aFetchStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupStart(DOMTimeMilliSec *aDomainLookupStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomainLookupStart(aDomainLookupStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomainLookupEnd(DOMTimeMilliSec *aDomainLookupEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomainLookupEnd(aDomainLookupEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetConnectStart(DOMTimeMilliSec *aConnectStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConnectStart(aConnectStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetConnectEnd(DOMTimeMilliSec *aConnectEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConnectEnd(aConnectEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestStart(DOMTimeMilliSec *aRequestStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestStart(aRequestStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStart(DOMTimeMilliSec *aResponseStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStart(aResponseStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseEnd(DOMTimeMilliSec *aResponseEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseEnd(aResponseEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomLoading(DOMTimeMilliSec *aDomLoading) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomLoading(aDomLoading); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomInteractive(DOMTimeMilliSec *aDomInteractive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomInteractive(aDomInteractive); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventStart(DOMTimeMilliSec *aDomContentLoadedEventStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomContentLoadedEventStart(aDomContentLoadedEventStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomContentLoadedEventEnd(DOMTimeMilliSec *aDomContentLoadedEventEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomContentLoadedEventEnd(aDomContentLoadedEventEnd); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomComplete(DOMTimeMilliSec *aDomComplete) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomComplete(aDomComplete); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventStart(DOMTimeMilliSec *aLoadEventStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadEventStart(aLoadEventStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadEventEnd(DOMTimeMilliSec *aLoadEventEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadEventEnd(aLoadEventEnd); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPerformanceTiming : public nsIDOMPerformanceTiming
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPERFORMANCETIMING

  nsDOMPerformanceTiming();

private:
  ~nsDOMPerformanceTiming();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPerformanceTiming, nsIDOMPerformanceTiming)

nsDOMPerformanceTiming::nsDOMPerformanceTiming()
{
  /* member initializers and constructor code */
}

nsDOMPerformanceTiming::~nsDOMPerformanceTiming()
{
  /* destructor code */
}

/* readonly attribute DOMTimeMilliSec navigationStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetNavigationStart(DOMTimeMilliSec *aNavigationStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec unloadEventStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetUnloadEventStart(DOMTimeMilliSec *aUnloadEventStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec unloadEventEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetUnloadEventEnd(DOMTimeMilliSec *aUnloadEventEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec redirectStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetRedirectStart(DOMTimeMilliSec *aRedirectStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec redirectEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetRedirectEnd(DOMTimeMilliSec *aRedirectEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec fetchStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetFetchStart(DOMTimeMilliSec *aFetchStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domainLookupStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomainLookupStart(DOMTimeMilliSec *aDomainLookupStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domainLookupEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomainLookupEnd(DOMTimeMilliSec *aDomainLookupEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec connectStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetConnectStart(DOMTimeMilliSec *aConnectStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec connectEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetConnectEnd(DOMTimeMilliSec *aConnectEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec requestStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetRequestStart(DOMTimeMilliSec *aRequestStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec responseStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetResponseStart(DOMTimeMilliSec *aResponseStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec responseEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetResponseEnd(DOMTimeMilliSec *aResponseEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domLoading; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomLoading(DOMTimeMilliSec *aDomLoading)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domInteractive; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomInteractive(DOMTimeMilliSec *aDomInteractive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domContentLoadedEventStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomContentLoadedEventStart(DOMTimeMilliSec *aDomContentLoadedEventStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domContentLoadedEventEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomContentLoadedEventEnd(DOMTimeMilliSec *aDomContentLoadedEventEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec domComplete; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetDomComplete(DOMTimeMilliSec *aDomComplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec loadEventStart; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetLoadEventStart(DOMTimeMilliSec *aLoadEventStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeMilliSec loadEventEnd; */
NS_IMETHODIMP nsDOMPerformanceTiming::GetLoadEventEnd(DOMTimeMilliSec *aLoadEventEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPerformanceTiming_h__ */
