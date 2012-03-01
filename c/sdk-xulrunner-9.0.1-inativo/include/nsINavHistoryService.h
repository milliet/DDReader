/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/nsINavHistoryService.idl
 */

#ifndef __gen_nsINavHistoryService_h__
#define __gen_nsINavHistoryService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIVariant; /* forward declaration */

class nsIFile; /* forward declaration */

class nsINavHistoryContainerResultNode; /* forward declaration */

class nsINavHistoryQueryResultNode; /* forward declaration */

class nsINavHistoryQuery; /* forward declaration */

class nsINavHistoryQueryOptions; /* forward declaration */

class nsINavHistoryResult; /* forward declaration */

class nsINavHistoryBatchCallback; /* forward declaration */


/* starting interface:    nsINavHistoryResultNode */
#define NS_INAVHISTORYRESULTNODE_IID_STR "081452e5-be5c-4038-a5ea-f1f34cb6fd81"

#define NS_INAVHISTORYRESULTNODE_IID \
  {0x081452e5, 0xbe5c, 0x4038, \
    { 0xa5, 0xea, 0xf1, 0xf3, 0x4c, 0xb6, 0xfd, 0x81 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryResultNode : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYRESULTNODE_IID)

  /* readonly attribute nsINavHistoryContainerResultNode parent; */
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsINavHistoryContainerResultNode * *aParent) = 0;

  /* readonly attribute nsINavHistoryResult parentResult; */
  NS_SCRIPTABLE NS_IMETHOD GetParentResult(nsINavHistoryResult * *aParentResult) = 0;

  /* readonly attribute AUTF8String uri; */
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsACString & aUri) = 0;

  enum { RESULT_TYPE_URI = 0U };

  enum { RESULT_TYPE_VISIT = 1U };

  enum { RESULT_TYPE_FULL_VISIT = 2U };

  enum { RESULT_TYPE_DYNAMIC_CONTAINER = 4U };

  enum { RESULT_TYPE_QUERY = 5U };

  enum { RESULT_TYPE_FOLDER = 6U };

  enum { RESULT_TYPE_SEPARATOR = 7U };

  enum { RESULT_TYPE_FOLDER_SHORTCUT = 9U };

  /* readonly attribute unsigned long type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType) = 0;

  /* readonly attribute AUTF8String title; */
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsACString & aTitle) = 0;

  /* readonly attribute unsigned long accessCount; */
  NS_SCRIPTABLE NS_IMETHOD GetAccessCount(PRUint32 *aAccessCount) = 0;

  /* readonly attribute PRTime time; */
  NS_SCRIPTABLE NS_IMETHOD GetTime(PRTime *aTime) = 0;

  /* readonly attribute AUTF8String icon; */
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsACString & aIcon) = 0;

  /* readonly attribute long indentLevel; */
  NS_SCRIPTABLE NS_IMETHOD GetIndentLevel(PRInt32 *aIndentLevel) = 0;

  /* readonly attribute long bookmarkIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIndex(PRInt32 *aBookmarkIndex) = 0;

  /* readonly attribute long long itemId; */
  NS_SCRIPTABLE NS_IMETHOD GetItemId(PRInt64 *aItemId) = 0;

  /* readonly attribute PRTime dateAdded; */
  NS_SCRIPTABLE NS_IMETHOD GetDateAdded(PRTime *aDateAdded) = 0;

  /* readonly attribute PRTime lastModified; */
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(PRTime *aLastModified) = 0;

  /* readonly attribute AString tags; */
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsAString & aTags) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryResultNode, NS_INAVHISTORYRESULTNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYRESULTNODE \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsINavHistoryContainerResultNode * *aParent); \
  NS_SCRIPTABLE NS_IMETHOD GetParentResult(nsINavHistoryResult * *aParentResult); \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsACString & aUri); \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsACString & aTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetAccessCount(PRUint32 *aAccessCount); \
  NS_SCRIPTABLE NS_IMETHOD GetTime(PRTime *aTime); \
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsACString & aIcon); \
  NS_SCRIPTABLE NS_IMETHOD GetIndentLevel(PRInt32 *aIndentLevel); \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIndex(PRInt32 *aBookmarkIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetItemId(PRInt64 *aItemId); \
  NS_SCRIPTABLE NS_IMETHOD GetDateAdded(PRTime *aDateAdded); \
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(PRTime *aLastModified); \
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsAString & aTags); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsINavHistoryContainerResultNode * *aParent) { return _to GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentResult(nsINavHistoryResult * *aParentResult) { return _to GetParentResult(aParentResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsACString & aUri) { return _to GetUri(aUri); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsACString & aTitle) { return _to GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessCount(PRUint32 *aAccessCount) { return _to GetAccessCount(aAccessCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime(PRTime *aTime) { return _to GetTime(aTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsACString & aIcon) { return _to GetIcon(aIcon); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndentLevel(PRInt32 *aIndentLevel) { return _to GetIndentLevel(aIndentLevel); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIndex(PRInt32 *aBookmarkIndex) { return _to GetBookmarkIndex(aBookmarkIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemId(PRInt64 *aItemId) { return _to GetItemId(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD GetDateAdded(PRTime *aDateAdded) { return _to GetDateAdded(aDateAdded); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(PRTime *aLastModified) { return _to GetLastModified(aLastModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsAString & aTags) { return _to GetTags(aTags); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsINavHistoryContainerResultNode * *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentResult(nsINavHistoryResult * *aParentResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentResult(aParentResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsACString & aUri) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUri(aUri); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsACString & aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessCount(PRUint32 *aAccessCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessCount(aAccessCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime(PRTime *aTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTime(aTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsACString & aIcon) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIcon(aIcon); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndentLevel(PRInt32 *aIndentLevel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndentLevel(aIndentLevel); } \
  NS_SCRIPTABLE NS_IMETHOD GetBookmarkIndex(PRInt32 *aBookmarkIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBookmarkIndex(aBookmarkIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemId(PRInt64 *aItemId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemId(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD GetDateAdded(PRTime *aDateAdded) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDateAdded(aDateAdded); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(PRTime *aLastModified) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastModified(aLastModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsAString & aTags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTags(aTags); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryResultNode : public nsINavHistoryResultNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYRESULTNODE

  nsNavHistoryResultNode();

private:
  ~nsNavHistoryResultNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryResultNode, nsINavHistoryResultNode)

nsNavHistoryResultNode::nsNavHistoryResultNode()
{
  /* member initializers and constructor code */
}

nsNavHistoryResultNode::~nsNavHistoryResultNode()
{
  /* destructor code */
}

/* readonly attribute nsINavHistoryContainerResultNode parent; */
NS_IMETHODIMP nsNavHistoryResultNode::GetParent(nsINavHistoryContainerResultNode * *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsINavHistoryResult parentResult; */
NS_IMETHODIMP nsNavHistoryResultNode::GetParentResult(nsINavHistoryResult * *aParentResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String uri; */
NS_IMETHODIMP nsNavHistoryResultNode::GetUri(nsACString & aUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long type; */
NS_IMETHODIMP nsNavHistoryResultNode::GetType(PRUint32 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String title; */
NS_IMETHODIMP nsNavHistoryResultNode::GetTitle(nsACString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long accessCount; */
NS_IMETHODIMP nsNavHistoryResultNode::GetAccessCount(PRUint32 *aAccessCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime time; */
NS_IMETHODIMP nsNavHistoryResultNode::GetTime(PRTime *aTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String icon; */
NS_IMETHODIMP nsNavHistoryResultNode::GetIcon(nsACString & aIcon)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long indentLevel; */
NS_IMETHODIMP nsNavHistoryResultNode::GetIndentLevel(PRInt32 *aIndentLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long bookmarkIndex; */
NS_IMETHODIMP nsNavHistoryResultNode::GetBookmarkIndex(PRInt32 *aBookmarkIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long itemId; */
NS_IMETHODIMP nsNavHistoryResultNode::GetItemId(PRInt64 *aItemId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime dateAdded; */
NS_IMETHODIMP nsNavHistoryResultNode::GetDateAdded(PRTime *aDateAdded)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime lastModified; */
NS_IMETHODIMP nsNavHistoryResultNode::GetLastModified(PRTime *aLastModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString tags; */
NS_IMETHODIMP nsNavHistoryResultNode::GetTags(nsAString & aTags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryVisitResultNode */
#define NS_INAVHISTORYVISITRESULTNODE_IID_STR "8e2c5a86-b33d-4fa6-944b-559af7e95fcd"

#define NS_INAVHISTORYVISITRESULTNODE_IID \
  {0x8e2c5a86, 0xb33d, 0x4fa6, \
    { 0x94, 0x4b, 0x55, 0x9a, 0xf7, 0xe9, 0x5f, 0xcd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryVisitResultNode : public nsINavHistoryResultNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYVISITRESULTNODE_IID)

  /* readonly attribute long long sessionId; */
  NS_SCRIPTABLE NS_IMETHOD GetSessionId(PRInt64 *aSessionId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryVisitResultNode, NS_INAVHISTORYVISITRESULTNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYVISITRESULTNODE \
  NS_SCRIPTABLE NS_IMETHOD GetSessionId(PRInt64 *aSessionId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYVISITRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSessionId(PRInt64 *aSessionId) { return _to GetSessionId(aSessionId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYVISITRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSessionId(PRInt64 *aSessionId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionId(aSessionId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryVisitResultNode : public nsINavHistoryVisitResultNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYVISITRESULTNODE

  nsNavHistoryVisitResultNode();

private:
  ~nsNavHistoryVisitResultNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryVisitResultNode, nsINavHistoryVisitResultNode)

nsNavHistoryVisitResultNode::nsNavHistoryVisitResultNode()
{
  /* member initializers and constructor code */
}

nsNavHistoryVisitResultNode::~nsNavHistoryVisitResultNode()
{
  /* destructor code */
}

/* readonly attribute long long sessionId; */
NS_IMETHODIMP nsNavHistoryVisitResultNode::GetSessionId(PRInt64 *aSessionId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryFullVisitResultNode */
#define NS_INAVHISTORYFULLVISITRESULTNODE_IID_STR "c49fd9d5-56e2-43eb-932c-f933f28cba85"

#define NS_INAVHISTORYFULLVISITRESULTNODE_IID \
  {0xc49fd9d5, 0x56e2, 0x43eb, \
    { 0x93, 0x2c, 0xf9, 0x33, 0xf2, 0x8c, 0xba, 0x85 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryFullVisitResultNode : public nsINavHistoryVisitResultNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYFULLVISITRESULTNODE_IID)

  /* readonly attribute long long visitId; */
  NS_SCRIPTABLE NS_IMETHOD GetVisitId(PRInt64 *aVisitId) = 0;

  /* readonly attribute long long referringVisitId; */
  NS_SCRIPTABLE NS_IMETHOD GetReferringVisitId(PRInt64 *aReferringVisitId) = 0;

  /* readonly attribute long transitionType; */
  NS_SCRIPTABLE NS_IMETHOD GetTransitionType(PRInt32 *aTransitionType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryFullVisitResultNode, NS_INAVHISTORYFULLVISITRESULTNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYFULLVISITRESULTNODE \
  NS_SCRIPTABLE NS_IMETHOD GetVisitId(PRInt64 *aVisitId); \
  NS_SCRIPTABLE NS_IMETHOD GetReferringVisitId(PRInt64 *aReferringVisitId); \
  NS_SCRIPTABLE NS_IMETHOD GetTransitionType(PRInt32 *aTransitionType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYFULLVISITRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVisitId(PRInt64 *aVisitId) { return _to GetVisitId(aVisitId); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferringVisitId(PRInt64 *aReferringVisitId) { return _to GetReferringVisitId(aReferringVisitId); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransitionType(PRInt32 *aTransitionType) { return _to GetTransitionType(aTransitionType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYFULLVISITRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVisitId(PRInt64 *aVisitId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVisitId(aVisitId); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferringVisitId(PRInt64 *aReferringVisitId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferringVisitId(aReferringVisitId); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransitionType(PRInt32 *aTransitionType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransitionType(aTransitionType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryFullVisitResultNode : public nsINavHistoryFullVisitResultNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYFULLVISITRESULTNODE

  nsNavHistoryFullVisitResultNode();

private:
  ~nsNavHistoryFullVisitResultNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryFullVisitResultNode, nsINavHistoryFullVisitResultNode)

nsNavHistoryFullVisitResultNode::nsNavHistoryFullVisitResultNode()
{
  /* member initializers and constructor code */
}

nsNavHistoryFullVisitResultNode::~nsNavHistoryFullVisitResultNode()
{
  /* destructor code */
}

/* readonly attribute long long visitId; */
NS_IMETHODIMP nsNavHistoryFullVisitResultNode::GetVisitId(PRInt64 *aVisitId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long referringVisitId; */
NS_IMETHODIMP nsNavHistoryFullVisitResultNode::GetReferringVisitId(PRInt64 *aReferringVisitId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long transitionType; */
NS_IMETHODIMP nsNavHistoryFullVisitResultNode::GetTransitionType(PRInt32 *aTransitionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryContainerResultNode */
#define NS_INAVHISTORYCONTAINERRESULTNODE_IID_STR "55829318-0f6c-4503-8739-84231f3a6793"

#define NS_INAVHISTORYCONTAINERRESULTNODE_IID \
  {0x55829318, 0x0f6c, 0x4503, \
    { 0x87, 0x39, 0x84, 0x23, 0x1f, 0x3a, 0x67, 0x93 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryContainerResultNode : public nsINavHistoryResultNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYCONTAINERRESULTNODE_IID)

  /* attribute boolean containerOpen; */
  NS_SCRIPTABLE NS_IMETHOD GetContainerOpen(PRBool *aContainerOpen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContainerOpen(PRBool aContainerOpen) = 0;

  /* readonly attribute unsigned short state; */
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint16 *aState) = 0;

  enum { STATE_CLOSED = 0U };

  enum { STATE_LOADING = 1U };

  enum { STATE_OPENED = 2U };

  /* readonly attribute boolean hasChildren; */
  NS_SCRIPTABLE NS_IMETHOD GetHasChildren(PRBool *aHasChildren) = 0;

  /* readonly attribute unsigned long childCount; */
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) = 0;

  /* nsINavHistoryResultNode getChild (in unsigned long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetChild(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM) = 0;

  /* unsigned long getChildIndex (in nsINavHistoryResultNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD GetChildIndex(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* nsINavHistoryResultNode findNodeByDetails (in AUTF8String aURIString, in PRTime aTime, in long long aItemId, in boolean aRecursive); */
  NS_SCRIPTABLE NS_IMETHOD FindNodeByDetails(const nsACString & aURIString, PRTime aTime, PRInt64 aItemId, PRBool aRecursive, nsINavHistoryResultNode * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean childrenReadOnly; */
  NS_SCRIPTABLE NS_IMETHOD GetChildrenReadOnly(PRBool *aChildrenReadOnly) = 0;

  /* readonly attribute AUTF8String dynamicContainerType; */
  NS_SCRIPTABLE NS_IMETHOD GetDynamicContainerType(nsACString & aDynamicContainerType) = 0;

  /* nsINavHistoryResultNode appendURINode (in AUTF8String aURI, in AUTF8String aTitle, in PRUint32 aAccessCount, in PRTime aTime, in AUTF8String aIconURI); */
  NS_SCRIPTABLE NS_IMETHOD AppendURINode(const nsACString & aURI, const nsACString & aTitle, PRUint32 aAccessCount, PRTime aTime, const nsACString & aIconURI, nsINavHistoryResultNode * *_retval NS_OUTPARAM) = 0;

  /* nsINavHistoryContainerResultNode appendFolderNode (in PRInt64 aFolderId); */
  NS_SCRIPTABLE NS_IMETHOD AppendFolderNode(PRInt64 aFolderId, nsINavHistoryContainerResultNode * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryContainerResultNode, NS_INAVHISTORYCONTAINERRESULTNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYCONTAINERRESULTNODE \
  NS_SCRIPTABLE NS_IMETHOD GetContainerOpen(PRBool *aContainerOpen); \
  NS_SCRIPTABLE NS_IMETHOD SetContainerOpen(PRBool aContainerOpen); \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint16 *aState); \
  NS_SCRIPTABLE NS_IMETHOD GetHasChildren(PRBool *aHasChildren); \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount); \
  NS_SCRIPTABLE NS_IMETHOD GetChild(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildIndex(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindNodeByDetails(const nsACString & aURIString, PRTime aTime, PRInt64 aItemId, PRBool aRecursive, nsINavHistoryResultNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildrenReadOnly(PRBool *aChildrenReadOnly); \
  NS_SCRIPTABLE NS_IMETHOD GetDynamicContainerType(nsACString & aDynamicContainerType); \
  NS_SCRIPTABLE NS_IMETHOD AppendURINode(const nsACString & aURI, const nsACString & aTitle, PRUint32 aAccessCount, PRTime aTime, const nsACString & aIconURI, nsINavHistoryResultNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AppendFolderNode(PRInt64 aFolderId, nsINavHistoryContainerResultNode * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYCONTAINERRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContainerOpen(PRBool *aContainerOpen) { return _to GetContainerOpen(aContainerOpen); } \
  NS_SCRIPTABLE NS_IMETHOD SetContainerOpen(PRBool aContainerOpen) { return _to SetContainerOpen(aContainerOpen); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint16 *aState) { return _to GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasChildren(PRBool *aHasChildren) { return _to GetHasChildren(aHasChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) { return _to GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetChild(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return _to GetChild(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildIndex(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM) { return _to GetChildIndex(aNode, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindNodeByDetails(const nsACString & aURIString, PRTime aTime, PRInt64 aItemId, PRBool aRecursive, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return _to FindNodeByDetails(aURIString, aTime, aItemId, aRecursive, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildrenReadOnly(PRBool *aChildrenReadOnly) { return _to GetChildrenReadOnly(aChildrenReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetDynamicContainerType(nsACString & aDynamicContainerType) { return _to GetDynamicContainerType(aDynamicContainerType); } \
  NS_SCRIPTABLE NS_IMETHOD AppendURINode(const nsACString & aURI, const nsACString & aTitle, PRUint32 aAccessCount, PRTime aTime, const nsACString & aIconURI, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return _to AppendURINode(aURI, aTitle, aAccessCount, aTime, aIconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFolderNode(PRInt64 aFolderId, nsINavHistoryContainerResultNode * *_retval NS_OUTPARAM) { return _to AppendFolderNode(aFolderId, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYCONTAINERRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContainerOpen(PRBool *aContainerOpen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContainerOpen(aContainerOpen); } \
  NS_SCRIPTABLE NS_IMETHOD SetContainerOpen(PRBool aContainerOpen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContainerOpen(aContainerOpen); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint16 *aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasChildren(PRBool *aHasChildren) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasChildren(aHasChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRUint32 *aChildCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetChild(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChild(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildIndex(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildIndex(aNode, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindNodeByDetails(const nsACString & aURIString, PRTime aTime, PRInt64 aItemId, PRBool aRecursive, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindNodeByDetails(aURIString, aTime, aItemId, aRecursive, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildrenReadOnly(PRBool *aChildrenReadOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildrenReadOnly(aChildrenReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetDynamicContainerType(nsACString & aDynamicContainerType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDynamicContainerType(aDynamicContainerType); } \
  NS_SCRIPTABLE NS_IMETHOD AppendURINode(const nsACString & aURI, const nsACString & aTitle, PRUint32 aAccessCount, PRTime aTime, const nsACString & aIconURI, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendURINode(aURI, aTitle, aAccessCount, aTime, aIconURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFolderNode(PRInt64 aFolderId, nsINavHistoryContainerResultNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendFolderNode(aFolderId, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryContainerResultNode : public nsINavHistoryContainerResultNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYCONTAINERRESULTNODE

  nsNavHistoryContainerResultNode();

private:
  ~nsNavHistoryContainerResultNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryContainerResultNode, nsINavHistoryContainerResultNode)

nsNavHistoryContainerResultNode::nsNavHistoryContainerResultNode()
{
  /* member initializers and constructor code */
}

nsNavHistoryContainerResultNode::~nsNavHistoryContainerResultNode()
{
  /* destructor code */
}

/* attribute boolean containerOpen; */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetContainerOpen(PRBool *aContainerOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryContainerResultNode::SetContainerOpen(PRBool aContainerOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short state; */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetState(PRUint16 *aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasChildren; */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetHasChildren(PRBool *aHasChildren)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long childCount; */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetChildCount(PRUint32 *aChildCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryResultNode getChild (in unsigned long aIndex); */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetChild(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getChildIndex (in nsINavHistoryResultNode aNode); */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetChildIndex(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryResultNode findNodeByDetails (in AUTF8String aURIString, in PRTime aTime, in long long aItemId, in boolean aRecursive); */
NS_IMETHODIMP nsNavHistoryContainerResultNode::FindNodeByDetails(const nsACString & aURIString, PRTime aTime, PRInt64 aItemId, PRBool aRecursive, nsINavHistoryResultNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean childrenReadOnly; */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetChildrenReadOnly(PRBool *aChildrenReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String dynamicContainerType; */
NS_IMETHODIMP nsNavHistoryContainerResultNode::GetDynamicContainerType(nsACString & aDynamicContainerType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryResultNode appendURINode (in AUTF8String aURI, in AUTF8String aTitle, in PRUint32 aAccessCount, in PRTime aTime, in AUTF8String aIconURI); */
NS_IMETHODIMP nsNavHistoryContainerResultNode::AppendURINode(const nsACString & aURI, const nsACString & aTitle, PRUint32 aAccessCount, PRTime aTime, const nsACString & aIconURI, nsINavHistoryResultNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryContainerResultNode appendFolderNode (in PRInt64 aFolderId); */
NS_IMETHODIMP nsNavHistoryContainerResultNode::AppendFolderNode(PRInt64 aFolderId, nsINavHistoryContainerResultNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryQueryResultNode */
#define NS_INAVHISTORYQUERYRESULTNODE_IID_STR "ea17745a-1852-4155-a98f-d1dd1763b3df"

#define NS_INAVHISTORYQUERYRESULTNODE_IID \
  {0xea17745a, 0x1852, 0x4155, \
    { 0xa9, 0x8f, 0xd1, 0xdd, 0x17, 0x63, 0xb3, 0xdf }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryQueryResultNode : public nsINavHistoryContainerResultNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYQUERYRESULTNODE_IID)

  /* void getQueries ([optional] out unsigned long queryCount, [array, size_is (queryCount), retval] out nsINavHistoryQuery queries); */
  NS_SCRIPTABLE NS_IMETHOD GetQueries(PRUint32 *queryCount NS_OUTPARAM, nsINavHistoryQuery * **queries NS_OUTPARAM) = 0;

  /* readonly attribute nsINavHistoryQueryOptions queryOptions; */
  NS_SCRIPTABLE NS_IMETHOD GetQueryOptions(nsINavHistoryQueryOptions * *aQueryOptions) = 0;

  /* readonly attribute long long folderItemId; */
  NS_SCRIPTABLE NS_IMETHOD GetFolderItemId(PRInt64 *aFolderItemId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryQueryResultNode, NS_INAVHISTORYQUERYRESULTNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYQUERYRESULTNODE \
  NS_SCRIPTABLE NS_IMETHOD GetQueries(PRUint32 *queryCount NS_OUTPARAM, nsINavHistoryQuery * **queries NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetQueryOptions(nsINavHistoryQueryOptions * *aQueryOptions); \
  NS_SCRIPTABLE NS_IMETHOD GetFolderItemId(PRInt64 *aFolderItemId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYQUERYRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetQueries(PRUint32 *queryCount NS_OUTPARAM, nsINavHistoryQuery * **queries NS_OUTPARAM) { return _to GetQueries(queryCount, queries); } \
  NS_SCRIPTABLE NS_IMETHOD GetQueryOptions(nsINavHistoryQueryOptions * *aQueryOptions) { return _to GetQueryOptions(aQueryOptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderItemId(PRInt64 *aFolderItemId) { return _to GetFolderItemId(aFolderItemId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYQUERYRESULTNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetQueries(PRUint32 *queryCount NS_OUTPARAM, nsINavHistoryQuery * **queries NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetQueries(queryCount, queries); } \
  NS_SCRIPTABLE NS_IMETHOD GetQueryOptions(nsINavHistoryQueryOptions * *aQueryOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetQueryOptions(aQueryOptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderItemId(PRInt64 *aFolderItemId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFolderItemId(aFolderItemId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryQueryResultNode : public nsINavHistoryQueryResultNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYQUERYRESULTNODE

  nsNavHistoryQueryResultNode();

private:
  ~nsNavHistoryQueryResultNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryQueryResultNode, nsINavHistoryQueryResultNode)

nsNavHistoryQueryResultNode::nsNavHistoryQueryResultNode()
{
  /* member initializers and constructor code */
}

nsNavHistoryQueryResultNode::~nsNavHistoryQueryResultNode()
{
  /* destructor code */
}

/* void getQueries ([optional] out unsigned long queryCount, [array, size_is (queryCount), retval] out nsINavHistoryQuery queries); */
NS_IMETHODIMP nsNavHistoryQueryResultNode::GetQueries(PRUint32 *queryCount NS_OUTPARAM, nsINavHistoryQuery * **queries NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsINavHistoryQueryOptions queryOptions; */
NS_IMETHODIMP nsNavHistoryQueryResultNode::GetQueryOptions(nsINavHistoryQueryOptions * *aQueryOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long folderItemId; */
NS_IMETHODIMP nsNavHistoryQueryResultNode::GetFolderItemId(PRInt64 *aFolderItemId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryResultObserver */
#define NS_INAVHISTORYRESULTOBSERVER_IID_STR "9ea86387-6a30-4ee2-b70d-26fbb718902f"

#define NS_INAVHISTORYRESULTOBSERVER_IID \
  {0x9ea86387, 0x6a30, 0x4ee2, \
    { 0xb7, 0x0d, 0x26, 0xfb, 0xb7, 0x18, 0x90, 0x2f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryResultObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYRESULTOBSERVER_IID)

  /* void nodeInserted (in nsINavHistoryContainerResultNode aParent, in nsINavHistoryResultNode aNode, in unsigned long aNewIndex); */
  NS_SCRIPTABLE NS_IMETHOD NodeInserted(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aNode, PRUint32 aNewIndex) = 0;

  /* void nodeRemoved (in nsINavHistoryContainerResultNode aParent, in nsINavHistoryResultNode aItem, in unsigned long aOldIndex); */
  NS_SCRIPTABLE NS_IMETHOD NodeRemoved(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aItem, PRUint32 aOldIndex) = 0;

  /* void nodeMoved (in nsINavHistoryResultNode aNode, in nsINavHistoryContainerResultNode aOldParent, in unsigned long aOldIndex, in nsINavHistoryContainerResultNode aNewParent, in unsigned long aNewIndex); */
  NS_SCRIPTABLE NS_IMETHOD NodeMoved(nsINavHistoryResultNode *aNode, nsINavHistoryContainerResultNode *aOldParent, PRUint32 aOldIndex, nsINavHistoryContainerResultNode *aNewParent, PRUint32 aNewIndex) = 0;

  /* void nodeTitleChanged (in nsINavHistoryResultNode aNode, in AUTF8String aNewTitle); */
  NS_SCRIPTABLE NS_IMETHOD NodeTitleChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewTitle) = 0;

  /* void nodeURIChanged (in nsINavHistoryResultNode aNode, in AUTF8String aNewURI); */
  NS_SCRIPTABLE NS_IMETHOD NodeURIChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewURI) = 0;

  /* void nodeIconChanged (in nsINavHistoryResultNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD NodeIconChanged(nsINavHistoryResultNode *aNode) = 0;

  /* void nodeHistoryDetailsChanged (in nsINavHistoryResultNode aNode, in PRTime aNewVisitDate, in unsigned long aNewAccessCount); */
  NS_SCRIPTABLE NS_IMETHOD NodeHistoryDetailsChanged(nsINavHistoryResultNode *aNode, PRTime aNewVisitDate, PRUint32 aNewAccessCount) = 0;

  /* void nodeTagsChanged (in nsINavHistoryResultNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD NodeTagsChanged(nsINavHistoryResultNode *aNode) = 0;

  /* void nodeKeywordChanged (in nsINavHistoryResultNode aNode, in AUTF8String aNewKeyword); */
  NS_SCRIPTABLE NS_IMETHOD NodeKeywordChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewKeyword) = 0;

  /* void nodeAnnotationChanged (in nsINavHistoryResultNode aNode, in AUTF8String aAnnoName); */
  NS_SCRIPTABLE NS_IMETHOD NodeAnnotationChanged(nsINavHistoryResultNode *aNode, const nsACString & aAnnoName) = 0;

  /* void nodeDateAddedChanged (in nsINavHistoryResultNode aNode, in PRTime aNewValue); */
  NS_SCRIPTABLE NS_IMETHOD NodeDateAddedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue) = 0;

  /* void nodeLastModifiedChanged (in nsINavHistoryResultNode aNode, in PRTime aNewValue); */
  NS_SCRIPTABLE NS_IMETHOD NodeLastModifiedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue) = 0;

  /* void nodeReplaced (in nsINavHistoryContainerResultNode aParentNode, in nsINavHistoryResultNode aOldNode, in nsINavHistoryResultNode aNewNode, in unsigned long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD NodeReplaced(nsINavHistoryContainerResultNode *aParentNode, nsINavHistoryResultNode *aOldNode, nsINavHistoryResultNode *aNewNode, PRUint32 aIndex) = 0;

  /* void containerOpened (in nsINavHistoryContainerResultNode aContainerNode); */
  NS_SCRIPTABLE NS_IMETHOD ContainerOpened(nsINavHistoryContainerResultNode *aContainerNode) = 0;

  /* void containerClosed (in nsINavHistoryContainerResultNode aContainerNode); */
  NS_SCRIPTABLE NS_IMETHOD ContainerClosed(nsINavHistoryContainerResultNode *aContainerNode) = 0;

  /* void containerStateChanged (in nsINavHistoryContainerResultNode aContainerNode, in unsigned long aOldState, in unsigned long aNewState); */
  NS_SCRIPTABLE NS_IMETHOD ContainerStateChanged(nsINavHistoryContainerResultNode *aContainerNode, PRUint32 aOldState, PRUint32 aNewState) = 0;

  /* void invalidateContainer (in nsINavHistoryContainerResultNode aContainerNode); */
  NS_SCRIPTABLE NS_IMETHOD InvalidateContainer(nsINavHistoryContainerResultNode *aContainerNode) = 0;

  /* void sortingChanged (in unsigned short sortingMode); */
  NS_SCRIPTABLE NS_IMETHOD SortingChanged(PRUint16 sortingMode) = 0;

  /* void batching (in boolean aToggleMode); */
  NS_SCRIPTABLE NS_IMETHOD Batching(PRBool aToggleMode) = 0;

  /* attribute nsINavHistoryResult result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsINavHistoryResult * *aResult) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetResult(nsINavHistoryResult *aResult) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryResultObserver, NS_INAVHISTORYRESULTOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYRESULTOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD NodeInserted(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aNode, PRUint32 aNewIndex); \
  NS_SCRIPTABLE NS_IMETHOD NodeRemoved(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aItem, PRUint32 aOldIndex); \
  NS_SCRIPTABLE NS_IMETHOD NodeMoved(nsINavHistoryResultNode *aNode, nsINavHistoryContainerResultNode *aOldParent, PRUint32 aOldIndex, nsINavHistoryContainerResultNode *aNewParent, PRUint32 aNewIndex); \
  NS_SCRIPTABLE NS_IMETHOD NodeTitleChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewTitle); \
  NS_SCRIPTABLE NS_IMETHOD NodeURIChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewURI); \
  NS_SCRIPTABLE NS_IMETHOD NodeIconChanged(nsINavHistoryResultNode *aNode); \
  NS_SCRIPTABLE NS_IMETHOD NodeHistoryDetailsChanged(nsINavHistoryResultNode *aNode, PRTime aNewVisitDate, PRUint32 aNewAccessCount); \
  NS_SCRIPTABLE NS_IMETHOD NodeTagsChanged(nsINavHistoryResultNode *aNode); \
  NS_SCRIPTABLE NS_IMETHOD NodeKeywordChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewKeyword); \
  NS_SCRIPTABLE NS_IMETHOD NodeAnnotationChanged(nsINavHistoryResultNode *aNode, const nsACString & aAnnoName); \
  NS_SCRIPTABLE NS_IMETHOD NodeDateAddedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue); \
  NS_SCRIPTABLE NS_IMETHOD NodeLastModifiedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue); \
  NS_SCRIPTABLE NS_IMETHOD NodeReplaced(nsINavHistoryContainerResultNode *aParentNode, nsINavHistoryResultNode *aOldNode, nsINavHistoryResultNode *aNewNode, PRUint32 aIndex); \
  NS_SCRIPTABLE NS_IMETHOD ContainerOpened(nsINavHistoryContainerResultNode *aContainerNode); \
  NS_SCRIPTABLE NS_IMETHOD ContainerClosed(nsINavHistoryContainerResultNode *aContainerNode); \
  NS_SCRIPTABLE NS_IMETHOD ContainerStateChanged(nsINavHistoryContainerResultNode *aContainerNode, PRUint32 aOldState, PRUint32 aNewState); \
  NS_SCRIPTABLE NS_IMETHOD InvalidateContainer(nsINavHistoryContainerResultNode *aContainerNode); \
  NS_SCRIPTABLE NS_IMETHOD SortingChanged(PRUint16 sortingMode); \
  NS_SCRIPTABLE NS_IMETHOD Batching(PRBool aToggleMode); \
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsINavHistoryResult * *aResult); \
  NS_SCRIPTABLE NS_IMETHOD SetResult(nsINavHistoryResult *aResult); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYRESULTOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NodeInserted(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aNode, PRUint32 aNewIndex) { return _to NodeInserted(aParent, aNode, aNewIndex); } \
  NS_SCRIPTABLE NS_IMETHOD NodeRemoved(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aItem, PRUint32 aOldIndex) { return _to NodeRemoved(aParent, aItem, aOldIndex); } \
  NS_SCRIPTABLE NS_IMETHOD NodeMoved(nsINavHistoryResultNode *aNode, nsINavHistoryContainerResultNode *aOldParent, PRUint32 aOldIndex, nsINavHistoryContainerResultNode *aNewParent, PRUint32 aNewIndex) { return _to NodeMoved(aNode, aOldParent, aOldIndex, aNewParent, aNewIndex); } \
  NS_SCRIPTABLE NS_IMETHOD NodeTitleChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewTitle) { return _to NodeTitleChanged(aNode, aNewTitle); } \
  NS_SCRIPTABLE NS_IMETHOD NodeURIChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewURI) { return _to NodeURIChanged(aNode, aNewURI); } \
  NS_SCRIPTABLE NS_IMETHOD NodeIconChanged(nsINavHistoryResultNode *aNode) { return _to NodeIconChanged(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD NodeHistoryDetailsChanged(nsINavHistoryResultNode *aNode, PRTime aNewVisitDate, PRUint32 aNewAccessCount) { return _to NodeHistoryDetailsChanged(aNode, aNewVisitDate, aNewAccessCount); } \
  NS_SCRIPTABLE NS_IMETHOD NodeTagsChanged(nsINavHistoryResultNode *aNode) { return _to NodeTagsChanged(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD NodeKeywordChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewKeyword) { return _to NodeKeywordChanged(aNode, aNewKeyword); } \
  NS_SCRIPTABLE NS_IMETHOD NodeAnnotationChanged(nsINavHistoryResultNode *aNode, const nsACString & aAnnoName) { return _to NodeAnnotationChanged(aNode, aAnnoName); } \
  NS_SCRIPTABLE NS_IMETHOD NodeDateAddedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue) { return _to NodeDateAddedChanged(aNode, aNewValue); } \
  NS_SCRIPTABLE NS_IMETHOD NodeLastModifiedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue) { return _to NodeLastModifiedChanged(aNode, aNewValue); } \
  NS_SCRIPTABLE NS_IMETHOD NodeReplaced(nsINavHistoryContainerResultNode *aParentNode, nsINavHistoryResultNode *aOldNode, nsINavHistoryResultNode *aNewNode, PRUint32 aIndex) { return _to NodeReplaced(aParentNode, aOldNode, aNewNode, aIndex); } \
  NS_SCRIPTABLE NS_IMETHOD ContainerOpened(nsINavHistoryContainerResultNode *aContainerNode) { return _to ContainerOpened(aContainerNode); } \
  NS_SCRIPTABLE NS_IMETHOD ContainerClosed(nsINavHistoryContainerResultNode *aContainerNode) { return _to ContainerClosed(aContainerNode); } \
  NS_SCRIPTABLE NS_IMETHOD ContainerStateChanged(nsINavHistoryContainerResultNode *aContainerNode, PRUint32 aOldState, PRUint32 aNewState) { return _to ContainerStateChanged(aContainerNode, aOldState, aNewState); } \
  NS_SCRIPTABLE NS_IMETHOD InvalidateContainer(nsINavHistoryContainerResultNode *aContainerNode) { return _to InvalidateContainer(aContainerNode); } \
  NS_SCRIPTABLE NS_IMETHOD SortingChanged(PRUint16 sortingMode) { return _to SortingChanged(sortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD Batching(PRBool aToggleMode) { return _to Batching(aToggleMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsINavHistoryResult * *aResult) { return _to GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD SetResult(nsINavHistoryResult *aResult) { return _to SetResult(aResult); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYRESULTOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NodeInserted(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aNode, PRUint32 aNewIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeInserted(aParent, aNode, aNewIndex); } \
  NS_SCRIPTABLE NS_IMETHOD NodeRemoved(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aItem, PRUint32 aOldIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeRemoved(aParent, aItem, aOldIndex); } \
  NS_SCRIPTABLE NS_IMETHOD NodeMoved(nsINavHistoryResultNode *aNode, nsINavHistoryContainerResultNode *aOldParent, PRUint32 aOldIndex, nsINavHistoryContainerResultNode *aNewParent, PRUint32 aNewIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeMoved(aNode, aOldParent, aOldIndex, aNewParent, aNewIndex); } \
  NS_SCRIPTABLE NS_IMETHOD NodeTitleChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeTitleChanged(aNode, aNewTitle); } \
  NS_SCRIPTABLE NS_IMETHOD NodeURIChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeURIChanged(aNode, aNewURI); } \
  NS_SCRIPTABLE NS_IMETHOD NodeIconChanged(nsINavHistoryResultNode *aNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeIconChanged(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD NodeHistoryDetailsChanged(nsINavHistoryResultNode *aNode, PRTime aNewVisitDate, PRUint32 aNewAccessCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeHistoryDetailsChanged(aNode, aNewVisitDate, aNewAccessCount); } \
  NS_SCRIPTABLE NS_IMETHOD NodeTagsChanged(nsINavHistoryResultNode *aNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeTagsChanged(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD NodeKeywordChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewKeyword) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeKeywordChanged(aNode, aNewKeyword); } \
  NS_SCRIPTABLE NS_IMETHOD NodeAnnotationChanged(nsINavHistoryResultNode *aNode, const nsACString & aAnnoName) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeAnnotationChanged(aNode, aAnnoName); } \
  NS_SCRIPTABLE NS_IMETHOD NodeDateAddedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeDateAddedChanged(aNode, aNewValue); } \
  NS_SCRIPTABLE NS_IMETHOD NodeLastModifiedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeLastModifiedChanged(aNode, aNewValue); } \
  NS_SCRIPTABLE NS_IMETHOD NodeReplaced(nsINavHistoryContainerResultNode *aParentNode, nsINavHistoryResultNode *aOldNode, nsINavHistoryResultNode *aNewNode, PRUint32 aIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeReplaced(aParentNode, aOldNode, aNewNode, aIndex); } \
  NS_SCRIPTABLE NS_IMETHOD ContainerOpened(nsINavHistoryContainerResultNode *aContainerNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainerOpened(aContainerNode); } \
  NS_SCRIPTABLE NS_IMETHOD ContainerClosed(nsINavHistoryContainerResultNode *aContainerNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainerClosed(aContainerNode); } \
  NS_SCRIPTABLE NS_IMETHOD ContainerStateChanged(nsINavHistoryContainerResultNode *aContainerNode, PRUint32 aOldState, PRUint32 aNewState) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainerStateChanged(aContainerNode, aOldState, aNewState); } \
  NS_SCRIPTABLE NS_IMETHOD InvalidateContainer(nsINavHistoryContainerResultNode *aContainerNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->InvalidateContainer(aContainerNode); } \
  NS_SCRIPTABLE NS_IMETHOD SortingChanged(PRUint16 sortingMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SortingChanged(sortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD Batching(PRBool aToggleMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->Batching(aToggleMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsINavHistoryResult * *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD SetResult(nsINavHistoryResult *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResult(aResult); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryResultObserver : public nsINavHistoryResultObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYRESULTOBSERVER

  nsNavHistoryResultObserver();

private:
  ~nsNavHistoryResultObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryResultObserver, nsINavHistoryResultObserver)

nsNavHistoryResultObserver::nsNavHistoryResultObserver()
{
  /* member initializers and constructor code */
}

nsNavHistoryResultObserver::~nsNavHistoryResultObserver()
{
  /* destructor code */
}

/* void nodeInserted (in nsINavHistoryContainerResultNode aParent, in nsINavHistoryResultNode aNode, in unsigned long aNewIndex); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeInserted(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aNode, PRUint32 aNewIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeRemoved (in nsINavHistoryContainerResultNode aParent, in nsINavHistoryResultNode aItem, in unsigned long aOldIndex); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeRemoved(nsINavHistoryContainerResultNode *aParent, nsINavHistoryResultNode *aItem, PRUint32 aOldIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeMoved (in nsINavHistoryResultNode aNode, in nsINavHistoryContainerResultNode aOldParent, in unsigned long aOldIndex, in nsINavHistoryContainerResultNode aNewParent, in unsigned long aNewIndex); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeMoved(nsINavHistoryResultNode *aNode, nsINavHistoryContainerResultNode *aOldParent, PRUint32 aOldIndex, nsINavHistoryContainerResultNode *aNewParent, PRUint32 aNewIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeTitleChanged (in nsINavHistoryResultNode aNode, in AUTF8String aNewTitle); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeTitleChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeURIChanged (in nsINavHistoryResultNode aNode, in AUTF8String aNewURI); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeURIChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeIconChanged (in nsINavHistoryResultNode aNode); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeIconChanged(nsINavHistoryResultNode *aNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeHistoryDetailsChanged (in nsINavHistoryResultNode aNode, in PRTime aNewVisitDate, in unsigned long aNewAccessCount); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeHistoryDetailsChanged(nsINavHistoryResultNode *aNode, PRTime aNewVisitDate, PRUint32 aNewAccessCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeTagsChanged (in nsINavHistoryResultNode aNode); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeTagsChanged(nsINavHistoryResultNode *aNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeKeywordChanged (in nsINavHistoryResultNode aNode, in AUTF8String aNewKeyword); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeKeywordChanged(nsINavHistoryResultNode *aNode, const nsACString & aNewKeyword)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeAnnotationChanged (in nsINavHistoryResultNode aNode, in AUTF8String aAnnoName); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeAnnotationChanged(nsINavHistoryResultNode *aNode, const nsACString & aAnnoName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeDateAddedChanged (in nsINavHistoryResultNode aNode, in PRTime aNewValue); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeDateAddedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeLastModifiedChanged (in nsINavHistoryResultNode aNode, in PRTime aNewValue); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeLastModifiedChanged(nsINavHistoryResultNode *aNode, PRTime aNewValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void nodeReplaced (in nsINavHistoryContainerResultNode aParentNode, in nsINavHistoryResultNode aOldNode, in nsINavHistoryResultNode aNewNode, in unsigned long aIndex); */
NS_IMETHODIMP nsNavHistoryResultObserver::NodeReplaced(nsINavHistoryContainerResultNode *aParentNode, nsINavHistoryResultNode *aOldNode, nsINavHistoryResultNode *aNewNode, PRUint32 aIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void containerOpened (in nsINavHistoryContainerResultNode aContainerNode); */
NS_IMETHODIMP nsNavHistoryResultObserver::ContainerOpened(nsINavHistoryContainerResultNode *aContainerNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void containerClosed (in nsINavHistoryContainerResultNode aContainerNode); */
NS_IMETHODIMP nsNavHistoryResultObserver::ContainerClosed(nsINavHistoryContainerResultNode *aContainerNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void containerStateChanged (in nsINavHistoryContainerResultNode aContainerNode, in unsigned long aOldState, in unsigned long aNewState); */
NS_IMETHODIMP nsNavHistoryResultObserver::ContainerStateChanged(nsINavHistoryContainerResultNode *aContainerNode, PRUint32 aOldState, PRUint32 aNewState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void invalidateContainer (in nsINavHistoryContainerResultNode aContainerNode); */
NS_IMETHODIMP nsNavHistoryResultObserver::InvalidateContainer(nsINavHistoryContainerResultNode *aContainerNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sortingChanged (in unsigned short sortingMode); */
NS_IMETHODIMP nsNavHistoryResultObserver::SortingChanged(PRUint16 sortingMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void batching (in boolean aToggleMode); */
NS_IMETHODIMP nsNavHistoryResultObserver::Batching(PRBool aToggleMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsINavHistoryResult result; */
NS_IMETHODIMP nsNavHistoryResultObserver::GetResult(nsINavHistoryResult * *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryResultObserver::SetResult(nsINavHistoryResult *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryResultTreeViewer */
#define NS_INAVHISTORYRESULTTREEVIEWER_IID_STR "f8b518c0-1faf-11df-8a39-0800200c9a66"

#define NS_INAVHISTORYRESULTTREEVIEWER_IID \
  {0xf8b518c0, 0x1faf, 0x11df, \
    { 0x8a, 0x39, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryResultTreeViewer : public nsINavHistoryResultObserver {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYRESULTTREEVIEWER_IID)

  /* nsINavHistoryResultNode nodeForTreeIndex (in unsigned long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD NodeForTreeIndex(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM) = 0;

  enum { INDEX_INVISIBLE = 4294967295U };

  /* unsigned long treeIndexForNode (in nsINavHistoryResultNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD TreeIndexForNode(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryResultTreeViewer, NS_INAVHISTORYRESULTTREEVIEWER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYRESULTTREEVIEWER \
  NS_SCRIPTABLE NS_IMETHOD NodeForTreeIndex(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD TreeIndexForNode(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYRESULTTREEVIEWER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NodeForTreeIndex(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return _to NodeForTreeIndex(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD TreeIndexForNode(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM) { return _to TreeIndexForNode(aNode, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYRESULTTREEVIEWER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NodeForTreeIndex(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeForTreeIndex(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD TreeIndexForNode(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TreeIndexForNode(aNode, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryResultTreeViewer : public nsINavHistoryResultTreeViewer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYRESULTTREEVIEWER

  nsNavHistoryResultTreeViewer();

private:
  ~nsNavHistoryResultTreeViewer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryResultTreeViewer, nsINavHistoryResultTreeViewer)

nsNavHistoryResultTreeViewer::nsNavHistoryResultTreeViewer()
{
  /* member initializers and constructor code */
}

nsNavHistoryResultTreeViewer::~nsNavHistoryResultTreeViewer()
{
  /* destructor code */
}

/* nsINavHistoryResultNode nodeForTreeIndex (in unsigned long aIndex); */
NS_IMETHODIMP nsNavHistoryResultTreeViewer::NodeForTreeIndex(PRUint32 aIndex, nsINavHistoryResultNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long treeIndexForNode (in nsINavHistoryResultNode aNode); */
NS_IMETHODIMP nsNavHistoryResultTreeViewer::TreeIndexForNode(nsINavHistoryResultNode *aNode, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryResult */
#define NS_INAVHISTORYRESULT_IID_STR "c2229ce3-2159-4001-859c-7013c52f7619"

#define NS_INAVHISTORYRESULT_IID \
  {0xc2229ce3, 0x2159, 0x4001, \
    { 0x85, 0x9c, 0x70, 0x13, 0xc5, 0x2f, 0x76, 0x19 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryResult : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYRESULT_IID)

  /* attribute unsigned short sortingMode; */
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode) = 0;

  /* attribute AUTF8String sortingAnnotation; */
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation) = 0;

  /* attribute boolean suppressNotifications; */
  NS_SCRIPTABLE NS_IMETHOD GetSuppressNotifications(PRBool *aSuppressNotifications) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSuppressNotifications(PRBool aSuppressNotifications) = 0;

  /* void addObserver (in nsINavHistoryResultObserver aObserver, in boolean aOwnsWeak); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryResultObserver *aObserver, PRBool aOwnsWeak) = 0;

  /* void removeObserver (in nsINavHistoryResultObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryResultObserver *aObserver) = 0;

  /* readonly attribute nsINavHistoryContainerResultNode root; */
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsINavHistoryContainerResultNode * *aRoot) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryResult, NS_INAVHISTORYRESULT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYRESULT \
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode); \
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode); \
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD GetSuppressNotifications(PRBool *aSuppressNotifications); \
  NS_SCRIPTABLE NS_IMETHOD SetSuppressNotifications(PRBool aSuppressNotifications); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryResultObserver *aObserver, PRBool aOwnsWeak); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryResultObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsINavHistoryContainerResultNode * *aRoot); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYRESULT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode) { return _to GetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode) { return _to SetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation) { return _to GetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation) { return _to SetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetSuppressNotifications(PRBool *aSuppressNotifications) { return _to GetSuppressNotifications(aSuppressNotifications); } \
  NS_SCRIPTABLE NS_IMETHOD SetSuppressNotifications(PRBool aSuppressNotifications) { return _to SetSuppressNotifications(aSuppressNotifications); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryResultObserver *aObserver, PRBool aOwnsWeak) { return _to AddObserver(aObserver, aOwnsWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryResultObserver *aObserver) { return _to RemoveObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsINavHistoryContainerResultNode * *aRoot) { return _to GetRoot(aRoot); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYRESULT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetSuppressNotifications(PRBool *aSuppressNotifications) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSuppressNotifications(aSuppressNotifications); } \
  NS_SCRIPTABLE NS_IMETHOD SetSuppressNotifications(PRBool aSuppressNotifications) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSuppressNotifications(aSuppressNotifications); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryResultObserver *aObserver, PRBool aOwnsWeak) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aObserver, aOwnsWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryResultObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsINavHistoryContainerResultNode * *aRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRoot(aRoot); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryResult : public nsINavHistoryResult
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYRESULT

  nsNavHistoryResult();

private:
  ~nsNavHistoryResult();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryResult, nsINavHistoryResult)

nsNavHistoryResult::nsNavHistoryResult()
{
  /* member initializers and constructor code */
}

nsNavHistoryResult::~nsNavHistoryResult()
{
  /* destructor code */
}

/* attribute unsigned short sortingMode; */
NS_IMETHODIMP nsNavHistoryResult::GetSortingMode(PRUint16 *aSortingMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryResult::SetSortingMode(PRUint16 aSortingMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String sortingAnnotation; */
NS_IMETHODIMP nsNavHistoryResult::GetSortingAnnotation(nsACString & aSortingAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryResult::SetSortingAnnotation(const nsACString & aSortingAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean suppressNotifications; */
NS_IMETHODIMP nsNavHistoryResult::GetSuppressNotifications(PRBool *aSuppressNotifications)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryResult::SetSuppressNotifications(PRBool aSuppressNotifications)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in nsINavHistoryResultObserver aObserver, in boolean aOwnsWeak); */
NS_IMETHODIMP nsNavHistoryResult::AddObserver(nsINavHistoryResultObserver *aObserver, PRBool aOwnsWeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in nsINavHistoryResultObserver aObserver); */
NS_IMETHODIMP nsNavHistoryResult::RemoveObserver(nsINavHistoryResultObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsINavHistoryContainerResultNode root; */
NS_IMETHODIMP nsNavHistoryResult::GetRoot(nsINavHistoryContainerResultNode * *aRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryObserver */
#define NS_INAVHISTORYOBSERVER_IID_STR "c837f6ba-6ad7-4810-a425-8ce29e05d17e"

#define NS_INAVHISTORYOBSERVER_IID \
  {0xc837f6ba, 0x6ad7, 0x4810, \
    { 0xa4, 0x25, 0x8c, 0xe2, 0x9e, 0x05, 0xd1, 0x7e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYOBSERVER_IID)

  /* void onBeginUpdateBatch (); */
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void) = 0;

  /* void onEndUpdateBatch (); */
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void) = 0;

  /* void onVisit (in nsIURI aURI, in long long aVisitID, in PRTime aTime, in long long aSessionID, in long long aReferringID, in unsigned long aTransitionType, in ACString aGUID, out unsigned long aAdded); */
  NS_SCRIPTABLE NS_IMETHOD OnVisit(nsIURI *aURI, PRInt64 aVisitID, PRTime aTime, PRInt64 aSessionID, PRInt64 aReferringID, PRUint32 aTransitionType, const nsACString & aGUID, PRUint32 *aAdded NS_OUTPARAM) = 0;

  /* void onTitleChanged (in nsIURI aURI, in AString aPageTitle, in ACString aGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnTitleChanged(nsIURI *aURI, const nsAString & aPageTitle, const nsACString & aGUID) = 0;

  enum { REASON_DELETED = 0U };

  enum { REASON_EXPIRED = 1U };

  /* void onBeforeDeleteURI (in nsIURI aURI, in ACString aGUID, in unsigned short aReason); */
  NS_SCRIPTABLE NS_IMETHOD OnBeforeDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason) = 0;

  /* void onDeleteURI (in nsIURI aURI, in ACString aGUID, in unsigned short aReason); */
  NS_SCRIPTABLE NS_IMETHOD OnDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason) = 0;

  /* void onClearHistory (); */
  NS_SCRIPTABLE NS_IMETHOD OnClearHistory(void) = 0;

  enum { ATTRIBUTE_FAVICON = 3U };

  /* void onPageChanged (in nsIURI aURI, in unsigned long aChangedAttribute, in AString aNewValue, in ACString aGUID); */
  NS_SCRIPTABLE NS_IMETHOD OnPageChanged(nsIURI *aURI, PRUint32 aChangedAttribute, const nsAString & aNewValue, const nsACString & aGUID) = 0;

  /* void onDeleteVisits (in nsIURI aURI, in PRTime aVisitTime, in ACString aGUID, in unsigned short aReason); */
  NS_SCRIPTABLE NS_IMETHOD OnDeleteVisits(nsIURI *aURI, PRTime aVisitTime, const nsACString & aGUID, PRUint16 aReason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryObserver, NS_INAVHISTORYOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void); \
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void); \
  NS_SCRIPTABLE NS_IMETHOD OnVisit(nsIURI *aURI, PRInt64 aVisitID, PRTime aTime, PRInt64 aSessionID, PRInt64 aReferringID, PRUint32 aTransitionType, const nsACString & aGUID, PRUint32 *aAdded NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnTitleChanged(nsIURI *aURI, const nsAString & aPageTitle, const nsACString & aGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnBeforeDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason); \
  NS_SCRIPTABLE NS_IMETHOD OnDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason); \
  NS_SCRIPTABLE NS_IMETHOD OnClearHistory(void); \
  NS_SCRIPTABLE NS_IMETHOD OnPageChanged(nsIURI *aURI, PRUint32 aChangedAttribute, const nsAString & aNewValue, const nsACString & aGUID); \
  NS_SCRIPTABLE NS_IMETHOD OnDeleteVisits(nsIURI *aURI, PRTime aVisitTime, const nsACString & aGUID, PRUint16 aReason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void) { return _to OnBeginUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void) { return _to OnEndUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnVisit(nsIURI *aURI, PRInt64 aVisitID, PRTime aTime, PRInt64 aSessionID, PRInt64 aReferringID, PRUint32 aTransitionType, const nsACString & aGUID, PRUint32 *aAdded NS_OUTPARAM) { return _to OnVisit(aURI, aVisitID, aTime, aSessionID, aReferringID, aTransitionType, aGUID, aAdded); } \
  NS_SCRIPTABLE NS_IMETHOD OnTitleChanged(nsIURI *aURI, const nsAString & aPageTitle, const nsACString & aGUID) { return _to OnTitleChanged(aURI, aPageTitle, aGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnBeforeDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason) { return _to OnBeforeDeleteURI(aURI, aGUID, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD OnDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason) { return _to OnDeleteURI(aURI, aGUID, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD OnClearHistory(void) { return _to OnClearHistory(); } \
  NS_SCRIPTABLE NS_IMETHOD OnPageChanged(nsIURI *aURI, PRUint32 aChangedAttribute, const nsAString & aNewValue, const nsACString & aGUID) { return _to OnPageChanged(aURI, aChangedAttribute, aNewValue, aGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnDeleteVisits(nsIURI *aURI, PRTime aVisitTime, const nsACString & aGUID, PRUint16 aReason) { return _to OnDeleteVisits(aURI, aVisitTime, aGUID, aReason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnBeginUpdateBatch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeginUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnEndUpdateBatch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnEndUpdateBatch(); } \
  NS_SCRIPTABLE NS_IMETHOD OnVisit(nsIURI *aURI, PRInt64 aVisitID, PRTime aTime, PRInt64 aSessionID, PRInt64 aReferringID, PRUint32 aTransitionType, const nsACString & aGUID, PRUint32 *aAdded NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnVisit(aURI, aVisitID, aTime, aSessionID, aReferringID, aTransitionType, aGUID, aAdded); } \
  NS_SCRIPTABLE NS_IMETHOD OnTitleChanged(nsIURI *aURI, const nsAString & aPageTitle, const nsACString & aGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnTitleChanged(aURI, aPageTitle, aGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnBeforeDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeforeDeleteURI(aURI, aGUID, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD OnDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDeleteURI(aURI, aGUID, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD OnClearHistory(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnClearHistory(); } \
  NS_SCRIPTABLE NS_IMETHOD OnPageChanged(nsIURI *aURI, PRUint32 aChangedAttribute, const nsAString & aNewValue, const nsACString & aGUID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPageChanged(aURI, aChangedAttribute, aNewValue, aGUID); } \
  NS_SCRIPTABLE NS_IMETHOD OnDeleteVisits(nsIURI *aURI, PRTime aVisitTime, const nsACString & aGUID, PRUint16 aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDeleteVisits(aURI, aVisitTime, aGUID, aReason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryObserver : public nsINavHistoryObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYOBSERVER

  nsNavHistoryObserver();

private:
  ~nsNavHistoryObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryObserver, nsINavHistoryObserver)

nsNavHistoryObserver::nsNavHistoryObserver()
{
  /* member initializers and constructor code */
}

nsNavHistoryObserver::~nsNavHistoryObserver()
{
  /* destructor code */
}

/* void onBeginUpdateBatch (); */
NS_IMETHODIMP nsNavHistoryObserver::OnBeginUpdateBatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onEndUpdateBatch (); */
NS_IMETHODIMP nsNavHistoryObserver::OnEndUpdateBatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onVisit (in nsIURI aURI, in long long aVisitID, in PRTime aTime, in long long aSessionID, in long long aReferringID, in unsigned long aTransitionType, in ACString aGUID, out unsigned long aAdded); */
NS_IMETHODIMP nsNavHistoryObserver::OnVisit(nsIURI *aURI, PRInt64 aVisitID, PRTime aTime, PRInt64 aSessionID, PRInt64 aReferringID, PRUint32 aTransitionType, const nsACString & aGUID, PRUint32 *aAdded NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onTitleChanged (in nsIURI aURI, in AString aPageTitle, in ACString aGUID); */
NS_IMETHODIMP nsNavHistoryObserver::OnTitleChanged(nsIURI *aURI, const nsAString & aPageTitle, const nsACString & aGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onBeforeDeleteURI (in nsIURI aURI, in ACString aGUID, in unsigned short aReason); */
NS_IMETHODIMP nsNavHistoryObserver::OnBeforeDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onDeleteURI (in nsIURI aURI, in ACString aGUID, in unsigned short aReason); */
NS_IMETHODIMP nsNavHistoryObserver::OnDeleteURI(nsIURI *aURI, const nsACString & aGUID, PRUint16 aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onClearHistory (); */
NS_IMETHODIMP nsNavHistoryObserver::OnClearHistory()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onPageChanged (in nsIURI aURI, in unsigned long aChangedAttribute, in AString aNewValue, in ACString aGUID); */
NS_IMETHODIMP nsNavHistoryObserver::OnPageChanged(nsIURI *aURI, PRUint32 aChangedAttribute, const nsAString & aNewValue, const nsACString & aGUID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onDeleteVisits (in nsIURI aURI, in PRTime aVisitTime, in ACString aGUID, in unsigned short aReason); */
NS_IMETHODIMP nsNavHistoryObserver::OnDeleteVisits(nsIURI *aURI, PRTime aVisitTime, const nsACString & aGUID, PRUint16 aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryQuery */
#define NS_INAVHISTORYQUERY_IID_STR "dc87ae79-22f1-4dcf-975b-852b01d210cb"

#define NS_INAVHISTORYQUERY_IID \
  {0xdc87ae79, 0x22f1, 0x4dcf, \
    { 0x97, 0x5b, 0x85, 0x2b, 0x01, 0xd2, 0x10, 0xcb }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryQuery : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYQUERY_IID)

  enum { TIME_RELATIVE_EPOCH = 0U };

  enum { TIME_RELATIVE_TODAY = 1U };

  enum { TIME_RELATIVE_NOW = 2U };

  /* attribute PRTime beginTime; */
  NS_SCRIPTABLE NS_IMETHOD GetBeginTime(PRTime *aBeginTime) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBeginTime(PRTime aBeginTime) = 0;

  /* attribute unsigned long beginTimeReference; */
  NS_SCRIPTABLE NS_IMETHOD GetBeginTimeReference(PRUint32 *aBeginTimeReference) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBeginTimeReference(PRUint32 aBeginTimeReference) = 0;

  /* readonly attribute boolean hasBeginTime; */
  NS_SCRIPTABLE NS_IMETHOD GetHasBeginTime(PRBool *aHasBeginTime) = 0;

  /* readonly attribute PRTime absoluteBeginTime; */
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteBeginTime(PRTime *aAbsoluteBeginTime) = 0;

  /* attribute PRTime endTime; */
  NS_SCRIPTABLE NS_IMETHOD GetEndTime(PRTime *aEndTime) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEndTime(PRTime aEndTime) = 0;

  /* attribute unsigned long endTimeReference; */
  NS_SCRIPTABLE NS_IMETHOD GetEndTimeReference(PRUint32 *aEndTimeReference) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEndTimeReference(PRUint32 aEndTimeReference) = 0;

  /* readonly attribute boolean hasEndTime; */
  NS_SCRIPTABLE NS_IMETHOD GetHasEndTime(PRBool *aHasEndTime) = 0;

  /* readonly attribute PRTime absoluteEndTime; */
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteEndTime(PRTime *aAbsoluteEndTime) = 0;

  /* attribute AString searchTerms; */
  NS_SCRIPTABLE NS_IMETHOD GetSearchTerms(nsAString & aSearchTerms) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSearchTerms(const nsAString & aSearchTerms) = 0;

  /* readonly attribute boolean hasSearchTerms; */
  NS_SCRIPTABLE NS_IMETHOD GetHasSearchTerms(PRBool *aHasSearchTerms) = 0;

  /* attribute long minVisits; */
  NS_SCRIPTABLE NS_IMETHOD GetMinVisits(PRInt32 *aMinVisits) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMinVisits(PRInt32 aMinVisits) = 0;

  /* attribute long maxVisits; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxVisits(PRInt32 *aMaxVisits) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxVisits(PRInt32 aMaxVisits) = 0;

  /* void setTransitions ([array, size_is (count), const] in unsigned long transitions, in unsigned long count); */
  NS_SCRIPTABLE NS_IMETHOD SetTransitions(const PRUint32 *transitions, PRUint32 count) = 0;

  /* void getTransitions ([optional] out unsigned long count, [array, size_is (count), retval] out unsigned long transitions); */
  NS_SCRIPTABLE NS_IMETHOD GetTransitions(PRUint32 *count NS_OUTPARAM, PRUint32 **transitions NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long transitionCount; */
  NS_SCRIPTABLE NS_IMETHOD GetTransitionCount(PRUint32 *aTransitionCount) = 0;

  /* attribute boolean onlyBookmarked; */
  NS_SCRIPTABLE NS_IMETHOD GetOnlyBookmarked(PRBool *aOnlyBookmarked) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnlyBookmarked(PRBool aOnlyBookmarked) = 0;

  /* attribute boolean domainIsHost; */
  NS_SCRIPTABLE NS_IMETHOD GetDomainIsHost(PRBool *aDomainIsHost) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDomainIsHost(PRBool aDomainIsHost) = 0;

  /* attribute AUTF8String domain; */
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsACString & aDomain) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDomain(const nsACString & aDomain) = 0;

  /* readonly attribute boolean hasDomain; */
  NS_SCRIPTABLE NS_IMETHOD GetHasDomain(PRBool *aHasDomain) = 0;

  /* attribute boolean uriIsPrefix; */
  NS_SCRIPTABLE NS_IMETHOD GetUriIsPrefix(PRBool *aUriIsPrefix) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUriIsPrefix(PRBool aUriIsPrefix) = 0;

  /* attribute nsIURI uri; */
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUri(nsIURI *aUri) = 0;

  /* readonly attribute boolean hasUri; */
  NS_SCRIPTABLE NS_IMETHOD GetHasUri(PRBool *aHasUri) = 0;

  /* attribute boolean annotationIsNot; */
  NS_SCRIPTABLE NS_IMETHOD GetAnnotationIsNot(PRBool *aAnnotationIsNot) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAnnotationIsNot(PRBool aAnnotationIsNot) = 0;

  /* attribute AUTF8String annotation; */
  NS_SCRIPTABLE NS_IMETHOD GetAnnotation(nsACString & aAnnotation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAnnotation(const nsACString & aAnnotation) = 0;

  /* readonly attribute boolean hasAnnotation; */
  NS_SCRIPTABLE NS_IMETHOD GetHasAnnotation(PRBool *aHasAnnotation) = 0;

  /* attribute nsIVariant tags; */
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsIVariant * *aTags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTags(nsIVariant *aTags) = 0;

  /* attribute boolean tagsAreNot; */
  NS_SCRIPTABLE NS_IMETHOD GetTagsAreNot(PRBool *aTagsAreNot) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTagsAreNot(PRBool aTagsAreNot) = 0;

  /* void getFolders ([optional] out unsigned long count, [array, size_is (count), retval] out long long folders); */
  NS_SCRIPTABLE NS_IMETHOD GetFolders(PRUint32 *count NS_OUTPARAM, PRInt64 **folders NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long folderCount; */
  NS_SCRIPTABLE NS_IMETHOD GetFolderCount(PRUint32 *aFolderCount) = 0;

  /* void setFolders ([array, size_is (folderCount), const] in long long folders, in unsigned long folderCount); */
  NS_SCRIPTABLE NS_IMETHOD SetFolders(const PRInt64 *folders, PRUint32 folderCount) = 0;

  /* nsINavHistoryQuery clone (); */
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQuery * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryQuery, NS_INAVHISTORYQUERY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYQUERY \
  NS_SCRIPTABLE NS_IMETHOD GetBeginTime(PRTime *aBeginTime); \
  NS_SCRIPTABLE NS_IMETHOD SetBeginTime(PRTime aBeginTime); \
  NS_SCRIPTABLE NS_IMETHOD GetBeginTimeReference(PRUint32 *aBeginTimeReference); \
  NS_SCRIPTABLE NS_IMETHOD SetBeginTimeReference(PRUint32 aBeginTimeReference); \
  NS_SCRIPTABLE NS_IMETHOD GetHasBeginTime(PRBool *aHasBeginTime); \
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteBeginTime(PRTime *aAbsoluteBeginTime); \
  NS_SCRIPTABLE NS_IMETHOD GetEndTime(PRTime *aEndTime); \
  NS_SCRIPTABLE NS_IMETHOD SetEndTime(PRTime aEndTime); \
  NS_SCRIPTABLE NS_IMETHOD GetEndTimeReference(PRUint32 *aEndTimeReference); \
  NS_SCRIPTABLE NS_IMETHOD SetEndTimeReference(PRUint32 aEndTimeReference); \
  NS_SCRIPTABLE NS_IMETHOD GetHasEndTime(PRBool *aHasEndTime); \
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteEndTime(PRTime *aAbsoluteEndTime); \
  NS_SCRIPTABLE NS_IMETHOD GetSearchTerms(nsAString & aSearchTerms); \
  NS_SCRIPTABLE NS_IMETHOD SetSearchTerms(const nsAString & aSearchTerms); \
  NS_SCRIPTABLE NS_IMETHOD GetHasSearchTerms(PRBool *aHasSearchTerms); \
  NS_SCRIPTABLE NS_IMETHOD GetMinVisits(PRInt32 *aMinVisits); \
  NS_SCRIPTABLE NS_IMETHOD SetMinVisits(PRInt32 aMinVisits); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxVisits(PRInt32 *aMaxVisits); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxVisits(PRInt32 aMaxVisits); \
  NS_SCRIPTABLE NS_IMETHOD SetTransitions(const PRUint32 *transitions, PRUint32 count); \
  NS_SCRIPTABLE NS_IMETHOD GetTransitions(PRUint32 *count NS_OUTPARAM, PRUint32 **transitions NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransitionCount(PRUint32 *aTransitionCount); \
  NS_SCRIPTABLE NS_IMETHOD GetOnlyBookmarked(PRBool *aOnlyBookmarked); \
  NS_SCRIPTABLE NS_IMETHOD SetOnlyBookmarked(PRBool aOnlyBookmarked); \
  NS_SCRIPTABLE NS_IMETHOD GetDomainIsHost(PRBool *aDomainIsHost); \
  NS_SCRIPTABLE NS_IMETHOD SetDomainIsHost(PRBool aDomainIsHost); \
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsACString & aDomain); \
  NS_SCRIPTABLE NS_IMETHOD SetDomain(const nsACString & aDomain); \
  NS_SCRIPTABLE NS_IMETHOD GetHasDomain(PRBool *aHasDomain); \
  NS_SCRIPTABLE NS_IMETHOD GetUriIsPrefix(PRBool *aUriIsPrefix); \
  NS_SCRIPTABLE NS_IMETHOD SetUriIsPrefix(PRBool aUriIsPrefix); \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri); \
  NS_SCRIPTABLE NS_IMETHOD SetUri(nsIURI *aUri); \
  NS_SCRIPTABLE NS_IMETHOD GetHasUri(PRBool *aHasUri); \
  NS_SCRIPTABLE NS_IMETHOD GetAnnotationIsNot(PRBool *aAnnotationIsNot); \
  NS_SCRIPTABLE NS_IMETHOD SetAnnotationIsNot(PRBool aAnnotationIsNot); \
  NS_SCRIPTABLE NS_IMETHOD GetAnnotation(nsACString & aAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD SetAnnotation(const nsACString & aAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD GetHasAnnotation(PRBool *aHasAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsIVariant * *aTags); \
  NS_SCRIPTABLE NS_IMETHOD SetTags(nsIVariant *aTags); \
  NS_SCRIPTABLE NS_IMETHOD GetTagsAreNot(PRBool *aTagsAreNot); \
  NS_SCRIPTABLE NS_IMETHOD SetTagsAreNot(PRBool aTagsAreNot); \
  NS_SCRIPTABLE NS_IMETHOD GetFolders(PRUint32 *count NS_OUTPARAM, PRInt64 **folders NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFolderCount(PRUint32 *aFolderCount); \
  NS_SCRIPTABLE NS_IMETHOD SetFolders(const PRInt64 *folders, PRUint32 folderCount); \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQuery * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYQUERY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBeginTime(PRTime *aBeginTime) { return _to GetBeginTime(aBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetBeginTime(PRTime aBeginTime) { return _to SetBeginTime(aBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetBeginTimeReference(PRUint32 *aBeginTimeReference) { return _to GetBeginTimeReference(aBeginTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD SetBeginTimeReference(PRUint32 aBeginTimeReference) { return _to SetBeginTimeReference(aBeginTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasBeginTime(PRBool *aHasBeginTime) { return _to GetHasBeginTime(aHasBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteBeginTime(PRTime *aAbsoluteBeginTime) { return _to GetAbsoluteBeginTime(aAbsoluteBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndTime(PRTime *aEndTime) { return _to GetEndTime(aEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetEndTime(PRTime aEndTime) { return _to SetEndTime(aEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndTimeReference(PRUint32 *aEndTimeReference) { return _to GetEndTimeReference(aEndTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD SetEndTimeReference(PRUint32 aEndTimeReference) { return _to SetEndTimeReference(aEndTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasEndTime(PRBool *aHasEndTime) { return _to GetHasEndTime(aHasEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteEndTime(PRTime *aAbsoluteEndTime) { return _to GetAbsoluteEndTime(aAbsoluteEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchTerms(nsAString & aSearchTerms) { return _to GetSearchTerms(aSearchTerms); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchTerms(const nsAString & aSearchTerms) { return _to SetSearchTerms(aSearchTerms); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasSearchTerms(PRBool *aHasSearchTerms) { return _to GetHasSearchTerms(aHasSearchTerms); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinVisits(PRInt32 *aMinVisits) { return _to GetMinVisits(aMinVisits); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinVisits(PRInt32 aMinVisits) { return _to SetMinVisits(aMinVisits); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxVisits(PRInt32 *aMaxVisits) { return _to GetMaxVisits(aMaxVisits); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxVisits(PRInt32 aMaxVisits) { return _to SetMaxVisits(aMaxVisits); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransitions(const PRUint32 *transitions, PRUint32 count) { return _to SetTransitions(transitions, count); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransitions(PRUint32 *count NS_OUTPARAM, PRUint32 **transitions NS_OUTPARAM) { return _to GetTransitions(count, transitions); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransitionCount(PRUint32 *aTransitionCount) { return _to GetTransitionCount(aTransitionCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnlyBookmarked(PRBool *aOnlyBookmarked) { return _to GetOnlyBookmarked(aOnlyBookmarked); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnlyBookmarked(PRBool aOnlyBookmarked) { return _to SetOnlyBookmarked(aOnlyBookmarked); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomainIsHost(PRBool *aDomainIsHost) { return _to GetDomainIsHost(aDomainIsHost); } \
  NS_SCRIPTABLE NS_IMETHOD SetDomainIsHost(PRBool aDomainIsHost) { return _to SetDomainIsHost(aDomainIsHost); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsACString & aDomain) { return _to GetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD SetDomain(const nsACString & aDomain) { return _to SetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasDomain(PRBool *aHasDomain) { return _to GetHasDomain(aHasDomain); } \
  NS_SCRIPTABLE NS_IMETHOD GetUriIsPrefix(PRBool *aUriIsPrefix) { return _to GetUriIsPrefix(aUriIsPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD SetUriIsPrefix(PRBool aUriIsPrefix) { return _to SetUriIsPrefix(aUriIsPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri) { return _to GetUri(aUri); } \
  NS_SCRIPTABLE NS_IMETHOD SetUri(nsIURI *aUri) { return _to SetUri(aUri); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasUri(PRBool *aHasUri) { return _to GetHasUri(aHasUri); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnnotationIsNot(PRBool *aAnnotationIsNot) { return _to GetAnnotationIsNot(aAnnotationIsNot); } \
  NS_SCRIPTABLE NS_IMETHOD SetAnnotationIsNot(PRBool aAnnotationIsNot) { return _to SetAnnotationIsNot(aAnnotationIsNot); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnnotation(nsACString & aAnnotation) { return _to GetAnnotation(aAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetAnnotation(const nsACString & aAnnotation) { return _to SetAnnotation(aAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasAnnotation(PRBool *aHasAnnotation) { return _to GetHasAnnotation(aHasAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsIVariant * *aTags) { return _to GetTags(aTags); } \
  NS_SCRIPTABLE NS_IMETHOD SetTags(nsIVariant *aTags) { return _to SetTags(aTags); } \
  NS_SCRIPTABLE NS_IMETHOD GetTagsAreNot(PRBool *aTagsAreNot) { return _to GetTagsAreNot(aTagsAreNot); } \
  NS_SCRIPTABLE NS_IMETHOD SetTagsAreNot(PRBool aTagsAreNot) { return _to SetTagsAreNot(aTagsAreNot); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolders(PRUint32 *count NS_OUTPARAM, PRInt64 **folders NS_OUTPARAM) { return _to GetFolders(count, folders); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderCount(PRUint32 *aFolderCount) { return _to GetFolderCount(aFolderCount); } \
  NS_SCRIPTABLE NS_IMETHOD SetFolders(const PRInt64 *folders, PRUint32 folderCount) { return _to SetFolders(folders, folderCount); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQuery * *_retval NS_OUTPARAM) { return _to Clone(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYQUERY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBeginTime(PRTime *aBeginTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBeginTime(aBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetBeginTime(PRTime aBeginTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBeginTime(aBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetBeginTimeReference(PRUint32 *aBeginTimeReference) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBeginTimeReference(aBeginTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD SetBeginTimeReference(PRUint32 aBeginTimeReference) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBeginTimeReference(aBeginTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasBeginTime(PRBool *aHasBeginTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasBeginTime(aHasBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteBeginTime(PRTime *aAbsoluteBeginTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAbsoluteBeginTime(aAbsoluteBeginTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndTime(PRTime *aEndTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndTime(aEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetEndTime(PRTime aEndTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEndTime(aEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndTimeReference(PRUint32 *aEndTimeReference) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndTimeReference(aEndTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD SetEndTimeReference(PRUint32 aEndTimeReference) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEndTimeReference(aEndTimeReference); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasEndTime(PRBool *aHasEndTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasEndTime(aHasEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetAbsoluteEndTime(PRTime *aAbsoluteEndTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAbsoluteEndTime(aAbsoluteEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchTerms(nsAString & aSearchTerms) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchTerms(aSearchTerms); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchTerms(const nsAString & aSearchTerms) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchTerms(aSearchTerms); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasSearchTerms(PRBool *aHasSearchTerms) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasSearchTerms(aHasSearchTerms); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinVisits(PRInt32 *aMinVisits) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinVisits(aMinVisits); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinVisits(PRInt32 aMinVisits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinVisits(aMinVisits); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxVisits(PRInt32 *aMaxVisits) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxVisits(aMaxVisits); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxVisits(PRInt32 aMaxVisits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxVisits(aMaxVisits); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransitions(const PRUint32 *transitions, PRUint32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransitions(transitions, count); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransitions(PRUint32 *count NS_OUTPARAM, PRUint32 **transitions NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransitions(count, transitions); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransitionCount(PRUint32 *aTransitionCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransitionCount(aTransitionCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnlyBookmarked(PRBool *aOnlyBookmarked) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnlyBookmarked(aOnlyBookmarked); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnlyBookmarked(PRBool aOnlyBookmarked) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnlyBookmarked(aOnlyBookmarked); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomainIsHost(PRBool *aDomainIsHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomainIsHost(aDomainIsHost); } \
  NS_SCRIPTABLE NS_IMETHOD SetDomainIsHost(PRBool aDomainIsHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDomainIsHost(aDomainIsHost); } \
  NS_SCRIPTABLE NS_IMETHOD GetDomain(nsACString & aDomain) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD SetDomain(const nsACString & aDomain) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDomain(aDomain); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasDomain(PRBool *aHasDomain) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasDomain(aHasDomain); } \
  NS_SCRIPTABLE NS_IMETHOD GetUriIsPrefix(PRBool *aUriIsPrefix) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUriIsPrefix(aUriIsPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD SetUriIsPrefix(PRBool aUriIsPrefix) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUriIsPrefix(aUriIsPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUri(aUri); } \
  NS_SCRIPTABLE NS_IMETHOD SetUri(nsIURI *aUri) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUri(aUri); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasUri(PRBool *aHasUri) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasUri(aHasUri); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnnotationIsNot(PRBool *aAnnotationIsNot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnnotationIsNot(aAnnotationIsNot); } \
  NS_SCRIPTABLE NS_IMETHOD SetAnnotationIsNot(PRBool aAnnotationIsNot) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAnnotationIsNot(aAnnotationIsNot); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnnotation(nsACString & aAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnnotation(aAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetAnnotation(const nsACString & aAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAnnotation(aAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasAnnotation(PRBool *aHasAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasAnnotation(aHasAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetTags(nsIVariant * *aTags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTags(aTags); } \
  NS_SCRIPTABLE NS_IMETHOD SetTags(nsIVariant *aTags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTags(aTags); } \
  NS_SCRIPTABLE NS_IMETHOD GetTagsAreNot(PRBool *aTagsAreNot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTagsAreNot(aTagsAreNot); } \
  NS_SCRIPTABLE NS_IMETHOD SetTagsAreNot(PRBool aTagsAreNot) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTagsAreNot(aTagsAreNot); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolders(PRUint32 *count NS_OUTPARAM, PRInt64 **folders NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFolders(count, folders); } \
  NS_SCRIPTABLE NS_IMETHOD GetFolderCount(PRUint32 *aFolderCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFolderCount(aFolderCount); } \
  NS_SCRIPTABLE NS_IMETHOD SetFolders(const PRInt64 *folders, PRUint32 folderCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFolders(folders, folderCount); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQuery * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryQuery : public nsINavHistoryQuery
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYQUERY

  nsNavHistoryQuery();

private:
  ~nsNavHistoryQuery();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryQuery, nsINavHistoryQuery)

nsNavHistoryQuery::nsNavHistoryQuery()
{
  /* member initializers and constructor code */
}

nsNavHistoryQuery::~nsNavHistoryQuery()
{
  /* destructor code */
}

/* attribute PRTime beginTime; */
NS_IMETHODIMP nsNavHistoryQuery::GetBeginTime(PRTime *aBeginTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetBeginTime(PRTime aBeginTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long beginTimeReference; */
NS_IMETHODIMP nsNavHistoryQuery::GetBeginTimeReference(PRUint32 *aBeginTimeReference)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetBeginTimeReference(PRUint32 aBeginTimeReference)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasBeginTime; */
NS_IMETHODIMP nsNavHistoryQuery::GetHasBeginTime(PRBool *aHasBeginTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime absoluteBeginTime; */
NS_IMETHODIMP nsNavHistoryQuery::GetAbsoluteBeginTime(PRTime *aAbsoluteBeginTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRTime endTime; */
NS_IMETHODIMP nsNavHistoryQuery::GetEndTime(PRTime *aEndTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetEndTime(PRTime aEndTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long endTimeReference; */
NS_IMETHODIMP nsNavHistoryQuery::GetEndTimeReference(PRUint32 *aEndTimeReference)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetEndTimeReference(PRUint32 aEndTimeReference)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasEndTime; */
NS_IMETHODIMP nsNavHistoryQuery::GetHasEndTime(PRBool *aHasEndTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime absoluteEndTime; */
NS_IMETHODIMP nsNavHistoryQuery::GetAbsoluteEndTime(PRTime *aAbsoluteEndTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString searchTerms; */
NS_IMETHODIMP nsNavHistoryQuery::GetSearchTerms(nsAString & aSearchTerms)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetSearchTerms(const nsAString & aSearchTerms)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasSearchTerms; */
NS_IMETHODIMP nsNavHistoryQuery::GetHasSearchTerms(PRBool *aHasSearchTerms)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long minVisits; */
NS_IMETHODIMP nsNavHistoryQuery::GetMinVisits(PRInt32 *aMinVisits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetMinVisits(PRInt32 aMinVisits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxVisits; */
NS_IMETHODIMP nsNavHistoryQuery::GetMaxVisits(PRInt32 *aMaxVisits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetMaxVisits(PRInt32 aMaxVisits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTransitions ([array, size_is (count), const] in unsigned long transitions, in unsigned long count); */
NS_IMETHODIMP nsNavHistoryQuery::SetTransitions(const PRUint32 *transitions, PRUint32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getTransitions ([optional] out unsigned long count, [array, size_is (count), retval] out unsigned long transitions); */
NS_IMETHODIMP nsNavHistoryQuery::GetTransitions(PRUint32 *count NS_OUTPARAM, PRUint32 **transitions NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long transitionCount; */
NS_IMETHODIMP nsNavHistoryQuery::GetTransitionCount(PRUint32 *aTransitionCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean onlyBookmarked; */
NS_IMETHODIMP nsNavHistoryQuery::GetOnlyBookmarked(PRBool *aOnlyBookmarked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetOnlyBookmarked(PRBool aOnlyBookmarked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean domainIsHost; */
NS_IMETHODIMP nsNavHistoryQuery::GetDomainIsHost(PRBool *aDomainIsHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetDomainIsHost(PRBool aDomainIsHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String domain; */
NS_IMETHODIMP nsNavHistoryQuery::GetDomain(nsACString & aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetDomain(const nsACString & aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasDomain; */
NS_IMETHODIMP nsNavHistoryQuery::GetHasDomain(PRBool *aHasDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean uriIsPrefix; */
NS_IMETHODIMP nsNavHistoryQuery::GetUriIsPrefix(PRBool *aUriIsPrefix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetUriIsPrefix(PRBool aUriIsPrefix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI uri; */
NS_IMETHODIMP nsNavHistoryQuery::GetUri(nsIURI * *aUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetUri(nsIURI *aUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasUri; */
NS_IMETHODIMP nsNavHistoryQuery::GetHasUri(PRBool *aHasUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean annotationIsNot; */
NS_IMETHODIMP nsNavHistoryQuery::GetAnnotationIsNot(PRBool *aAnnotationIsNot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetAnnotationIsNot(PRBool aAnnotationIsNot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String annotation; */
NS_IMETHODIMP nsNavHistoryQuery::GetAnnotation(nsACString & aAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetAnnotation(const nsACString & aAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasAnnotation; */
NS_IMETHODIMP nsNavHistoryQuery::GetHasAnnotation(PRBool *aHasAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIVariant tags; */
NS_IMETHODIMP nsNavHistoryQuery::GetTags(nsIVariant * *aTags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetTags(nsIVariant *aTags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean tagsAreNot; */
NS_IMETHODIMP nsNavHistoryQuery::GetTagsAreNot(PRBool *aTagsAreNot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQuery::SetTagsAreNot(PRBool aTagsAreNot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getFolders ([optional] out unsigned long count, [array, size_is (count), retval] out long long folders); */
NS_IMETHODIMP nsNavHistoryQuery::GetFolders(PRUint32 *count NS_OUTPARAM, PRInt64 **folders NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long folderCount; */
NS_IMETHODIMP nsNavHistoryQuery::GetFolderCount(PRUint32 *aFolderCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFolders ([array, size_is (folderCount), const] in long long folders, in unsigned long folderCount); */
NS_IMETHODIMP nsNavHistoryQuery::SetFolders(const PRInt64 *folders, PRUint32 folderCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryQuery clone (); */
NS_IMETHODIMP nsNavHistoryQuery::Clone(nsINavHistoryQuery * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryQueryOptions */
#define NS_INAVHISTORYQUERYOPTIONS_IID_STR "2d8ff86b-f8c2-451c-8a1a-1ff0749a074e"

#define NS_INAVHISTORYQUERYOPTIONS_IID \
  {0x2d8ff86b, 0xf8c2, 0x451c, \
    { 0x8a, 0x1a, 0x1f, 0xf0, 0x74, 0x9a, 0x07, 0x4e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryQueryOptions : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYQUERYOPTIONS_IID)

  enum { SORT_BY_NONE = 0U };

  enum { SORT_BY_TITLE_ASCENDING = 1U };

  enum { SORT_BY_TITLE_DESCENDING = 2U };

  enum { SORT_BY_DATE_ASCENDING = 3U };

  enum { SORT_BY_DATE_DESCENDING = 4U };

  enum { SORT_BY_URI_ASCENDING = 5U };

  enum { SORT_BY_URI_DESCENDING = 6U };

  enum { SORT_BY_VISITCOUNT_ASCENDING = 7U };

  enum { SORT_BY_VISITCOUNT_DESCENDING = 8U };

  enum { SORT_BY_KEYWORD_ASCENDING = 9U };

  enum { SORT_BY_KEYWORD_DESCENDING = 10U };

  enum { SORT_BY_DATEADDED_ASCENDING = 11U };

  enum { SORT_BY_DATEADDED_DESCENDING = 12U };

  enum { SORT_BY_LASTMODIFIED_ASCENDING = 13U };

  enum { SORT_BY_LASTMODIFIED_DESCENDING = 14U };

  enum { SORT_BY_TAGS_ASCENDING = 17U };

  enum { SORT_BY_TAGS_DESCENDING = 18U };

  enum { SORT_BY_ANNOTATION_ASCENDING = 19U };

  enum { SORT_BY_ANNOTATION_DESCENDING = 20U };

  enum { SORT_BY_FRECENCY_ASCENDING = 21U };

  enum { SORT_BY_FRECENCY_DESCENDING = 22U };

  enum { RESULTS_AS_URI = 0U };

  enum { RESULTS_AS_VISIT = 1U };

  enum { RESULTS_AS_FULL_VISIT = 2U };

  enum { RESULTS_AS_DATE_QUERY = 3U };

  enum { RESULTS_AS_SITE_QUERY = 4U };

  enum { RESULTS_AS_DATE_SITE_QUERY = 5U };

  enum { RESULTS_AS_TAG_QUERY = 6U };

  enum { RESULTS_AS_TAG_CONTENTS = 7U };

  /* attribute unsigned short sortingMode; */
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode) = 0;

  /* attribute AUTF8String sortingAnnotation; */
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation) = 0;

  /* attribute unsigned short resultType; */
  NS_SCRIPTABLE NS_IMETHOD GetResultType(PRUint16 *aResultType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetResultType(PRUint16 aResultType) = 0;

  /* attribute boolean excludeItems; */
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItems(PRBool *aExcludeItems) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItems(PRBool aExcludeItems) = 0;

  /* attribute boolean excludeQueries; */
  NS_SCRIPTABLE NS_IMETHOD GetExcludeQueries(PRBool *aExcludeQueries) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExcludeQueries(PRBool aExcludeQueries) = 0;

  /* attribute boolean excludeReadOnlyFolders; */
  NS_SCRIPTABLE NS_IMETHOD GetExcludeReadOnlyFolders(PRBool *aExcludeReadOnlyFolders) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExcludeReadOnlyFolders(PRBool aExcludeReadOnlyFolders) = 0;

  /* attribute AUTF8String excludeItemIfParentHasAnnotation; */
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItemIfParentHasAnnotation(nsACString & aExcludeItemIfParentHasAnnotation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItemIfParentHasAnnotation(const nsACString & aExcludeItemIfParentHasAnnotation) = 0;

  /* attribute boolean expandQueries; */
  NS_SCRIPTABLE NS_IMETHOD GetExpandQueries(PRBool *aExpandQueries) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExpandQueries(PRBool aExpandQueries) = 0;

  /* attribute boolean includeHidden; */
  NS_SCRIPTABLE NS_IMETHOD GetIncludeHidden(PRBool *aIncludeHidden) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIncludeHidden(PRBool aIncludeHidden) = 0;

  enum { REDIRECTS_MODE_ALL = 0U };

  enum { REDIRECTS_MODE_SOURCE = 1U };

  enum { REDIRECTS_MODE_TARGET = 2U };

  /* attribute unsigned short redirectsMode; */
  NS_SCRIPTABLE NS_IMETHOD GetRedirectsMode(PRUint16 *aRedirectsMode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRedirectsMode(PRUint16 aRedirectsMode) = 0;

  /* attribute unsigned long maxResults; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxResults(PRUint32 *aMaxResults) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxResults(PRUint32 aMaxResults) = 0;

  enum { QUERY_TYPE_HISTORY = 0U };

  enum { QUERY_TYPE_BOOKMARKS = 1U };

  enum { QUERY_TYPE_UNIFIED = 2U };

  /* attribute unsigned short queryType; */
  NS_SCRIPTABLE NS_IMETHOD GetQueryType(PRUint16 *aQueryType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetQueryType(PRUint16 aQueryType) = 0;

  /* attribute boolean asyncEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetAsyncEnabled(PRBool *aAsyncEnabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAsyncEnabled(PRBool aAsyncEnabled) = 0;

  /* nsINavHistoryQueryOptions clone (); */
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryQueryOptions, NS_INAVHISTORYQUERYOPTIONS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYQUERYOPTIONS \
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode); \
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode); \
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD GetResultType(PRUint16 *aResultType); \
  NS_SCRIPTABLE NS_IMETHOD SetResultType(PRUint16 aResultType); \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItems(PRBool *aExcludeItems); \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItems(PRBool aExcludeItems); \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeQueries(PRBool *aExcludeQueries); \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeQueries(PRBool aExcludeQueries); \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeReadOnlyFolders(PRBool *aExcludeReadOnlyFolders); \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeReadOnlyFolders(PRBool aExcludeReadOnlyFolders); \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItemIfParentHasAnnotation(nsACString & aExcludeItemIfParentHasAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItemIfParentHasAnnotation(const nsACString & aExcludeItemIfParentHasAnnotation); \
  NS_SCRIPTABLE NS_IMETHOD GetExpandQueries(PRBool *aExpandQueries); \
  NS_SCRIPTABLE NS_IMETHOD SetExpandQueries(PRBool aExpandQueries); \
  NS_SCRIPTABLE NS_IMETHOD GetIncludeHidden(PRBool *aIncludeHidden); \
  NS_SCRIPTABLE NS_IMETHOD SetIncludeHidden(PRBool aIncludeHidden); \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectsMode(PRUint16 *aRedirectsMode); \
  NS_SCRIPTABLE NS_IMETHOD SetRedirectsMode(PRUint16 aRedirectsMode); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxResults(PRUint32 *aMaxResults); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxResults(PRUint32 aMaxResults); \
  NS_SCRIPTABLE NS_IMETHOD GetQueryType(PRUint16 *aQueryType); \
  NS_SCRIPTABLE NS_IMETHOD SetQueryType(PRUint16 aQueryType); \
  NS_SCRIPTABLE NS_IMETHOD GetAsyncEnabled(PRBool *aAsyncEnabled); \
  NS_SCRIPTABLE NS_IMETHOD SetAsyncEnabled(PRBool aAsyncEnabled); \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYQUERYOPTIONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode) { return _to GetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode) { return _to SetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation) { return _to GetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation) { return _to SetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetResultType(PRUint16 *aResultType) { return _to GetResultType(aResultType); } \
  NS_SCRIPTABLE NS_IMETHOD SetResultType(PRUint16 aResultType) { return _to SetResultType(aResultType); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItems(PRBool *aExcludeItems) { return _to GetExcludeItems(aExcludeItems); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItems(PRBool aExcludeItems) { return _to SetExcludeItems(aExcludeItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeQueries(PRBool *aExcludeQueries) { return _to GetExcludeQueries(aExcludeQueries); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeQueries(PRBool aExcludeQueries) { return _to SetExcludeQueries(aExcludeQueries); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeReadOnlyFolders(PRBool *aExcludeReadOnlyFolders) { return _to GetExcludeReadOnlyFolders(aExcludeReadOnlyFolders); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeReadOnlyFolders(PRBool aExcludeReadOnlyFolders) { return _to SetExcludeReadOnlyFolders(aExcludeReadOnlyFolders); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItemIfParentHasAnnotation(nsACString & aExcludeItemIfParentHasAnnotation) { return _to GetExcludeItemIfParentHasAnnotation(aExcludeItemIfParentHasAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItemIfParentHasAnnotation(const nsACString & aExcludeItemIfParentHasAnnotation) { return _to SetExcludeItemIfParentHasAnnotation(aExcludeItemIfParentHasAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetExpandQueries(PRBool *aExpandQueries) { return _to GetExpandQueries(aExpandQueries); } \
  NS_SCRIPTABLE NS_IMETHOD SetExpandQueries(PRBool aExpandQueries) { return _to SetExpandQueries(aExpandQueries); } \
  NS_SCRIPTABLE NS_IMETHOD GetIncludeHidden(PRBool *aIncludeHidden) { return _to GetIncludeHidden(aIncludeHidden); } \
  NS_SCRIPTABLE NS_IMETHOD SetIncludeHidden(PRBool aIncludeHidden) { return _to SetIncludeHidden(aIncludeHidden); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectsMode(PRUint16 *aRedirectsMode) { return _to GetRedirectsMode(aRedirectsMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetRedirectsMode(PRUint16 aRedirectsMode) { return _to SetRedirectsMode(aRedirectsMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxResults(PRUint32 *aMaxResults) { return _to GetMaxResults(aMaxResults); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxResults(PRUint32 aMaxResults) { return _to SetMaxResults(aMaxResults); } \
  NS_SCRIPTABLE NS_IMETHOD GetQueryType(PRUint16 *aQueryType) { return _to GetQueryType(aQueryType); } \
  NS_SCRIPTABLE NS_IMETHOD SetQueryType(PRUint16 aQueryType) { return _to SetQueryType(aQueryType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAsyncEnabled(PRBool *aAsyncEnabled) { return _to GetAsyncEnabled(aAsyncEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetAsyncEnabled(PRBool aAsyncEnabled) { return _to SetAsyncEnabled(aAsyncEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM) { return _to Clone(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYQUERYOPTIONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSortingMode(PRUint16 *aSortingMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingMode(PRUint16 aSortingMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSortingMode(aSortingMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortingAnnotation(nsACString & aSortingAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortingAnnotation(const nsACString & aSortingAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSortingAnnotation(aSortingAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetResultType(PRUint16 *aResultType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResultType(aResultType); } \
  NS_SCRIPTABLE NS_IMETHOD SetResultType(PRUint16 aResultType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResultType(aResultType); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItems(PRBool *aExcludeItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExcludeItems(aExcludeItems); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItems(PRBool aExcludeItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExcludeItems(aExcludeItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeQueries(PRBool *aExcludeQueries) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExcludeQueries(aExcludeQueries); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeQueries(PRBool aExcludeQueries) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExcludeQueries(aExcludeQueries); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeReadOnlyFolders(PRBool *aExcludeReadOnlyFolders) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExcludeReadOnlyFolders(aExcludeReadOnlyFolders); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeReadOnlyFolders(PRBool aExcludeReadOnlyFolders) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExcludeReadOnlyFolders(aExcludeReadOnlyFolders); } \
  NS_SCRIPTABLE NS_IMETHOD GetExcludeItemIfParentHasAnnotation(nsACString & aExcludeItemIfParentHasAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExcludeItemIfParentHasAnnotation(aExcludeItemIfParentHasAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetExcludeItemIfParentHasAnnotation(const nsACString & aExcludeItemIfParentHasAnnotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExcludeItemIfParentHasAnnotation(aExcludeItemIfParentHasAnnotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetExpandQueries(PRBool *aExpandQueries) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpandQueries(aExpandQueries); } \
  NS_SCRIPTABLE NS_IMETHOD SetExpandQueries(PRBool aExpandQueries) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExpandQueries(aExpandQueries); } \
  NS_SCRIPTABLE NS_IMETHOD GetIncludeHidden(PRBool *aIncludeHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIncludeHidden(aIncludeHidden); } \
  NS_SCRIPTABLE NS_IMETHOD SetIncludeHidden(PRBool aIncludeHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIncludeHidden(aIncludeHidden); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectsMode(PRUint16 *aRedirectsMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedirectsMode(aRedirectsMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetRedirectsMode(PRUint16 aRedirectsMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRedirectsMode(aRedirectsMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxResults(PRUint32 *aMaxResults) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxResults(aMaxResults); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxResults(PRUint32 aMaxResults) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxResults(aMaxResults); } \
  NS_SCRIPTABLE NS_IMETHOD GetQueryType(PRUint16 *aQueryType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetQueryType(aQueryType); } \
  NS_SCRIPTABLE NS_IMETHOD SetQueryType(PRUint16 aQueryType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetQueryType(aQueryType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAsyncEnabled(PRBool *aAsyncEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAsyncEnabled(aAsyncEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetAsyncEnabled(PRBool aAsyncEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAsyncEnabled(aAsyncEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryQueryOptions : public nsINavHistoryQueryOptions
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYQUERYOPTIONS

  nsNavHistoryQueryOptions();

private:
  ~nsNavHistoryQueryOptions();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryQueryOptions, nsINavHistoryQueryOptions)

nsNavHistoryQueryOptions::nsNavHistoryQueryOptions()
{
  /* member initializers and constructor code */
}

nsNavHistoryQueryOptions::~nsNavHistoryQueryOptions()
{
  /* destructor code */
}

/* attribute unsigned short sortingMode; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetSortingMode(PRUint16 *aSortingMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetSortingMode(PRUint16 aSortingMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String sortingAnnotation; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetSortingAnnotation(nsACString & aSortingAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetSortingAnnotation(const nsACString & aSortingAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned short resultType; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetResultType(PRUint16 *aResultType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetResultType(PRUint16 aResultType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean excludeItems; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetExcludeItems(PRBool *aExcludeItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetExcludeItems(PRBool aExcludeItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean excludeQueries; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetExcludeQueries(PRBool *aExcludeQueries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetExcludeQueries(PRBool aExcludeQueries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean excludeReadOnlyFolders; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetExcludeReadOnlyFolders(PRBool *aExcludeReadOnlyFolders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetExcludeReadOnlyFolders(PRBool aExcludeReadOnlyFolders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String excludeItemIfParentHasAnnotation; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetExcludeItemIfParentHasAnnotation(nsACString & aExcludeItemIfParentHasAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetExcludeItemIfParentHasAnnotation(const nsACString & aExcludeItemIfParentHasAnnotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean expandQueries; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetExpandQueries(PRBool *aExpandQueries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetExpandQueries(PRBool aExpandQueries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean includeHidden; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetIncludeHidden(PRBool *aIncludeHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetIncludeHidden(PRBool aIncludeHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned short redirectsMode; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetRedirectsMode(PRUint16 *aRedirectsMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetRedirectsMode(PRUint16 aRedirectsMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long maxResults; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetMaxResults(PRUint32 *aMaxResults)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetMaxResults(PRUint32 aMaxResults)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned short queryType; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetQueryType(PRUint16 *aQueryType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetQueryType(PRUint16 aQueryType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean asyncEnabled; */
NS_IMETHODIMP nsNavHistoryQueryOptions::GetAsyncEnabled(PRBool *aAsyncEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsNavHistoryQueryOptions::SetAsyncEnabled(PRBool aAsyncEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryQueryOptions clone (); */
NS_IMETHODIMP nsNavHistoryQueryOptions::Clone(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryService */
#define NS_INAVHISTORYSERVICE_IID_STR "562e698d-04f0-4df1-bd5d-1f1e5b84d7ef"

#define NS_INAVHISTORYSERVICE_IID \
  {0x562e698d, 0x04f0, 0x4df1, \
    { 0xbd, 0x5d, 0x1f, 0x1e, 0x5b, 0x84, 0xd7, 0xef }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYSERVICE_IID)

  enum { TRANSITION_LINK = 1U };

  enum { TRANSITION_TYPED = 2U };

  enum { TRANSITION_BOOKMARK = 3U };

  enum { TRANSITION_EMBED = 4U };

  enum { TRANSITION_REDIRECT_PERMANENT = 5U };

  enum { TRANSITION_REDIRECT_TEMPORARY = 6U };

  enum { TRANSITION_DOWNLOAD = 7U };

  enum { TRANSITION_FRAMED_LINK = 8U };

  enum { DATABASE_STATUS_OK = 0U };

  enum { DATABASE_STATUS_CREATE = 1U };

  enum { DATABASE_STATUS_CORRUPT = 2U };

  enum { DATABASE_STATUS_UPGRADED = 3U };

  /* readonly attribute unsigned short databaseStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseStatus(PRUint16 *aDatabaseStatus) = 0;

  /* readonly attribute boolean hasHistoryEntries; */
  NS_SCRIPTABLE NS_IMETHOD GetHasHistoryEntries(PRBool *aHasHistoryEntries) = 0;

  /* AString getPageTitle (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetPageTitle(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) = 0;

  /* void markPageAsFollowedBookmark (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD MarkPageAsFollowedBookmark(nsIURI *aURI) = 0;

  /* AString getCharsetForURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) = 0;

  /* void setCharsetForURI (in nsIURI aURI, in AString aCharset); */
  NS_SCRIPTABLE NS_IMETHOD SetCharsetForURI(nsIURI *aURI, const nsAString & aCharset) = 0;

  /* boolean canAddURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD CanAddURI(nsIURI *aURI, PRBool *_retval NS_OUTPARAM) = 0;

  /* long long addVisit (in nsIURI aURI, in PRTime aTime, in nsIURI aReferringURI, in long aTransitionType, in boolean aIsRedirect, in long long aSessionID); */
  NS_SCRIPTABLE NS_IMETHOD AddVisit(nsIURI *aURI, PRTime aTime, nsIURI *aReferringURI, PRInt32 aTransitionType, PRBool aIsRedirect, PRInt64 aSessionID, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* nsINavHistoryQuery getNewQuery (); */
  NS_SCRIPTABLE NS_IMETHOD GetNewQuery(nsINavHistoryQuery * *_retval NS_OUTPARAM) = 0;

  /* nsINavHistoryQueryOptions getNewQueryOptions (); */
  NS_SCRIPTABLE NS_IMETHOD GetNewQueryOptions(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM) = 0;

  /* nsINavHistoryResult executeQuery (in nsINavHistoryQuery aQuery, in nsINavHistoryQueryOptions options); */
  NS_SCRIPTABLE NS_IMETHOD ExecuteQuery(nsINavHistoryQuery *aQuery, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM) = 0;

  /* nsINavHistoryResult executeQueries ([array, size_is (aQueryCount)] in nsINavHistoryQuery aQueries, in unsigned long aQueryCount, in nsINavHistoryQueryOptions options); */
  NS_SCRIPTABLE NS_IMETHOD ExecuteQueries(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM) = 0;

  /* void queryStringToQueries (in AUTF8String aQueryString, [array, size_is (aResultCount)] out nsINavHistoryQuery aQueries, out unsigned long aResultCount, out nsINavHistoryQueryOptions options); */
  NS_SCRIPTABLE NS_IMETHOD QueryStringToQueries(const nsACString & aQueryString, nsINavHistoryQuery * **aQueries NS_OUTPARAM, PRUint32 *aResultCount NS_OUTPARAM, nsINavHistoryQueryOptions * *options NS_OUTPARAM) = 0;

  /* AUTF8String queriesToQueryString ([array, size_is (aQueryCount)] in nsINavHistoryQuery aQueries, in unsigned long aQueryCount, in nsINavHistoryQueryOptions options); */
  NS_SCRIPTABLE NS_IMETHOD QueriesToQueryString(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsACString & _retval NS_OUTPARAM) = 0;

  /* void addObserver (in nsINavHistoryObserver observer, in boolean ownsWeak); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryObserver *observer, PRBool ownsWeak) = 0;

  /* void removeObserver (in nsINavHistoryObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryObserver *observer) = 0;

  /* void runInBatchMode (in nsINavHistoryBatchCallback aCallback, in nsISupports aClosure); */
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aClosure) = 0;

  /* readonly attribute boolean historyDisabled; */
  NS_SCRIPTABLE NS_IMETHOD GetHistoryDisabled(PRBool *aHistoryDisabled) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryService, NS_INAVHISTORYSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseStatus(PRUint16 *aDatabaseStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetHasHistoryEntries(PRBool *aHasHistoryEntries); \
  NS_SCRIPTABLE NS_IMETHOD GetPageTitle(nsIURI *aURI, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MarkPageAsFollowedBookmark(nsIURI *aURI); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCharsetForURI(nsIURI *aURI, const nsAString & aCharset); \
  NS_SCRIPTABLE NS_IMETHOD CanAddURI(nsIURI *aURI, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddVisit(nsIURI *aURI, PRTime aTime, nsIURI *aReferringURI, PRInt32 aTransitionType, PRBool aIsRedirect, PRInt64 aSessionID, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNewQuery(nsINavHistoryQuery * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNewQueryOptions(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExecuteQuery(nsINavHistoryQuery *aQuery, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExecuteQueries(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD QueryStringToQueries(const nsACString & aQueryString, nsINavHistoryQuery * **aQueries NS_OUTPARAM, PRUint32 *aResultCount NS_OUTPARAM, nsINavHistoryQueryOptions * *options NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD QueriesToQueryString(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryObserver *observer, PRBool ownsWeak); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryObserver *observer); \
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aClosure); \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryDisabled(PRBool *aHistoryDisabled); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseStatus(PRUint16 *aDatabaseStatus) { return _to GetDatabaseStatus(aDatabaseStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasHistoryEntries(PRBool *aHasHistoryEntries) { return _to GetHasHistoryEntries(aHasHistoryEntries); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageTitle(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) { return _to GetPageTitle(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MarkPageAsFollowedBookmark(nsIURI *aURI) { return _to MarkPageAsFollowedBookmark(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) { return _to GetCharsetForURI(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharsetForURI(nsIURI *aURI, const nsAString & aCharset) { return _to SetCharsetForURI(aURI, aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD CanAddURI(nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return _to CanAddURI(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddVisit(nsIURI *aURI, PRTime aTime, nsIURI *aReferringURI, PRInt32 aTransitionType, PRBool aIsRedirect, PRInt64 aSessionID, PRInt64 *_retval NS_OUTPARAM) { return _to AddVisit(aURI, aTime, aReferringURI, aTransitionType, aIsRedirect, aSessionID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewQuery(nsINavHistoryQuery * *_retval NS_OUTPARAM) { return _to GetNewQuery(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewQueryOptions(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM) { return _to GetNewQueryOptions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteQuery(nsINavHistoryQuery *aQuery, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM) { return _to ExecuteQuery(aQuery, options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteQueries(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM) { return _to ExecuteQueries(aQueries, aQueryCount, options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD QueryStringToQueries(const nsACString & aQueryString, nsINavHistoryQuery * **aQueries NS_OUTPARAM, PRUint32 *aResultCount NS_OUTPARAM, nsINavHistoryQueryOptions * *options NS_OUTPARAM) { return _to QueryStringToQueries(aQueryString, aQueries, aResultCount, options); } \
  NS_SCRIPTABLE NS_IMETHOD QueriesToQueryString(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsACString & _retval NS_OUTPARAM) { return _to QueriesToQueryString(aQueries, aQueryCount, options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryObserver *observer, PRBool ownsWeak) { return _to AddObserver(observer, ownsWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryObserver *observer) { return _to RemoveObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aClosure) { return _to RunInBatchMode(aCallback, aClosure); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryDisabled(PRBool *aHistoryDisabled) { return _to GetHistoryDisabled(aHistoryDisabled); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseStatus(PRUint16 *aDatabaseStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatabaseStatus(aDatabaseStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasHistoryEntries(PRBool *aHasHistoryEntries) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasHistoryEntries(aHasHistoryEntries); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageTitle(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageTitle(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MarkPageAsFollowedBookmark(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkPageAsFollowedBookmark(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetForURI(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharsetForURI(nsIURI *aURI, const nsAString & aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharsetForURI(aURI, aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD CanAddURI(nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanAddURI(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddVisit(nsIURI *aURI, PRTime aTime, nsIURI *aReferringURI, PRInt32 aTransitionType, PRBool aIsRedirect, PRInt64 aSessionID, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddVisit(aURI, aTime, aReferringURI, aTransitionType, aIsRedirect, aSessionID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewQuery(nsINavHistoryQuery * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewQuery(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewQueryOptions(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewQueryOptions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteQuery(nsINavHistoryQuery *aQuery, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExecuteQuery(aQuery, options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteQueries(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExecuteQueries(aQueries, aQueryCount, options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD QueryStringToQueries(const nsACString & aQueryString, nsINavHistoryQuery * **aQueries NS_OUTPARAM, PRUint32 *aResultCount NS_OUTPARAM, nsINavHistoryQueryOptions * *options NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->QueryStringToQueries(aQueryString, aQueries, aResultCount, options); } \
  NS_SCRIPTABLE NS_IMETHOD QueriesToQueryString(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->QueriesToQueryString(aQueries, aQueryCount, options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsINavHistoryObserver *observer, PRBool ownsWeak) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(observer, ownsWeak); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsINavHistoryObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aClosure) { return !_to ? NS_ERROR_NULL_POINTER : _to->RunInBatchMode(aCallback, aClosure); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryDisabled(PRBool *aHistoryDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistoryDisabled(aHistoryDisabled); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryService : public nsINavHistoryService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYSERVICE

  nsNavHistoryService();

private:
  ~nsNavHistoryService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryService, nsINavHistoryService)

nsNavHistoryService::nsNavHistoryService()
{
  /* member initializers and constructor code */
}

nsNavHistoryService::~nsNavHistoryService()
{
  /* destructor code */
}

/* readonly attribute unsigned short databaseStatus; */
NS_IMETHODIMP nsNavHistoryService::GetDatabaseStatus(PRUint16 *aDatabaseStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasHistoryEntries; */
NS_IMETHODIMP nsNavHistoryService::GetHasHistoryEntries(PRBool *aHasHistoryEntries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getPageTitle (in nsIURI aURI); */
NS_IMETHODIMP nsNavHistoryService::GetPageTitle(nsIURI *aURI, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void markPageAsFollowedBookmark (in nsIURI aURI); */
NS_IMETHODIMP nsNavHistoryService::MarkPageAsFollowedBookmark(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getCharsetForURI (in nsIURI aURI); */
NS_IMETHODIMP nsNavHistoryService::GetCharsetForURI(nsIURI *aURI, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCharsetForURI (in nsIURI aURI, in AString aCharset); */
NS_IMETHODIMP nsNavHistoryService::SetCharsetForURI(nsIURI *aURI, const nsAString & aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canAddURI (in nsIURI aURI); */
NS_IMETHODIMP nsNavHistoryService::CanAddURI(nsIURI *aURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long long addVisit (in nsIURI aURI, in PRTime aTime, in nsIURI aReferringURI, in long aTransitionType, in boolean aIsRedirect, in long long aSessionID); */
NS_IMETHODIMP nsNavHistoryService::AddVisit(nsIURI *aURI, PRTime aTime, nsIURI *aReferringURI, PRInt32 aTransitionType, PRBool aIsRedirect, PRInt64 aSessionID, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryQuery getNewQuery (); */
NS_IMETHODIMP nsNavHistoryService::GetNewQuery(nsINavHistoryQuery * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryQueryOptions getNewQueryOptions (); */
NS_IMETHODIMP nsNavHistoryService::GetNewQueryOptions(nsINavHistoryQueryOptions * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryResult executeQuery (in nsINavHistoryQuery aQuery, in nsINavHistoryQueryOptions options); */
NS_IMETHODIMP nsNavHistoryService::ExecuteQuery(nsINavHistoryQuery *aQuery, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsINavHistoryResult executeQueries ([array, size_is (aQueryCount)] in nsINavHistoryQuery aQueries, in unsigned long aQueryCount, in nsINavHistoryQueryOptions options); */
NS_IMETHODIMP nsNavHistoryService::ExecuteQueries(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsINavHistoryResult * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void queryStringToQueries (in AUTF8String aQueryString, [array, size_is (aResultCount)] out nsINavHistoryQuery aQueries, out unsigned long aResultCount, out nsINavHistoryQueryOptions options); */
NS_IMETHODIMP nsNavHistoryService::QueryStringToQueries(const nsACString & aQueryString, nsINavHistoryQuery * **aQueries NS_OUTPARAM, PRUint32 *aResultCount NS_OUTPARAM, nsINavHistoryQueryOptions * *options NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String queriesToQueryString ([array, size_is (aQueryCount)] in nsINavHistoryQuery aQueries, in unsigned long aQueryCount, in nsINavHistoryQueryOptions options); */
NS_IMETHODIMP nsNavHistoryService::QueriesToQueryString(nsINavHistoryQuery **aQueries, PRUint32 aQueryCount, nsINavHistoryQueryOptions *options, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in nsINavHistoryObserver observer, in boolean ownsWeak); */
NS_IMETHODIMP nsNavHistoryService::AddObserver(nsINavHistoryObserver *observer, PRBool ownsWeak)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in nsINavHistoryObserver observer); */
NS_IMETHODIMP nsNavHistoryService::RemoveObserver(nsINavHistoryObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void runInBatchMode (in nsINavHistoryBatchCallback aCallback, in nsISupports aClosure); */
NS_IMETHODIMP nsNavHistoryService::RunInBatchMode(nsINavHistoryBatchCallback *aCallback, nsISupports *aClosure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean historyDisabled; */
NS_IMETHODIMP nsNavHistoryService::GetHistoryDisabled(PRBool *aHistoryDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINavHistoryBatchCallback */
#define NS_INAVHISTORYBATCHCALLBACK_IID_STR "5143f2bb-be0a-4faf-9acb-b0ed3f82952c"

#define NS_INAVHISTORYBATCHCALLBACK_IID \
  {0x5143f2bb, 0xbe0a, 0x4faf, \
    { 0x9a, 0xcb, 0xb0, 0xed, 0x3f, 0x82, 0x95, 0x2c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINavHistoryBatchCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INAVHISTORYBATCHCALLBACK_IID)

  /* void runBatched (in nsISupports aUserData); */
  NS_SCRIPTABLE NS_IMETHOD RunBatched(nsISupports *aUserData) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINavHistoryBatchCallback, NS_INAVHISTORYBATCHCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINAVHISTORYBATCHCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD RunBatched(nsISupports *aUserData); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINAVHISTORYBATCHCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD RunBatched(nsISupports *aUserData) { return _to RunBatched(aUserData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINAVHISTORYBATCHCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD RunBatched(nsISupports *aUserData) { return !_to ? NS_ERROR_NULL_POINTER : _to->RunBatched(aUserData); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNavHistoryBatchCallback : public nsINavHistoryBatchCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINAVHISTORYBATCHCALLBACK

  nsNavHistoryBatchCallback();

private:
  ~nsNavHistoryBatchCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNavHistoryBatchCallback, nsINavHistoryBatchCallback)

nsNavHistoryBatchCallback::nsNavHistoryBatchCallback()
{
  /* member initializers and constructor code */
}

nsNavHistoryBatchCallback::~nsNavHistoryBatchCallback()
{
  /* destructor code */
}

/* void runBatched (in nsISupports aUserData); */
NS_IMETHODIMP nsNavHistoryBatchCallback::RunBatched(nsISupports *aUserData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsINavHistoryService_h__ */
