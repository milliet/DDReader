/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessNode.idl
 */

#ifndef __gen_nsIAccessNode_h__
#define __gen_nsIAccessNode_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMNode; /* forward declaration */

class nsIAccessibleDocument; /* forward declaration */

class nsIDOMCSSPrimitiveValue; /* forward declaration */


/* starting interface:    nsIAccessNode */
#define NS_IACCESSNODE_IID_STR "bbbd5a68-bad2-48c1-ab09-beb6c34f03d9"

#define NS_IACCESSNODE_IID \
  {0xbbbd5a68, 0xbad2, 0x48c1, \
    { 0xab, 0x09, 0xbe, 0xb6, 0xc3, 0x4f, 0x03, 0xd9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessNode : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSNODE_IID)

  /* readonly attribute nsIDOMNode DOMNode; */
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode) = 0;

  /* readonly attribute nsIAccessibleDocument document; */
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIAccessibleDocument * *aDocument) = 0;

  /* readonly attribute nsIAccessibleDocument rootDocument; */
  NS_SCRIPTABLE NS_IMETHOD GetRootDocument(nsIAccessibleDocument * *aRootDocument) = 0;

  /* readonly attribute DOMString innerHTML; */
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML) = 0;

  /* void scrollTo (in unsigned long aScrollType); */
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRUint32 aScrollType) = 0;

  /* void scrollToPoint (in unsigned long aCoordinateType, in long aX, in long aY); */
  NS_SCRIPTABLE NS_IMETHOD ScrollToPoint(PRUint32 aCoordinateType, PRInt32 aX, PRInt32 aY) = 0;

  /* [noscript] readonly attribute voidPtr uniqueID; */
  NS_IMETHOD GetUniqueID(void **aUniqueID) = 0;

  /* DOMString getComputedStyleValue (in DOMString pseudoElt, in DOMString propertyName); */
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleValue(const nsAString & pseudoElt, const nsAString & propertyName, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIDOMCSSPrimitiveValue getComputedStyleCSSValue (in DOMString pseudoElt, in DOMString propertyName); */
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleCSSValue(const nsAString & pseudoElt, const nsAString & propertyName, nsIDOMCSSPrimitiveValue * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute DOMString language; */
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessNode, NS_IACCESSNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSNODE \
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode); \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIAccessibleDocument * *aDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetRootDocument(nsIAccessibleDocument * *aRootDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML); \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRUint32 aScrollType); \
  NS_SCRIPTABLE NS_IMETHOD ScrollToPoint(PRUint32 aCoordinateType, PRInt32 aX, PRInt32 aY); \
  NS_IMETHOD GetUniqueID(void **aUniqueID); \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleValue(const nsAString & pseudoElt, const nsAString & propertyName, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleCSSValue(const nsAString & pseudoElt, const nsAString & propertyName, nsIDOMCSSPrimitiveValue * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode) { return _to GetDOMNode(aDOMNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIAccessibleDocument * *aDocument) { return _to GetDocument(aDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootDocument(nsIAccessibleDocument * *aRootDocument) { return _to GetRootDocument(aRootDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML) { return _to GetInnerHTML(aInnerHTML); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRUint32 aScrollType) { return _to ScrollTo(aScrollType); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollToPoint(PRUint32 aCoordinateType, PRInt32 aX, PRInt32 aY) { return _to ScrollToPoint(aCoordinateType, aX, aY); } \
  NS_IMETHOD GetUniqueID(void **aUniqueID) { return _to GetUniqueID(aUniqueID); } \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleValue(const nsAString & pseudoElt, const nsAString & propertyName, nsAString & _retval NS_OUTPARAM) { return _to GetComputedStyleValue(pseudoElt, propertyName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleCSSValue(const nsAString & pseudoElt, const nsAString & propertyName, nsIDOMCSSPrimitiveValue * *_retval NS_OUTPARAM) { return _to GetComputedStyleCSSValue(pseudoElt, propertyName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage) { return _to GetLanguage(aLanguage); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOMNode(aDOMNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIAccessibleDocument * *aDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocument(aDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootDocument(nsIAccessibleDocument * *aRootDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootDocument(aRootDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerHTML(aInnerHTML); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRUint32 aScrollType) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollTo(aScrollType); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollToPoint(PRUint32 aCoordinateType, PRInt32 aX, PRInt32 aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollToPoint(aCoordinateType, aX, aY); } \
  NS_IMETHOD GetUniqueID(void **aUniqueID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUniqueID(aUniqueID); } \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleValue(const nsAString & pseudoElt, const nsAString & propertyName, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetComputedStyleValue(pseudoElt, propertyName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyleCSSValue(const nsAString & pseudoElt, const nsAString & propertyName, nsIDOMCSSPrimitiveValue * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetComputedStyleCSSValue(pseudoElt, propertyName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(nsAString & aLanguage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLanguage(aLanguage); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessNode : public nsIAccessNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSNODE

  nsAccessNode();

private:
  ~nsAccessNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessNode, nsIAccessNode)

nsAccessNode::nsAccessNode()
{
  /* member initializers and constructor code */
}

nsAccessNode::~nsAccessNode()
{
  /* destructor code */
}

/* readonly attribute nsIDOMNode DOMNode; */
NS_IMETHODIMP nsAccessNode::GetDOMNode(nsIDOMNode * *aDOMNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessibleDocument document; */
NS_IMETHODIMP nsAccessNode::GetDocument(nsIAccessibleDocument * *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessibleDocument rootDocument; */
NS_IMETHODIMP nsAccessNode::GetRootDocument(nsIAccessibleDocument * *aRootDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString innerHTML; */
NS_IMETHODIMP nsAccessNode::GetInnerHTML(nsAString & aInnerHTML)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollTo (in unsigned long aScrollType); */
NS_IMETHODIMP nsAccessNode::ScrollTo(PRUint32 aScrollType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollToPoint (in unsigned long aCoordinateType, in long aX, in long aY); */
NS_IMETHODIMP nsAccessNode::ScrollToPoint(PRUint32 aCoordinateType, PRInt32 aX, PRInt32 aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute voidPtr uniqueID; */
NS_IMETHODIMP nsAccessNode::GetUniqueID(void **aUniqueID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getComputedStyleValue (in DOMString pseudoElt, in DOMString propertyName); */
NS_IMETHODIMP nsAccessNode::GetComputedStyleValue(const nsAString & pseudoElt, const nsAString & propertyName, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMCSSPrimitiveValue getComputedStyleCSSValue (in DOMString pseudoElt, in DOMString propertyName); */
NS_IMETHODIMP nsAccessNode::GetComputedStyleCSSValue(const nsAString & pseudoElt, const nsAString & propertyName, nsIDOMCSSPrimitiveValue * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString language; */
NS_IMETHODIMP nsAccessNode::GetLanguage(nsAString & aLanguage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessNode_h__ */
