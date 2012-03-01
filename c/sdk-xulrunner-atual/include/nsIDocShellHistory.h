/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/base/nsIDocShellHistory.idl
 */

#ifndef __gen_nsIDocShellHistory_h__
#define __gen_nsIDocShellHistory_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISHEntry; /* forward declaration */


/* starting interface:    nsIDocShellHistory */
#define NS_IDOCSHELLHISTORY_IID_STR "077af5fd-7450-48db-8f03-16617d441141"

#define NS_IDOCSHELLHISTORY_IID \
  {0x077af5fd, 0x7450, 0x48db, \
    { 0x8f, 0x03, 0x16, 0x61, 0x7d, 0x44, 0x11, 0x41 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDocShellHistory : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOCSHELLHISTORY_IID)

  /* nsISHEntry getChildSHEntry (in long aChildOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetChildSHEntry(PRInt32 aChildOffset, nsISHEntry * *_retval NS_OUTPARAM) = 0;

  /* void addChildSHEntry (in nsISHEntry aCloneReference, in nsISHEntry aHistoryEntry, in long aChildOffset, in unsigned long aLoadType, in boolean aCloneChilden); */
  NS_SCRIPTABLE NS_IMETHOD AddChildSHEntry(nsISHEntry *aCloneReference, nsISHEntry *aHistoryEntry, PRInt32 aChildOffset, PRUint32 aLoadType, PRBool aCloneChilden) = 0;

  /* attribute boolean useGlobalHistory; */
  NS_SCRIPTABLE NS_IMETHOD GetUseGlobalHistory(PRBool *aUseGlobalHistory) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUseGlobalHistory(PRBool aUseGlobalHistory) = 0;

  /* void removeFromSessionHistory (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveFromSessionHistory(void) = 0;

  /* attribute boolean createdDynamically; */
  NS_SCRIPTABLE NS_IMETHOD GetCreatedDynamically(PRBool *aCreatedDynamically) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCreatedDynamically(PRBool aCreatedDynamically) = 0;

  /* boolean getCurrentSHEntry (out nsISHEntry aEntry); */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSHEntry(nsISHEntry * *aEntry NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDocShellHistory, NS_IDOCSHELLHISTORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCSHELLHISTORY \
  NS_SCRIPTABLE NS_IMETHOD GetChildSHEntry(PRInt32 aChildOffset, nsISHEntry * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddChildSHEntry(nsISHEntry *aCloneReference, nsISHEntry *aHistoryEntry, PRInt32 aChildOffset, PRUint32 aLoadType, PRBool aCloneChilden); \
  NS_SCRIPTABLE NS_IMETHOD GetUseGlobalHistory(PRBool *aUseGlobalHistory); \
  NS_SCRIPTABLE NS_IMETHOD SetUseGlobalHistory(PRBool aUseGlobalHistory); \
  NS_SCRIPTABLE NS_IMETHOD RemoveFromSessionHistory(void); \
  NS_SCRIPTABLE NS_IMETHOD GetCreatedDynamically(PRBool *aCreatedDynamically); \
  NS_SCRIPTABLE NS_IMETHOD SetCreatedDynamically(PRBool aCreatedDynamically); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSHEntry(nsISHEntry * *aEntry NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCSHELLHISTORY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChildSHEntry(PRInt32 aChildOffset, nsISHEntry * *_retval NS_OUTPARAM) { return _to GetChildSHEntry(aChildOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildSHEntry(nsISHEntry *aCloneReference, nsISHEntry *aHistoryEntry, PRInt32 aChildOffset, PRUint32 aLoadType, PRBool aCloneChilden) { return _to AddChildSHEntry(aCloneReference, aHistoryEntry, aChildOffset, aLoadType, aCloneChilden); } \
  NS_SCRIPTABLE NS_IMETHOD GetUseGlobalHistory(PRBool *aUseGlobalHistory) { return _to GetUseGlobalHistory(aUseGlobalHistory); } \
  NS_SCRIPTABLE NS_IMETHOD SetUseGlobalHistory(PRBool aUseGlobalHistory) { return _to SetUseGlobalHistory(aUseGlobalHistory); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFromSessionHistory(void) { return _to RemoveFromSessionHistory(); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreatedDynamically(PRBool *aCreatedDynamically) { return _to GetCreatedDynamically(aCreatedDynamically); } \
  NS_SCRIPTABLE NS_IMETHOD SetCreatedDynamically(PRBool aCreatedDynamically) { return _to SetCreatedDynamically(aCreatedDynamically); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSHEntry(nsISHEntry * *aEntry NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetCurrentSHEntry(aEntry, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCSHELLHISTORY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetChildSHEntry(PRInt32 aChildOffset, nsISHEntry * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildSHEntry(aChildOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildSHEntry(nsISHEntry *aCloneReference, nsISHEntry *aHistoryEntry, PRInt32 aChildOffset, PRUint32 aLoadType, PRBool aCloneChilden) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChildSHEntry(aCloneReference, aHistoryEntry, aChildOffset, aLoadType, aCloneChilden); } \
  NS_SCRIPTABLE NS_IMETHOD GetUseGlobalHistory(PRBool *aUseGlobalHistory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUseGlobalHistory(aUseGlobalHistory); } \
  NS_SCRIPTABLE NS_IMETHOD SetUseGlobalHistory(PRBool aUseGlobalHistory) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseGlobalHistory(aUseGlobalHistory); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFromSessionHistory(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFromSessionHistory(); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreatedDynamically(PRBool *aCreatedDynamically) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCreatedDynamically(aCreatedDynamically); } \
  NS_SCRIPTABLE NS_IMETHOD SetCreatedDynamically(PRBool aCreatedDynamically) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCreatedDynamically(aCreatedDynamically); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSHEntry(nsISHEntry * *aEntry NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentSHEntry(aEntry, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocShellHistory : public nsIDocShellHistory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCSHELLHISTORY

  nsDocShellHistory();

private:
  ~nsDocShellHistory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDocShellHistory, nsIDocShellHistory)

nsDocShellHistory::nsDocShellHistory()
{
  /* member initializers and constructor code */
}

nsDocShellHistory::~nsDocShellHistory()
{
  /* destructor code */
}

/* nsISHEntry getChildSHEntry (in long aChildOffset); */
NS_IMETHODIMP nsDocShellHistory::GetChildSHEntry(PRInt32 aChildOffset, nsISHEntry * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addChildSHEntry (in nsISHEntry aCloneReference, in nsISHEntry aHistoryEntry, in long aChildOffset, in unsigned long aLoadType, in boolean aCloneChilden); */
NS_IMETHODIMP nsDocShellHistory::AddChildSHEntry(nsISHEntry *aCloneReference, nsISHEntry *aHistoryEntry, PRInt32 aChildOffset, PRUint32 aLoadType, PRBool aCloneChilden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean useGlobalHistory; */
NS_IMETHODIMP nsDocShellHistory::GetUseGlobalHistory(PRBool *aUseGlobalHistory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellHistory::SetUseGlobalHistory(PRBool aUseGlobalHistory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFromSessionHistory (); */
NS_IMETHODIMP nsDocShellHistory::RemoveFromSessionHistory()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean createdDynamically; */
NS_IMETHODIMP nsDocShellHistory::GetCreatedDynamically(PRBool *aCreatedDynamically)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShellHistory::SetCreatedDynamically(PRBool aCreatedDynamically)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getCurrentSHEntry (out nsISHEntry aEntry); */
NS_IMETHODIMP nsDocShellHistory::GetCurrentSHEntry(nsISHEntry * *aEntry NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDocShellHistory_h__ */
