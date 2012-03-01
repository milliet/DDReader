/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIContentPrefService.idl
 */

#ifndef __gen_nsIContentPrefService_h__
#define __gen_nsIContentPrefService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */

class nsIPropertyBag2; /* forward declaration */

class nsIContentURIGrouper; /* forward declaration */

class mozIStorageConnection; /* forward declaration */


/* starting interface:    nsIContentPrefObserver */
#define NS_ICONTENTPREFOBSERVER_IID_STR "746c7a02-f6c1-4869-b434-7c8b86e60e61"

#define NS_ICONTENTPREFOBSERVER_IID \
  {0x746c7a02, 0xf6c1, 0x4869, \
    { 0xb4, 0x34, 0x7c, 0x8b, 0x86, 0xe6, 0x0e, 0x61 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentPrefObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTPREFOBSERVER_IID)

  /* void onContentPrefSet (in AString aGroup, in AString aName, in nsIVariant aValue); */
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefSet(const nsAString & aGroup, const nsAString & aName, nsIVariant *aValue) = 0;

  /* void onContentPrefRemoved (in AString aGroup, in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefRemoved(const nsAString & aGroup, const nsAString & aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentPrefObserver, NS_ICONTENTPREFOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTPREFOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefSet(const nsAString & aGroup, const nsAString & aName, nsIVariant *aValue); \
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefRemoved(const nsAString & aGroup, const nsAString & aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTPREFOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefSet(const nsAString & aGroup, const nsAString & aName, nsIVariant *aValue) { return _to OnContentPrefSet(aGroup, aName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefRemoved(const nsAString & aGroup, const nsAString & aName) { return _to OnContentPrefRemoved(aGroup, aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTPREFOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefSet(const nsAString & aGroup, const nsAString & aName, nsIVariant *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnContentPrefSet(aGroup, aName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD OnContentPrefRemoved(const nsAString & aGroup, const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnContentPrefRemoved(aGroup, aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentPrefObserver : public nsIContentPrefObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTPREFOBSERVER

  nsContentPrefObserver();

private:
  ~nsContentPrefObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentPrefObserver, nsIContentPrefObserver)

nsContentPrefObserver::nsContentPrefObserver()
{
  /* member initializers and constructor code */
}

nsContentPrefObserver::~nsContentPrefObserver()
{
  /* destructor code */
}

