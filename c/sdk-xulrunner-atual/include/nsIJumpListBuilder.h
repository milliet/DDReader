/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsIJumpListBuilder.idl
 */

#ifndef __gen_nsIJumpListBuilder_h__
#define __gen_nsIJumpListBuilder_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIMutableArray; /* forward declaration */


/* starting interface:    nsIJumpListBuilder */
#define NS_IJUMPLISTBUILDER_IID_STR "1fe6a9cd-2b18-4dd5-a176-c2b32fa4f683"

#define NS_IJUMPLISTBUILDER_IID \
  {0x1fe6a9cd, 0x2b18, 0x4dd5, \
    { 0xa1, 0x76, 0xc2, 0xb3, 0x2f, 0xa4, 0xf6, 0x83 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIJumpListBuilder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IJUMPLISTBUILDER_IID)

  enum { JUMPLIST_CATEGORY_TASKS = 0 };

  enum { JUMPLIST_CATEGORY_RECENT = 1 };

  enum { JUMPLIST_CATEGORY_FREQUENT = 2 };

  enum { JUMPLIST_CATEGORY_CUSTOMLIST = 3 };

  /* readonly attribute short available; */
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRInt16 *aAvailable) = 0;

  /* readonly attribute boolean isListCommitted; */
  NS_SCRIPTABLE NS_IMETHOD GetIsListCommitted(PRBool *aIsListCommitted) = 0;

  /* readonly attribute short maxListItems; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxListItems(PRInt16 *aMaxListItems) = 0;

  /* boolean initListBuild (in nsIMutableArray removedItems); */
  NS_SCRIPTABLE NS_IMETHOD InitListBuild(nsIMutableArray *removedItems, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean addListToBuild (in short aCatType, [optional] in nsIArray items, [optional] in AString catName); */
  NS_SCRIPTABLE NS_IMETHOD AddListToBuild(PRInt16 aCatType, nsIArray *items, const nsAString & catName, PRBool *_retval NS_OUTPARAM) = 0;

  /* void abortListBuild (); */
  NS_SCRIPTABLE NS_IMETHOD AbortListBuild(void) = 0;

  /* boolean commitListBuild (); */
  NS_SCRIPTABLE NS_IMETHOD CommitListBuild(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean deleteActiveList (); */
  NS_SCRIPTABLE NS_IMETHOD DeleteActiveList(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIJumpListBuilder, NS_IJUMPLISTBUILDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIJUMPLISTBUILDER \
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRInt16 *aAvailable); \
  NS_SCRIPTABLE NS_IMETHOD GetIsListCommitted(PRBool *aIsListCommitted); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxListItems(PRInt16 *aMaxListItems); \
  NS_SCRIPTABLE NS_IMETHOD InitListBuild(nsIMutableArray *removedItems, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddListToBuild(PRInt16 aCatType, nsIArray *items, const nsAString & catName, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AbortListBuild(void); \
  NS_SCRIPTABLE NS_IMETHOD CommitListBuild(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DeleteActiveList(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIJUMPLISTBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRInt16 *aAvailable) { return _to GetAvailable(aAvailable); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsListCommitted(PRBool *aIsListCommitted) { return _to GetIsListCommitted(aIsListCommitted); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxListItems(PRInt16 *aMaxListItems) { return _to GetMaxListItems(aMaxListItems); } \
  NS_SCRIPTABLE NS_IMETHOD InitListBuild(nsIMutableArray *removedItems, PRBool *_retval NS_OUTPARAM) { return _to InitListBuild(removedItems, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddListToBuild(PRInt16 aCatType, nsIArray *items, const nsAString & catName, PRBool *_retval NS_OUTPARAM) { return _to AddListToBuild(aCatType, items, catName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AbortListBuild(void) { return _to AbortListBuild(); } \
  NS_SCRIPTABLE NS_IMETHOD CommitListBuild(PRBool *_retval NS_OUTPARAM) { return _to CommitListBuild(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteActiveList(PRBool *_retval NS_OUTPARAM) { return _to DeleteActiveList(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIJUMPLISTBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAvailable(PRInt16 *aAvailable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailable(aAvailable); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsListCommitted(PRBool *aIsListCommitted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsListCommitted(aIsListCommitted); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxListItems(PRInt16 *aMaxListItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxListItems(aMaxListItems); } \
  NS_SCRIPTABLE NS_IMETHOD InitListBuild(nsIMutableArray *removedItems, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitListBuild(removedItems, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddListToBuild(PRInt16 aCatType, nsIArray *items, const nsAString & catName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListToBuild(aCatType, items, catName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AbortListBuild(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AbortListBuild(); } \
  NS_SCRIPTABLE NS_IMETHOD CommitListBuild(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CommitListBuild(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteActiveList(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteActiveList(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsJumpListBuilder : public nsIJumpListBuilder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIJUMPLISTBUILDER

  nsJumpListBuilder();

private:
  ~nsJumpListBuilder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsJumpListBuilder, nsIJumpListBuilder)

nsJumpListBuilder::nsJumpListBuilder()
{
  /* member initializers and constructor code */
}

nsJumpListBuilder::~nsJumpListBuilder()
{
  /* destructor code */
}

/* readonly attribute short available; */
NS_IMETHODIMP nsJumpListBuilder::GetAvailable(PRInt16 *aAvailable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isListCommitted; */
NS_IMETHODIMP nsJumpListBuilder::GetIsListCommitted(PRBool *aIsListCommitted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short maxListItems; */
NS_IMETHODIMP nsJumpListBuilder::GetMaxListItems(PRInt16 *aMaxListItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean initListBuild (in nsIMutableArray removedItems); */
NS_IMETHODIMP nsJumpListBuilder::InitListBuild(nsIMutableArray *removedItems, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean addListToBuild (in short aCatType, [optional] in nsIArray items, [optional] in AString catName); */
NS_IMETHODIMP nsJumpListBuilder::AddListToBuild(PRInt16 aCatType, nsIArray *items, const nsAString & catName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abortListBuild (); */
NS_IMETHODIMP nsJumpListBuilder::AbortListBuild()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean commitListBuild (); */
NS_IMETHODIMP nsJumpListBuilder::CommitListBuild(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean deleteActiveList (); */
NS_IMETHODIMP nsJumpListBuilder::DeleteActiveList(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIJumpListBuilder_h__ */
