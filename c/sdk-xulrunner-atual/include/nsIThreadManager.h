/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/threads/nsIThreadManager.idl
 */

#ifndef __gen_nsIThreadManager_h__
#define __gen_nsIThreadManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIThread; /* forward declaration */


/* starting interface:    nsIThreadManager */
#define NS_ITHREADMANAGER_IID_STR "2bbbc38c-cf96-4099-ba6b-f6a44d8b014c"

#define NS_ITHREADMANAGER_IID \
  {0x2bbbc38c, 0xcf96, 0x4099, \
    { 0xba, 0x6b, 0xf6, 0xa4, 0x4d, 0x8b, 0x01, 0x4c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIThreadManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITHREADMANAGER_IID)

  enum { DEFAULT_STACK_SIZE = 0U };

  /* nsIThread newThread (in unsigned long creationFlags, [optional] in unsigned long stackSize); */
  NS_SCRIPTABLE NS_IMETHOD NewThread(PRUint32 creationFlags, PRUint32 stackSize, nsIThread * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIThread getThreadFromPRThread (in PRThread prthread); */
  NS_IMETHOD GetThreadFromPRThread(PRThread *prthread, nsIThread * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIThread mainThread; */
  NS_SCRIPTABLE NS_IMETHOD GetMainThread(nsIThread * *aMainThread) = 0;

  /* readonly attribute nsIThread currentThread; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentThread(nsIThread * *aCurrentThread) = 0;

  /* readonly attribute boolean isMainThread; */
  NS_SCRIPTABLE NS_IMETHOD GetIsMainThread(PRBool *aIsMainThread) = 0;

  /* readonly attribute boolean isCycleCollectorThread; */
  NS_SCRIPTABLE NS_IMETHOD GetIsCycleCollectorThread(PRBool *aIsCycleCollectorThread) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIThreadManager, NS_ITHREADMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITHREADMANAGER \
  NS_SCRIPTABLE NS_IMETHOD NewThread(PRUint32 creationFlags, PRUint32 stackSize, nsIThread * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetThreadFromPRThread(PRThread *prthread, nsIThread * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMainThread(nsIThread * *aMainThread); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentThread(nsIThread * *aCurrentThread); \
  NS_SCRIPTABLE NS_IMETHOD GetIsMainThread(PRBool *aIsMainThread); \
  NS_SCRIPTABLE NS_IMETHOD GetIsCycleCollectorThread(PRBool *aIsCycleCollectorThread); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITHREADMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NewThread(PRUint32 creationFlags, PRUint32 stackSize, nsIThread * *_retval NS_OUTPARAM) { return _to NewThread(creationFlags, stackSize, _retval); } \
  NS_IMETHOD GetThreadFromPRThread(PRThread *prthread, nsIThread * *_retval NS_OUTPARAM) { return _to GetThreadFromPRThread(prthread, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMainThread(nsIThread * *aMainThread) { return _to GetMainThread(aMainThread); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentThread(nsIThread * *aCurrentThread) { return _to GetCurrentThread(aCurrentThread); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsMainThread(PRBool *aIsMainThread) { return _to GetIsMainThread(aIsMainThread); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsCycleCollectorThread(PRBool *aIsCycleCollectorThread) { return _to GetIsCycleCollectorThread(aIsCycleCollectorThread); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITHREADMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NewThread(PRUint32 creationFlags, PRUint32 stackSize, nsIThread * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewThread(creationFlags, stackSize, _retval); } \
  NS_IMETHOD GetThreadFromPRThread(PRThread *prthread, nsIThread * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThreadFromPRThread(prthread, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMainThread(nsIThread * *aMainThread) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMainThread(aMainThread); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentThread(nsIThread * *aCurrentThread) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentThread(aCurrentThread); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsMainThread(PRBool *aIsMainThread) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsMainThread(aIsMainThread); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsCycleCollectorThread(PRBool *aIsCycleCollectorThread) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsCycleCollectorThread(aIsCycleCollectorThread); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsThreadManager : public nsIThreadManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITHREADMANAGER

  nsThreadManager();

private:
  ~nsThreadManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsThreadManager, nsIThreadManager)

nsThreadManager::nsThreadManager()
{
  /* member initializers and constructor code */
}

nsThreadManager::~nsThreadManager()
{
  /* destructor code */
}

/* nsIThread newThread (in unsigned long creationFlags, [optional] in unsigned long stackSize); */
NS_IMETHODIMP nsThreadManager::NewThread(PRUint32 creationFlags, PRUint32 stackSize, nsIThread * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIThread getThreadFromPRThread (in PRThread prthread); */
NS_IMETHODIMP nsThreadManager::GetThreadFromPRThread(PRThread *prthread, nsIThread * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIThread mainThread; */
NS_IMETHODIMP nsThreadManager::GetMainThread(nsIThread * *aMainThread)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIThread currentThread; */
NS_IMETHODIMP nsThreadManager::GetCurrentThread(nsIThread * *aCurrentThread)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isMainThread; */
NS_IMETHODIMP nsThreadManager::GetIsMainThread(PRBool *aIsMainThread)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isCycleCollectorThread; */
NS_IMETHODIMP nsThreadManager::GetIsCycleCollectorThread(PRBool *aIsCycleCollectorThread)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIThreadManager_h__ */
