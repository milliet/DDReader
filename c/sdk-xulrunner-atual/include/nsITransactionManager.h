/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/txmgr/idl/nsITransactionManager.idl
 */

#ifndef __gen_nsITransactionManager_h__
#define __gen_nsITransactionManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsITransaction_h__
#include "nsITransaction.h"
#endif

#ifndef __gen_nsITransactionList_h__
#include "nsITransactionList.h"
#endif

#ifndef __gen_nsITransactionListener_h__
#include "nsITransactionListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#define NS_TRANSACTIONMANAGER_CONTRACTID "@mozilla.org/transactionmanager;1"

/* starting interface:    nsITransactionManager */
#define NS_ITRANSACTIONMANAGER_IID_STR "58e330c2-7b48-11d2-98b9-00805f297d89"

#define NS_ITRANSACTIONMANAGER_IID \
  {0x58e330c2, 0x7b48, 0x11d2, \
    { 0x98, 0xb9, 0x00, 0x80, 0x5f, 0x29, 0x7d, 0x89 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITransactionManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITRANSACTIONMANAGER_IID)

  /* void doTransaction (in nsITransaction aTransaction); */
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *aTransaction) = 0;

  /* void undoTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD UndoTransaction(void) = 0;

  /* void redoTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD RedoTransaction(void) = 0;

  /* void clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(void) = 0;

  /* void beginBatch (); */
  NS_SCRIPTABLE NS_IMETHOD BeginBatch(void) = 0;

  /* void endBatch (); */
  NS_SCRIPTABLE NS_IMETHOD EndBatch(void) = 0;

  /* readonly attribute long numberOfUndoItems; */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfUndoItems(PRInt32 *aNumberOfUndoItems) = 0;

  /* readonly attribute long numberOfRedoItems; */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfRedoItems(PRInt32 *aNumberOfRedoItems) = 0;

  /* attribute long maxTransactionCount; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxTransactionCount(PRInt32 *aMaxTransactionCount) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxTransactionCount(PRInt32 aMaxTransactionCount) = 0;

  /* nsITransaction peekUndoStack (); */
  NS_SCRIPTABLE NS_IMETHOD PeekUndoStack(nsITransaction * *_retval NS_OUTPARAM) = 0;

  /* nsITransaction peekRedoStack (); */
  NS_SCRIPTABLE NS_IMETHOD PeekRedoStack(nsITransaction * *_retval NS_OUTPARAM) = 0;

  /* nsITransactionList getUndoList (); */
  NS_SCRIPTABLE NS_IMETHOD GetUndoList(nsITransactionList * *_retval NS_OUTPARAM) = 0;

  /* nsITransactionList getRedoList (); */
  NS_SCRIPTABLE NS_IMETHOD GetRedoList(nsITransactionList * *_retval NS_OUTPARAM) = 0;

  /* void AddListener (in nsITransactionListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsITransactionListener *aListener) = 0;

  /* void RemoveListener (in nsITransactionListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsITransactionListener *aListener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITransactionManager, NS_ITRANSACTIONMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITRANSACTIONMANAGER \
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *aTransaction); \
  NS_SCRIPTABLE NS_IMETHOD UndoTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD RedoTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD Clear(void); \
  NS_SCRIPTABLE NS_IMETHOD BeginBatch(void); \
  NS_SCRIPTABLE NS_IMETHOD EndBatch(void); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfUndoItems(PRInt32 *aNumberOfUndoItems); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfRedoItems(PRInt32 *aNumberOfRedoItems); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTransactionCount(PRInt32 *aMaxTransactionCount); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxTransactionCount(PRInt32 aMaxTransactionCount); \
  NS_SCRIPTABLE NS_IMETHOD PeekUndoStack(nsITransaction * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PeekRedoStack(nsITransaction * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUndoList(nsITransactionList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRedoList(nsITransactionList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsITransactionListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsITransactionListener *aListener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITRANSACTIONMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *aTransaction) { return _to DoTransaction(aTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD UndoTransaction(void) { return _to UndoTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD RedoTransaction(void) { return _to RedoTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return _to Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginBatch(void) { return _to BeginBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD EndBatch(void) { return _to EndBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfUndoItems(PRInt32 *aNumberOfUndoItems) { return _to GetNumberOfUndoItems(aNumberOfUndoItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfRedoItems(PRInt32 *aNumberOfRedoItems) { return _to GetNumberOfRedoItems(aNumberOfRedoItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTransactionCount(PRInt32 *aMaxTransactionCount) { return _to GetMaxTransactionCount(aMaxTransactionCount); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxTransactionCount(PRInt32 aMaxTransactionCount) { return _to SetMaxTransactionCount(aMaxTransactionCount); } \
  NS_SCRIPTABLE NS_IMETHOD PeekUndoStack(nsITransaction * *_retval NS_OUTPARAM) { return _to PeekUndoStack(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD PeekRedoStack(nsITransaction * *_retval NS_OUTPARAM) { return _to PeekRedoStack(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUndoList(nsITransactionList * *_retval NS_OUTPARAM) { return _to GetUndoList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedoList(nsITransactionList * *_retval NS_OUTPARAM) { return _to GetRedoList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsITransactionListener *aListener) { return _to AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsITransactionListener *aListener) { return _to RemoveListener(aListener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITRANSACTIONMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *aTransaction) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoTransaction(aTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD UndoTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->UndoTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD RedoTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RedoTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginBatch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD EndBatch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfUndoItems(PRInt32 *aNumberOfUndoItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfUndoItems(aNumberOfUndoItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfRedoItems(PRInt32 *aNumberOfRedoItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfRedoItems(aNumberOfRedoItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTransactionCount(PRInt32 *aMaxTransactionCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxTransactionCount(aMaxTransactionCount); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxTransactionCount(PRInt32 aMaxTransactionCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxTransactionCount(aMaxTransactionCount); } \
  NS_SCRIPTABLE NS_IMETHOD PeekUndoStack(nsITransaction * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PeekUndoStack(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD PeekRedoStack(nsITransaction * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PeekRedoStack(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUndoList(nsITransactionList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUndoList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedoList(nsITransactionList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedoList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsITransactionListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsITransactionListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(aListener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTransactionManager : public nsITransactionManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITRANSACTIONMANAGER

  nsTransactionManager();

private:
  ~nsTransactionManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTransactionManager, nsITransactionManager)

nsTransactionManager::nsTransactionManager()
{
  /* member initializers and constructor code */
}

