/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/shistory/public/nsISHistoryInternal.idl
 */

#ifndef __gen_nsISHistoryInternal_h__
#define __gen_nsISHistoryInternal_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIFactory_h__
#include "nsIFactory.h"
#endif

#ifndef __gen_nsISHEntry_h__
#include "nsISHEntry.h"
#endif

#ifndef __gen_nsISHTransaction_h__
#include "nsISHTransaction.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISHistoryListener; /* forward declaration */

class nsIDocShell; /* forward declaration */

#define NS_SHISTORY_INTERNAL_CID \
{ 0x9c47c121, 0x1c6e, 0x4d8f, \
  { 0xb9, 0x04, 0x3a, 0xc9, 0x68, 0x11, 0x6e, 0x88 } }
#define NS_SHISTORY_INTERNAL_CONTRACTID "@mozilla.org/browser/shistory-internal;1"
template<class E, class A> class nsTArray;
struct nsTArrayDefaultAllocator;

/* starting interface:    nsISHistoryInternal */
#define NS_ISHISTORYINTERNAL_IID_STR "e27cf38e-c19f-4294-bd31-d7e0916e7fa2"

#define NS_ISHISTORYINTERNAL_IID \
  {0xe27cf38e, 0xc19f, 0x4294, \
    { 0xbd, 0x31, 0xd7, 0xe0, 0x91, 0x6e, 0x7f, 0xa2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISHistoryInternal : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISHISTORYINTERNAL_IID)

  /* void addEntry (in nsISHEntry aEntry, in boolean aPersist); */
  NS_SCRIPTABLE NS_IMETHOD AddEntry(nsISHEntry *aEntry, PRBool aPersist) = 0;

  /* readonly attribute nsISHTransaction rootTransaction; */
  NS_SCRIPTABLE NS_IMETHOD GetRootTransaction(nsISHTransaction * *aRootTransaction) = 0;

  /* attribute nsIDocShell rootDocShell; */
  NS_SCRIPTABLE NS_IMETHOD GetRootDocShell(nsIDocShell * *aRootDocShell) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRootDocShell(nsIDocShell *aRootDocShell) = 0;

  /* void updateIndex (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateIndex(void) = 0;

  /* void replaceEntry (in long aIndex, in nsISHEntry aReplaceEntry); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceEntry(PRInt32 aIndex, nsISHEntry *aReplaceEntry) = 0;

  /* readonly attribute nsISHistoryListener listener; */
  NS_SCRIPTABLE NS_IMETHOD GetListener(nsISHistoryListener * *aListener) = 0;

  /* void evictOutOfRangeContentViewers (in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD EvictOutOfRangeContentViewers(PRInt32 aIndex) = 0;

  /* void evictExpiredContentViewerForEntry (in nsIBFCacheEntry aEntry); */
  NS_SCRIPTABLE NS_IMETHOD EvictExpiredContentViewerForEntry(nsIBFCacheEntry *aEntry) = 0;

  /* void evictAllContentViewers (); */
  NS_SCRIPTABLE NS_IMETHOD EvictAllContentViewers(void) = 0;

  /* [noscript,notxpcom] void RemoveEntries (in nsDocshellIDArray aIDs, in long aStartIndex); */
  NS_IMETHOD_(void) RemoveEntries(nsTArray<PRUint64, nsTArrayDefaultAllocator> & aIDs, PRInt32 aStartIndex) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISHistoryInternal, NS_ISHISTORYINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISHISTORYINTERNAL \
  NS_SCRIPTABLE NS_IMETHOD AddEntry(nsISHEntry *aEntry, PRBool aPersist); \
  NS_SCRIPTABLE NS_IMETHOD GetRootTransaction(nsISHTransaction * *aRootTransaction); \
  NS_SCRIPTABLE NS_IMETHOD GetRootDocShell(nsIDocShell * *aRootDocShell); \
  NS_SCRIPTABLE NS_IMETHOD SetRootDocShell(nsIDocShell *aRootDocShell); \
  NS_SCRIPTABLE NS_IMETHOD UpdateIndex(void); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceEntry(PRInt32 aIndex, nsISHEntry *aReplaceEntry); \
  NS_SCRIPTABLE NS_IMETHOD GetListener(nsISHistoryListener * *aListener); \
  NS_SCRIPTABLE NS_IMETHOD EvictOutOfRangeContentViewers(PRInt32 aIndex); \
  NS_SCRIPTABLE NS_IMETHOD EvictExpiredContentViewerForEntry(nsIBFCacheEntry *aEntry); \
  NS_SCRIPTABLE NS_IMETHOD EvictAllContentViewers(void); \
  NS_IMETHOD_(void) RemoveEntries(nsTArray<PRUint64, nsTArrayDefaultAllocator> & aIDs, PRInt32 aStartIndex); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISHISTORYINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEntry(nsISHEntry *aEntry, PRBool aPersist) { return _to AddEntry(aEntry, aPersist); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootTransaction(nsISHTransaction * *aRootTransaction) { return _to GetRootTransaction(aRootTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootDocShell(nsIDocShell * *aRootDocShell) { return _to GetRootDocShell(aRootDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD SetRootDocShell(nsIDocShell *aRootDocShell) { return _to SetRootDocShell(aRootDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateIndex(void) { return _to UpdateIndex(); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceEntry(PRInt32 aIndex, nsISHEntry *aReplaceEntry) { return _to ReplaceEntry(aIndex, aReplaceEntry); } \
  NS_SCRIPTABLE NS_IMETHOD GetListener(nsISHistoryListener * *aListener) { return _to GetListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD EvictOutOfRangeContentViewers(PRInt32 aIndex) { return _to EvictOutOfRangeContentViewers(aIndex); } \
  NS_SCRIPTABLE NS_IMETHOD EvictExpiredContentViewerForEntry(nsIBFCacheEntry *aEntry) { return _to EvictExpiredContentViewerForEntry(aEntry); } \
  NS_SCRIPTABLE NS_IMETHOD EvictAllContentViewers(void) { return _to EvictAllContentViewers(); } \
  NS_IMETHOD_(void) RemoveEntries(nsTArray<PRUint64, nsTArrayDefaultAllocator> & aIDs, PRInt32 aStartIndex) { return _to RemoveEntries(aIDs, aStartIndex); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISHISTORYINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEntry(nsISHEntry *aEntry, PRBool aPersist) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEntry(aEntry, aPersist); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootTransaction(nsISHTransaction * *aRootTransaction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootTransaction(aRootTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootDocShell(nsIDocShell * *aRootDocShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootDocShell(aRootDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD SetRootDocShell(nsIDocShell *aRootDocShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRootDocShell(aRootDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateIndex(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateIndex(); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceEntry(PRInt32 aIndex, nsISHEntry *aReplaceEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceEntry(aIndex, aReplaceEntry); } \
  NS_SCRIPTABLE NS_IMETHOD GetListener(nsISHistoryListener * *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD EvictOutOfRangeContentViewers(PRInt32 aIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->EvictOutOfRangeContentViewers(aIndex); } \
  NS_SCRIPTABLE NS_IMETHOD EvictExpiredContentViewerForEntry(nsIBFCacheEntry *aEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->EvictExpiredContentViewerForEntry(aEntry); } \
  NS_SCRIPTABLE NS_IMETHOD EvictAllContentViewers(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EvictAllContentViewers(); } \
  NS_IMETHOD_(void) RemoveEntries(nsTArray<PRUint64, nsTArrayDefaultAllocator> & aIDs, PRInt32 aStartIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveEntries(aIDs, aStartIndex); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSHistoryInternal : public nsISHistoryInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISHISTORYINTERNAL

  nsSHistoryInternal();

private:
  ~nsSHistoryInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSHistoryInternal, nsISHistoryInternal)

nsSHistoryInternal::nsSHistoryInternal()
{
  /* member initializers and constructor code */
}

nsSHistoryInternal::~nsSHistoryInternal()
{
  /* destructor code */
}

/* void addEntry (in nsISHEntry aEntry, in boolean aPersist); */
NS_IMETHODIMP nsSHistoryInternal::AddEntry(nsISHEntry *aEntry, PRBool aPersist)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISHTransaction rootTransaction; */
NS_IMETHODIMP nsSHistoryInternal::GetRootTransaction(nsISHTransaction * *aRootTransaction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDocShell rootDocShell; */
NS_IMETHODIMP nsSHistoryInternal::GetRootDocShell(nsIDocShell * *aRootDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSHistoryInternal::SetRootDocShell(nsIDocShell *aRootDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateIndex (); */
NS_IMETHODIMP nsSHistoryInternal::UpdateIndex()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceEntry (in long aIndex, in nsISHEntry aReplaceEntry); */
NS_IMETHODIMP nsSHistoryInternal::ReplaceEntry(PRInt32 aIndex, nsISHEntry *aReplaceEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISHistoryListener listener; */
NS_IMETHODIMP nsSHistoryInternal::GetListener(nsISHistoryListener * *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evictOutOfRangeContentViewers (in long aIndex); */
NS_IMETHODIMP nsSHistoryInternal::EvictOutOfRangeContentViewers(PRInt32 aIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evictExpiredContentViewerForEntry (in nsIBFCacheEntry aEntry); */
NS_IMETHODIMP nsSHistoryInternal::EvictExpiredContentViewerForEntry(nsIBFCacheEntry *aEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evictAllContentViewers (); */
NS_IMETHODIMP nsSHistoryInternal::EvictAllContentViewers()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void RemoveEntries (in nsDocshellIDArray aIDs, in long aStartIndex); */
NS_IMETHODIMP_(void) nsSHistoryInternal::RemoveEntries(nsTArray<PRUint64, nsTArrayDefaultAllocator> & aIDs, PRInt32 aStartIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISHistoryInternal_h__ */
