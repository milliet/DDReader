/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMNSHTMLElement.idl
 */

#ifndef __gen_nsIDOMNSHTMLElement_h__
#define __gen_nsIDOMNSHTMLElement_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMStringMap; /* forward declaration */

class nsIDOMHTMLMenuElement; /* forward declaration */


/* starting interface:    nsIDOMNSHTMLElement */
#define NS_IDOMNSHTMLELEMENT_IID_STR "38305156-007a-4b68-8592-b1c3625c6f6c"

#define NS_IDOMNSHTMLELEMENT_IID \
  {0x38305156, 0x007a, 0x4b68, \
    { 0x85, 0x92, 0xb1, 0xc3, 0x62, 0x5c, 0x6f, 0x6c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNSHTMLElement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNSHTMLELEMENT_IID)

  /* readonly attribute long offsetTop; */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetTop(PRInt32 *aOffsetTop) = 0;

  /* readonly attribute long offsetLeft; */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLeft(PRInt32 *aOffsetLeft) = 0;

  /* readonly attribute long offsetWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetWidth(PRInt32 *aOffsetWidth) = 0;

  /* readonly attribute long offsetHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetHeight(PRInt32 *aOffsetHeight) = 0;

  /* readonly attribute nsIDOMElement offsetParent; */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetParent(nsIDOMElement * *aOffsetParent) = 0;

  /* attribute DOMString innerHTML; */
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInnerHTML(const nsAString & aInnerHTML) = 0;

  /* attribute boolean hidden; */
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden) = 0;

  /* attribute long tabIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) = 0;

  /* attribute DOMString contentEditable; */
  NS_SCRIPTABLE NS_IMETHOD GetContentEditable(nsAString & aContentEditable) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentEditable(const nsAString & aContentEditable) = 0;

  /* readonly attribute boolean isContentEditable; */
  NS_SCRIPTABLE NS_IMETHOD GetIsContentEditable(PRBool *aIsContentEditable) = 0;

  /* attribute boolean draggable; */
  NS_SCRIPTABLE NS_IMETHOD GetDraggable(PRBool *aDraggable) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDraggable(PRBool aDraggable) = 0;

  /* void insertAdjacentHTML (in DOMString position, in DOMString text) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD InsertAdjacentHTML(const nsAString & position, const nsAString & text) = 0;

  /* [optional_argc] void scrollIntoView ([optional] in boolean top); */
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRBool top, PRUint8 _argc) = 0;

  /* readonly attribute nsIDOMHTMLMenuElement contextMenu; */
  NS_SCRIPTABLE NS_IMETHOD GetContextMenu(nsIDOMHTMLMenuElement * *aContextMenu) = 0;

  /* attribute boolean spellcheck; */
  NS_SCRIPTABLE NS_IMETHOD GetSpellcheck(PRBool *aSpellcheck) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheck(PRBool aSpellcheck) = 0;

  /* readonly attribute nsIDOMDOMStringMap dataset; */
  NS_SCRIPTABLE NS_IMETHOD GetDataset(nsIDOMDOMStringMap * *aDataset) = 0;

  /* void mozRequestFullScreen (); */
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNSHTMLElement, NS_IDOMNSHTMLELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNSHTMLELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetTop(PRInt32 *aOffsetTop); \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLeft(PRInt32 *aOffsetLeft); \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetWidth(PRInt32 *aOffsetWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetHeight(PRInt32 *aOffsetHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetParent(nsIDOMElement * *aOffsetParent); \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML); \
  NS_SCRIPTABLE NS_IMETHOD SetInnerHTML(const nsAString & aInnerHTML); \
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden); \
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden); \
  NS_SCRIPTABLE NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex); \
  NS_SCRIPTABLE NS_IMETHOD SetTabIndex(PRInt32 aTabIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetContentEditable(nsAString & aContentEditable); \
  NS_SCRIPTABLE NS_IMETHOD SetContentEditable(const nsAString & aContentEditable); \
  NS_SCRIPTABLE NS_IMETHOD GetIsContentEditable(PRBool *aIsContentEditable); \
  NS_SCRIPTABLE NS_IMETHOD GetDraggable(PRBool *aDraggable); \
  NS_SCRIPTABLE NS_IMETHOD SetDraggable(PRBool aDraggable); \
  NS_SCRIPTABLE NS_IMETHOD InsertAdjacentHTML(const nsAString & position, const nsAString & text); \
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRBool top, PRUint8 _argc); \
  NS_SCRIPTABLE NS_IMETHOD GetContextMenu(nsIDOMHTMLMenuElement * *aContextMenu); \
  NS_SCRIPTABLE NS_IMETHOD GetSpellcheck(PRBool *aSpellcheck); \
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheck(PRBool aSpellcheck); \
  NS_SCRIPTABLE NS_IMETHOD GetDataset(nsIDOMDOMStringMap * *aDataset); \
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNSHTMLELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetTop(PRInt32 *aOffsetTop) { return _to GetOffsetTop(aOffsetTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLeft(PRInt32 *aOffsetLeft) { return _to GetOffsetLeft(aOffsetLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetWidth(PRInt32 *aOffsetWidth) { return _to GetOffsetWidth(aOffsetWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetHeight(PRInt32 *aOffsetHeight) { return _to GetOffsetHeight(aOffsetHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetParent(nsIDOMElement * *aOffsetParent) { return _to GetOffsetParent(aOffsetParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML) { return _to GetInnerHTML(aInnerHTML); } \
  NS_SCRIPTABLE NS_IMETHOD SetInnerHTML(const nsAString & aInnerHTML) { return _to SetInnerHTML(aInnerHTML); } \
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden) { return _to GetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden) { return _to SetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return _to GetTabIndex(aTabIndex); } \
  NS_SCRIPTABLE NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return _to SetTabIndex(aTabIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentEditable(nsAString & aContentEditable) { return _to GetContentEditable(aContentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentEditable(const nsAString & aContentEditable) { return _to SetContentEditable(aContentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsContentEditable(PRBool *aIsContentEditable) { return _to GetIsContentEditable(aIsContentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetDraggable(PRBool *aDraggable) { return _to GetDraggable(aDraggable); } \
  NS_SCRIPTABLE NS_IMETHOD SetDraggable(PRBool aDraggable) { return _to SetDraggable(aDraggable); } \
  NS_SCRIPTABLE NS_IMETHOD InsertAdjacentHTML(const nsAString & position, const nsAString & text) { return _to InsertAdjacentHTML(position, text); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRBool top, PRUint8 _argc) { return _to ScrollIntoView(top, _argc); } \
  NS_SCRIPTABLE NS_IMETHOD GetContextMenu(nsIDOMHTMLMenuElement * *aContextMenu) { return _to GetContextMenu(aContextMenu); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpellcheck(PRBool *aSpellcheck) { return _to GetSpellcheck(aSpellcheck); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheck(PRBool aSpellcheck) { return _to SetSpellcheck(aSpellcheck); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataset(nsIDOMDOMStringMap * *aDataset) { return _to GetDataset(aDataset); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void) { return _to MozRequestFullScreen(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNSHTMLELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetTop(PRInt32 *aOffsetTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetTop(aOffsetTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLeft(PRInt32 *aOffsetLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetLeft(aOffsetLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetWidth(PRInt32 *aOffsetWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetWidth(aOffsetWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetHeight(PRInt32 *aOffsetHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetHeight(aOffsetHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetParent(nsIDOMElement * *aOffsetParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetParent(aOffsetParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHTML(nsAString & aInnerHTML) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerHTML(aInnerHTML); } \
  NS_SCRIPTABLE NS_IMETHOD SetInnerHTML(const nsAString & aInnerHTML) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInnerHTML(aInnerHTML); } \
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD GetTabIndex(PRInt32 *aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabIndex(aTabIndex); } \
  NS_SCRIPTABLE NS_IMETHOD SetTabIndex(PRInt32 aTabIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabIndex(aTabIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentEditable(nsAString & aContentEditable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentEditable(aContentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentEditable(const nsAString & aContentEditable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentEditable(aContentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsContentEditable(PRBool *aIsContentEditable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsContentEditable(aIsContentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetDraggable(PRBool *aDraggable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDraggable(aDraggable); } \
  NS_SCRIPTABLE NS_IMETHOD SetDraggable(PRBool aDraggable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDraggable(aDraggable); } \
  NS_SCRIPTABLE NS_IMETHOD InsertAdjacentHTML(const nsAString & position, const nsAString & text) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertAdjacentHTML(position, text); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRBool top, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollIntoView(top, _argc); } \
  NS_SCRIPTABLE NS_IMETHOD GetContextMenu(nsIDOMHTMLMenuElement * *aContextMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContextMenu(aContextMenu); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpellcheck(PRBool *aSpellcheck) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpellcheck(aSpellcheck); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheck(PRBool aSpellcheck) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSpellcheck(aSpellcheck); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataset(nsIDOMDOMStringMap * *aDataset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataset(aDataset); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestFullScreen(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozRequestFullScreen(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNSHTMLElement : public nsIDOMNSHTMLElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNSHTMLELEMENT

  nsDOMNSHTMLElement();

private:
  ~nsDOMNSHTMLElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNSHTMLElement, nsIDOMNSHTMLElement)

nsDOMNSHTMLElement::nsDOMNSHTMLElement()
{
  /* member initializers and constructor code */
}

nsDOMNSHTMLElement::~nsDOMNSHTMLElement()
{
  /* destructor code */
}

/* readonly attribute long offsetTop; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetOffsetTop(PRInt32 *aOffsetTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long offsetLeft; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetOffsetLeft(PRInt32 *aOffsetLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long offsetWidth; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetOffsetWidth(PRInt32 *aOffsetWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long offsetHeight; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetOffsetHeight(PRInt32 *aOffsetHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement offsetParent; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetOffsetParent(nsIDOMElement * *aOffsetParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString innerHTML; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetInnerHTML(nsAString & aInnerHTML)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSHTMLElement::SetInnerHTML(const nsAString & aInnerHTML)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean hidden; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetHidden(PRBool *aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSHTMLElement::SetHidden(PRBool aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long tabIndex; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetTabIndex(PRInt32 *aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSHTMLElement::SetTabIndex(PRInt32 aTabIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString contentEditable; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetContentEditable(nsAString & aContentEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSHTMLElement::SetContentEditable(const nsAString & aContentEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isContentEditable; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetIsContentEditable(PRBool *aIsContentEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean draggable; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetDraggable(PRBool *aDraggable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSHTMLElement::SetDraggable(PRBool aDraggable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertAdjacentHTML (in DOMString position, in DOMString text) raises (DOMException); */
NS_IMETHODIMP nsDOMNSHTMLElement::InsertAdjacentHTML(const nsAString & position, const nsAString & text)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void scrollIntoView ([optional] in boolean top); */
NS_IMETHODIMP nsDOMNSHTMLElement::ScrollIntoView(PRBool top, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLMenuElement contextMenu; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetContextMenu(nsIDOMHTMLMenuElement * *aContextMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean spellcheck; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetSpellcheck(PRBool *aSpellcheck)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSHTMLElement::SetSpellcheck(PRBool aSpellcheck)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMStringMap dataset; */
NS_IMETHODIMP nsDOMNSHTMLElement::GetDataset(nsIDOMDOMStringMap * *aDataset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozRequestFullScreen (); */
NS_IMETHODIMP nsDOMNSHTMLElement::MozRequestFullScreen()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNSHTMLElement_h__ */
