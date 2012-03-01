/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/nsPIPlacesHistoryListenersNotifier.idl
 */

#ifndef __gen_nsPIPlacesHistoryListenersNotifier_h__
#define __gen_nsPIPlacesHistoryListenersNotifier_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsPIPlacesHistoryListenersNotifier */
#define NS_PIPLACESHISTORYLISTENERSNOTIFIER_IID_STR "3b0953cd-f483-4908-8d91-282b6bda0453"

#define NS_PIPLACESHISTORYLISTENERSNOTIFIER_IID \
  {0x3b0953cd, 0xf483, 0x4908, \
    { 0x8d, 0x91, 0x28, 0x2b, 0x6b, 0xda, 0x04, 0x53 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsPIPlacesHistoryListenersNotifier : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_PIPLACESHISTORYLISTENERSNOTIFIER_IID)

  /* void notifyOnPageExpired (in nsIURI aURI, in PRTime aVisitTime, in boolean aWholeEntry, in ACString aGUID, in unsigned short aReason); */
  NS_SCRIPTABLE NS_IMETHOD NotifyOnPageExpired(nsIURI *aURI, PRTime aVisitTime, PRBool aWholeEntry, const nsACString & aGUID, PRUint16 aReason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsPIPlacesHistoryListenersNotifier, NS_PIPLACESHISTORYLISTENERSNOTIFIER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSPIPLACESHISTORYLISTENERSNOTIFIER \
  NS_SCRIPTABLE NS_IMETHOD NotifyOnPageExpired(nsIURI *aURI, PRTime aVisitTime, PRBool aWholeEntry, const nsACString & aGUID, PRUint16 aReason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSPIPLACESHISTORYLISTENERSNOTIFIER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NotifyOnPageExpired(nsIURI *aURI, PRTime aVisitTime, PRBool aWholeEntry, const nsACString & aGUID, PRUint16 aReason) { return _to NotifyOnPageExpired(aURI, aVisitTime, aWholeEntry, aGUID, aReason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSPIPLACESHISTORYLISTENERSNOTIFIER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NotifyOnPageExpired(nsIURI *aURI, PRTime aVisitTime, PRBool aWholeEntry, const nsACString & aGUID, PRUint16 aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyOnPageExpired(aURI, aVisitTime, aWholeEntry, aGUID, aReason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public nsPIPlacesHistoryListenersNotifier
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSPIPLACESHISTORYLISTENERSNOTIFIER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, nsPIPlacesHistoryListenersNotifier)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void notifyOnPageExpired (in nsIURI aURI, in PRTime aVisitTime, in boolean aWholeEntry, in ACString aGUID, in unsigned short aReason); */
NS_IMETHODIMP _MYCLASS_::NotifyOnPageExpired(nsIURI *aURI, PRTime aVisitTime, PRBool aWholeEntry, const nsACString & aGUID, PRUint16 aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsPIPlacesHistoryListenersNotifier_h__ */
