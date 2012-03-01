/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/alerts/nsIAlertsService.idl
 */

#ifndef __gen_nsIAlertsService_h__
#define __gen_nsIAlertsService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIObserver_h__
#include "nsIObserver.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAlertsService */
#define NS_IALERTSSERVICE_IID_STR "e177399e-2e31-4019-aed3-cba63ce9fa99"

#define NS_IALERTSSERVICE_IID \
  {0xe177399e, 0x2e31, 0x4019, \
    { 0xae, 0xd3, 0xcb, 0xa6, 0x3c, 0xe9, 0xfa, 0x99 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAlertsService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSSERVICE_IID)

  /* void showAlertNotification (in AString imageUrl, in AString title, in AString text, [optional] in boolean textClickable, [optional] in AString cookie, [optional] in nsIObserver alertListener, [optional] in AString name); */
  NS_SCRIPTABLE NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, PRBool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsService, NS_IALERTSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, PRBool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, PRBool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name) { return _to ShowAlertNotification(imageUrl, title, text, textClickable, cookie, alertListener, name); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, PRBool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowAlertNotification(imageUrl, title, text, textClickable, cookie, alertListener, name); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsService : public nsIAlertsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSSERVICE

  nsAlertsService();

private:
  ~nsAlertsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAlertsService, nsIAlertsService)

nsAlertsService::nsAlertsService()
{
  /* member initializers and constructor code */
}

nsAlertsService::~nsAlertsService()
{
  /* destructor code */
}

/* void showAlertNotification (in AString imageUrl, in AString title, in AString text, [optional] in boolean textClickable, [optional] in AString cookie, [optional] in nsIObserver alertListener, [optional] in AString name); */
NS_IMETHODIMP nsAlertsService::ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, PRBool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAlertsProgressListener */
#define NS_IALERTSPROGRESSLISTENER_IID_STR "df1bd4b0-3a8c-40e6-806a-203f38b0bd9f"

#define NS_IALERTSPROGRESSLISTENER_IID \
  {0xdf1bd4b0, 0x3a8c, 0x40e6, \
    { 0x80, 0x6a, 0x20, 0x3f, 0x38, 0xb0, 0xbd, 0x9f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAlertsProgressListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSPROGRESSLISTENER_IID)

  /* void onProgress (in AString name, in long long progress, in long long progressMax, [optional] in AString text); */
  NS_SCRIPTABLE NS_IMETHOD OnProgress(const nsAString & name, PRInt64 progress, PRInt64 progressMax, const nsAString & text) = 0;

  /* void onCancel (in AString name); */
  NS_SCRIPTABLE NS_IMETHOD OnCancel(const nsAString & name) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsProgressListener, NS_IALERTSPROGRESSLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSPROGRESSLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnProgress(const nsAString & name, PRInt64 progress, PRInt64 progressMax, const nsAString & text); \
  NS_SCRIPTABLE NS_IMETHOD OnCancel(const nsAString & name); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSPROGRESSLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnProgress(const nsAString & name, PRInt64 progress, PRInt64 progressMax, const nsAString & text) { return _to OnProgress(name, progress, progressMax, text); } \
  NS_SCRIPTABLE NS_IMETHOD OnCancel(const nsAString & name) { return _to OnCancel(name); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSPROGRESSLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnProgress(const nsAString & name, PRInt64 progress, PRInt64 progressMax, const nsAString & text) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnProgress(name, progress, progressMax, text); } \
  NS_SCRIPTABLE NS_IMETHOD OnCancel(const nsAString & name) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCancel(name); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsProgressListener : public nsIAlertsProgressListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSPROGRESSLISTENER

  nsAlertsProgressListener();

private:
  ~nsAlertsProgressListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAlertsProgressListener, nsIAlertsProgressListener)

nsAlertsProgressListener::nsAlertsProgressListener()
{
  /* member initializers and constructor code */
}

nsAlertsProgressListener::~nsAlertsProgressListener()
{
  /* destructor code */
}

/* void onProgress (in AString name, in long long progress, in long long progressMax, [optional] in AString text); */
NS_IMETHODIMP nsAlertsProgressListener::OnProgress(const nsAString & name, PRInt64 progress, PRInt64 progressMax, const nsAString & text)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onCancel (in AString name); */
NS_IMETHODIMP nsAlertsProgressListener::OnCancel(const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAlertsService_h__ */
