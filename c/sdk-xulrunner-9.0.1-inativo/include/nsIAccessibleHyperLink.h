/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleHyperLink.idl
 */

#ifndef __gen_nsIAccessibleHyperLink_h__
#define __gen_nsIAccessibleHyperLink_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIAccessible; /* forward declaration */


/* starting interface:    nsIAccessibleHyperLink */
#define NS_IACCESSIBLEHYPERLINK_IID_STR "38c60bfa-6040-4bfe-93f2-acd6a909bb60"

#define NS_IACCESSIBLEHYPERLINK_IID \
  {0x38c60bfa, 0x6040, 0x4bfe, \
    { 0x93, 0xf2, 0xac, 0xd6, 0xa9, 0x09, 0xbb, 0x60 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleHyperLink : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEHYPERLINK_IID)

  /* readonly attribute long startIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetStartIndex(PRInt32 *aStartIndex) = 0;

  /* readonly attribute long endIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetEndIndex(PRInt32 *aEndIndex) = 0;

  /* readonly attribute boolean valid; */
  NS_SCRIPTABLE NS_IMETHOD GetValid(PRBool *aValid) = 0;

  /* readonly attribute boolean selected; */
  NS_SCRIPTABLE NS_IMETHOD GetSelected(PRBool *aSelected) = 0;

  /* readonly attribute long anchorCount; */
  NS_SCRIPTABLE NS_IMETHOD GetAnchorCount(PRInt32 *aAnchorCount) = 0;

  /* nsIURI getURI (in long index); */
  NS_SCRIPTABLE NS_IMETHOD GetURI(PRInt32 index, nsIURI * *_retval NS_OUTPARAM) = 0;

  /* nsIAccessible getAnchor (in long index); */
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleHyperLink, NS_IACCESSIBLEHYPERLINK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEHYPERLINK \
  NS_SCRIPTABLE NS_IMETHOD GetStartIndex(PRInt32 *aStartIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetEndIndex(PRInt32 *aEndIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetValid(PRBool *aValid); \
  NS_SCRIPTABLE NS_IMETHOD GetSelected(PRBool *aSelected); \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorCount(PRInt32 *aAnchorCount); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(PRInt32 index, nsIURI * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEHYPERLINK(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStartIndex(PRInt32 *aStartIndex) { return _to GetStartIndex(aStartIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndIndex(PRInt32 *aEndIndex) { return _to GetEndIndex(aEndIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetValid(PRBool *aValid) { return _to GetValid(aValid); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelected(PRBool *aSelected) { return _to GetSelected(aSelected); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorCount(PRInt32 *aAnchorCount) { return _to GetAnchorCount(aAnchorCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(PRInt32 index, nsIURI * *_retval NS_OUTPARAM) { return _to GetURI(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM) { return _to GetAnchor(index, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEHYPERLINK(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStartIndex(PRInt32 *aStartIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartIndex(aStartIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndIndex(PRInt32 *aEndIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndIndex(aEndIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetValid(PRBool *aValid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValid(aValid); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelected(PRBool *aSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelected(aSelected); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorCount(PRInt32 *aAnchorCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchorCount(aAnchorCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(PRInt32 index, nsIURI * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchor(index, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleHyperLink : public nsIAccessibleHyperLink
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEHYPERLINK

  nsAccessibleHyperLink();

private:
  ~nsAccessibleHyperLink();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleHyperLink, nsIAccessibleHyperLink)

nsAccessibleHyperLink::nsAccessibleHyperLink()
{
  /* member initializers and constructor code */
}

nsAccessibleHyperLink::~nsAccessibleHyperLink()
{
  /* destructor code */
}

/* readonly attribute long startIndex; */
NS_IMETHODIMP nsAccessibleHyperLink::GetStartIndex(PRInt32 *aStartIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long endIndex; */
NS_IMETHODIMP nsAccessibleHyperLink::GetEndIndex(PRInt32 *aEndIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean valid; */
NS_IMETHODIMP nsAccessibleHyperLink::GetValid(PRBool *aValid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean selected; */
NS_IMETHODIMP nsAccessibleHyperLink::GetSelected(PRBool *aSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long anchorCount; */
NS_IMETHODIMP nsAccessibleHyperLink::GetAnchorCount(PRInt32 *aAnchorCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getURI (in long index); */
NS_IMETHODIMP nsAccessibleHyperLink::GetURI(PRInt32 index, nsIURI * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessible getAnchor (in long index); */
NS_IMETHODIMP nsAccessibleHyperLink::GetAnchor(PRInt32 index, nsIAccessible * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleHyperLink_h__ */
