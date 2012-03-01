/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMPerformanceNavigation.idl
 */

#ifndef __gen_nsIDOMPerformanceNavigation_h__
#define __gen_nsIDOMPerformanceNavigation_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
typedef PRUint16  nsDOMPerformanceNavigationType;


/* starting interface:    nsIDOMPerformanceNavigation */
#define NS_IDOMPERFORMANCENAVIGATION_IID_STR "a2132ad8-a841-4285-a140-338e8de6c2e0"

#define NS_IDOMPERFORMANCENAVIGATION_IID \
  {0xa2132ad8, 0xa841, 0x4285, \
    { 0xa1, 0x40, 0x33, 0x8e, 0x8d, 0xe6, 0xc2, 0xe0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPerformanceNavigation : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPERFORMANCENAVIGATION_IID)

  enum { TYPE_NAVIGATE = 0U };

  enum { TYPE_RELOAD = 1U };

  enum { TYPE_BACK_FORWARD = 2U };

  enum { TYPE_RESERVED = 255U };

  /* readonly attribute nsDOMPerformanceNavigationType type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsDOMPerformanceNavigationType *aType) = 0;

  /* readonly attribute unsigned short redirectCount; */
  NS_SCRIPTABLE NS_IMETHOD GetRedirectCount(PRUint16 *aRedirectCount) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPerformanceNavigation, NS_IDOMPERFORMANCENAVIGATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPERFORMANCENAVIGATION \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsDOMPerformanceNavigationType *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectCount(PRUint16 *aRedirectCount); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPERFORMANCENAVIGATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsDOMPerformanceNavigationType *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectCount(PRUint16 *aRedirectCount) { return _to GetRedirectCount(aRedirectCount); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPERFORMANCENAVIGATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsDOMPerformanceNavigationType *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectCount(PRUint16 *aRedirectCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedirectCount(aRedirectCount); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPerformanceNavigation : public nsIDOMPerformanceNavigation
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPERFORMANCENAVIGATION

  nsDOMPerformanceNavigation();

private:
  ~nsDOMPerformanceNavigation();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPerformanceNavigation, nsIDOMPerformanceNavigation)

nsDOMPerformanceNavigation::nsDOMPerformanceNavigation()
{
  /* member initializers and constructor code */
}

nsDOMPerformanceNavigation::~nsDOMPerformanceNavigation()
{
  /* destructor code */
}

/* readonly attribute nsDOMPerformanceNavigationType type; */
NS_IMETHODIMP nsDOMPerformanceNavigation::GetType(nsDOMPerformanceNavigationType *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short redirectCount; */
NS_IMETHODIMP nsDOMPerformanceNavigation::GetRedirectCount(PRUint16 *aRedirectCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPerformanceNavigation_h__ */
