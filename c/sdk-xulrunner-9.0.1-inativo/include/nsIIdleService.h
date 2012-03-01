/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsIIdleService.idl
 */

#ifndef __gen_nsIIdleService_h__
#define __gen_nsIIdleService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIObserver; /* forward declaration */


/* starting interface:    nsIIdleService */
#define NS_IIDLESERVICE_IID_STR "cc52f19a-63ae-4a1c-9cc3-e79eace0b471"

#define NS_IIDLESERVICE_IID \
  {0xcc52f19a, 0x63ae, 0x4a1c, \
    { 0x9c, 0xc3, 0xe7, 0x9e, 0xac, 0xe0, 0xb4, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIdleService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IIDLESERVICE_IID)

  /* readonly attribute unsigned long idleTime; */
  NS_SCRIPTABLE NS_IMETHOD GetIdleTime(PRUint32 *aIdleTime) = 0;

  /* void addIdleObserver (in nsIObserver observer, in unsigned long time); */
  NS_SCRIPTABLE NS_IMETHOD AddIdleObserver(nsIObserver *observer, PRUint32 time) = 0;

  /* void removeIdleObserver (in nsIObserver observer, in unsigned long time); */
  NS_SCRIPTABLE NS_IMETHOD RemoveIdleObserver(nsIObserver *observer, PRUint32 time) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIdleService, NS_IIDLESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIIDLESERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetIdleTime(PRUint32 *aIdleTime); \
  NS_SCRIPTABLE NS_IMETHOD AddIdleObserver(nsIObserver *observer, PRUint32 time); \
  NS_SCRIPTABLE NS_IMETHOD RemoveIdleObserver(nsIObserver *observer, PRUint32 time); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIIDLESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIdleTime(PRUint32 *aIdleTime) { return _to GetIdleTime(aIdleTime); } \
  NS_SCRIPTABLE NS_IMETHOD AddIdleObserver(nsIObserver *observer, PRUint32 time) { return _to AddIdleObserver(observer, time); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveIdleObserver(nsIObserver *observer, PRUint32 time) { return _to RemoveIdleObserver(observer, time); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIIDLESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIdleTime(PRUint32 *aIdleTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIdleTime(aIdleTime); } \
  NS_SCRIPTABLE NS_IMETHOD AddIdleObserver(nsIObserver *observer, PRUint32 time) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddIdleObserver(observer, time); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveIdleObserver(nsIObserver *observer, PRUint32 time) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveIdleObserver(observer, time); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIdleService : public nsIIdleService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIIDLESERVICE

  nsIdleService();

private:
  ~nsIdleService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIdleService, nsIIdleService)

nsIdleService::nsIdleService()
{
  /* member initializers and constructor code */
}

nsIdleService::~nsIdleService()
{
  /* destructor code */
}

/* readonly attribute unsigned long idleTime; */
NS_IMETHODIMP nsIdleService::GetIdleTime(PRUint32 *aIdleTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addIdleObserver (in nsIObserver observer, in unsigned long time); */
NS_IMETHODIMP nsIdleService::AddIdleObserver(nsIObserver *observer, PRUint32 time)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeIdleObserver (in nsIObserver observer, in unsigned long time); */
NS_IMETHODIMP nsIdleService::RemoveIdleObserver(nsIObserver *observer, PRUint32 time)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIdleService_h__ */
