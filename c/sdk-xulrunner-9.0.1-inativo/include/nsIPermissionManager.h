/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIPermissionManager.idl
 */

#ifndef __gen_nsIPermissionManager_h__
#define __gen_nsIPermissionManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsISimpleEnumerator_h__
#include "nsISimpleEnumerator.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIObserver; /* forward declaration */


/* starting interface:    nsIPermissionManager */
#define NS_IPERMISSIONMANAGER_IID_STR "0b83f9d5-3f96-41b6-91aa-ff3a7e4880d7"

#define NS_IPERMISSIONMANAGER_IID \
  {0x0b83f9d5, 0x3f96, 0x41b6, \
    { 0x91, 0xaa, 0xff, 0x3a, 0x7e, 0x48, 0x80, 0xd7 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPermissionManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERMISSIONMANAGER_IID)

  enum { UNKNOWN_ACTION = 0U };

  enum { ALLOW_ACTION = 1U };

  enum { DENY_ACTION = 2U };

  enum { EXPIRE_NEVER = 0U };

  enum { EXPIRE_SESSION = 1U };

  enum { EXPIRE_TIME = 2U };

  /* void add (in nsIURI uri, in string type, in PRUint32 permission, [optional] in PRUint32 expireType, [optional] in PRInt64 expireTime); */
  NS_SCRIPTABLE NS_IMETHOD Add(nsIURI *uri, const char * type, PRUint32 permission, PRUint32 expireType, PRInt64 expireTime) = 0;

  /* void remove (in AUTF8String host, in string type); */
  NS_SCRIPTABLE NS_IMETHOD Remove(const nsACString & host, const char * type) = 0;

  /* void removeAll (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAll(void) = 0;

  /* PRUint32 testPermission (in nsIURI uri, in string type); */
  NS_SCRIPTABLE NS_IMETHOD TestPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* PRUint32 testExactPermission (in nsIURI uri, in string type); */
  NS_SCRIPTABLE NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsISimpleEnumerator enumerator; */
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPermissionManager, NS_IPERMISSIONMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERMISSIONMANAGER \
  NS_SCRIPTABLE NS_IMETHOD Add(nsIURI *uri, const char * type, PRUint32 permission, PRUint32 expireType, PRInt64 expireTime); \
  NS_SCRIPTABLE NS_IMETHOD Remove(const nsACString & host, const char * type); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAll(void); \
  NS_SCRIPTABLE NS_IMETHOD TestPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERMISSIONMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Add(nsIURI *uri, const char * type, PRUint32 permission, PRUint32 expireType, PRInt64 expireTime) { return _to Add(uri, type, permission, expireType, expireTime); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(const nsACString & host, const char * type) { return _to Remove(host, type); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAll(void) { return _to RemoveAll(); } \
  NS_SCRIPTABLE NS_IMETHOD TestPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM) { return _to TestPermission(uri, type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM) { return _to TestExactPermission(uri, type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) { return _to GetEnumerator(aEnumerator); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERMISSIONMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Add(nsIURI *uri, const char * type, PRUint32 permission, PRUint32 expireType, PRInt64 expireTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->Add(uri, type, permission, expireType, expireTime); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(const nsACString & host, const char * type) { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(host, type); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAll(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAll(); } \
  NS_SCRIPTABLE NS_IMETHOD TestPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TestPermission(uri, type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TestExactPermission(uri, type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnumerator(aEnumerator); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPermissionManager : public nsIPermissionManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERMISSIONMANAGER

  nsPermissionManager();

private:
  ~nsPermissionManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPermissionManager, nsIPermissionManager)

nsPermissionManager::nsPermissionManager()
{
  /* member initializers and constructor code */
}

nsPermissionManager::~nsPermissionManager()
{
  /* destructor code */
}

/* void add (in nsIURI uri, in string type, in PRUint32 permission, [optional] in PRUint32 expireType, [optional] in PRInt64 expireTime); */
NS_IMETHODIMP nsPermissionManager::Add(nsIURI *uri, const char * type, PRUint32 permission, PRUint32 expireType, PRInt64 expireTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void remove (in AUTF8String host, in string type); */
NS_IMETHODIMP nsPermissionManager::Remove(const nsACString & host, const char * type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAll (); */
NS_IMETHODIMP nsPermissionManager::RemoveAll()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 testPermission (in nsIURI uri, in string type); */
NS_IMETHODIMP nsPermissionManager::TestPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 testExactPermission (in nsIURI uri, in string type); */
NS_IMETHODIMP nsPermissionManager::TestExactPermission(nsIURI *uri, const char * type, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator enumerator; */
NS_IMETHODIMP nsPermissionManager::GetEnumerator(nsISimpleEnumerator * *aEnumerator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_PERMISSIONMANAGER_CONTRACTID "@mozilla.org/permissionmanager;1"
#define PERM_CHANGE_NOTIFICATION "perm-changed"

#endif /* __gen_nsIPermissionManager_h__ */
