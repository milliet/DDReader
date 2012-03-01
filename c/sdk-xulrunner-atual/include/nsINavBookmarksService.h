/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/nsINavBookmarksService.idl
 */

#ifndef __gen_nsINavBookmarksService_h__
#define __gen_nsINavBookmarksService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class nsIURI; /* forward declaration */

class nsITransaction; /* forward declaration */

class nsINavHistoryBatchCallback; /* forward declaration */


/* starting interface:    nsINavBookmarkObserver */
#define NS_INAVBOOKMARKOBSERVER_IID_STR "2fb820a9-9331-4c02-ae41-32a82a4b7aa1"

#define NS_INAVBOOKMARKOBSERVER_IID \
  {0x2fb820a9, 0x9331, 0x4c02, \
    { 0xae, 0x41, 0x32, 0xa8, 0x2a, 0x4b, 0x7a, 0xa1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavBookmarkObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVBOOKMARKOBSERVER_IID)

  /* void onBeginUpdateBatch (); */
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void) = 0;

  /* void onEndUpdateBatch (); */
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void) = 0;

  /* void onItemAdded (in long long aItemId, in long long aParentId, in long aIndex, in unsigned short aItemType, in nsIURI aURI, in AUTF8String aTitle, in PRTime aDateAdded, in ACString aGUID, in ACString aParentGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnItemAdded(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aTitle, PRTime aDateAdded, const nsACString & aGUID, const nsACString & aParentGUID) = 0;

  /* void onBeforeItemRemoved (in long long aItemId, in unsigned short aItemType, in long long aParentId, in ACString aGUID, in ACString aParentGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnBeforeItemRemoved(PRInt64 aItemId, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) = 0;

  /* void onItemRemoved (in long long aItemId, in long long aParentId, in long aIndex, in unsigned short aItemType, in nsIURI aURI, in ACString aGUID, in ACString aParentGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnItemRemoved(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aGUID, const nsACString & aParentGUID) = 0;

  /* void onItemChanged (in long long aItemId, in ACString aProperty, in boolean aIsAnnotationProperty, in AUTF8String aNewValue, in PRTime aLastModified, in unsigned short aItemType, in long long aParentId, in ACString aGUID, in ACString aParentGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnItemChanged(PRInt64 aItemId, const nsACString & aProperty, PRBool aIsAnnotationProperty, const nsACString & aNewValue, PRTime aLastModified, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) = 0;

  /* void onItemVisited (in long long aItemId, in long long aVisitId, in PRTime aTime, in unsigned long aTransitionType, in nsIURI aURI, in long long aParentId, in ACString aGUID, in ACString aParentGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnItemVisited(PRInt64 aItemId, PRInt64 aVisitId, PRTime aTime, PRUint32 aTransitionType, nsIURI *aURI, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) = 0;

  /* void onItemMoved (in long long aItemId, in long long aOldParentId, in long aOldIndex, in long long aNewParentId, in long aNewIndex, in unsigned short aItemType, in ACString aGUID, in ACString aOldParentGUID, in ACString aNewParentGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnItemMoved(PRInt64 aItemId, PRInt64 aOldParentId, PRInt32 aOldIndex, PRInt64 aNewParentId, PRInt32 aNewIndex, PRUint16 aItemType, const nsACString & aGUID, const nsACString & aOldParentGUID, const nsACString & aNewParentGUID) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavBookmarkObserver, NS_INAVBOOKMARKOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVBOOKMARKOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void); \
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void); \
  NS_SCRIPTABLE NS_IMETHOD OnItemAdded(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aTitle, PRTime aDateAdded, const nsACString & aGUID, const nsACString & aParentGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnBeforeItemRemoved(PRInt64 aItemId, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnItemRemoved(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aGUID, const nsACString & aParentGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnItemChanged(PRInt64 aItemId, const nsACString & aProperty, PRBool aIsAnnotationProperty, const nsACString & aNewValue, PRTime aLastModified, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnItemVisited(PRInt64 aItemId, PRInt64 aVisitId, PRTime aTime, PRUint32 aTransitionType, nsIURI *aURI, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnItemMoved(PRInt64 aItemId, PRInt64 aOldParentId, PRInt32 aOldIndex, PRInt64 aNewParentId, PRInt32 aNewIndex, PRUint16 aItemType, const nsACString & aGUID, const nsACString & aOldParentGUID, const nsACString & aNewParentGUID); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVBOOKMARKOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void) { return _to OnBeginUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void) { return _to OnEndUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemAdded(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aTitle, PRTime aDateAdded, const nsACString & aGUID, const nsACString & aParentGUID) { return _to OnItemAdded(aItemId, aParentId, aIndex, aItemType, aURI, aTitle, aDateAdded, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnBeforeItemRemoved(PRInt64 aItemId, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) { return _to OnBeforeItemRemoved(aItemId, aItemType, aParentId, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemRemoved(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aGUID, const nsACString & aParentGUID) { return _to OnItemRemoved(aItemId, aParentId, aIndex, aItemType, aURI, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemChanged(PRInt64 aItemId, const nsACString & aProperty, PRBool aIsAnnotationProperty, const nsACString & aNewValue, PRTime aLastModified, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) { return _to OnItemChanged(aItemId, aProperty, aIsAnnotationProperty, aNewValue, aLastModified, aItemType, aParentId, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemVisited(PRInt64 aItemId, PRInt64 aVisitId, PRTime aTime, PRUint32 aTransitionType, nsIURI *aURI, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) { return _to OnItemVisited(aItemId, aVisitId, aTime, aTransitionType, aURI, aParentId, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemMoved(PRInt64 aItemId, PRInt64 aOldParentId, PRInt32 aOldIndex, PRInt64 aNewParentId, PRInt32 aNewIndex, PRUint16 aItemType, const nsACString & aGUID, const nsACString & aOldParentGUID, const nsACString & aNewParentGUID) { return _to OnItemMoved(aItemId, aOldParentId, aOldIndex, aNewParentId, aNewIndex, aItemType, aGUID, aOldParentGUID, aNewParentGUID); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVBOOKMARKOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeginUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnEndUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemAdded(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aTitle, PRTime aDateAdded, const nsACString & aGUID, const nsACString & aParentGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnItemAdded(aItemId, aParentId, aIndex, aItemType, aURI, aTitle, aDateAdded, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnBeforeItemRemoved(PRInt64 aItemId, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeforeItemRemoved(aItemId, aItemType, aParentId, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemRemoved(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aGUID, const nsACString & aParentGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnItemRemoved(aItemId, aParentId, aIndex, aItemType, aURI, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemChanged(PRInt64 aItemId, const nsACString & aProperty, PRBool aIsAnnotationProperty, const nsACString & aNewValue, PRTime aLastModified, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnItemChanged(aItemId, aProperty, aIsAnnotationProperty, aNewValue, aLastModified, aItemType, aParentId, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemVisited(PRInt64 aItemId, PRInt64 aVisitId, PRTime aTime, PRUint32 aTransitionType, nsIURI *aURI, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnItemVisited(aItemId, aVisitId, aTime, aTransitionType, aURI, aParentId, aGUID, aParentGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnItemMoved(PRInt64 aItemId, PRInt64 aOldParentId, PRInt32 aOldIndex, PRInt64 aNewParentId, PRInt32 aNewIndex, PRUint16 aItemType, const nsACString & aGUID, const nsACString & aOldParentGUID, const nsACString & aNewParentGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnItemMoved(aItemId, aOldParentId, aOldIndex, aNewParentId, aNewIndex, aItemType, aGUID, aOldParentGUID, aNewParentGUID); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavBookmarkObserver : public nsINavBookmarkObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVBOOKMARKOBSERVER

  nsNavBookmarkObserver();

private:
  ~nsNavBookmarkObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavBookmarkObserver, nsINavBookmarkObserver)

nsNavBookmarkObserver::nsNavBookmarkObserver()
{
  /* member initializers and constructor code */
}

