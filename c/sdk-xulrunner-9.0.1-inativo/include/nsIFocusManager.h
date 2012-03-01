/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIFocusManager.idl
 */

#ifndef __gen_nsIFocusManager_h__
#define __gen_nsIFocusManager_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocument; /* forward declaration */

class nsIContent; /* forward declaration */


/* starting interface:    nsIFocusManager */
#define NS_IFOCUSMANAGER_IID_STR "51db277b-7ee7-4bce-9b84-fd2efcd2c8bd"

#define NS_IFOCUSMANAGER_IID \
  {0x51db277b, 0x7ee7, 0x4bce, \
    { 0x9b, 0x84, 0xfd, 0x2e, 0xfc, 0xd2, 0xc8, 0xbd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFocusManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFOCUSMANAGER_IID)

  /* attribute nsIDOMWindow activeWindow; */
  NS_SCRIPTABLE NS_IMETHOD GetActiveWindow(nsIDOMWindow * *aActiveWindow) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetActiveWindow(nsIDOMWindow *aActiveWindow) = 0;

  /* attribute nsIDOMWindow focusedWindow; */
  NS_SCRIPTABLE NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) = 0;

  /* readonly attribute nsIDOMElement focusedElement; */
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) = 0;

  /* PRUint32 getLastFocusMethod (in nsIDOMWindow window); */
  NS_SCRIPTABLE NS_IMETHOD GetLastFocusMethod(nsIDOMWindow *window, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* void setFocus (in nsIDOMElement aElement, in unsigned long aFlags); */
  NS_SCRIPTABLE NS_IMETHOD SetFocus(nsIDOMElement *aElement, PRUint32 aFlags) = 0;

  /* nsIDOMElement moveFocus (in nsIDOMWindow aWindow, in nsIDOMElement aStartElement, in unsigned long aType, in unsigned long aFlags); */
  NS_SCRIPTABLE NS_IMETHOD MoveFocus(nsIDOMWindow *aWindow, nsIDOMElement *aStartElement, PRUint32 aType, PRUint32 aFlags, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* void clearFocus (in nsIDOMWindow aWindow); */
  NS_SCRIPTABLE NS_IMETHOD ClearFocus(nsIDOMWindow *aWindow) = 0;

  /* nsIDOMElement getFocusedElementForWindow (in nsIDOMWindow aWindow, in boolean aDeep, out nsIDOMWindow aFocusedWindow); */
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElementForWindow(nsIDOMWindow *aWindow, PRBool aDeep, nsIDOMWindow * *aFocusedWindow NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* void moveCaretToFocus (in nsIDOMWindow aWindow); */
  NS_SCRIPTABLE NS_IMETHOD MoveCaretToFocus(nsIDOMWindow *aWindow) = 0;

  enum { FLAG_RAISE = 1U };

  enum { FLAG_NOSCROLL = 2U };

  enum { FLAG_NOSWITCHFRAME = 4U };

  enum { FLAG_BYMOUSE = 4096U };

  enum { FLAG_BYKEY = 8192U };

  enum { FLAG_BYMOVEFOCUS = 16384U };

  enum { FLAG_SHOWRING = 1048576U };

  enum { MOVEFOCUS_FORWARD = 1U };

  enum { MOVEFOCUS_BACKWARD = 2U };

  enum { MOVEFOCUS_FORWARDDOC = 3U };

  enum { MOVEFOCUS_BACKWARDDOC = 4U };

  enum { MOVEFOCUS_FIRST = 5U };

  enum { MOVEFOCUS_LAST = 6U };

  enum { MOVEFOCUS_ROOT = 7U };

  enum { MOVEFOCUS_CARET = 8U };

  /* [noscript] void windowRaised (in nsIDOMWindow aWindow); */
  NS_IMETHOD WindowRaised(nsIDOMWindow *aWindow) = 0;

  /* [noscript] void windowLowered (in nsIDOMWindow aWindow); */
  NS_IMETHOD WindowLowered(nsIDOMWindow *aWindow) = 0;

  /* [noscript] void windowShown (in nsIDOMWindow aWindow, in boolean aNeedsFocus); */
  NS_IMETHOD WindowShown(nsIDOMWindow *aWindow, PRBool aNeedsFocus) = 0;

  /* [noscript] void windowHidden (in nsIDOMWindow aWindow); */
  NS_IMETHOD WindowHidden(nsIDOMWindow *aWindow) = 0;

  /* [noscript] void fireDelayedEvents (in nsIDocument aDocument); */
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) = 0;

  /* [noscript] void focusPlugin (in nsIContent aPlugin); */
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFocusManager, NS_IFOCUSMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFOCUSMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetActiveWindow(nsIDOMWindow * *aActiveWindow); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveWindow(nsIDOMWindow *aActiveWindow); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow); \
  NS_SCRIPTABLE NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement); \
  NS_SCRIPTABLE NS_IMETHOD GetLastFocusMethod(nsIDOMWindow *window, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFocus(nsIDOMElement *aElement, PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD MoveFocus(nsIDOMWindow *aWindow, nsIDOMElement *aStartElement, PRUint32 aType, PRUint32 aFlags, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ClearFocus(nsIDOMWindow *aWindow); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElementForWindow(nsIDOMWindow *aWindow, PRBool aDeep, nsIDOMWindow * *aFocusedWindow NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MoveCaretToFocus(nsIDOMWindow *aWindow); \
  NS_IMETHOD WindowRaised(nsIDOMWindow *aWindow); \
  NS_IMETHOD WindowLowered(nsIDOMWindow *aWindow); \
  NS_IMETHOD WindowShown(nsIDOMWindow *aWindow, PRBool aNeedsFocus); \
  NS_IMETHOD WindowHidden(nsIDOMWindow *aWindow); \
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument); \
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFOCUSMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetActiveWindow(nsIDOMWindow * *aActiveWindow) { return _to GetActiveWindow(aActiveWindow); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveWindow(nsIDOMWindow *aActiveWindow) { return _to SetActiveWindow(aActiveWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) { return _to GetFocusedWindow(aFocusedWindow); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) { return _to SetFocusedWindow(aFocusedWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) { return _to GetFocusedElement(aFocusedElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastFocusMethod(nsIDOMWindow *window, PRUint32 *_retval NS_OUTPARAM) { return _to GetLastFocusMethod(window, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocus(nsIDOMElement *aElement, PRUint32 aFlags) { return _to SetFocus(aElement, aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD MoveFocus(nsIDOMWindow *aWindow, nsIDOMElement *aStartElement, PRUint32 aType, PRUint32 aFlags, nsIDOMElement * *_retval NS_OUTPARAM) { return _to MoveFocus(aWindow, aStartElement, aType, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearFocus(nsIDOMWindow *aWindow) { return _to ClearFocus(aWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElementForWindow(nsIDOMWindow *aWindow, PRBool aDeep, nsIDOMWindow * *aFocusedWindow NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetFocusedElementForWindow(aWindow, aDeep, aFocusedWindow, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveCaretToFocus(nsIDOMWindow *aWindow) { return _to MoveCaretToFocus(aWindow); } \
  NS_IMETHOD WindowRaised(nsIDOMWindow *aWindow) { return _to WindowRaised(aWindow); } \
  NS_IMETHOD WindowLowered(nsIDOMWindow *aWindow) { return _to WindowLowered(aWindow); } \
  NS_IMETHOD WindowShown(nsIDOMWindow *aWindow, PRBool aNeedsFocus) { return _to WindowShown(aWindow, aNeedsFocus); } \
  NS_IMETHOD WindowHidden(nsIDOMWindow *aWindow) { return _to WindowHidden(aWindow); } \
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) { return _to FireDelayedEvents(aDocument); } \
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) { return _to FocusPlugin(aPlugin); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFOCUSMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetActiveWindow(nsIDOMWindow * *aActiveWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveWindow(aActiveWindow); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveWindow(nsIDOMWindow *aActiveWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveWindow(aActiveWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedWindow(nsIDOMWindow * *aFocusedWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedWindow(aFocusedWindow); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocusedWindow(nsIDOMWindow *aFocusedWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusedWindow(aFocusedWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedElement(aFocusedElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastFocusMethod(nsIDOMWindow *window, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastFocusMethod(window, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocus(nsIDOMElement *aElement, PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocus(aElement, aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD MoveFocus(nsIDOMWindow *aWindow, nsIDOMElement *aStartElement, PRUint32 aType, PRUint32 aFlags, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveFocus(aWindow, aStartElement, aType, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearFocus(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearFocus(aWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedElementForWindow(nsIDOMWindow *aWindow, PRBool aDeep, nsIDOMWindow * *aFocusedWindow NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedElementForWindow(aWindow, aDeep, aFocusedWindow, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MoveCaretToFocus(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveCaretToFocus(aWindow); } \
  NS_IMETHOD WindowRaised(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowRaised(aWindow); } \
  NS_IMETHOD WindowLowered(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowLowered(aWindow); } \
  NS_IMETHOD WindowShown(nsIDOMWindow *aWindow, PRBool aNeedsFocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowShown(aWindow, aNeedsFocus); } \
  NS_IMETHOD WindowHidden(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowHidden(aWindow); } \
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->FireDelayedEvents(aDocument); } \
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) { return !_to ? NS_ERROR_NULL_POINTER : _to->FocusPlugin(aPlugin); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFocusManager : public nsIFocusManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFOCUSMANAGER

  nsFocusManager();

private:
  ~nsFocusManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFocusManager, nsIFocusManager)

nsFocusManager::nsFocusManager()
{
  /* member initializers and constructor code */
}

nsFocusManager::~nsFocusManager()
{
  /* destructor code */
}

/* attribute nsIDOMWindow activeWindow; */
NS_IMETHODIMP nsFocusManager::GetActiveWindow(nsIDOMWindow * *aActiveWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFocusManager::SetActiveWindow(nsIDOMWindow *aActiveWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMWindow focusedWindow; */
NS_IMETHODIMP nsFocusManager::GetFocusedWindow(nsIDOMWindow * *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFocusManager::SetFocusedWindow(nsIDOMWindow *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement focusedElement; */
NS_IMETHODIMP nsFocusManager::GetFocusedElement(nsIDOMElement * *aFocusedElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 getLastFocusMethod (in nsIDOMWindow window); */
NS_IMETHODIMP nsFocusManager::GetLastFocusMethod(nsIDOMWindow *window, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFocus (in nsIDOMElement aElement, in unsigned long aFlags); */
NS_IMETHODIMP nsFocusManager::SetFocus(nsIDOMElement *aElement, PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement moveFocus (in nsIDOMWindow aWindow, in nsIDOMElement aStartElement, in unsigned long aType, in unsigned long aFlags); */
NS_IMETHODIMP nsFocusManager::MoveFocus(nsIDOMWindow *aWindow, nsIDOMElement *aStartElement, PRUint32 aType, PRUint32 aFlags, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearFocus (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsFocusManager::ClearFocus(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getFocusedElementForWindow (in nsIDOMWindow aWindow, in boolean aDeep, out nsIDOMWindow aFocusedWindow); */
NS_IMETHODIMP nsFocusManager::GetFocusedElementForWindow(nsIDOMWindow *aWindow, PRBool aDeep, nsIDOMWindow * *aFocusedWindow NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveCaretToFocus (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsFocusManager::MoveCaretToFocus(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowRaised (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsFocusManager::WindowRaised(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowLowered (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsFocusManager::WindowLowered(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowShown (in nsIDOMWindow aWindow, in boolean aNeedsFocus); */
NS_IMETHODIMP nsFocusManager::WindowShown(nsIDOMWindow *aWindow, PRBool aNeedsFocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowHidden (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsFocusManager::WindowHidden(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void fireDelayedEvents (in nsIDocument aDocument); */
NS_IMETHODIMP nsFocusManager::FireDelayedEvents(nsIDocument *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void focusPlugin (in nsIContent aPlugin); */
NS_IMETHODIMP nsFocusManager::FocusPlugin(nsIContent *aPlugin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFocusManager_h__ */
