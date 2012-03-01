/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIFrameMessageManager.idl
 */

#ifndef __gen_nsIFrameMessageManager_h__
#define __gen_nsIFrameMessageManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */

class nsIDocShell; /* forward declaration */

class nsIContent; /* forward declaration */


/* starting interface:    nsIFrameMessageListener */
#define NS_IFRAMEMESSAGELISTENER_IID_STR "938fcb95-3d63-46be-aa72-94d08fd3b418"

#define NS_IFRAMEMESSAGELISTENER_IID \
  {0x938fcb95, 0x3d63, 0x46be, \
    { 0xaa, 0x72, 0x94, 0xd0, 0x8f, 0xd3, 0xb4, 0x18 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFrameMessageListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMEMESSAGELISTENER_IID)

  /* void receiveMessage (); */
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameMessageListener, NS_IFRAMEMESSAGELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMEMESSAGELISTENER \
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMEMESSAGELISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void) { return _to ReceiveMessage(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMEMESSAGELISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReceiveMessage(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReceiveMessage(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameMessageListener : public nsIFrameMessageListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMEMESSAGELISTENER

  nsFrameMessageListener();

private:
  ~nsFrameMessageListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFrameMessageListener, nsIFrameMessageListener)

nsFrameMessageListener::nsFrameMessageListener()
{
  /* member initializers and constructor code */
}

nsFrameMessageListener::~nsFrameMessageListener()
{
  /* destructor code */
}

/* void receiveMessage (); */
NS_IMETHODIMP nsFrameMessageListener::ReceiveMessage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFrameMessageManager */
#define NS_IFRAMEMESSAGEMANAGER_IID_STR "6b736edb-863d-40bd-bca2-62f44da803c0"

#define NS_IFRAMEMESSAGEMANAGER_IID \
  {0x6b736edb, 0x863d, 0x40bd, \
    { 0xbc, 0xa2, 0x62, 0xf4, 0x4d, 0xa8, 0x03, 0xc0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFrameMessageManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMEMESSAGEMANAGER_IID)

  /* void addMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) = 0;

  /* void removeMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) = 0;

  /* void sendAsyncMessage (); */
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameMessageManager, NS_IFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return _to AddMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return _to RemoveMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(void) { return _to SendAsyncMessage(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveMessageListener(aMessage, aListener); } \
  NS_SCRIPTABLE NS_IMETHOD SendAsyncMessage(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendAsyncMessage(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameMessageManager : public nsIFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMEMESSAGEMANAGER

  nsFrameMessageManager();

private:
  ~nsFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFrameMessageManager, nsIFrameMessageManager)

nsFrameMessageManager::nsFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsFrameMessageManager::~nsFrameMessageManager()
{
  /* destructor code */
}

/* void addMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
NS_IMETHODIMP nsFrameMessageManager::AddMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeMessageListener (in AString aMessage, in nsIFrameMessageListener aListener); */
NS_IMETHODIMP nsFrameMessageManager::RemoveMessageListener(const nsAString & aMessage, nsIFrameMessageListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendAsyncMessage (); */
NS_IMETHODIMP nsFrameMessageManager::SendAsyncMessage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISyncMessageSender */
#define NS_ISYNCMESSAGESENDER_IID_STR "cdb1a40b-9862-426c-ae8a-f5ab84e20e32"

#define NS_ISYNCMESSAGESENDER_IID \
  {0xcdb1a40b, 0x9862, 0x426c, \
    { 0xae, 0x8a, 0xf5, 0xab, 0x84, 0xe2, 0x0e, 0x32 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISyncMessageSender : public nsIFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISYNCMESSAGESENDER_IID)

  /* void sendSyncMessage (); */
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISyncMessageSender, NS_ISYNCMESSAGESENDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISYNCMESSAGESENDER \
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISYNCMESSAGESENDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(void) { return _to SendSyncMessage(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISYNCMESSAGESENDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SendSyncMessage(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendSyncMessage(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSyncMessageSender : public nsISyncMessageSender
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISYNCMESSAGESENDER

  nsSyncMessageSender();

private:
  ~nsSyncMessageSender();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSyncMessageSender, nsISyncMessageSender)

nsSyncMessageSender::nsSyncMessageSender()
{
  /* member initializers and constructor code */
}

nsSyncMessageSender::~nsSyncMessageSender()
{
  /* destructor code */
}

/* void sendSyncMessage (); */
NS_IMETHODIMP nsSyncMessageSender::SendSyncMessage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIContentFrameMessageManager */
#define NS_ICONTENTFRAMEMESSAGEMANAGER_IID_STR "6f23339f-2b5c-4f22-a03f-bb7ec101f83d"

#define NS_ICONTENTFRAMEMESSAGEMANAGER_IID \
  {0x6f23339f, 0x2b5c, 0x4f22, \
    { 0xa0, 0x3f, 0xbb, 0x7e, 0xc1, 0x01, 0xf8, 0x3d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentFrameMessageManager : public nsISyncMessageSender {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTFRAMEMESSAGEMANAGER_IID)

  /* readonly attribute nsIDOMWindow content; */
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) = 0;

  /* readonly attribute nsIDocShell docShell; */
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) = 0;

  /* void dump (in DOMString aStr); */
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr) = 0;

  /* void privateNoteIntentionalCrash (); */
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void) = 0;

  /* DOMString atob (in DOMString aAsciiString); */
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) = 0;

  /* DOMString btoa (in DOMString aBase64Data); */
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentFrameMessageManager, NS_ICONTENTFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent); \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell); \
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr); \
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void); \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) { return _to GetContent(aContent); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return _to GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr) { return _to Dump(aStr); } \
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void) { return _to PrivateNoteIntentionalCrash(); } \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) { return _to Atob(aAsciiString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) { return _to Btoa(aBase64Data, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContent(aContent); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD Dump(const nsAString & aStr) { return !_to ? NS_ERROR_NULL_POINTER : _to->Dump(aStr); } \
  NS_SCRIPTABLE NS_IMETHOD PrivateNoteIntentionalCrash(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrivateNoteIntentionalCrash(); } \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Atob(aAsciiString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Btoa(aBase64Data, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentFrameMessageManager : public nsIContentFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTFRAMEMESSAGEMANAGER

  nsContentFrameMessageManager();

private:
  ~nsContentFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentFrameMessageManager, nsIContentFrameMessageManager)

nsContentFrameMessageManager::nsContentFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsContentFrameMessageManager::~nsContentFrameMessageManager()
{
  /* destructor code */
}

/* readonly attribute nsIDOMWindow content; */
NS_IMETHODIMP nsContentFrameMessageManager::GetContent(nsIDOMWindow * *aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDocShell docShell; */
NS_IMETHODIMP nsContentFrameMessageManager::GetDocShell(nsIDocShell * *aDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void dump (in DOMString aStr); */
NS_IMETHODIMP nsContentFrameMessageManager::Dump(const nsAString & aStr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void privateNoteIntentionalCrash (); */
NS_IMETHODIMP nsContentFrameMessageManager::PrivateNoteIntentionalCrash()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString atob (in DOMString aAsciiString); */
NS_IMETHODIMP nsContentFrameMessageManager::Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString btoa (in DOMString aBase64Data); */
NS_IMETHODIMP nsContentFrameMessageManager::Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIInProcessContentFrameMessageManager */
#define NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID_STR "9c48d557-92fe-4edb-95fc-bfe97e77bdc3"

#define NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID \
  {0x9c48d557, 0x92fe, 0x4edb, \
    { 0x95, 0xfc, 0xbf, 0xe9, 0x7e, 0x77, 0xbd, 0xc3 }}

class NS_NO_VTABLE nsIInProcessContentFrameMessageManager : public nsIContentFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID)

  /* [notxpcom] nsIContent getOwnerContent (); */
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIInProcessContentFrameMessageManager, NS_IINPROCESSCONTENTFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER \
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void) { return _to GetOwnerContent(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER(_to) \
  NS_IMETHOD_(nsIContent *) GetOwnerContent(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerContent(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsInProcessContentFrameMessageManager : public nsIInProcessContentFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINPROCESSCONTENTFRAMEMESSAGEMANAGER

  nsInProcessContentFrameMessageManager();

private:
  ~nsInProcessContentFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsInProcessContentFrameMessageManager, nsIInProcessContentFrameMessageManager)

nsInProcessContentFrameMessageManager::nsInProcessContentFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsInProcessContentFrameMessageManager::~nsInProcessContentFrameMessageManager()
{
  /* destructor code */
}

/* [notxpcom] nsIContent getOwnerContent (); */
NS_IMETHODIMP_(nsIContent *) nsInProcessContentFrameMessageManager::GetOwnerContent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITreeItemFrameMessageManager */
#define NS_ITREEITEMFRAMEMESSAGEMANAGER_IID_STR "6331bbca-2c9f-4766-b3c7-ae75554bf1ec"

#define NS_ITREEITEMFRAMEMESSAGEMANAGER_IID \
  {0x6331bbca, 0x2c9f, 0x4766, \
    { 0xb3, 0xc7, 0xae, 0x75, 0x55, 0x4b, 0xf1, 0xec }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITreeItemFrameMessageManager : public nsIFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITREEITEMFRAMEMESSAGEMANAGER_IID)

  /* readonly attribute unsigned long childCount; */
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) = 0;

  /* nsITreeItemFrameMessageManager getChildAt (in unsigned long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITreeItemFrameMessageManager, NS_ITREEITEMFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITREEITEMFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount); \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITREEITEMFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) { return _to GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM) { return _to GetChildAt(aIndex, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITREEITEMFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildAt(aIndex, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTreeItemFrameMessageManager : public nsITreeItemFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITREEITEMFRAMEMESSAGEMANAGER

  nsTreeItemFrameMessageManager();

private:
  ~nsTreeItemFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTreeItemFrameMessageManager, nsITreeItemFrameMessageManager)

nsTreeItemFrameMessageManager::nsTreeItemFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsTreeItemFrameMessageManager::~nsTreeItemFrameMessageManager()
{
  /* destructor code */
}

/* readonly attribute unsigned long childCount; */
NS_IMETHODIMP nsTreeItemFrameMessageManager::GetChildCount(PRUint32 *aChildCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITreeItemFrameMessageManager getChildAt (in unsigned long aIndex); */
NS_IMETHODIMP nsTreeItemFrameMessageManager::GetChildAt(PRUint32 aIndex, nsITreeItemFrameMessageManager * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIChromeFrameMessageManager */
#define NS_ICHROMEFRAMEMESSAGEMANAGER_IID_STR "9e5c0526-aa4c-49f0-afbb-57f489cd9b59"

#define NS_ICHROMEFRAMEMESSAGEMANAGER_IID \
  {0x9e5c0526, 0xaa4c, 0x49f0, \
    { 0xaf, 0xbb, 0x57, 0xf4, 0x89, 0xcd, 0x9b, 0x59 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIChromeFrameMessageManager : public nsITreeItemFrameMessageManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICHROMEFRAMEMESSAGEMANAGER_IID)

  /* void loadFrameScript (in AString aURL, in boolean aAllowDelayedLoad); */
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, PRBool aAllowDelayedLoad) = 0;

  /* void removeDelayedFrameScript (in AString aURL); */
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIChromeFrameMessageManager, NS_ICHROMEFRAMEMESSAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICHROMEFRAMEMESSAGEMANAGER \
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, PRBool aAllowDelayedLoad); \
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICHROMEFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, PRBool aAllowDelayedLoad) { return _to LoadFrameScript(aURL, aAllowDelayedLoad); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL) { return _to RemoveDelayedFrameScript(aURL); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICHROMEFRAMEMESSAGEMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD LoadFrameScript(const nsAString & aURL, PRBool aAllowDelayedLoad) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadFrameScript(aURL, aAllowDelayedLoad); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDelayedFrameScript(const nsAString & aURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDelayedFrameScript(aURL); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsChromeFrameMessageManager : public nsIChromeFrameMessageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHROMEFRAMEMESSAGEMANAGER

  nsChromeFrameMessageManager();

private:
  ~nsChromeFrameMessageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsChromeFrameMessageManager, nsIChromeFrameMessageManager)

nsChromeFrameMessageManager::nsChromeFrameMessageManager()
{
  /* member initializers and constructor code */
}

nsChromeFrameMessageManager::~nsChromeFrameMessageManager()
{
  /* destructor code */
}

/* void loadFrameScript (in AString aURL, in boolean aAllowDelayedLoad); */
NS_IMETHODIMP nsChromeFrameMessageManager::LoadFrameScript(const nsAString & aURL, PRBool aAllowDelayedLoad)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDelayedFrameScript (in AString aURL); */
NS_IMETHODIMP nsChromeFrameMessageManager::RemoveDelayedFrameScript(const nsAString & aURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFrameMessageManager_h__ */
