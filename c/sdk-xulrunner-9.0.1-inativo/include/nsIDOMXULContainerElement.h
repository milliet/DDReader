/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/xul/nsIDOMXULContainerElement.idl
 */

#ifndef __gen_nsIDOMXULContainerElement_h__
#define __gen_nsIDOMXULContainerElement_h__


#ifndef __gen_nsIDOMXULElement_h__
#include "nsIDOMXULElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMXULContainerElement; /* forward declaration */


/* starting interface:    nsIDOMXULContainerItemElement */
#define NS_IDOMXULCONTAINERITEMELEMENT_IID_STR "e5457dc5-878b-4587-9b90-428303408df4"

#define NS_IDOMXULCONTAINERITEMELEMENT_IID \
  {0xe5457dc5, 0x878b, 0x4587, \
    { 0x9b, 0x90, 0x42, 0x83, 0x03, 0x40, 0x8d, 0xf4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMXULContainerItemElement : public nsIDOMXULElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULCONTAINERITEMELEMENT_IID)

  /* readonly attribute nsIDOMXULContainerElement parentContainer; */
  NS_SCRIPTABLE NS_IMETHOD GetParentContainer(nsIDOMXULContainerElement * *aParentContainer) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULContainerItemElement, NS_IDOMXULCONTAINERITEMELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULCONTAINERITEMELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetParentContainer(nsIDOMXULContainerElement * *aParentContainer); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULCONTAINERITEMELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParentContainer(nsIDOMXULContainerElement * *aParentContainer) { return _to GetParentContainer(aParentContainer); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULCONTAINERITEMELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParentContainer(nsIDOMXULContainerElement * *aParentContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentContainer(aParentContainer); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULContainerItemElement : public nsIDOMXULContainerItemElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULCONTAINERITEMELEMENT

  nsDOMXULContainerItemElement();

private:
  ~nsDOMXULContainerItemElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMXULContainerItemElement, nsIDOMXULContainerItemElement)

nsDOMXULContainerItemElement::nsDOMXULContainerItemElement()
{
  /* member initializers and constructor code */
}

nsDOMXULContainerItemElement::~nsDOMXULContainerItemElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMXULContainerElement parentContainer; */
NS_IMETHODIMP nsDOMXULContainerItemElement::GetParentContainer(nsIDOMXULContainerElement * *aParentContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMXULContainerElement */
#define NS_IDOMXULCONTAINERELEMENT_IID_STR "1ab35621-3a7f-4aa8-b9b8-222dea0b0536"

#define NS_IDOMXULCONTAINERELEMENT_IID \
  {0x1ab35621, 0x3a7f, 0x4aa8, \
    { 0xb9, 0xb8, 0x22, 0x2d, 0xea, 0x0b, 0x05, 0x36 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMXULContainerElement : public nsIDOMXULContainerItemElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULCONTAINERELEMENT_IID)

  /* nsIDOMXULElement appendItem (in DOMString aLabel, in DOMString aValue); */
  NS_SCRIPTABLE NS_IMETHOD AppendItem(const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMXULElement insertItemAt (in long aIndex, in DOMString aLabel, in DOMString aValue); */
  NS_SCRIPTABLE NS_IMETHOD InsertItemAt(PRInt32 aIndex, const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMXULElement removeItemAt (in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD RemoveItemAt(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long itemCount; */
  NS_SCRIPTABLE NS_IMETHOD GetItemCount(PRUint32 *aItemCount) = 0;

  /* long getIndexOfItem (in nsIDOMXULElement aItem); */
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfItem(nsIDOMXULElement *aItem, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* nsIDOMXULElement getItemAtIndex (in long aIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetItemAtIndex(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULContainerElement, NS_IDOMXULCONTAINERELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULCONTAINERELEMENT \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertItemAt(PRInt32 aIndex, const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveItemAt(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetItemCount(PRUint32 *aItemCount); \
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfItem(nsIDOMXULElement *aItem, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetItemAtIndex(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULCONTAINERELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM) { return _to AppendItem(aLabel, aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertItemAt(PRInt32 aIndex, const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM) { return _to InsertItemAt(aIndex, aLabel, aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItemAt(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM) { return _to RemoveItemAt(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemCount(PRUint32 *aItemCount) { return _to GetItemCount(aItemCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfItem(nsIDOMXULElement *aItem, PRInt32 *_retval NS_OUTPARAM) { return _to GetIndexOfItem(aItem, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemAtIndex(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM) { return _to GetItemAtIndex(aIndex, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULCONTAINERELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendItem(aLabel, aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertItemAt(PRInt32 aIndex, const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertItemAt(aIndex, aLabel, aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItemAt(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveItemAt(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemCount(PRUint32 *aItemCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemCount(aItemCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfItem(nsIDOMXULElement *aItem, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndexOfItem(aItem, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItemAtIndex(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemAtIndex(aIndex, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULContainerElement : public nsIDOMXULContainerElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULCONTAINERELEMENT

  nsDOMXULContainerElement();

private:
  ~nsDOMXULContainerElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMXULContainerElement, nsIDOMXULContainerElement)

nsDOMXULContainerElement::nsDOMXULContainerElement()
{
  /* member initializers and constructor code */
}

nsDOMXULContainerElement::~nsDOMXULContainerElement()
{
  /* destructor code */
}

/* nsIDOMXULElement appendItem (in DOMString aLabel, in DOMString aValue); */
NS_IMETHODIMP nsDOMXULContainerElement::AppendItem(const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULElement insertItemAt (in long aIndex, in DOMString aLabel, in DOMString aValue); */
NS_IMETHODIMP nsDOMXULContainerElement::InsertItemAt(PRInt32 aIndex, const nsAString & aLabel, const nsAString & aValue, nsIDOMXULElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULElement removeItemAt (in long aIndex); */
NS_IMETHODIMP nsDOMXULContainerElement::RemoveItemAt(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long itemCount; */
NS_IMETHODIMP nsDOMXULContainerElement::GetItemCount(PRUint32 *aItemCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getIndexOfItem (in nsIDOMXULElement aItem); */
NS_IMETHODIMP nsDOMXULContainerElement::GetIndexOfItem(nsIDOMXULElement *aItem, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULElement getItemAtIndex (in long aIndex); */
NS_IMETHODIMP nsDOMXULContainerElement::GetItemAtIndex(PRInt32 aIndex, nsIDOMXULElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXULContainerElement_h__ */