/* void onContentPrefSet (in AString aGroup, in AString aName, in nsIVariant aValue); */
NS_IMETHODIMP nsContentPrefObserver::OnContentPrefSet(const nsAString & aGroup, const nsAString & aName, nsIVariant *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onContentPrefRemoved (in AString aGroup, in AString aName); */
NS_IMETHODIMP nsContentPrefObserver::OnContentPrefRemoved(const nsAString & aGroup, const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIContentPrefCallback */
#define NS_ICONTENTPREFCALLBACK_IID_STR "c1b3d6df-5373-4606-8494-8bcf14a7fc62"

#define NS_ICONTENTPREFCALLBACK_IID \
  {0xc1b3d6df, 0x5373, 0x4606, \
    { 0x84, 0x94, 0x8b, 0xcf, 0x14, 0xa7, 0xfc, 0x62 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentPrefCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTPREFCALLBACK_IID)

  /* void onResult (in nsIVariant aResult); */
  NS_SCRIPTABLE NS_IMETHOD OnResult(nsIVariant *aResult) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentPrefCallback, NS_ICONTENTPREFCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTPREFCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnResult(nsIVariant *aResult); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTPREFCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnResult(nsIVariant *aResult) { return _to OnResult(aResult); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTPREFCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnResult(nsIVariant *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnResult(aResult); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentPrefCallback : public nsIContentPrefCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTPREFCALLBACK

  nsContentPrefCallback();

private:
  ~nsContentPrefCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentPrefCallback, nsIContentPrefCallback)

nsContentPrefCallback::nsContentPrefCallback()
{
  /* member initializers and constructor code */
}

nsContentPrefCallback::~nsContentPrefCallback()
{
  /* destructor code */
}

/* void onResult (in nsIVariant aResult); */
NS_IMETHODIMP nsContentPrefCallback::OnResult(nsIVariant *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIContentPrefService */
#define NS_ICONTENTPREFSERVICE_IID_STR "0014e2b4-1bab-4946-9211-7d28fc8df4d7"

#define NS_ICONTENTPREFSERVICE_IID \
  {0x0014e2b4, 0x1bab, 0x4946, \
    { 0x92, 0x11, 0x7d, 0x28, 0xfc, 0x8d, 0xf4, 0xd7 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentPrefService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTPREFSERVICE_IID)

  /* nsIVariant getPref (in nsIVariant aGroup, in AString aName, [optional] in nsIContentPrefCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD GetPref(nsIVariant *aGroup, const nsAString & aName, nsIContentPrefCallback *aCallback, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* void setPref (in nsIVariant aGroup, in AString aName, in nsIVariant aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetPref(nsIVariant *aGroup, const nsAString & aName, nsIVariant *aValue) = 0;

  /* boolean hasPref (in nsIVariant aGroup, in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD HasPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean hasCachedPref (in nsIVariant aGroup, in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD HasCachedPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM) = 0;

  /* void removePref (in nsIVariant aGroup, in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD RemovePref(nsIVariant *aGroup, const nsAString & aName) = 0;

  /* void removeGroupedPrefs (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveGroupedPrefs(void) = 0;

  /* void removePrefsByName (in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD RemovePrefsByName(const nsAString & aName) = 0;

  /* nsIPropertyBag2 getPrefs (in nsIVariant aGroup); */
  NS_SCRIPTABLE NS_IMETHOD GetPrefs(nsIVariant *aGroup, nsIPropertyBag2 * *_retval NS_OUTPARAM) = 0;

  /* nsIPropertyBag2 getPrefsByName (in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD GetPrefsByName(const nsAString & aName, nsIPropertyBag2 * *_retval NS_OUTPARAM) = 0;

  /* void addObserver (in AString aName, in nsIContentPrefObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const nsAString & aName, nsIContentPrefObserver *aObserver) = 0;

  /* void removeObserver (in AString aName, in nsIContentPrefObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const nsAString & aName, nsIContentPrefObserver *aObserver) = 0;

  /* readonly attribute nsIContentURIGrouper grouper; */
  NS_SCRIPTABLE NS_IMETHOD GetGrouper(nsIContentURIGrouper * *aGrouper) = 0;

  /* readonly attribute mozIStorageConnection DBConnection; */
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentPrefService, NS_ICONTENTPREFSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTPREFSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetPref(nsIVariant *aGroup, const nsAString & aName, nsIContentPrefCallback *aCallback, nsIVariant * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetPref(nsIVariant *aGroup, const nsAString & aName, nsIVariant *aValue); \
  NS_SCRIPTABLE NS_IMETHOD HasPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasCachedPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemovePref(nsIVariant *aGroup, const nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD RemoveGroupedPrefs(void); \
  NS_SCRIPTABLE NS_IMETHOD RemovePrefsByName(const nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetPrefs(nsIVariant *aGroup, nsIPropertyBag2 * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPrefsByName(const nsAString & aName, nsIPropertyBag2 * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const nsAString & aName, nsIContentPrefObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const nsAString & aName, nsIContentPrefObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD GetGrouper(nsIContentURIGrouper * *aGrouper); \
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTPREFSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPref(nsIVariant *aGroup, const nsAString & aName, nsIContentPrefCallback *aCallback, nsIVariant * *_retval NS_OUTPARAM) { return _to GetPref(aGroup, aName, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetPref(nsIVariant *aGroup, const nsAString & aName, nsIVariant *aValue) { return _to SetPref(aGroup, aName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD HasPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM) { return _to HasPref(aGroup, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasCachedPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM) { return _to HasCachedPref(aGroup, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemovePref(nsIVariant *aGroup, const nsAString & aName) { return _to RemovePref(aGroup, aName); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveGroupedPrefs(void) { return _to RemoveGroupedPrefs(); } \
  NS_SCRIPTABLE NS_IMETHOD RemovePrefsByName(const nsAString & aName) { return _to RemovePrefsByName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefs(nsIVariant *aGroup, nsIPropertyBag2 * *_retval NS_OUTPARAM) { return _to GetPrefs(aGroup, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefsByName(const nsAString & aName, nsIPropertyBag2 * *_retval NS_OUTPARAM) { return _to GetPrefsByName(aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const nsAString & aName, nsIContentPrefObserver *aObserver) { return _to AddObserver(aName, aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const nsAString & aName, nsIContentPrefObserver *aObserver) { return _to RemoveObserver(aName, aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetGrouper(nsIContentURIGrouper * *aGrouper) { return _to GetGrouper(aGrouper); } \
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection) { return _to GetDBConnection(aDBConnection); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTPREFSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPref(nsIVariant *aGroup, const nsAString & aName, nsIContentPrefCallback *aCallback, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPref(aGroup, aName, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetPref(nsIVariant *aGroup, const nsAString & aName, nsIVariant *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPref(aGroup, aName, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD HasPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasPref(aGroup, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasCachedPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasCachedPref(aGroup, aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemovePref(nsIVariant *aGroup, const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemovePref(aGroup, aName); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveGroupedPrefs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveGroupedPrefs(); } \
  NS_SCRIPTABLE NS_IMETHOD RemovePrefsByName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemovePrefsByName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefs(nsIVariant *aGroup, nsIPropertyBag2 * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrefs(aGroup, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefsByName(const nsAString & aName, nsIPropertyBag2 * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrefsByName(aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(const nsAString & aName, nsIContentPrefObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aName, aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(const nsAString & aName, nsIContentPrefObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aName, aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetGrouper(nsIContentURIGrouper * *aGrouper) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGrouper(aGrouper); } \
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDBConnection(aDBConnection); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentPrefService : public nsIContentPrefService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTPREFSERVICE

  nsContentPrefService();

private:
  ~nsContentPrefService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentPrefService, nsIContentPrefService)

nsContentPrefService::nsContentPrefService()
{
  /* member initializers and constructor code */
}

nsContentPrefService::~nsContentPrefService()
{
  /* destructor code */
}

/* nsIVariant getPref (in nsIVariant aGroup, in AString aName, [optional] in nsIContentPrefCallback aCallback); */
NS_IMETHODIMP nsContentPrefService::GetPref(nsIVariant *aGroup, const nsAString & aName, nsIContentPrefCallback *aCallback, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setPref (in nsIVariant aGroup, in AString aName, in nsIVariant aValue); */
NS_IMETHODIMP nsContentPrefService::SetPref(nsIVariant *aGroup, const nsAString & aName, nsIVariant *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasPref (in nsIVariant aGroup, in AString aName); */
NS_IMETHODIMP nsContentPrefService::HasPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasCachedPref (in nsIVariant aGroup, in AString aName); */
NS_IMETHODIMP nsContentPrefService::HasCachedPref(nsIVariant *aGroup, const nsAString & aName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removePref (in nsIVariant aGroup, in AString aName); */
NS_IMETHODIMP nsContentPrefService::RemovePref(nsIVariant *aGroup, const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeGroupedPrefs (); */
NS_IMETHODIMP nsContentPrefService::RemoveGroupedPrefs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removePrefsByName (in AString aName); */
NS_IMETHODIMP nsContentPrefService::RemovePrefsByName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPropertyBag2 getPrefs (in nsIVariant aGroup); */
NS_IMETHODIMP nsContentPrefService::GetPrefs(nsIVariant *aGroup, nsIPropertyBag2 * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPropertyBag2 getPrefsByName (in AString aName); */
NS_IMETHODIMP nsContentPrefService::GetPrefsByName(const nsAString & aName, nsIPropertyBag2 * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in AString aName, in nsIContentPrefObserver aObserver); */
NS_IMETHODIMP nsContentPrefService::AddObserver(const nsAString & aName, nsIContentPrefObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in AString aName, in nsIContentPrefObserver aObserver); */
NS_IMETHODIMP nsContentPrefService::RemoveObserver(const nsAString & aName, nsIContentPrefObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIContentURIGrouper grouper; */
NS_IMETHODIMP nsContentPrefService::GetGrouper(nsIContentURIGrouper * *aGrouper)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIStorageConnection DBConnection; */
NS_IMETHODIMP nsContentPrefService::GetDBConnection(mozIStorageConnection * *aDBConnection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// The contractID for the generic implementation built in to xpcom.
#define NS_CONTENT_PREF_SERVICE_CONTRACTID "@mozilla.org/content-pref/service;1"

#endif /* __gen_nsIContentPrefService_h__ */