nsTransactionManager::~nsTransactionManager()
{
  /* destructor code */
}

/* void doTransaction (in nsITransaction aTransaction); */
NS_IMETHODIMP nsTransactionManager::DoTransaction(nsITransaction *aTransaction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void undoTransaction (); */
NS_IMETHODIMP nsTransactionManager::UndoTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void redoTransaction (); */
NS_IMETHODIMP nsTransactionManager::RedoTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clear (); */
NS_IMETHODIMP nsTransactionManager::Clear()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginBatch (); */
NS_IMETHODIMP nsTransactionManager::BeginBatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endBatch (); */
NS_IMETHODIMP nsTransactionManager::EndBatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long numberOfUndoItems; */
NS_IMETHODIMP nsTransactionManager::GetNumberOfUndoItems(PRInt32 *aNumberOfUndoItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long numberOfRedoItems; */
NS_IMETHODIMP nsTransactionManager::GetNumberOfRedoItems(PRInt32 *aNumberOfRedoItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxTransactionCount; */
NS_IMETHODIMP nsTransactionManager::GetMaxTransactionCount(PRInt32 *aMaxTransactionCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTransactionManager::SetMaxTransactionCount(PRInt32 aMaxTransactionCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITransaction peekUndoStack (); */
NS_IMETHODIMP nsTransactionManager::PeekUndoStack(nsITransaction * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITransaction peekRedoStack (); */
NS_IMETHODIMP nsTransactionManager::PeekRedoStack(nsITransaction * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITransactionList getUndoList (); */
NS_IMETHODIMP nsTransactionManager::GetUndoList(nsITransactionList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITransactionList getRedoList (); */
NS_IMETHODIMP nsTransactionManager::GetRedoList(nsITransactionList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void AddListener (in nsITransactionListener aListener); */
NS_IMETHODIMP nsTransactionManager::AddListener(nsITransactionListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RemoveListener (in nsITransactionListener aListener); */
NS_IMETHODIMP nsTransactionManager::RemoveListener(nsITransactionListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITransactionManager_h__ */
