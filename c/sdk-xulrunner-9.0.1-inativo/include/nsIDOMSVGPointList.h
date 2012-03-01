/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGPointList.idl
 */

#ifndef __gen_nsIDOMSVGPointList_h__
#define __gen_nsIDOMSVGPointList_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGPoint; /* forward declaration */


/* starting interface:    nsIDOMSVGPointList */
#define NS_IDOMSVGPOINTLIST_IID_STR "7bb28750-7238-4083-b5f4-4def4646a637"

#define NS_IDOMSVGPOINTLIST_IID \
  {0x7bb28750, 0x7238, 0x4083, \
    { 0xb5, 0xf4, 0x4d, 0xef, 0x46, 0x46, 0xa6, 0x37 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGPointList : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGPOINTLIST_IID)

  /* readonly attribute unsigned long numberOfItems; */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* void clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(void) = 0;

  /* nsIDOMSVGPoint initialize (in nsIDOMSVGPoint newItem); */
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGPoint getItem (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGPoint insertItemBefore (in nsIDOMSVGPoint newItem, in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGPoint replaceItem (in nsIDOMSVGPoint newItem, in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGPoint removeItem (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGPoint appendItem (in nsIDOMSVGPoint newItem); */
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGPointList, NS_IDOMSVGPOINTLIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGPOINTLIST \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD Clear(void); \
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGPOINTLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems) { return _to GetNumberOfItems(aNumberOfItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return _to Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return _to Initialize(newItem, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return _to GetItem(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return _to InsertItemBefore(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return _to ReplaceItem(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return _to RemoveItem(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return _to AppendItem(newItem, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGPOINTLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfItems(aNumberOfItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Initialize(newItem, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItem(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertItemBefore(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceItem(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveItem(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendItem(newItem, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGPointList : public nsIDOMSVGPointList
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGPOINTLIST

  nsDOMSVGPointList();

private:
  ~nsDOMSVGPointList();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGPointList, nsIDOMSVGPointList)

nsDOMSVGPointList::nsDOMSVGPointList()
{
  /* member initializers and constructor code */
}

nsDOMSVGPointList::~nsDOMSVGPointList()
{
  /* destructor code */
}

/* readonly attribute unsigned long numberOfItems; */
NS_IMETHODIMP nsDOMSVGPointList::GetNumberOfItems(PRUint32 *aNumberOfItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMSVGPointList::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clear (); */
NS_IMETHODIMP nsDOMSVGPointList::Clear()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGPoint initialize (in nsIDOMSVGPoint newItem); */
NS_IMETHODIMP nsDOMSVGPointList::Initialize(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGPoint getItem (in unsigned long index); */
NS_IMETHODIMP nsDOMSVGPointList::GetItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGPoint insertItemBefore (in nsIDOMSVGPoint newItem, in unsigned long index); */
NS_IMETHODIMP nsDOMSVGPointList::InsertItemBefore(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGPoint replaceItem (in nsIDOMSVGPoint newItem, in unsigned long index); */
NS_IMETHODIMP nsDOMSVGPointList::ReplaceItem(nsIDOMSVGPoint *newItem, PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGPoint removeItem (in unsigned long index); */
NS_IMETHODIMP nsDOMSVGPointList::RemoveItem(PRUint32 index, nsIDOMSVGPoint * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGPoint appendItem (in nsIDOMSVGPoint newItem); */
NS_IMETHODIMP nsDOMSVGPointList::AppendItem(nsIDOMSVGPoint *newItem, nsIDOMSVGPoint * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGPointList_h__ */
