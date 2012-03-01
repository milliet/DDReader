/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/shistory/public/nsISHEntry.idl
 */

#ifndef __gen_nsISHEntry_h__
#define __gen_nsISHEntry_h__


#ifndef __gen_nsIHistoryEntry_h__
#include "nsIHistoryEntry.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsILayoutHistoryState; /* forward declaration */

class nsIContentViewer; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIDocShellTreeItem; /* forward declaration */

class nsISupportsArray; /* forward declaration */

class nsIStructuredCloneContainer; /* forward declaration */

class nsIBFCacheEntry; /* forward declaration */

struct nsIntRect;
class nsDocShellEditorData;
class nsSHEntryShared;

/* starting interface:    nsISHEntry */
#define NS_ISHENTRY_IID_STR "6443fd72-a50f-4b8b-bb82-bb1fa04cb15d"

#define NS_ISHENTRY_IID \
  {0x6443fd72, 0xa50f, 0x4b8b, \
    { 0xbb, 0x82, 0xbb, 0x1f, 0xa0, 0x4c, 0xb1, 0x5d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISHEntry : public nsIHistoryEntry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISHENTRY_IID)

  /* void setURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD SetURI(nsIURI *aURI) = 0;

  /* attribute nsIURI referrerURI; */
  NS_SCRIPTABLE NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) = 0;

  /* attribute nsIContentViewer contentViewer; */
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) = 0;

  /* attribute boolean sticky; */
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky) = 0;

  /* attribute nsISupports windowState; */
  NS_SCRIPTABLE NS_IMETHOD GetWindowState(nsISupports * *aWindowState) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWindowState(nsISupports *aWindowState) = 0;

  /* [noscript] void getViewerBounds (in nsIntRect bounds); */
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) = 0;

  /* [noscript] void setViewerBounds ([const] in nsIntRect bounds); */
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) = 0;

  /* void addChildShell (in nsIDocShellTreeItem shell); */
  NS_SCRIPTABLE NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) = 0;

  /* nsIDocShellTreeItem childShellAt (in long index); */
  NS_SCRIPTABLE NS_IMETHOD ChildShellAt(PRInt32 index, nsIDocShellTreeItem * *_retval NS_OUTPARAM) = 0;

  /* void clearChildShells (); */
  NS_SCRIPTABLE NS_IMETHOD ClearChildShells(void) = 0;

  /* attribute nsISupportsArray refreshURIList; */
  NS_SCRIPTABLE NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) = 0;

  /* void syncPresentationState (); */
  NS_SCRIPTABLE NS_IMETHOD SyncPresentationState(void) = 0;

  /* void setTitle (in AString aTitle); */
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle) = 0;

  /* attribute nsIInputStream postData; */
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPostData(nsIInputStream *aPostData) = 0;

  /* attribute nsILayoutHistoryState layoutHistoryState; */
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) = 0;

  /* attribute nsISHEntry parent; */
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsISHEntry * *aParent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetParent(nsISHEntry *aParent) = 0;

  /* attribute unsigned long loadType; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType) = 0;

  /* attribute unsigned long ID; */
  NS_SCRIPTABLE NS_IMETHOD GetID(PRUint32 *aID) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetID(PRUint32 aID) = 0;

  /* attribute nsISupports cacheKey; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) = 0;

  /* attribute boolean saveLayoutStateFlag; */
  NS_SCRIPTABLE NS_IMETHOD GetSaveLayoutStateFlag(PRBool *aSaveLayoutStateFlag) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSaveLayoutStateFlag(PRBool aSaveLayoutStateFlag) = 0;

  /* attribute boolean expirationStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetExpirationStatus(PRBool *aExpirationStatus) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExpirationStatus(PRBool aExpirationStatus) = 0;

  /* attribute ACString contentType; */
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType) = 0;

  /* attribute boolean URIWasModified; */
  NS_SCRIPTABLE NS_IMETHOD GetURIWasModified(PRBool *aURIWasModified) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetURIWasModified(PRBool aURIWasModified) = 0;

  /* void setScrollPosition (in long x, in long y); */
  NS_SCRIPTABLE NS_IMETHOD SetScrollPosition(PRInt32 x, PRInt32 y) = 0;

  /* void getScrollPosition (out long x, out long y); */
  NS_SCRIPTABLE NS_IMETHOD GetScrollPosition(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM) = 0;

  /* [noscript] void create (in nsIURI URI, in AString title, in nsIInputStream inputStream, in nsILayoutHistoryState layoutHistoryState, in nsISupports cacheKey, in ACString contentType, in nsISupports owner, in unsigned long long docshellID, in boolean dynamicCreation); */
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, PRUint64 docshellID, PRBool dynamicCreation) = 0;

  /* nsISHEntry clone (); */
  NS_SCRIPTABLE NS_IMETHOD Clone(nsISHEntry * *_retval NS_OUTPARAM) = 0;

  /* void setIsSubFrame (in boolean aFlag); */
  NS_SCRIPTABLE NS_IMETHOD SetIsSubFrame(PRBool aFlag) = 0;

  /* nsIContentViewer getAnyContentViewer (out nsISHEntry ownerEntry); */
  NS_SCRIPTABLE NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry NS_OUTPARAM, nsIContentViewer * *_retval NS_OUTPARAM) = 0;

  /* attribute nsISupports owner; */
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner) = 0;

  /* attribute nsIStructuredCloneContainer stateData; */
  NS_SCRIPTABLE NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) = 0;

  /* [noscript,notxpcom] nsDocShellEditorDataPtr forgetEditorData (); */
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) = 0;

  /* [noscript,notxpcom] void setEditorData (in nsDocShellEditorDataPtr aData); */
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) = 0;

  /* [noscript,notxpcom] boolean hasDetachedEditor (); */
  NS_IMETHOD_(PRBool) HasDetachedEditor(void) = 0;

  /* boolean isDynamicallyAdded (); */
  NS_SCRIPTABLE NS_IMETHOD IsDynamicallyAdded(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean hasDynamicallyAddedChild (); */
  NS_SCRIPTABLE NS_IMETHOD HasDynamicallyAddedChild(PRBool *_retval NS_OUTPARAM) = 0;

  /* attribute unsigned long long docshellID; */
  NS_SCRIPTABLE NS_IMETHOD GetDocshellID(PRUint64 *aDocshellID) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDocshellID(PRUint64 aDocshellID) = 0;

  /* readonly attribute nsIBFCacheEntry BFCacheEntry; */
  NS_SCRIPTABLE NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) = 0;

  /* [noscript,notxpcom] boolean hasBFCacheEntry (in nsIBFCacheEntry aEntry); */
  NS_IMETHOD_(PRBool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) = 0;

  /* void adoptBFCacheEntry (in nsISHEntry aEntry); */
  NS_SCRIPTABLE NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) = 0;

  /* void abandonBFCacheEntry (); */
  NS_SCRIPTABLE NS_IMETHOD AbandonBFCacheEntry(void) = 0;

  /* boolean sharesDocumentWith (in nsISHEntry aEntry); */
  NS_SCRIPTABLE NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISHEntry, NS_ISHENTRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISHENTRY \
  NS_SCRIPTABLE NS_IMETHOD SetURI(nsIURI *aURI); \
  NS_SCRIPTABLE NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI); \
  NS_SCRIPTABLE NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI); \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer); \
  NS_SCRIPTABLE NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer); \
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky); \
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky); \
  NS_SCRIPTABLE NS_IMETHOD GetWindowState(nsISupports * *aWindowState); \
  NS_SCRIPTABLE NS_IMETHOD SetWindowState(nsISupports *aWindowState); \
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds); \
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds); \
  NS_SCRIPTABLE NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell); \
  NS_SCRIPTABLE NS_IMETHOD ChildShellAt(PRInt32 index, nsIDocShellTreeItem * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ClearChildShells(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList); \
  NS_SCRIPTABLE NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList); \
  NS_SCRIPTABLE NS_IMETHOD SyncPresentationState(void); \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData); \
  NS_SCRIPTABLE NS_IMETHOD SetPostData(nsIInputStream *aPostData); \
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState); \
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState); \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsISHEntry * *aParent); \
  NS_SCRIPTABLE NS_IMETHOD SetParent(nsISHEntry *aParent); \
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType); \
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType); \
  NS_SCRIPTABLE NS_IMETHOD GetID(PRUint32 *aID); \
  NS_SCRIPTABLE NS_IMETHOD SetID(PRUint32 aID); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey); \
  NS_SCRIPTABLE NS_IMETHOD GetSaveLayoutStateFlag(PRBool *aSaveLayoutStateFlag); \
  NS_SCRIPTABLE NS_IMETHOD SetSaveLayoutStateFlag(PRBool aSaveLayoutStateFlag); \
  NS_SCRIPTABLE NS_IMETHOD GetExpirationStatus(PRBool *aExpirationStatus); \
  NS_SCRIPTABLE NS_IMETHOD SetExpirationStatus(PRBool aExpirationStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType); \
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetURIWasModified(PRBool *aURIWasModified); \
  NS_SCRIPTABLE NS_IMETHOD SetURIWasModified(PRBool aURIWasModified); \
  NS_SCRIPTABLE NS_IMETHOD SetScrollPosition(PRInt32 x, PRInt32 y); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollPosition(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM); \
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, PRUint64 docshellID, PRBool dynamicCreation); \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsISHEntry * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIsSubFrame(PRBool aFlag); \
  NS_SCRIPTABLE NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry NS_OUTPARAM, nsIContentViewer * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner); \
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner); \
  NS_SCRIPTABLE NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData); \
  NS_SCRIPTABLE NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData); \
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void); \
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData); \
  NS_IMETHOD_(PRBool) HasDetachedEditor(void); \
  NS_SCRIPTABLE NS_IMETHOD IsDynamicallyAdded(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasDynamicallyAddedChild(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDocshellID(PRUint64 *aDocshellID); \
  NS_SCRIPTABLE NS_IMETHOD SetDocshellID(PRUint64 aDocshellID); \
  NS_SCRIPTABLE NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry); \
  NS_IMETHOD_(PRBool) HasBFCacheEntry(nsIBFCacheEntry *aEntry); \
  NS_SCRIPTABLE NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry); \
  NS_SCRIPTABLE NS_IMETHOD AbandonBFCacheEntry(void); \
  NS_SCRIPTABLE NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISHENTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetURI(nsIURI *aURI) { return _to SetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) { return _to GetReferrerURI(aReferrerURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) { return _to SetReferrerURI(aReferrerURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) { return _to GetContentViewer(aContentViewer); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) { return _to SetContentViewer(aContentViewer); } \
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky) { return _to GetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky) { return _to SetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD GetWindowState(nsISupports * *aWindowState) { return _to GetWindowState(aWindowState); } \
  NS_SCRIPTABLE NS_IMETHOD SetWindowState(nsISupports *aWindowState) { return _to SetWindowState(aWindowState); } \
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) { return _to GetViewerBounds(bounds); } \
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) { return _to SetViewerBounds(bounds); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) { return _to AddChildShell(shell); } \
  NS_SCRIPTABLE NS_IMETHOD ChildShellAt(PRInt32 index, nsIDocShellTreeItem * *_retval NS_OUTPARAM) { return _to ChildShellAt(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearChildShells(void) { return _to ClearChildShells(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) { return _to GetRefreshURIList(aRefreshURIList); } \
  NS_SCRIPTABLE NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) { return _to SetRefreshURIList(aRefreshURIList); } \
  NS_SCRIPTABLE NS_IMETHOD SyncPresentationState(void) { return _to SyncPresentationState(); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle) { return _to SetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData) { return _to GetPostData(aPostData); } \
  NS_SCRIPTABLE NS_IMETHOD SetPostData(nsIInputStream *aPostData) { return _to SetPostData(aPostData); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) { return _to GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) { return _to SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsISHEntry * *aParent) { return _to GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD SetParent(nsISHEntry *aParent) { return _to SetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType) { return _to GetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType) { return _to SetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD GetID(PRUint32 *aID) { return _to GetID(aID); } \
  NS_SCRIPTABLE NS_IMETHOD SetID(PRUint32 aID) { return _to SetID(aID); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) { return _to GetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) { return _to SetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetSaveLayoutStateFlag(PRBool *aSaveLayoutStateFlag) { return _to GetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_SCRIPTABLE NS_IMETHOD SetSaveLayoutStateFlag(PRBool aSaveLayoutStateFlag) { return _to SetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_SCRIPTABLE NS_IMETHOD GetExpirationStatus(PRBool *aExpirationStatus) { return _to GetExpirationStatus(aExpirationStatus); } \
  NS_SCRIPTABLE NS_IMETHOD SetExpirationStatus(PRBool aExpirationStatus) { return _to SetExpirationStatus(aExpirationStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) { return _to GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType) { return _to SetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetURIWasModified(PRBool *aURIWasModified) { return _to GetURIWasModified(aURIWasModified); } \
  NS_SCRIPTABLE NS_IMETHOD SetURIWasModified(PRBool aURIWasModified) { return _to SetURIWasModified(aURIWasModified); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollPosition(PRInt32 x, PRInt32 y) { return _to SetScrollPosition(x, y); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollPosition(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM) { return _to GetScrollPosition(x, y); } \
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, PRUint64 docshellID, PRBool dynamicCreation) { return _to Create(URI, title, inputStream, layoutHistoryState, cacheKey, contentType, owner, docshellID, dynamicCreation); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsISHEntry * *_retval NS_OUTPARAM) { return _to Clone(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsSubFrame(PRBool aFlag) { return _to SetIsSubFrame(aFlag); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry NS_OUTPARAM, nsIContentViewer * *_retval NS_OUTPARAM) { return _to GetAnyContentViewer(ownerEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner) { return _to GetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner) { return _to SetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) { return _to GetStateData(aStateData); } \
  NS_SCRIPTABLE NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) { return _to SetStateData(aStateData); } \
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) { return _to ForgetEditorData(); } \
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) { return _to SetEditorData(aData); } \
  NS_IMETHOD_(PRBool) HasDetachedEditor(void) { return _to HasDetachedEditor(); } \
  NS_SCRIPTABLE NS_IMETHOD IsDynamicallyAdded(PRBool *_retval NS_OUTPARAM) { return _to IsDynamicallyAdded(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasDynamicallyAddedChild(PRBool *_retval NS_OUTPARAM) { return _to HasDynamicallyAddedChild(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocshellID(PRUint64 *aDocshellID) { return _to GetDocshellID(aDocshellID); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocshellID(PRUint64 aDocshellID) { return _to SetDocshellID(aDocshellID); } \
  NS_SCRIPTABLE NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) { return _to GetBFCacheEntry(aBFCacheEntry); } \
  NS_IMETHOD_(PRBool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) { return _to HasBFCacheEntry(aEntry); } \
  NS_SCRIPTABLE NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) { return _to AdoptBFCacheEntry(aEntry); } \
  NS_SCRIPTABLE NS_IMETHOD AbandonBFCacheEntry(void) { return _to AbandonBFCacheEntry(); } \
  NS_SCRIPTABLE NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, PRBool *_retval NS_OUTPARAM) { return _to SharesDocumentWith(aEntry, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISHENTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetURI(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferrerURI(nsIURI * *aReferrerURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrerURI(aReferrerURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetReferrerURI(nsIURI *aReferrerURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrerURI(aReferrerURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentViewer(aContentViewer); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentViewer(nsIContentViewer *aContentViewer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentViewer(aContentViewer); } \
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD GetWindowState(nsISupports * *aWindowState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowState(aWindowState); } \
  NS_SCRIPTABLE NS_IMETHOD SetWindowState(nsISupports *aWindowState) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindowState(aWindowState); } \
  NS_IMETHOD GetViewerBounds(nsIntRect & bounds) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViewerBounds(bounds); } \
  NS_IMETHOD SetViewerBounds(const nsIntRect & bounds) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetViewerBounds(bounds); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildShell(nsIDocShellTreeItem *shell) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChildShell(shell); } \
  NS_SCRIPTABLE NS_IMETHOD ChildShellAt(PRInt32 index, nsIDocShellTreeItem * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ChildShellAt(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearChildShells(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearChildShells(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRefreshURIList(nsISupportsArray * *aRefreshURIList) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRefreshURIList(aRefreshURIList); } \
  NS_SCRIPTABLE NS_IMETHOD SetRefreshURIList(nsISupportsArray *aRefreshURIList) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRefreshURIList(aRefreshURIList); } \
  NS_SCRIPTABLE NS_IMETHOD SyncPresentationState(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SyncPresentationState(); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPostData(aPostData); } \
  NS_SCRIPTABLE NS_IMETHOD SetPostData(nsIInputStream *aPostData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPostData(aPostData); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsISHEntry * *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD SetParent(nsISHEntry *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD GetID(PRUint32 *aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetID(aID); } \
  NS_SCRIPTABLE NS_IMETHOD SetID(PRUint32 aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetID(aID); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetSaveLayoutStateFlag(PRBool *aSaveLayoutStateFlag) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_SCRIPTABLE NS_IMETHOD SetSaveLayoutStateFlag(PRBool aSaveLayoutStateFlag) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSaveLayoutStateFlag(aSaveLayoutStateFlag); } \
  NS_SCRIPTABLE NS_IMETHOD GetExpirationStatus(PRBool *aExpirationStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpirationStatus(aExpirationStatus); } \
  NS_SCRIPTABLE NS_IMETHOD SetExpirationStatus(PRBool aExpirationStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExpirationStatus(aExpirationStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentType(const nsACString & aContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetURIWasModified(PRBool *aURIWasModified) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURIWasModified(aURIWasModified); } \
  NS_SCRIPTABLE NS_IMETHOD SetURIWasModified(PRBool aURIWasModified) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetURIWasModified(aURIWasModified); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollPosition(PRInt32 x, PRInt32 y) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScrollPosition(x, y); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollPosition(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollPosition(x, y); } \
  NS_IMETHOD Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, PRUint64 docshellID, PRBool dynamicCreation) { return !_to ? NS_ERROR_NULL_POINTER : _to->Create(URI, title, inputStream, layoutHistoryState, cacheKey, contentType, owner, docshellID, dynamicCreation); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsISHEntry * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsSubFrame(PRBool aFlag) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsSubFrame(aFlag); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnyContentViewer(nsISHEntry * *ownerEntry NS_OUTPARAM, nsIContentViewer * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnyContentViewer(ownerEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOwner(nsISupports * *aOwner) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD SetOwner(nsISupports *aOwner) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOwner(aOwner); } \
  NS_SCRIPTABLE NS_IMETHOD GetStateData(nsIStructuredCloneContainer * *aStateData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStateData(aStateData); } \
  NS_SCRIPTABLE NS_IMETHOD SetStateData(nsIStructuredCloneContainer *aStateData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStateData(aStateData); } \
  NS_IMETHOD_(nsDocShellEditorData *) ForgetEditorData(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForgetEditorData(); } \
  NS_IMETHOD_(void) SetEditorData(nsDocShellEditorData *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEditorData(aData); } \
  NS_IMETHOD_(PRBool) HasDetachedEditor(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasDetachedEditor(); } \
  NS_SCRIPTABLE NS_IMETHOD IsDynamicallyAdded(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDynamicallyAdded(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasDynamicallyAddedChild(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasDynamicallyAddedChild(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocshellID(PRUint64 *aDocshellID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocshellID(aDocshellID); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocshellID(PRUint64 aDocshellID) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocshellID(aDocshellID); } \
  NS_SCRIPTABLE NS_IMETHOD GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBFCacheEntry(aBFCacheEntry); } \
  NS_IMETHOD_(PRBool) HasBFCacheEntry(nsIBFCacheEntry *aEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasBFCacheEntry(aEntry); } \
  NS_SCRIPTABLE NS_IMETHOD AdoptBFCacheEntry(nsISHEntry *aEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->AdoptBFCacheEntry(aEntry); } \
  NS_SCRIPTABLE NS_IMETHOD AbandonBFCacheEntry(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AbandonBFCacheEntry(); } \
  NS_SCRIPTABLE NS_IMETHOD SharesDocumentWith(nsISHEntry *aEntry, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SharesDocumentWith(aEntry, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSHEntry : public nsISHEntry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISHENTRY

  nsSHEntry();

private:
  ~nsSHEntry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSHEntry, nsISHEntry)

nsSHEntry::nsSHEntry()
{
  /* member initializers and constructor code */
}

nsSHEntry::~nsSHEntry()
{
  /* destructor code */
}

/* void setURI (in nsIURI aURI); */
NS_IMETHODIMP nsSHEntry::SetURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI referrerURI; */
NS_IMETHODIMP nsSHEntry::GetReferrerURI(nsIURI * *aReferrerURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetReferrerURI(nsIURI *aReferrerURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIContentViewer contentViewer; */
NS_IMETHODIMP nsSHEntry::GetContentViewer(nsIContentViewer * *aContentViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetContentViewer(nsIContentViewer *aContentViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean sticky; */
NS_IMETHODIMP nsSHEntry::GetSticky(PRBool *aSticky)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetSticky(PRBool aSticky)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports windowState; */
NS_IMETHODIMP nsSHEntry::GetWindowState(nsISupports * *aWindowState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetWindowState(nsISupports *aWindowState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getViewerBounds (in nsIntRect bounds); */
NS_IMETHODIMP nsSHEntry::GetViewerBounds(nsIntRect & bounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setViewerBounds ([const] in nsIntRect bounds); */
NS_IMETHODIMP nsSHEntry::SetViewerBounds(const nsIntRect & bounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addChildShell (in nsIDocShellTreeItem shell); */
NS_IMETHODIMP nsSHEntry::AddChildShell(nsIDocShellTreeItem *shell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDocShellTreeItem childShellAt (in long index); */
NS_IMETHODIMP nsSHEntry::ChildShellAt(PRInt32 index, nsIDocShellTreeItem * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearChildShells (); */
NS_IMETHODIMP nsSHEntry::ClearChildShells()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupportsArray refreshURIList; */
NS_IMETHODIMP nsSHEntry::GetRefreshURIList(nsISupportsArray * *aRefreshURIList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetRefreshURIList(nsISupportsArray *aRefreshURIList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void syncPresentationState (); */
NS_IMETHODIMP nsSHEntry::SyncPresentationState()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTitle (in AString aTitle); */
NS_IMETHODIMP nsSHEntry::SetTitle(const nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInputStream postData; */
NS_IMETHODIMP nsSHEntry::GetPostData(nsIInputStream * *aPostData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetPostData(nsIInputStream *aPostData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILayoutHistoryState layoutHistoryState; */
NS_IMETHODIMP nsSHEntry::GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISHEntry parent; */
NS_IMETHODIMP nsSHEntry::GetParent(nsISHEntry * *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetParent(nsISHEntry *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long loadType; */
NS_IMETHODIMP nsSHEntry::GetLoadType(PRUint32 *aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetLoadType(PRUint32 aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long ID; */
NS_IMETHODIMP nsSHEntry::GetID(PRUint32 *aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetID(PRUint32 aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports cacheKey; */
NS_IMETHODIMP nsSHEntry::GetCacheKey(nsISupports * *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetCacheKey(nsISupports *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean saveLayoutStateFlag; */
NS_IMETHODIMP nsSHEntry::GetSaveLayoutStateFlag(PRBool *aSaveLayoutStateFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetSaveLayoutStateFlag(PRBool aSaveLayoutStateFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean expirationStatus; */
NS_IMETHODIMP nsSHEntry::GetExpirationStatus(PRBool *aExpirationStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetExpirationStatus(PRBool aExpirationStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString contentType; */
NS_IMETHODIMP nsSHEntry::GetContentType(nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetContentType(const nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean URIWasModified; */
NS_IMETHODIMP nsSHEntry::GetURIWasModified(PRBool *aURIWasModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetURIWasModified(PRBool aURIWasModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setScrollPosition (in long x, in long y); */
NS_IMETHODIMP nsSHEntry::SetScrollPosition(PRInt32 x, PRInt32 y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getScrollPosition (out long x, out long y); */
NS_IMETHODIMP nsSHEntry::GetScrollPosition(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void create (in nsIURI URI, in AString title, in nsIInputStream inputStream, in nsILayoutHistoryState layoutHistoryState, in nsISupports cacheKey, in ACString contentType, in nsISupports owner, in unsigned long long docshellID, in boolean dynamicCreation); */
NS_IMETHODIMP nsSHEntry::Create(nsIURI *URI, const nsAString & title, nsIInputStream *inputStream, nsILayoutHistoryState *layoutHistoryState, nsISupports *cacheKey, const nsACString & contentType, nsISupports *owner, PRUint64 docshellID, PRBool dynamicCreation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISHEntry clone (); */
NS_IMETHODIMP nsSHEntry::Clone(nsISHEntry * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setIsSubFrame (in boolean aFlag); */
NS_IMETHODIMP nsSHEntry::SetIsSubFrame(PRBool aFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIContentViewer getAnyContentViewer (out nsISHEntry ownerEntry); */
NS_IMETHODIMP nsSHEntry::GetAnyContentViewer(nsISHEntry * *ownerEntry NS_OUTPARAM, nsIContentViewer * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports owner; */
NS_IMETHODIMP nsSHEntry::GetOwner(nsISupports * *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetOwner(nsISupports *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIStructuredCloneContainer stateData; */
NS_IMETHODIMP nsSHEntry::GetStateData(nsIStructuredCloneContainer * *aStateData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetStateData(nsIStructuredCloneContainer *aStateData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsDocShellEditorDataPtr forgetEditorData (); */
NS_IMETHODIMP_(nsDocShellEditorData *) nsSHEntry::ForgetEditorData()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void setEditorData (in nsDocShellEditorDataPtr aData); */
NS_IMETHODIMP_(void) nsSHEntry::SetEditorData(nsDocShellEditorData *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] boolean hasDetachedEditor (); */
NS_IMETHODIMP_(PRBool) nsSHEntry::HasDetachedEditor()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isDynamicallyAdded (); */
NS_IMETHODIMP nsSHEntry::IsDynamicallyAdded(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasDynamicallyAddedChild (); */
NS_IMETHODIMP nsSHEntry::HasDynamicallyAddedChild(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long long docshellID; */
NS_IMETHODIMP nsSHEntry::GetDocshellID(PRUint64 *aDocshellID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntry::SetDocshellID(PRUint64 aDocshellID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIBFCacheEntry BFCacheEntry; */
NS_IMETHODIMP nsSHEntry::GetBFCacheEntry(nsIBFCacheEntry * *aBFCacheEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] boolean hasBFCacheEntry (in nsIBFCacheEntry aEntry); */
NS_IMETHODIMP_(PRBool) nsSHEntry::HasBFCacheEntry(nsIBFCacheEntry *aEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void adoptBFCacheEntry (in nsISHEntry aEntry); */
NS_IMETHODIMP nsSHEntry::AdoptBFCacheEntry(nsISHEntry *aEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abandonBFCacheEntry (); */
NS_IMETHODIMP nsSHEntry::AbandonBFCacheEntry()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean sharesDocumentWith (in nsISHEntry aEntry); */
NS_IMETHODIMP nsSHEntry::SharesDocumentWith(nsISHEntry *aEntry, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISHEntryInternal */
#define NS_ISHENTRYINTERNAL_IID_STR "bb66ac35-253b-471f-a317-3ece940f04c5"

#define NS_ISHENTRYINTERNAL_IID \
  {0xbb66ac35, 0x253b, 0x471f, \
    { 0xa3, 0x17, 0x3e, 0xce, 0x94, 0x0f, 0x04, 0xc5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISHEntryInternal : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISHENTRYINTERNAL_IID)

  /* [notxpcom] void RemoveFromBFCacheAsync (); */
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) = 0;

  /* [notxpcom] void RemoveFromBFCacheSync (); */
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) = 0;

  /* attribute unsigned long lastTouched; */
  NS_SCRIPTABLE NS_IMETHOD GetLastTouched(PRUint32 *aLastTouched) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLastTouched(PRUint32 aLastTouched) = 0;

  /* [noscript,notxpcom] nsSHEntryShared getSharedState (); */
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISHEntryInternal, NS_ISHENTRYINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISHENTRYINTERNAL \
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void); \
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void); \
  NS_SCRIPTABLE NS_IMETHOD GetLastTouched(PRUint32 *aLastTouched); \
  NS_SCRIPTABLE NS_IMETHOD SetLastTouched(PRUint32 aLastTouched); \
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISHENTRYINTERNAL(_to) \
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) { return _to RemoveFromBFCacheAsync(); } \
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) { return _to RemoveFromBFCacheSync(); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastTouched(PRUint32 *aLastTouched) { return _to GetLastTouched(aLastTouched); } \
  NS_SCRIPTABLE NS_IMETHOD SetLastTouched(PRUint32 aLastTouched) { return _to SetLastTouched(aLastTouched); } \
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) { return _to GetSharedState(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISHENTRYINTERNAL(_to) \
  NS_IMETHOD_(void) RemoveFromBFCacheAsync(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFromBFCacheAsync(); } \
  NS_IMETHOD_(void) RemoveFromBFCacheSync(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFromBFCacheSync(); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastTouched(PRUint32 *aLastTouched) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastTouched(aLastTouched); } \
  NS_SCRIPTABLE NS_IMETHOD SetLastTouched(PRUint32 aLastTouched) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLastTouched(aLastTouched); } \
  NS_IMETHOD_(nsSHEntryShared *) GetSharedState(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSharedState(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSHEntryInternal : public nsISHEntryInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISHENTRYINTERNAL

  nsSHEntryInternal();

private:
  ~nsSHEntryInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSHEntryInternal, nsISHEntryInternal)

nsSHEntryInternal::nsSHEntryInternal()
{
  /* member initializers and constructor code */
}

nsSHEntryInternal::~nsSHEntryInternal()
{
  /* destructor code */
}

/* [notxpcom] void RemoveFromBFCacheAsync (); */
NS_IMETHODIMP_(void) nsSHEntryInternal::RemoveFromBFCacheAsync()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void RemoveFromBFCacheSync (); */
NS_IMETHODIMP_(void) nsSHEntryInternal::RemoveFromBFCacheSync()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long lastTouched; */
NS_IMETHODIMP nsSHEntryInternal::GetLastTouched(PRUint32 *aLastTouched)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHEntryInternal::SetLastTouched(PRUint32 aLastTouched)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsSHEntryShared getSharedState (); */
NS_IMETHODIMP_(nsSHEntryShared *) nsSHEntryInternal::GetSharedState()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// {BFD1A791-AD9F-11d3-BDC7-0050040A9B44}
#define NS_SHENTRY_CID \
{0xbfd1a791, 0xad9f, 0x11d3, {0xbd, 0xc7, 0x0, 0x50, 0x4, 0xa, 0x9b, 0x44}}
#define NS_SHENTRY_CONTRACTID \
    "@mozilla.org/browser/session-history-entry;1"

#endif /* __gen_nsISHEntry_h__ */
