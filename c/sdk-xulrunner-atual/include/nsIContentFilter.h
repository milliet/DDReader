/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/idl/nsIContentFilter.idl
 */

#ifndef __gen_nsIContentFilter_h__
#define __gen_nsIContentFilter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURL; /* forward declaration */


/* starting interface:    nsIContentFilter */
#define NS_ICONTENTFILTER_IID_STR "c18c49a8-62f0-4045-9884-4aa91e388f14"

#define NS_ICONTENTFILTER_IID \
  {0xc18c49a8, 0x62f0, 0x4045, \
    { 0x98, 0x84, 0x4a, 0xa9, 0x1e, 0x38, 0x8f, 0x14 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentFilter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTFILTER_IID)

  /* void notifyOfInsertion (in AString mimeType, in nsIURL contentSourceURL, in nsIDOMDocument sourceDocument, in boolean willDeleteSelection, inout nsIDOMNode docFragment, inout nsIDOMNode contentStartNode, inout long contentStartOffset, inout nsIDOMNode contentEndNode, inout long contentEndOffset, inout nsIDOMNode insertionPointNode, inout long insertionPointOffset, out boolean continueWithInsertion); */
  NS_SCRIPTABLE NS_IMETHOD NotifyOfInsertion(const nsAString & mimeType, nsIURL *contentSourceURL, nsIDOMDocument *sourceDocument, PRBool willDeleteSelection, nsIDOMNode * *docFragment NS_INOUTPARAM, nsIDOMNode * *contentStartNode NS_INOUTPARAM, PRInt32 *contentStartOffset NS_INOUTPARAM, nsIDOMNode * *contentEndNode NS_INOUTPARAM, PRInt32 *contentEndOffset NS_INOUTPARAM, nsIDOMNode * *insertionPointNode NS_INOUTPARAM, PRInt32 *insertionPointOffset NS_INOUTPARAM, PRBool *continueWithInsertion NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentFilter, NS_ICONTENTFILTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTFILTER \
  NS_SCRIPTABLE NS_IMETHOD NotifyOfInsertion(const nsAString & mimeType, nsIURL *contentSourceURL, nsIDOMDocument *sourceDocument, PRBool willDeleteSelection, nsIDOMNode * *docFragment NS_INOUTPARAM, nsIDOMNode * *contentStartNode NS_INOUTPARAM, PRInt32 *contentStartOffset NS_INOUTPARAM, nsIDOMNode * *contentEndNode NS_INOUTPARAM, PRInt32 *contentEndOffset NS_INOUTPARAM, nsIDOMNode * *insertionPointNode NS_INOUTPARAM, PRInt32 *insertionPointOffset NS_INOUTPARAM, PRBool *continueWithInsertion NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTFILTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NotifyOfInsertion(const nsAString & mimeType, nsIURL *contentSourceURL, nsIDOMDocument *sourceDocument, PRBool willDeleteSelection, nsIDOMNode * *docFragment NS_INOUTPARAM, nsIDOMNode * *contentStartNode NS_INOUTPARAM, PRInt32 *contentStartOffset NS_INOUTPARAM, nsIDOMNode * *contentEndNode NS_INOUTPARAM, PRInt32 *contentEndOffset NS_INOUTPARAM, nsIDOMNode * *insertionPointNode NS_INOUTPARAM, PRInt32 *insertionPointOffset NS_INOUTPARAM, PRBool *continueWithInsertion NS_OUTPARAM) { return _to NotifyOfInsertion(mimeType, contentSourceURL, sourceDocument, willDeleteSelection, docFragment, contentStartNode, contentStartOffset, contentEndNode, contentEndOffset, insertionPointNode, insertionPointOffset, continueWithInsertion); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTFILTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD NotifyOfInsertion(const nsAString & mimeType, nsIURL *contentSourceURL, nsIDOMDocument *sourceDocument, PRBool willDeleteSelection, nsIDOMNode * *docFragment NS_INOUTPARAM, nsIDOMNode * *contentStartNode NS_INOUTPARAM, PRInt32 *contentStartOffset NS_INOUTPARAM, nsIDOMNode * *contentEndNode NS_INOUTPARAM, PRInt32 *contentEndOffset NS_INOUTPARAM, nsIDOMNode * *insertionPointNode NS_INOUTPARAM, PRInt32 *insertionPointOffset NS_INOUTPARAM, PRBool *continueWithInsertion NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyOfInsertion(mimeType, contentSourceURL, sourceDocument, willDeleteSelection, docFragment, contentStartNode, contentStartOffset, contentEndNode, contentEndOffset, insertionPointNode, insertionPointOffset, continueWithInsertion); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentFilter : public nsIContentFilter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTFILTER

  nsContentFilter();

private:
  ~nsContentFilter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentFilter, nsIContentFilter)

nsContentFilter::nsContentFilter()
{
  /* member initializers and constructor code */
}

nsContentFilter::~nsContentFilter()
{
  /* destructor code */
}

/* void notifyOfInsertion (in AString mimeType, in nsIURL contentSourceURL, in nsIDOMDocument sourceDocument, in boolean willDeleteSelection, inout nsIDOMNode docFragment, inout nsIDOMNode contentStartNode, inout long contentStartOffset, inout nsIDOMNode contentEndNode, inout long contentEndOffset, inout nsIDOMNode insertionPointNode, inout long insertionPointOffset, out boolean continueWithInsertion); */
NS_IMETHODIMP nsContentFilter::NotifyOfInsertion(const nsAString & mimeType, nsIURL *contentSourceURL, nsIDOMDocument *sourceDocument, PRBool willDeleteSelection, nsIDOMNode * *docFragment NS_INOUTPARAM, nsIDOMNode * *contentStartNode NS_INOUTPARAM, PRInt32 *contentStartOffset NS_INOUTPARAM, nsIDOMNode * *contentEndNode NS_INOUTPARAM, PRInt32 *contentEndOffset NS_INOUTPARAM, nsIDOMNode * *insertionPointNode NS_INOUTPARAM, PRInt32 *insertionPointOffset NS_INOUTPARAM, PRBool *continueWithInsertion NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIContentFilter_h__ */
