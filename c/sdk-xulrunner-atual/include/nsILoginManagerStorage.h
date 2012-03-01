/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/passwordmgr/nsILoginManagerStorage.idl
 */

#ifndef __gen_nsILoginManagerStorage_h__
#define __gen_nsILoginManagerStorage_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class nsILoginInfo; /* forward declaration */

class nsIPropertyBag; /* forward declaration */


/* starting interface:    nsILoginManagerStorage */
#define NS_ILOGINMANAGERSTORAGE_IID_STR "32a4f9f1-60a8-4971-b54e-71ad661483ae"

#define NS_ILOGINMANAGERSTORAGE_IID \
  {0x32a4f9f1, 0x60a8, 0x4971, \
    { 0xb5, 0x4e, 0x71, 0xad, 0x66, 0x14, 0x83, 0xae }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILoginManagerStorage : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOGINMANAGERSTORAGE_IID)

  /* void init (); */
  NS_SCRIPTABLE NS_IMETHOD Init(void) = 0;

  /* void initWithFile (in nsIFile aInputFile, in nsIFile aOutputFile); */
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsIFile *aInputFile, nsIFile *aOutputFile) = 0;

  /* void addLogin (in nsILoginInfo aLogin); */
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin) = 0;

  /* void removeLogin (in nsILoginInfo aLogin); */
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin) = 0;

  /* void modifyLogin (in nsILoginInfo oldLogin, in nsISupports newLoginData); */
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData) = 0;

  /* void removeAllLogins (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void) = 0;

  /* void getAllLogins ([optional] out unsigned long count, [array, size_is (count), retval] out nsILoginInfo logins); */
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) = 0;

  /* void getAllEncryptedLogins ([optional] out unsigned long count, [array, size_is (count), retval] out nsILoginInfo logins); */
  NS_SCRIPTABLE NS_IMETHOD GetAllEncryptedLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) = 0;

  /* void searchLogins (out unsigned long count, in nsIPropertyBag matchData, [array, size_is (count), retval] out nsILoginInfo logins); */
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM) = 0;

  /* void getAllDisabledHosts ([optional] out unsigned long count, [array, size_is (count), retval] out wstring hostnames); */
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM) = 0;

  /* boolean getLoginSavingEnabled (in AString aHost); */
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM) = 0;

  /* void setLoginSavingEnabled (in AString aHost, in boolean isEnabled); */
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled) = 0;

  /* void findLogins (out unsigned long count, in AString aHostname, in AString aActionURL, in AString aHttpRealm, [array, size_is (count), retval] out nsILoginInfo logins); */
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM) = 0;

  /* unsigned long countLogins (in AString aHostname, in AString aActionURL, in AString aHttpRealm); */
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean uiBusy; */
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoginManagerStorage, NS_ILOGINMANAGERSTORAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOGINMANAGERSTORAGE \
  NS_SCRIPTABLE NS_IMETHOD Init(void); \
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsIFile *aInputFile, nsIFile *aOutputFile); \
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin); \
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin); \
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void); \
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAllEncryptedLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled); \
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOGINMANAGERSTORAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(void) { return _to Init(); } \
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsIFile *aInputFile, nsIFile *aOutputFile) { return _to InitWithFile(aInputFile, aOutputFile); } \
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin) { return _to AddLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin) { return _to RemoveLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData) { return _to ModifyLogin(oldLogin, newLoginData); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void) { return _to RemoveAllLogins(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) { return _to GetAllLogins(count, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllEncryptedLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) { return _to GetAllEncryptedLogins(count, logins); } \
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM) { return _to SearchLogins(count, matchData, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM) { return _to GetAllDisabledHosts(count, hostnames); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM) { return _to GetLoginSavingEnabled(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled) { return _to SetLoginSavingEnabled(aHost, isEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM) { return _to FindLogins(count, aHostname, aActionURL, aHttpRealm, logins); } \
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM) { return _to CountLogins(aHostname, aActionURL, aHttpRealm, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) { return _to GetUiBusy(aUiBusy); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOGINMANAGERSTORAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(); } \
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsIFile *aInputFile, nsIFile *aOutputFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithFile(aInputFile, aOutputFile); } \
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData) { return !_to ? NS_ERROR_NULL_POINTER : _to->ModifyLogin(oldLogin, newLoginData); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllLogins(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllLogins(count, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllEncryptedLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllEncryptedLogins(count, logins); } \
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SearchLogins(count, matchData, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllDisabledHosts(count, hostnames); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoginSavingEnabled(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoginSavingEnabled(aHost, isEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindLogins(count, aHostname, aActionURL, aHttpRealm, logins); } \
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CountLogins(aHostname, aActionURL, aHttpRealm, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUiBusy(aUiBusy); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoginManagerStorage : public nsILoginManagerStorage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOGINMANAGERSTORAGE

  nsLoginManagerStorage();

private:
  ~nsLoginManagerStorage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLoginManagerStorage, nsILoginManagerStorage)

nsLoginManagerStorage::nsLoginManagerStorage()
{
  /* member initializers and constructor code */
}

nsLoginManagerStorage::~nsLoginManagerStorage()
{
  /* destructor code */
}

/* void init (); */
NS_IMETHODIMP nsLoginManagerStorage::Init()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithFile (in nsIFile aInputFile, in nsIFile aOutputFile); */
NS_IMETHODIMP nsLoginManagerStorage::InitWithFile(nsIFile *aInputFile, nsIFile *aOutputFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addLogin (in nsILoginInfo aLogin); */
NS_IMETHODIMP nsLoginManagerStorage::AddLogin(nsILoginInfo *aLogin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeLogin (in nsILoginInfo aLogin); */
NS_IMETHODIMP nsLoginManagerStorage::RemoveLogin(nsILoginInfo *aLogin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void modifyLogin (in nsILoginInfo oldLogin, in nsISupports newLoginData); */
NS_IMETHODIMP nsLoginManagerStorage::ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllLogins (); */
NS_IMETHODIMP nsLoginManagerStorage::RemoveAllLogins()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAllLogins ([optional] out unsigned long count, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManagerStorage::GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAllEncryptedLogins ([optional] out unsigned long count, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManagerStorage::GetAllEncryptedLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void searchLogins (out unsigned long count, in nsIPropertyBag matchData, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManagerStorage::SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAllDisabledHosts ([optional] out unsigned long count, [array, size_is (count), retval] out wstring hostnames); */
NS_IMETHODIMP nsLoginManagerStorage::GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getLoginSavingEnabled (in AString aHost); */
NS_IMETHODIMP nsLoginManagerStorage::GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setLoginSavingEnabled (in AString aHost, in boolean isEnabled); */
NS_IMETHODIMP nsLoginManagerStorage::SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void findLogins (out unsigned long count, in AString aHostname, in AString aActionURL, in AString aHttpRealm, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManagerStorage::FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long countLogins (in AString aHostname, in AString aActionURL, in AString aHttpRealm); */
NS_IMETHODIMP nsLoginManagerStorage::CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean uiBusy; */
NS_IMETHODIMP nsLoginManagerStorage::GetUiBusy(PRBool *aUiBusy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILoginManagerStorage_h__ */
