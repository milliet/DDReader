/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/passwordmgr/nsILoginManager.idl
 */

#ifndef __gen_nsILoginManager_h__
#define __gen_nsILoginManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsILoginInfo; /* forward declaration */

class nsIAutoCompleteResult; /* forward declaration */

class nsIDOMHTMLInputElement; /* forward declaration */

class nsIDOMHTMLFormElement; /* forward declaration */

class nsIPropertyBag; /* forward declaration */


/* starting interface:    nsILoginManager */
#define NS_ILOGINMANAGER_IID_STR "1f02142f-7e3f-4d02-b3e0-495c5f83ad7d"

#define NS_ILOGINMANAGER_IID \
  {0x1f02142f, 0x7e3f, 0x4d02, \
    { 0xb3, 0xe0, 0x49, 0x5c, 0x5f, 0x83, 0xad, 0x7d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILoginManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOGINMANAGER_IID)

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

  /* nsIAutoCompleteResult autoCompleteSearch (in AString aSearchString, in nsIAutoCompleteResult aPreviousResult, in nsIDOMHTMLInputElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD AutoCompleteSearch(const nsAString & aSearchString, nsIAutoCompleteResult *aPreviousResult, nsIDOMHTMLInputElement *aElement, nsIAutoCompleteResult * *_retval NS_OUTPARAM) = 0;

  /* boolean fillForm (in nsIDOMHTMLFormElement aForm); */
  NS_SCRIPTABLE NS_IMETHOD FillForm(nsIDOMHTMLFormElement *aForm, PRBool *_retval NS_OUTPARAM) = 0;

  /* void searchLogins (out unsigned long count, in nsIPropertyBag matchData, [array, size_is (count), retval] out nsILoginInfo logins); */
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM) = 0;

  /* readonly attribute boolean uiBusy; */
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoginManager, NS_ILOGINMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOGINMANAGER \
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin); \
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin); \
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void); \
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled); \
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AutoCompleteSearch(const nsAString & aSearchString, nsIAutoCompleteResult *aPreviousResult, nsIDOMHTMLInputElement *aElement, nsIAutoCompleteResult * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FillForm(nsIDOMHTMLFormElement *aForm, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOGINMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin) { return _to AddLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin) { return _to RemoveLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData) { return _to ModifyLogin(oldLogin, newLoginData); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void) { return _to RemoveAllLogins(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) { return _to GetAllLogins(count, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM) { return _to GetAllDisabledHosts(count, hostnames); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM) { return _to GetLoginSavingEnabled(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled) { return _to SetLoginSavingEnabled(aHost, isEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM) { return _to FindLogins(count, aHostname, aActionURL, aHttpRealm, logins); } \
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM) { return _to CountLogins(aHostname, aActionURL, aHttpRealm, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AutoCompleteSearch(const nsAString & aSearchString, nsIAutoCompleteResult *aPreviousResult, nsIDOMHTMLInputElement *aElement, nsIAutoCompleteResult * *_retval NS_OUTPARAM) { return _to AutoCompleteSearch(aSearchString, aPreviousResult, aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FillForm(nsIDOMHTMLFormElement *aForm, PRBool *_retval NS_OUTPARAM) { return _to FillForm(aForm, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM) { return _to SearchLogins(count, matchData, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) { return _to GetUiBusy(aUiBusy); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOGINMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddLogin(nsILoginInfo *aLogin) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveLogin(nsILoginInfo *aLogin) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveLogin(aLogin); } \
  NS_SCRIPTABLE NS_IMETHOD ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData) { return !_to ? NS_ERROR_NULL_POINTER : _to->ModifyLogin(oldLogin, newLoginData); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllLogins(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllLogins(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllLogins(count, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllDisabledHosts(count, hostnames); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoginSavingEnabled(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoginSavingEnabled(aHost, isEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindLogins(count, aHostname, aActionURL, aHttpRealm, logins); } \
  NS_SCRIPTABLE NS_IMETHOD CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CountLogins(aHostname, aActionURL, aHttpRealm, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AutoCompleteSearch(const nsAString & aSearchString, nsIAutoCompleteResult *aPreviousResult, nsIDOMHTMLInputElement *aElement, nsIAutoCompleteResult * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AutoCompleteSearch(aSearchString, aPreviousResult, aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FillForm(nsIDOMHTMLFormElement *aForm, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FillForm(aForm, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SearchLogins(count, matchData, logins); } \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUiBusy(aUiBusy); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoginManager : public nsILoginManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOGINMANAGER

  nsLoginManager();

private:
  ~nsLoginManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLoginManager, nsILoginManager)

nsLoginManager::nsLoginManager()
{
  /* member initializers and constructor code */
}

nsLoginManager::~nsLoginManager()
{
  /* destructor code */
}

/* void addLogin (in nsILoginInfo aLogin); */
NS_IMETHODIMP nsLoginManager::AddLogin(nsILoginInfo *aLogin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeLogin (in nsILoginInfo aLogin); */
NS_IMETHODIMP nsLoginManager::RemoveLogin(nsILoginInfo *aLogin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void modifyLogin (in nsILoginInfo oldLogin, in nsISupports newLoginData); */
NS_IMETHODIMP nsLoginManager::ModifyLogin(nsILoginInfo *oldLogin, nsISupports *newLoginData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllLogins (); */
NS_IMETHODIMP nsLoginManager::RemoveAllLogins()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAllLogins ([optional] out unsigned long count, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManager::GetAllLogins(PRUint32 *count NS_OUTPARAM, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAllDisabledHosts ([optional] out unsigned long count, [array, size_is (count), retval] out wstring hostnames); */
NS_IMETHODIMP nsLoginManager::GetAllDisabledHosts(PRUint32 *count NS_OUTPARAM, PRUnichar * **hostnames NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getLoginSavingEnabled (in AString aHost); */
NS_IMETHODIMP nsLoginManager::GetLoginSavingEnabled(const nsAString & aHost, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setLoginSavingEnabled (in AString aHost, in boolean isEnabled); */
NS_IMETHODIMP nsLoginManager::SetLoginSavingEnabled(const nsAString & aHost, PRBool isEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void findLogins (out unsigned long count, in AString aHostname, in AString aActionURL, in AString aHttpRealm, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManager::FindLogins(PRUint32 *count NS_OUTPARAM, const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long countLogins (in AString aHostname, in AString aActionURL, in AString aHttpRealm); */
NS_IMETHODIMP nsLoginManager::CountLogins(const nsAString & aHostname, const nsAString & aActionURL, const nsAString & aHttpRealm, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAutoCompleteResult autoCompleteSearch (in AString aSearchString, in nsIAutoCompleteResult aPreviousResult, in nsIDOMHTMLInputElement aElement); */
NS_IMETHODIMP nsLoginManager::AutoCompleteSearch(const nsAString & aSearchString, nsIAutoCompleteResult *aPreviousResult, nsIDOMHTMLInputElement *aElement, nsIAutoCompleteResult * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean fillForm (in nsIDOMHTMLFormElement aForm); */
NS_IMETHODIMP nsLoginManager::FillForm(nsIDOMHTMLFormElement *aForm, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void searchLogins (out unsigned long count, in nsIPropertyBag matchData, [array, size_is (count), retval] out nsILoginInfo logins); */
NS_IMETHODIMP nsLoginManager::SearchLogins(PRUint32 *count NS_OUTPARAM, nsIPropertyBag *matchData, nsILoginInfo * **logins NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean uiBusy; */
NS_IMETHODIMP nsLoginManager::GetUiBusy(PRBool *aUiBusy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#define NS_LOGINMANAGER_CONTRACTID "@mozilla.org/login-manager;1"

#endif /* __gen_nsILoginManager_h__ */
