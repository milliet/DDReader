/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libpref/public/nsIPrefBranch2.idl
 */

#ifndef __gen_nsIPrefBranch2_h__
#define __gen_nsIPrefBranch2_h__


#ifndef __gen_nsIPrefBranch_h__
#include "nsIPrefBranch.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIObserver; /* forward declaration */


/* starting interface:    nsIPrefBranch2 */
#define NS_IPREFBRANCH2_IID_STR "d9bb54df-daac-4ce6-a70c-95d87b770cd8"

#define NS_IPREFBRANCH2_IID \
  {0xd9bb54df, 0xdaac, 0x4ce6, \
    { 0xa7, 0x0c, 0x95, 0xd8, 0x7b, 0x77, 0x0c, 0xd8 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPrefBranch2 : public nsIPrefBranch {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPREFBRANCH2_IID)

  /* void addObserver (in string aDomain, in nsIObserver aObserver, in boolean aHoldWeak); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, PRBool aHoldWeak) = 0;

  /* void removeObserver (in string aDomain, in nsIObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrefBranch2, NS_IPREFBRANCH2_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPREFBRANCH2 \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, PRBool aHoldWeak); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPREFBRANCH2(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, PRBool aHoldWeak) { return _to AddObserver(aDomain, aObserver, aHoldWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver) { return _to RemoveObserver(aDomain, aObserver); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPREFBRANCH2(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const char * aDomain, nsIObserver *aObserver, PRBool aHoldWeak) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aDomain, aObserver, aHoldWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const char * aDomain, nsIObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aDomain, aObserver); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrefBranch2 : public nsIPrefBranch2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPREFBRANCH2

  nsPrefBranch2();

private:
  ~nsPrefBranch2();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPrefBranch2, nsIPrefBranch2)

nsPrefBranch2::nsPrefBranch2()
{
  /* member initializers and constructor code */
}

nsPrefBranch2::~nsPrefBranch2()
{
  /* destructor code */
}

/* void addObserver (in string aDomain, in nsIObserver aObserver, in boolean aHoldWeak); */
NS_IMETHODIMP nsPrefBranch2::AddObserver(const char * aDomain, nsIObserver *aObserver, PRBool aHoldWeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in string aDomain, in nsIObserver aObserver); */
NS_IMETHODIMP nsPrefBranch2::RemoveObserver(const char * aDomain, nsIObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/**
 * Notification sent when a preference changes.
 */
#define NS_PREFBRANCH_PREFCHANGE_TOPIC_ID "nsPref:changed"

#endif /* __gen_nsIPrefBranch2_h__ */
