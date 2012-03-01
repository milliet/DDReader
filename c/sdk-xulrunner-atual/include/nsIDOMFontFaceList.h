/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/layout/inspector/public/nsIDOMFontFaceList.idl
 */

#ifndef __gen_nsIDOMFontFaceList_h__
#define __gen_nsIDOMFontFaceList_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMFontFace; /* forward declaration */


/* starting interface:    nsIDOMFontFaceList */
#define NS_IDOMFONTFACELIST_IID_STR "2538579c-9472-4fd9-8dc1-d44ce4c1b7ba"

#define NS_IDOMFONTFACELIST_IID \
  {0x2538579c, 0x9472, 0x4fd9, \
    { 0x8d, 0xc1, 0xd4, 0x4c, 0xe4, 0xc1, 0xb7, 0xba }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMFontFaceList : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFONTFACELIST_IID)

  /* nsIDOMFontFace item (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMFontFace * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFontFaceList, NS_IDOMFONTFACELIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFONTFACELIST \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMFontFace * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFONTFACELIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMFontFace * *_retval NS_OUTPARAM) { return _to Item(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFONTFACELIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMFontFace * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFontFaceList : public nsIDOMFontFaceList
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFONTFACELIST

  nsDOMFontFaceList();

private:
  ~nsDOMFontFaceList();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMFontFaceList, nsIDOMFontFaceList)

nsDOMFontFaceList::nsDOMFontFaceList()
{
  /* member initializers and constructor code */
}

nsDOMFontFaceList::~nsDOMFontFaceList()
{
  /* destructor code */
}

/* nsIDOMFontFace item (in unsigned long index); */
NS_IMETHODIMP nsDOMFontFaceList::Item(PRUint32 index, nsIDOMFontFace * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMFontFaceList::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMFontFaceList_h__ */
