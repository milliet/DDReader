/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/startup/public/nsIAppStartup.idl
 */

#ifndef __gen_nsIAppStartup_h__
#define __gen_nsIAppStartup_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICmdLineService; /* forward declaration */


/* starting interface:    nsIAppStartup */
#define NS_IAPPSTARTUP_IID_STR "35fcdb69-3bb6-4484-b99a-32f49a84fabd"

#define NS_IAPPSTARTUP_IID \
  {0x35fcdb69, 0x3bb6, 0x4484, \
    { 0xb9, 0x9a, 0x32, 0xf4, 0x9a, 0x84, 0xfa, 0xbd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAppStartup : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPSTARTUP_IID)

  /* void createHiddenWindow (); */
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void) = 0;

  /* void destroyHiddenWindow (); */
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void) = 0;

  /* void run (); */
  NS_SCRIPTABLE NS_IMETHOD Run(void) = 0;

  /* void enterLastWindowClosingSurvivalArea (); */
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void) = 0;

  /* void exitLastWindowClosingSurvivalArea (); */
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void) = 0;

  enum { eConsiderQuit = 1U };

  enum { eAttemptQuit = 2U };

  enum { eForceQuit = 3U };

  enum { eRestart = 16U };

  enum { eRestarti386 = 32U };

  enum { eRestartx86_64 = 64U };

  /* void quit (in PRUint32 aMode); */
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode) = 0;

  /* readonly attribute boolean shuttingDown; */
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(PRBool *aShuttingDown) = 0;

  /* void getStartupInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(void) = 0;

  /* attribute boolean interrupted; */
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(PRBool *aInterrupted) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(PRBool aInterrupted) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAppStartup, NS_IAPPSTARTUP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPSTARTUP \
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD Run(void); \
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void); \
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void); \
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode); \
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(PRBool *aShuttingDown); \
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(void); \
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(PRBool *aInterrupted); \
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(PRBool aInterrupted); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPSTARTUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void) { return _to CreateHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void) { return _to DestroyHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD Run(void) { return _to Run(); } \
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void) { return _to EnterLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void) { return _to ExitLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode) { return _to Quit(aMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(PRBool *aShuttingDown) { return _to GetShuttingDown(aShuttingDown); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(void) { return _to GetStartupInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(PRBool *aInterrupted) { return _to GetInterrupted(aInterrupted); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(PRBool aInterrupted) { return _to SetInterrupted(aInterrupted); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPSTARTUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD Run(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Run(); } \
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->Quit(aMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(PRBool *aShuttingDown) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShuttingDown(aShuttingDown); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartupInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(PRBool *aInterrupted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterrupted(aInterrupted); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(PRBool aInterrupted) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterrupted(aInterrupted); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAppStartup : public nsIAppStartup
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPSTARTUP

  nsAppStartup();

private:
  ~nsAppStartup();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAppStartup, nsIAppStartup)

nsAppStartup::nsAppStartup()
{
  /* member initializers and constructor code */
}

nsAppStartup::~nsAppStartup()
{
  /* destructor code */
}

/* void createHiddenWindow (); */
NS_IMETHODIMP nsAppStartup::CreateHiddenWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroyHiddenWindow (); */
NS_IMETHODIMP nsAppStartup::DestroyHiddenWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void run (); */
NS_IMETHODIMP nsAppStartup::Run()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enterLastWindowClosingSurvivalArea (); */
NS_IMETHODIMP nsAppStartup::EnterLastWindowClosingSurvivalArea()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exitLastWindowClosingSurvivalArea (); */
NS_IMETHODIMP nsAppStartup::ExitLastWindowClosingSurvivalArea()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void quit (in PRUint32 aMode); */
NS_IMETHODIMP nsAppStartup::Quit(PRUint32 aMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean shuttingDown; */
NS_IMETHODIMP nsAppStartup::GetShuttingDown(PRBool *aShuttingDown)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getStartupInfo (); */
NS_IMETHODIMP nsAppStartup::GetStartupInfo()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean interrupted; */
NS_IMETHODIMP nsAppStartup::GetInterrupted(PRBool *aInterrupted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAppStartup::SetInterrupted(PRBool aInterrupted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * This success code may be returned by nsIAppStartup::Run to indicate that the
 * application should be restarted.  This condition corresponds to the case in
 * which nsIAppStartup::Quit was called with the eRestart flag.
 */
#define NS_SUCCESS_RESTART_APP \
    NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_GENERAL, 1)

#endif /* __gen_nsIAppStartup_h__ */
