/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/embedding/components/windowwatcher/public/nsPIWindowWatcher.idl
 */

#ifndef __gen_nsPIWindowWatcher_h__
#define __gen_nsPIWindowWatcher_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */

class nsIWebBrowserChrome; /* forward declaration */

class nsIDocShellTreeItem; /* forward declaration */

class nsIArray; /* forward declaration */


/* starting interface:    nsPIWindowWatcher */
#define NS_PIWINDOWWATCHER_IID_STR "8624594a-28d7-4bc3-8d12-b1c2b9eefd90"

#define NS_PIWINDOWWATCHER_IID \
  {0x8624594a, 0x28d7, 0x4bc3, \
    { 0x8d, 0x12, 0xb1, 0xc2, 0xb9, 0xee, 0xfd, 0x90 }}

class NS_NO_VTABLE nsPIWindowWatcher : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_PIWINDOWWATCHER_IID)

  /* void addWindow (in nsIDOMWindow aWindow, in nsIWebBrowserChrome aChrome); */
  NS_IMETHOD AddWindow(nsIDOMWindow *aWindow, nsIWebBrowserChrome *aChrome) = 0;

  /* void removeWindow (in nsIDOMWindow aWindow); */
  NS_IMETHOD RemoveWindow(nsIDOMWindow *aWindow) = 0;

  /* nsIDOMWindow openWindowJS (in nsIDOMWindow aParent, in string aUrl, in string aName, in string aFeatures, in boolean aDialog, in nsIArray aArgs); */
  NS_IMETHOD OpenWindowJS(nsIDOMWindow *aParent, const char * aUrl, const char * aName, const char * aFeatures, PRBool aDialog, nsIArray *aArgs, nsIDOMWindow * *_retval NS_OUTPARAM) = 0;

  /* nsIDocShellTreeItem findItemWithName (in wstring aName, in nsIDocShellTreeItem aRequestor, in nsIDocShellTreeItem aOriginalRequestor); */
  NS_IMETHOD FindItemWithName(const PRUnichar * aName, nsIDocShellTreeItem *aRequestor, nsIDocShellTreeItem *aOriginalRequestor, nsIDocShellTreeItem * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsPIWindowWatcher, NS_PIWINDOWWATCHER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSPIWINDOWWATCHER \
  NS_IMETHOD AddWindow(nsIDOMWindow *aWindow, nsIWebBrowserChrome *aChrome); \
  NS_IMETHOD RemoveWindow(nsIDOMWindow *aWindow); \
  NS_IMETHOD OpenWindowJS(nsIDOMWindow *aParent, const char * aUrl, const char * aName, const char * aFeatures, PRBool aDialog, nsIArray *aArgs, nsIDOMWindow * *_retval NS_OUTPARAM); \
  NS_IMETHOD FindItemWithName(const PRUnichar * aName, nsIDocShellTreeItem *aRequestor, nsIDocShellTreeItem *aOriginalRequestor, nsIDocShellTreeItem * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSPIWINDOWWATCHER(_to) \
  NS_IMETHOD AddWindow(nsIDOMWindow *aWindow, nsIWebBrowserChrome *aChrome) { return _to AddWindow(aWindow, aChrome); } \
  NS_IMETHOD RemoveWindow(nsIDOMWindow *aWindow) { return _to RemoveWindow(aWindow); } \
  NS_IMETHOD OpenWindowJS(nsIDOMWindow *aParent, const char * aUrl, const char * aName, const char * aFeatures, PRBool aDialog, nsIArray *aArgs, nsIDOMWindow * *_retval NS_OUTPARAM) { return _to OpenWindowJS(aParent, aUrl, aName, aFeatures, aDialog, aArgs, _retval); } \
  NS_IMETHOD FindItemWithName(const PRUnichar * aName, nsIDocShellTreeItem *aRequestor, nsIDocShellTreeItem *aOriginalRequestor, nsIDocShellTreeItem * *_retval NS_OUTPARAM) { return _to FindItemWithName(aName, aRequestor, aOriginalRequestor, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSPIWINDOWWATCHER(_to) \
  NS_IMETHOD AddWindow(nsIDOMWindow *aWindow, nsIWebBrowserChrome *aChrome) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWindow(aWindow, aChrome); } \
  NS_IMETHOD RemoveWindow(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWindow(aWindow); } \
  NS_IMETHOD OpenWindowJS(nsIDOMWindow *aParent, const char * aUrl, const char * aName, const char * aFeatures, PRBool aDialog, nsIArray *aArgs, nsIDOMWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenWindowJS(aParent, aUrl, aName, aFeatures, aDialog, aArgs, _retval); } \
  NS_IMETHOD FindItemWithName(const PRUnichar * aName, nsIDocShellTreeItem *aRequestor, nsIDocShellTreeItem *aOriginalRequestor, nsIDocShellTreeItem * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindItemWithName(aName, aRequestor, aOriginalRequestor, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public nsPIWindowWatcher
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSPIWINDOWWATCHER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, nsPIWindowWatcher)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void addWindow (in nsIDOMWindow aWindow, in nsIWebBrowserChrome aChrome); */
NS_IMETHODIMP _MYCLASS_::AddWindow(nsIDOMWindow *aWindow, nsIWebBrowserChrome *aChrome)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeWindow (in nsIDOMWindow aWindow); */
NS_IMETHODIMP _MYCLASS_::RemoveWindow(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMWindow openWindowJS (in nsIDOMWindow aParent, in string aUrl, in string aName, in string aFeatures, in boolean aDialog, in nsIArray aArgs); */
NS_IMETHODIMP _MYCLASS_::OpenWindowJS(nsIDOMWindow *aParent, const char * aUrl, const char * aName, const char * aFeatures, PRBool aDialog, nsIArray *aArgs, nsIDOMWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDocShellTreeItem findItemWithName (in wstring aName, in nsIDocShellTreeItem aRequestor, in nsIDocShellTreeItem aOriginalRequestor); */
NS_IMETHODIMP _MYCLASS_::FindItemWithName(const PRUnichar * aName, nsIDocShellTreeItem *aRequestor, nsIDocShellTreeItem *aOriginalRequestor, nsIDocShellTreeItem * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsPIWindowWatcher_h__ */
