/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsIWinTaskbar.idl
 */

#ifndef __gen_nsIWinTaskbar_h__
#define __gen_nsIWinTaskbar_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIBaseWindow_h__
#include "nsIBaseWindow.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocShell; /* forward declaration */

class nsITaskbarTabPreview; /* forward declaration */

class nsITaskbarWindowPreview; /* forward declaration */

class nsITaskbarPreviewController; /* forward declaration */

class nsITaskbarProgress; /* forward declaration */

class nsIJumpListBuilder; /* forward declaration */

class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIWinTaskbar */
#define NS_IWINTASKBAR_IID_STR "9fc572db-1089-4d43-9121-f4833d77a2df"

#define NS_IWINTASKBAR_IID \
  {0x9fc572db, 0x1089, 0x4d43, \
    { 0x91, 0x21, 0xf4, 0x83, 0x3d, 0x77, 0xa2, 0xdf }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWinTaskbar : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWINTASKBAR_IID)

  /* readonly attribute boolean available; */
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRBool *aAvailable) = 0;

  /* readonly attribute AString defaultGroupId; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultGroupId(nsAString & aDefaultGroupId) = 0;

  /* nsITaskbarTabPreview createTaskbarTabPreview (in nsIDocShell shell, in nsITaskbarPreviewController controller); */
  NS_SCRIPTABLE NS_IMETHOD CreateTaskbarTabPreview(nsIDocShell *shell, nsITaskbarPreviewController *controller, nsITaskbarTabPreview * *_retval NS_OUTPARAM) = 0;

  /* nsITaskbarWindowPreview getTaskbarWindowPreview (in nsIDocShell shell); */
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarWindowPreview(nsIDocShell *shell, nsITaskbarWindowPreview * *_retval NS_OUTPARAM) = 0;

  /* nsITaskbarProgress getTaskbarProgress (in nsIDocShell shell); */
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarProgress(nsIDocShell *shell, nsITaskbarProgress * *_retval NS_OUTPARAM) = 0;

  /* nsIJumpListBuilder createJumpListBuilder (); */
  NS_SCRIPTABLE NS_IMETHOD CreateJumpListBuilder(nsIJumpListBuilder * *_retval NS_OUTPARAM) = 0;

  /* void setGroupIdForWindow (in nsIDOMWindow aParent, in AString aIdentifier); */
  NS_SCRIPTABLE NS_IMETHOD SetGroupIdForWindow(nsIDOMWindow *aParent, const nsAString & aIdentifier) = 0;

  /* void prepareFullScreen (in nsIDOMWindow aWindow, in boolean aFullScreen); */
  NS_SCRIPTABLE NS_IMETHOD PrepareFullScreen(nsIDOMWindow *aWindow, PRBool aFullScreen) = 0;

  /* [noscript] void prepareFullScreenHWND (in voidPtr aWindow, in boolean aFullScreen); */
  NS_IMETHOD PrepareFullScreenHWND(void *aWindow, PRBool aFullScreen) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWinTaskbar, NS_IWINTASKBAR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWINTASKBAR \
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRBool *aAvailable); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultGroupId(nsAString & aDefaultGroupId); \
  NS_SCRIPTABLE NS_IMETHOD CreateTaskbarTabPreview(nsIDocShell *shell, nsITaskbarPreviewController *controller, nsITaskbarTabPreview * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarWindowPreview(nsIDocShell *shell, nsITaskbarWindowPreview * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarProgress(nsIDocShell *shell, nsITaskbarProgress * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateJumpListBuilder(nsIJumpListBuilder * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGroupIdForWindow(nsIDOMWindow *aParent, const nsAString & aIdentifier); \
  NS_SCRIPTABLE NS_IMETHOD PrepareFullScreen(nsIDOMWindow *aWindow, PRBool aFullScreen); \
  NS_IMETHOD PrepareFullScreenHWND(void *aWindow, PRBool aFullScreen); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWINTASKBAR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRBool *aAvailable) { return _to GetAvailable(aAvailable); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultGroupId(nsAString & aDefaultGroupId) { return _to GetDefaultGroupId(aDefaultGroupId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTaskbarTabPreview(nsIDocShell *shell, nsITaskbarPreviewController *controller, nsITaskbarTabPreview * *_retval NS_OUTPARAM) { return _to CreateTaskbarTabPreview(shell, controller, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarWindowPreview(nsIDocShell *shell, nsITaskbarWindowPreview * *_retval NS_OUTPARAM) { return _to GetTaskbarWindowPreview(shell, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarProgress(nsIDocShell *shell, nsITaskbarProgress * *_retval NS_OUTPARAM) { return _to GetTaskbarProgress(shell, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateJumpListBuilder(nsIJumpListBuilder * *_retval NS_OUTPARAM) { return _to CreateJumpListBuilder(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetGroupIdForWindow(nsIDOMWindow *aParent, const nsAString & aIdentifier) { return _to SetGroupIdForWindow(aParent, aIdentifier); } \
  NS_SCRIPTABLE NS_IMETHOD PrepareFullScreen(nsIDOMWindow *aWindow, PRBool aFullScreen) { return _to PrepareFullScreen(aWindow, aFullScreen); } \
  NS_IMETHOD PrepareFullScreenHWND(void *aWindow, PRBool aFullScreen) { return _to PrepareFullScreenHWND(aWindow, aFullScreen); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWINTASKBAR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRBool *aAvailable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailable(aAvailable); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultGroupId(nsAString & aDefaultGroupId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultGroupId(aDefaultGroupId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTaskbarTabPreview(nsIDocShell *shell, nsITaskbarPreviewController *controller, nsITaskbarTabPreview * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateTaskbarTabPreview(shell, controller, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarWindowPreview(nsIDocShell *shell, nsITaskbarWindowPreview * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTaskbarWindowPreview(shell, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTaskbarProgress(nsIDocShell *shell, nsITaskbarProgress * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTaskbarProgress(shell, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateJumpListBuilder(nsIJumpListBuilder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateJumpListBuilder(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetGroupIdForWindow(nsIDOMWindow *aParent, const nsAString & aIdentifier) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGroupIdForWindow(aParent, aIdentifier); } \
  NS_SCRIPTABLE NS_IMETHOD PrepareFullScreen(nsIDOMWindow *aWindow, PRBool aFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrepareFullScreen(aWindow, aFullScreen); } \
  NS_IMETHOD PrepareFullScreenHWND(void *aWindow, PRBool aFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrepareFullScreenHWND(aWindow, aFullScreen); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWinTaskbar : public nsIWinTaskbar
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWINTASKBAR

  nsWinTaskbar();

private:
  ~nsWinTaskbar();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWinTaskbar, nsIWinTaskbar)

nsWinTaskbar::nsWinTaskbar()
{
  /* member initializers and constructor code */
}

nsWinTaskbar::~nsWinTaskbar()
{
  /* destructor code */
}

/* readonly attribute boolean available; */
NS_IMETHODIMP nsWinTaskbar::GetAvailable(PRBool *aAvailable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString defaultGroupId; */
NS_IMETHODIMP nsWinTaskbar::GetDefaultGroupId(nsAString & aDefaultGroupId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITaskbarTabPreview createTaskbarTabPreview (in nsIDocShell shell, in nsITaskbarPreviewController controller); */
NS_IMETHODIMP nsWinTaskbar::CreateTaskbarTabPreview(nsIDocShell *shell, nsITaskbarPreviewController *controller, nsITaskbarTabPreview * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITaskbarWindowPreview getTaskbarWindowPreview (in nsIDocShell shell); */
NS_IMETHODIMP nsWinTaskbar::GetTaskbarWindowPreview(nsIDocShell *shell, nsITaskbarWindowPreview * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITaskbarProgress getTaskbarProgress (in nsIDocShell shell); */
NS_IMETHODIMP nsWinTaskbar::GetTaskbarProgress(nsIDocShell *shell, nsITaskbarProgress * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIJumpListBuilder createJumpListBuilder (); */
NS_IMETHODIMP nsWinTaskbar::CreateJumpListBuilder(nsIJumpListBuilder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setGroupIdForWindow (in nsIDOMWindow aParent, in AString aIdentifier); */
NS_IMETHODIMP nsWinTaskbar::SetGroupIdForWindow(nsIDOMWindow *aParent, const nsAString & aIdentifier)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void prepareFullScreen (in nsIDOMWindow aWindow, in boolean aFullScreen); */
NS_IMETHODIMP nsWinTaskbar::PrepareFullScreen(nsIDOMWindow *aWindow, PRBool aFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void prepareFullScreenHWND (in voidPtr aWindow, in boolean aFullScreen); */
NS_IMETHODIMP nsWinTaskbar::PrepareFullScreenHWND(void *aWindow, PRBool aFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWinTaskbar_h__ */
