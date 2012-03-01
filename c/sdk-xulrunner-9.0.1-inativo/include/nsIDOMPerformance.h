/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMPerformance.idl
 */

#ifndef __gen_nsIDOMPerformance_h__
#define __gen_nsIDOMPerformance_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMPerformanceTiming; /* forward declaration */

class nsIDOMPerformanceNavigation; /* forward declaration */


/* starting interface:    nsIDOMPerformance */
#define NS_IDOMPERFORMANCE_IID_STR "446faf26-000b-4e66-a5fd-ae37c5ed6beb"

#define NS_IDOMPERFORMANCE_IID \
  {0x446faf26, 0x000b, 0x4e66, \
    { 0xa5, 0xfd, 0xae, 0x37, 0xc5, 0xed, 0x6b, 0xeb }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPerformance : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPERFORMANCE_IID)

  /* readonly attribute nsIDOMPerformanceTiming timing; */
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming) = 0;

  /* readonly attribute nsIDOMPerformanceNavigation navigation; */
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPerformance, NS_IDOMPERFORMANCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPERFORMANCE \
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming); \
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPERFORMANCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming) { return _to GetTiming(aTiming); } \
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation) { return _to GetNavigation(aNavigation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPERFORMANCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTiming(nsIDOMPerformanceTiming * *aTiming) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTiming(aTiming); } \
  NS_SCRIPTABLE NS_IMETHOD GetNavigation(nsIDOMPerformanceNavigation * *aNavigation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNavigation(aNavigation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPerformance : public nsIDOMPerformance
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPERFORMANCE

  nsDOMPerformance();

private:
  ~nsDOMPerformance();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPerformance, nsIDOMPerformance)

nsDOMPerformance::nsDOMPerformance()
{
  /* member initializers and constructor code */
}

nsDOMPerformance::~nsDOMPerformance()
{
  /* destructor code */
}

/* readonly attribute nsIDOMPerformanceTiming timing; */
NS_IMETHODIMP nsDOMPerformance::GetTiming(nsIDOMPerformanceTiming * *aTiming)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMPerformanceNavigation navigation; */
NS_IMETHODIMP nsDOMPerformance::GetNavigation(nsIDOMPerformanceNavigation * *aNavigation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPerformance_h__ */