nsNavBookmarkObserver::~nsNavBookmarkObserver()
{
  /* destructor code */
}

/* void onBeginUpdateBatch (); */
NS_IMETHODIMP nsNavBookmarkObserver::OnBeginUpdateBatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onEndUpdateBatch (); */
NS_IMETHODIMP nsNavBookmarkObserver::OnEndUpdateBatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onItemAdded (in long long aItemId, in long long aParentId, in long aIndex, in unsigned short aItemType, in nsIURI aURI, in AUTF8String aTitle, in PRTime aDateAdded, in ACString aGUID, in ACString aParentGUID); */
NS_IMETHODIMP nsNavBookmarkObserver::OnItemAdded(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aTitle, PRTime aDateAdded, const nsACString & aGUID, const nsACString & aParentGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onBeforeItemRemoved (in long long aItemId, in unsigned short aItemType, in long long aParentId, in ACString aGUID, in ACString aParentGUID); */
NS_IMETHODIMP nsNavBookmarkObserver::OnBeforeItemRemoved(PRInt64 aItemId, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onItemRemoved (in long long aItemId, in long long aParentId, in long aIndex, in unsigned short aItemType, in nsIURI aURI, in ACString aGUID, in ACString aParentGUID); */
NS_IMETHODIMP nsNavBookmarkObserver::OnItemRemoved(PRInt64 aItemId, PRInt64 aParentId, PRInt32 aIndex, PRUint16 aItemType, nsIURI *aURI, const nsACString & aGUID, const nsACString & aParentGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onItemChanged (in long long aItemId, in ACString aProperty, in boolean aIsAnnotationProperty, in AUTF8String aNewValue, in PRTime aLastModified, in unsigned short aItemType, in long long aParentId, in ACString aGUID, in ACString aParentGUID); */
NS_IMETHODIMP nsNavBookmarkObserver::OnItemChanged(PRInt64 aItemId, const nsACString & aProperty, PRBool aIsAnnotationProperty, const nsACString & aNewValue, PRTime aLastModified, PRUint16 aItemType, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onItemVisited (in long long aItemId, in long long aVisitId, in PRTime aTime, in unsigned long aTransitionType, in nsIURI aURI, in long long aParentId, in ACString aGUID, in ACString aParentGUID); */
NS_IMETHODIMP nsNavBookmarkObserver::OnItemVisited(PRInt64 aItemId, PRInt64 aVisitId, PRTime aTime, PRUint32 aTransitionType, nsIURI *aURI, PRInt64 aParentId, const nsACString & aGUID, const nsACString & aParentGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onItemMoved (in long long aItemId, in long long aOldParentId, in long aOldIndex, in long long aNewParentId, in long aNewIndex, in unsigned short aItemType, in ACString aGUID, in ACString aOldParentGUID, in ACString aNewParentGUID); */
NS_IMETHODIMP nsNavBookmarkObserver::OnItemMoved(PRInt64 aItemId, PRInt64 aOldParentId, PRInt32 aOldIndex, PRInt64 aNewParentId, PRInt32 aNewIndex, PRUint16 aItemType, const nsACString & aGUID, const nsACString & aOldParentGUID, const nsACString & aNewParentGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavBookmarksService */
#define NS_INAVBOOKMARKSSERVICE_IID_STR "573f99bd-988c-4253-836f-4ce009d33ac6"

#define NS_INAVBOOKMARKSSERVICE_IID \
  {0x573f99bd, 0x988c, 0x4253, \
    { 0x83, 0x6f, 0x4c, 0xe0, 0x09, 0xd3, 0x3a, 0xc6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavBookmarksService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVBOOKMARKSSERVICE_IID)

  /* readonly attribute long long placesRoot; */
  NS_SCRIPTABLE NS_IMETHOD GetPlacesRoot(PRInt64 *aPlacesRoot) = 0;

  /* readonly attribute long long bookmarksMenuFolder; */
  NS_SCRIPTABLE NS_IMETHOD GetBookmarksMenuFolder(PRInt64 *aBookmarksMenuFolder) = 0;

  /* readonly attribute long long tagsFolder; */
  NS_SCRIPTABLE NS_IMETHOD GetTagsFolder(PRInt64 *aTagsFolder) = 0;

  /* readonly attribute long long unfiledBookmarksFolder; */
  NS_SCRIPTABLE NS_IMETHOD GetUnfiledBookmarksFolder(PRInt64 *aUnfiledBookmarksFolder) = 0;

  /* readonly attribute long long toolbarFolder; */
  NS_SCRIPTABLE NS_IMETHOD GetToolbarFolder(PRInt64 *aToolbarFolder) = 0;

  enum { DEFAULT_INDEX = -1 };

  enum { TYPE_BOOKMARK = 1U };

  enum { TYPE_FOLDER = 2U };

  enum { TYPE_SEPARATOR = 3U };

  enum { TYPE_DYNAMIC_CONTAINER = 4U };

  /* long long insertBookmark (in long long aParentId, in nsIURI aURI, in long aIndex, in AUTF8String aTitle); */
  NS_SCRIPTABLE NS_IMETHOD InsertBookmark(PRInt64 aParentId, nsIURI *aURI, PRInt32 aIndex, const nsACString & aTitle, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* void removeItem (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRInt64 aItemId) = 0;

  /* long long createFolder (in long long aParentFolder, in AUTF8String name, in long index); */
  NS_SCRIPTABLE NS_IMETHOD CreateFolder(PRInt64 aParentFolder, const nsACString & name, PRInt32 index, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* long long createDynamicContainer (in long long aParentFolder, in AUTF8String aName, in AString aContractId, in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD CreateDynamicContainer(PRInt64 aParentFolder, const nsACString & aName, const nsAString & aContractId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* nsITransaction getRemoveFolderTransaction (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetRemoveFolderTransaction(PRInt64 aItemId, nsITransaction * *_retval NS_OUTPARAM) = 0;

  /* void removeFolderChildren (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD RemoveFolderChildren(PRInt64 aItemId) = 0;

  /* void moveItem (in long long aItemId, in long long aNewParentId, in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD MoveItem(PRInt64 aItemId, PRInt64 aNewParentId, PRInt32 aIndex) = 0;

  /* long long insertSeparator (in long long aParentId, in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD InsertSeparator(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* long long getIdForItemAt (in long long aParentId, in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetIdForItemAt(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* [deprecated] AString getItemGUID (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetItemGUID(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM) = 0;

  /* [deprecated] void setItemGUID (in long long aItemId, in AString aGUID); */
  NS_SCRIPTABLE NS_IMETHOD SetItemGUID(PRInt64 aItemId, const nsAString & aGUID) = 0;

  /* [deprecated] long long getItemIdForGUID (in AString aGUID); */
  NS_SCRIPTABLE NS_IMETHOD GetItemIdForGUID(const nsAString & aGUID, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* void setItemTitle (in long long aItemId, in AUTF8String aTitle); */
  NS_SCRIPTABLE NS_IMETHOD SetItemTitle(PRInt64 aItemId, const nsACString & aTitle) = 0;

  /* AUTF8String getItemTitle (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetItemTitle(PRInt64 aItemId, nsACString & _retval NS_OUTPARAM) = 0;

  /* void setItemDateAdded (in long long aItemId, in PRTime aDateAdded); */
  NS_SCRIPTABLE NS_IMETHOD SetItemDateAdded(PRInt64 aItemId, PRTime aDateAdded) = 0;

  /* PRTime getItemDateAdded (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetItemDateAdded(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM) = 0;

  /* void setItemLastModified (in long long aItemId, in PRTime aLastModified); */
  NS_SCRIPTABLE NS_IMETHOD SetItemLastModified(PRInt64 aItemId, PRTime aLastModified) = 0;

  /* PRTime getItemLastModified (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetItemLastModified(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM) = 0;

  /* nsIURI getBookmarkURI (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkURI(PRInt64 aItemId, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* long getItemIndex (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetItemIndex(PRInt64 aItemId, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void setItemIndex (in long long aItemId, in long aNewIndex); */
  NS_SCRIPTABLE NS_IMETHOD SetItemIndex(PRInt64 aItemId, PRInt32 aNewIndex) = 0;

  /* unsigned short getItemType (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetItemType(PRInt64 aItemId, PRUint16 *_retval NS_OUTPARAM) = 0;

  /* boolean getFolderReadonly (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetFolderReadonly(PRInt64 aItemId, PRBool *_retval NS_OUTPARAM) = 0;

  /* void setFolderReadonly (in long long aFolder, in boolean aReadOnly); */
  NS_SCRIPTABLE NS_IMETHOD SetFolderReadonly(PRInt64 aFolder, PRBool aReadOnly) = 0;

  /* boolean isBookmarked (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD IsBookmarked(nsIURI *aURI, PRBool *_retval NS_OUTPARAM) = 0;

  /* nsIURI getBookmarkedURIFor (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkedURIFor(nsIURI *aURI, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* void changeBookmarkURI (in long long aItemId, in nsIURI aNewURI); */
  NS_SCRIPTABLE NS_IMETHOD ChangeBookmarkURI(PRInt64 aItemId, nsIURI *aNewURI) = 0;

  /* long long getFolderIdForItem (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetFolderIdForItem(PRInt64 aItemId, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* void getBookmarkIdsForURI (in nsIURI aURI, [optional] out unsigned long count, [array, size_is (count), retval] out long long bookmarks); */
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIdsForURI(nsIURI *aURI, PRUint32 *count NS_OUTPARAM, PRInt64 **bookmarks NS_OUTPARAM) = 0;

  /* void setKeywordForBookmark (in long long aItemId, in AString aKeyword); */
  NS_SCRIPTABLE NS_IMETHOD SetKeywordForBookmark(PRInt64 aItemId, const nsAString & aKeyword) = 0;

  /* AString getKeywordForURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getKeywordForBookmark (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForBookmark(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIURI getURIForKeyword (in AString keyword); */
  NS_SCRIPTABLE NS_IMETHOD GetURIForKeyword(const nsAString & keyword, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* void addObserver (in nsINavBookmarkObserver observer, in boolean ownsWeak); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavBookmarkObserver *observer, PRBool ownsWeak) = 0;

  /* void removeObserver (in nsINavBookmarkObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavBookmarkObserver *observer) = 0;

  /* void runInBatchMode (in nsINavHistoryBatchCallback aCallback, in nsISupports aUserData); */
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aUserData) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavBookmarksService, NS_INAVBOOKMARKSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVBOOKMARKSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetPlacesRoot(PRInt64 *aPlacesRoot); \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarksMenuFolder(PRInt64 *aBookmarksMenuFolder); \
  NS_SCRIPTABLE NS_IMETHOD GetTagsFolder(PRInt64 *aTagsFolder); \
  NS_SCRIPTABLE NS_IMETHOD GetUnfiledBookmarksFolder(PRInt64 *aUnfiledBookmarksFolder); \
  NS_SCRIPTABLE NS_IMETHOD GetToolbarFolder(PRInt64 *aToolbarFolder); \
  NS_SCRIPTABLE NS_IMETHOD InsertBookmark(PRInt64 aParentId, nsIURI *aURI, PRInt32 aIndex, const nsACString & aTitle, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRInt64 aItemId); \
  NS_SCRIPTABLE NS_IMETHOD CreateFolder(PRInt64 aParentFolder, const nsACString & name, PRInt32 index, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateDynamicContainer(PRInt64 aParentFolder, const nsACString & aName, const nsAString & aContractId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRemoveFolderTransaction(PRInt64 aItemId, nsITransaction * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveFolderChildren(PRInt64 aItemId); \
  NS_SCRIPTABLE NS_IMETHOD MoveItem(PRInt64 aItemId, PRInt64 aNewParentId, PRInt32 aIndex); \
  NS_SCRIPTABLE NS_IMETHOD InsertSeparator(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIdForItemAt(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetItemGUID(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetItemGUID(PRInt64 aItemId, const nsAString & aGUID); \
  NS_SCRIPTABLE NS_IMETHOD GetItemIdForGUID(const nsAString & aGUID, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetItemTitle(PRInt64 aItemId, const nsACString & aTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetItemTitle(PRInt64 aItemId, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetItemDateAdded(PRInt64 aItemId, PRTime aDateAdded); \
  NS_SCRIPTABLE NS_IMETHOD GetItemDateAdded(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetItemLastModified(PRInt64 aItemId, PRTime aLastModified); \
  NS_SCRIPTABLE NS_IMETHOD GetItemLastModified(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkURI(PRInt64 aItemId, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetItemIndex(PRInt64 aItemId, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetItemIndex(PRInt64 aItemId, PRInt32 aNewIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetItemType(PRInt64 aItemId, PRUint16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFolderReadonly(PRInt64 aItemId, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFolderReadonly(PRInt64 aFolder, PRBool aReadOnly); \
  NS_SCRIPTABLE NS_IMETHOD IsBookmarked(nsIURI *aURI, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkedURIFor(nsIURI *aURI, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ChangeBookmarkURI(PRInt64 aItemId, nsIURI *aNewURI); \
  NS_SCRIPTABLE NS_IMETHOD GetFolderIdForItem(PRInt64 aItemId, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIdsForURI(nsIURI *aURI, PRUint32 *count NS_OUTPARAM, PRInt64 **bookmarks NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetKeywordForBookmark(PRInt64 aItemId, const nsAString & aKeyword); \
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForBookmark(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetURIForKeyword(const nsAString & keyword, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavBookmarkObserver *observer, PRBool ownsWeak); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavBookmarkObserver *observer); \
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aUserData); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVBOOKMARKSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPlacesRoot(PRInt64 *aPlacesRoot) { return _to GetPlacesRoot(aPlacesRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarksMenuFolder(PRInt64 *aBookmarksMenuFolder) { return _to GetBookmarksMenuFolder(aBookmarksMenuFolder); } \
  NS_SCRIPTABLE NS_IMETHOD GetTagsFolder(PRInt64 *aTagsFolder) { return _to GetTagsFolder(aTagsFolder); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnfiledBookmarksFolder(PRInt64 *aUnfiledBookmarksFolder) { return _to GetUnfiledBookmarksFolder(aUnfiledBookmarksFolder); } \
  NS_SCRIPTABLE NS_IMETHOD GetToolbarFolder(PRInt64 *aToolbarFolder) { return _to GetToolbarFolder(aToolbarFolder); } \
  NS_SCRIPTABLE NS_IMETHOD InsertBookmark(PRInt64 aParentId, nsIURI *aURI, PRInt32 aIndex, const nsACString & aTitle, PRInt64 *_retval NS_OUTPARAM) { return _to InsertBookmark(aParentId, aURI, aIndex, aTitle, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRInt64 aItemId) { return _to RemoveItem(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateFolder(PRInt64 aParentFolder, const nsACString & name, PRInt32 index, PRInt64 *_retval NS_OUTPARAM) { return _to CreateFolder(aParentFolder, name, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateDynamicContainer(PRInt64 aParentFolder, const nsACString & aName, const nsAString & aContractId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) { return _to CreateDynamicContainer(aParentFolder, aName, aContractId, aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemoveFolderTransaction(PRInt64 aItemId, nsITransaction * *_retval NS_OUTPARAM) { return _to GetRemoveFolderTransaction(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFolderChildren(PRInt64 aItemId) { return _to RemoveFolderChildren(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD MoveItem(PRInt64 aItemId, PRInt64 aNewParentId, PRInt32 aIndex) { return _to MoveItem(aItemId, aNewParentId, aIndex); } \
  NS_SCRIPTABLE NS_IMETHOD InsertSeparator(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) { return _to InsertSeparator(aParentId, aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIdForItemAt(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) { return _to GetIdForItemAt(aParentId, aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemGUID(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM) { return _to GetItemGUID(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemGUID(PRInt64 aItemId, const nsAString & aGUID) { return _to SetItemGUID(aItemId, aGUID); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemIdForGUID(const nsAString & aGUID, PRInt64 *_retval NS_OUTPARAM) { return _to GetItemIdForGUID(aGUID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemTitle(PRInt64 aItemId, const nsACString & aTitle) { return _to SetItemTitle(aItemId, aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemTitle(PRInt64 aItemId, nsACString & _retval NS_OUTPARAM) { return _to GetItemTitle(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemDateAdded(PRInt64 aItemId, PRTime aDateAdded) { return _to SetItemDateAdded(aItemId, aDateAdded); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemDateAdded(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM) { return _to GetItemDateAdded(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemLastModified(PRInt64 aItemId, PRTime aLastModified) { return _to SetItemLastModified(aItemId, aLastModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemLastModified(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM) { return _to GetItemLastModified(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkURI(PRInt64 aItemId, nsIURI * *_retval NS_OUTPARAM) { return _to GetBookmarkURI(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemIndex(PRInt64 aItemId, PRInt32 *_retval NS_OUTPARAM) { return _to GetItemIndex(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemIndex(PRInt64 aItemId, PRInt32 aNewIndex) { return _to SetItemIndex(aItemId, aNewIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemType(PRInt64 aItemId, PRUint16 *_retval NS_OUTPARAM) { return _to GetItemType(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderReadonly(PRInt64 aItemId, PRBool *_retval NS_OUTPARAM) { return _to GetFolderReadonly(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFolderReadonly(PRInt64 aFolder, PRBool aReadOnly) { return _to SetFolderReadonly(aFolder, aReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD IsBookmarked(nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return _to IsBookmarked(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkedURIFor(nsIURI *aURI, nsIURI * *_retval NS_OUTPARAM) { return _to GetBookmarkedURIFor(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ChangeBookmarkURI(PRInt64 aItemId, nsIURI *aNewURI) { return _to ChangeBookmarkURI(aItemId, aNewURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderIdForItem(PRInt64 aItemId, PRInt64 *_retval NS_OUTPARAM) { return _to GetFolderIdForItem(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIdsForURI(nsIURI *aURI, PRUint32 *count NS_OUTPARAM, PRInt64 **bookmarks NS_OUTPARAM) { return _to GetBookmarkIdsForURI(aURI, count, bookmarks); } \
  NS_SCRIPTABLE NS_IMETHOD SetKeywordForBookmark(PRInt64 aItemId, const nsAString & aKeyword) { return _to SetKeywordForBookmark(aItemId, aKeyword); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) { return _to GetKeywordForURI(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForBookmark(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM) { return _to GetKeywordForBookmark(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetURIForKeyword(const nsAString & keyword, nsIURI * *_retval NS_OUTPARAM) { return _to GetURIForKeyword(keyword, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavBookmarkObserver *observer, PRBool ownsWeak) { return _to AddObserver(observer, ownsWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavBookmarkObserver *observer) { return _to RemoveObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aUserData) { return _to RunInBatchMode(aCallback, aUserData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVBOOKMARKSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPlacesRoot(PRInt64 *aPlacesRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlacesRoot(aPlacesRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarksMenuFolder(PRInt64 *aBookmarksMenuFolder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBookmarksMenuFolder(aBookmarksMenuFolder); } \
  NS_SCRIPTABLE NS_IMETHOD GetTagsFolder(PRInt64 *aTagsFolder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTagsFolder(aTagsFolder); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnfiledBookmarksFolder(PRInt64 *aUnfiledBookmarksFolder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnfiledBookmarksFolder(aUnfiledBookmarksFolder); } \
  NS_SCRIPTABLE NS_IMETHOD GetToolbarFolder(PRInt64 *aToolbarFolder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetToolbarFolder(aToolbarFolder); } \
  NS_SCRIPTABLE NS_IMETHOD InsertBookmark(PRInt64 aParentId, nsIURI *aURI, PRInt32 aIndex, const nsACString & aTitle, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertBookmark(aParentId, aURI, aIndex, aTitle, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRInt64 aItemId) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveItem(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD CreateFolder(PRInt64 aParentFolder, const nsACString & name, PRInt32 index, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateFolder(aParentFolder, name, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateDynamicContainer(PRInt64 aParentFolder, const nsACString & aName, const nsAString & aContractId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateDynamicContainer(aParentFolder, aName, aContractId, aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRemoveFolderTransaction(PRInt64 aItemId, nsITransaction * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemoveFolderTransaction(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFolderChildren(PRInt64 aItemId) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFolderChildren(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD MoveItem(PRInt64 aItemId, PRInt64 aNewParentId, PRInt32 aIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveItem(aItemId, aNewParentId, aIndex); } \
  NS_SCRIPTABLE NS_IMETHOD InsertSeparator(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertSeparator(aParentId, aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIdForItemAt(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIdForItemAt(aParentId, aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemGUID(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemGUID(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemGUID(PRInt64 aItemId, const nsAString & aGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetItemGUID(aItemId, aGUID); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemIdForGUID(const nsAString & aGUID, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemIdForGUID(aGUID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemTitle(PRInt64 aItemId, const nsACString & aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetItemTitle(aItemId, aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemTitle(PRInt64 aItemId, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemTitle(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemDateAdded(PRInt64 aItemId, PRTime aDateAdded) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetItemDateAdded(aItemId, aDateAdded); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemDateAdded(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemDateAdded(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemLastModified(PRInt64 aItemId, PRTime aLastModified) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetItemLastModified(aItemId, aLastModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemLastModified(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemLastModified(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkURI(PRInt64 aItemId, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBookmarkURI(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemIndex(PRInt64 aItemId, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemIndex(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetItemIndex(PRInt64 aItemId, PRInt32 aNewIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetItemIndex(aItemId, aNewIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemType(PRInt64 aItemId, PRUint16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemType(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderReadonly(PRInt64 aItemId, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFolderReadonly(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFolderReadonly(PRInt64 aFolder, PRBool aReadOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFolderReadonly(aFolder, aReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD IsBookmarked(nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsBookmarked(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkedURIFor(nsIURI *aURI, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBookmarkedURIFor(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ChangeBookmarkURI(PRInt64 aItemId, nsIURI *aNewURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->ChangeBookmarkURI(aItemId, aNewURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderIdForItem(PRInt64 aItemId, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFolderIdForItem(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIdsForURI(nsIURI *aURI, PRUint32 *count NS_OUTPARAM, PRInt64 **bookmarks NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBookmarkIdsForURI(aURI, count, bookmarks); } \
  NS_SCRIPTABLE NS_IMETHOD SetKeywordForBookmark(PRInt64 aItemId, const nsAString & aKeyword) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKeywordForBookmark(aItemId, aKeyword); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeywordForURI(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeywordForBookmark(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeywordForBookmark(aItemId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetURIForKeyword(const nsAString & keyword, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURIForKeyword(keyword, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavBookmarkObserver *observer, PRBool ownsWeak) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(observer, ownsWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavBookmarkObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aUserData) { return !_to ? NS_ERROR_NULL_POINTER : _to->RunInBatchMode(aCallback, aUserData); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavBookmarksService : public nsINavBookmarksService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVBOOKMARKSSERVICE

  nsNavBookmarksService();

private:
  ~nsNavBookmarksService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavBookmarksService, nsINavBookmarksService)

nsNavBookmarksService::nsNavBookmarksService()
{
  /* member initializers and constructor code */
}

nsNavBookmarksService::~nsNavBookmarksService()
{
  /* destructor code */
}

/* readonly attribute long long placesRoot; */
NS_IMETHODIMP nsNavBookmarksService::GetPlacesRoot(PRInt64 *aPlacesRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long bookmarksMenuFolder; */
NS_IMETHODIMP nsNavBookmarksService::GetBookmarksMenuFolder(PRInt64 *aBookmarksMenuFolder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long tagsFolder; */
NS_IMETHODIMP nsNavBookmarksService::GetTagsFolder(PRInt64 *aTagsFolder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long unfiledBookmarksFolder; */
NS_IMETHODIMP nsNavBookmarksService::GetUnfiledBookmarksFolder(PRInt64 *aUnfiledBookmarksFolder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long toolbarFolder; */
NS_IMETHODIMP nsNavBookmarksService::GetToolbarFolder(PRInt64 *aToolbarFolder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long insertBookmark (in long long aParentId, in nsIURI aURI, in long aIndex, in AUTF8String aTitle); */
NS_IMETHODIMP nsNavBookmarksService::InsertBookmark(PRInt64 aParentId, nsIURI *aURI, PRInt32 aIndex, const nsACString & aTitle, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeItem (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::RemoveItem(PRInt64 aItemId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long createFolder (in long long aParentFolder, in AUTF8String name, in long index); */
NS_IMETHODIMP nsNavBookmarksService::CreateFolder(PRInt64 aParentFolder, const nsACString & name, PRInt32 index, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long createDynamicContainer (in long long aParentFolder, in AUTF8String aName, in AString aContractId, in long aIndex); */
NS_IMETHODIMP nsNavBookmarksService::CreateDynamicContainer(PRInt64 aParentFolder, const nsACString & aName, const nsAString & aContractId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITransaction getRemoveFolderTransaction (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetRemoveFolderTransaction(PRInt64 aItemId, nsITransaction * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFolderChildren (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::RemoveFolderChildren(PRInt64 aItemId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveItem (in long long aItemId, in long long aNewParentId, in long aIndex); */
NS_IMETHODIMP nsNavBookmarksService::MoveItem(PRInt64 aItemId, PRInt64 aNewParentId, PRInt32 aIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long insertSeparator (in long long aParentId, in long aIndex); */
NS_IMETHODIMP nsNavBookmarksService::InsertSeparator(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long getIdForItemAt (in long long aParentId, in long aIndex); */
NS_IMETHODIMP nsNavBookmarksService::GetIdForItemAt(PRInt64 aParentId, PRInt32 aIndex, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] AString getItemGUID (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetItemGUID(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] void setItemGUID (in long long aItemId, in AString aGUID); */
NS_IMETHODIMP nsNavBookmarksService::SetItemGUID(PRInt64 aItemId, const nsAString & aGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] long long getItemIdForGUID (in AString aGUID); */
NS_IMETHODIMP nsNavBookmarksService::GetItemIdForGUID(const nsAString & aGUID, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setItemTitle (in long long aItemId, in AUTF8String aTitle); */
NS_IMETHODIMP nsNavBookmarksService::SetItemTitle(PRInt64 aItemId, const nsACString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String getItemTitle (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetItemTitle(PRInt64 aItemId, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setItemDateAdded (in long long aItemId, in PRTime aDateAdded); */
NS_IMETHODIMP nsNavBookmarksService::SetItemDateAdded(PRInt64 aItemId, PRTime aDateAdded)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRTime getItemDateAdded (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetItemDateAdded(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setItemLastModified (in long long aItemId, in PRTime aLastModified); */
NS_IMETHODIMP nsNavBookmarksService::SetItemLastModified(PRInt64 aItemId, PRTime aLastModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRTime getItemLastModified (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetItemLastModified(PRInt64 aItemId, PRTime *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getBookmarkURI (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetBookmarkURI(PRInt64 aItemId, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getItemIndex (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetItemIndex(PRInt64 aItemId, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setItemIndex (in long long aItemId, in long aNewIndex); */
NS_IMETHODIMP nsNavBookmarksService::SetItemIndex(PRInt64 aItemId, PRInt32 aNewIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned short getItemType (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetItemType(PRInt64 aItemId, PRUint16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getFolderReadonly (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetFolderReadonly(PRInt64 aItemId, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFolderReadonly (in long long aFolder, in boolean aReadOnly); */
NS_IMETHODIMP nsNavBookmarksService::SetFolderReadonly(PRInt64 aFolder, PRBool aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isBookmarked (in nsIURI aURI); */
NS_IMETHODIMP nsNavBookmarksService::IsBookmarked(nsIURI *aURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getBookmarkedURIFor (in nsIURI aURI); */
NS_IMETHODIMP nsNavBookmarksService::GetBookmarkedURIFor(nsIURI *aURI, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void changeBookmarkURI (in long long aItemId, in nsIURI aNewURI); */
NS_IMETHODIMP nsNavBookmarksService::ChangeBookmarkURI(PRInt64 aItemId, nsIURI *aNewURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long getFolderIdForItem (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetFolderIdForItem(PRInt64 aItemId, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getBookmarkIdsForURI (in nsIURI aURI, [optional] out unsigned long count, [array, size_is (count), retval] out long long bookmarks); */
NS_IMETHODIMP nsNavBookmarksService::GetBookmarkIdsForURI(nsIURI *aURI, PRUint32 *count NS_OUTPARAM, PRInt64 **bookmarks NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setKeywordForBookmark (in long long aItemId, in AString aKeyword); */
NS_IMETHODIMP nsNavBookmarksService::SetKeywordForBookmark(PRInt64 aItemId, const nsAString & aKeyword)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getKeywordForURI (in nsIURI aURI); */
NS_IMETHODIMP nsNavBookmarksService::GetKeywordForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getKeywordForBookmark (in long long aItemId); */
NS_IMETHODIMP nsNavBookmarksService::GetKeywordForBookmark(PRInt64 aItemId, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getURIForKeyword (in AString keyword); */
NS_IMETHODIMP nsNavBookmarksService::GetURIForKeyword(const nsAString & keyword, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in nsINavBookmarkObserver observer, in boolean ownsWeak); */
NS_IMETHODIMP nsNavBookmarksService::AddObserver(nsINavBookmarkObserver *observer, PRBool ownsWeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in nsINavBookmarkObserver observer); */
NS_IMETHODIMP nsNavBookmarksService::RemoveObserver(nsINavBookmarkObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void runInBatchMode (in nsINavHistoryBatchCallback aCallback, in nsISupports aUserData); */
NS_IMETHODIMP nsNavBookmarksService::RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aUserData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsINavBookmarksService_h__ */
