/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/layout/xul/base/public/nsIMenuBoxObject.idl
 */

#ifndef __gen_nsIMenuBoxObject_h__
#define __gen_nsIMenuBoxObject_h__


#ifndef __gen_nsIBoxObject_h__
#include "nsIBoxObject.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMElement; /* forward declaration */

class nsIDOMKeyEvent; /* forward declaration */


/* starting interface:    nsIMenuBoxObject */
#define NS_IMENUBOXOBJECT_IID_STR "689ebf3d-0184-450a-9bfa-5a26be0e7a8c"

#define NS_IMENUBOXOBJECT_IID \
  {0x689ebf3d, 0x0184, 0x450a, \
    { 0x9b, 0xfa, 0x5a, 0x26, 0xbe, 0x0e, 0x7a, 0x8c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMenuBoxObject : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMENUBOXOBJECT_IID)

  /* void openMenu (in boolean openFlag); */
  NS_SCRIPTABLE NS_IMETHOD OpenMenu(PRBool openFlag) = 0;

  /* attribute nsIDOMElement activeChild; */
  NS_SCRIPTABLE NS_IMETHOD GetActiveChild(nsIDOMElement * *aActiveChild) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetActiveChild(nsIDOMElement *aActiveChild) = 0;

  /* boolean handleKeyPress (in nsIDOMKeyEvent keyEvent); */
  NS_SCRIPTABLE NS_IMETHOD HandleKeyPress(nsIDOMKeyEvent *keyEvent, PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean openedWithKey; */
  NS_SCRIPTABLE NS_IMETHOD GetOpenedWithKey(PRBool *aOpenedWithKey) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMenuBoxObject, NS_IMENUBOXOBJECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMENUBOXOBJECT \
  NS_SCRIPTABLE NS_IMETHOD OpenMenu(PRBool openFlag); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveChild(nsIDOMElement * *aActiveChild); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveChild(nsIDOMElement *aActiveChild); \
  NS_SCRIPTABLE NS_IMETHOD HandleKeyPress(nsIDOMKeyEvent *keyEvent, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOpenedWithKey(PRBool *aOpenedWithKey); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMENUBOXOBJECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenMenu(PRBool openFlag) { return _to OpenMenu(openFlag); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveChild(nsIDOMElement * *aActiveChild) { return _to GetActiveChild(aActiveChild); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveChild(nsIDOMElement *aActiveChild) { return _to SetActiveChild(aActiveChild); } \
  NS_SCRIPTABLE NS_IMETHOD HandleKeyPress(nsIDOMKeyEvent *keyEvent, PRBool *_retval NS_OUTPARAM) { return _to HandleKeyPress(keyEvent, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOpenedWithKey(PRBool *aOpenedWithKey) { return _to GetOpenedWithKey(aOpenedWithKey); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMENUBOXOBJECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenMenu(PRBool openFlag) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenMenu(openFlag); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveChild(nsIDOMElement * *aActiveChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveChild(aActiveChild); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveChild(nsIDOMElement *aActiveChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveChild(aActiveChild); } \
  NS_SCRIPTABLE NS_IMETHOD HandleKeyPress(nsIDOMKeyEvent *keyEvent, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HandleKeyPress(keyEvent, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOpenedWithKey(PRBool *aOpenedWithKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOpenedWithKey(aOpenedWithKey); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMenuBoxObject : public nsIMenuBoxObject
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMENUBOXOBJECT

  nsMenuBoxObject();

private:
  ~nsMenuBoxObject();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMenuBoxObject, nsIMenuBoxObject)

nsMenuBoxObject::nsMenuBoxObject()
{
  /* member initializers and constructor code */
}

nsMenuBoxObject::~nsMenuBoxObject()
{
  /* destructor code */
}

/* void openMenu (in boolean openFlag); */
NS_IMETHODIMP nsMenuBoxObject::OpenMenu(PRBool openFlag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMElement activeChild; */
NS_IMETHODIMP nsMenuBoxObject::GetActiveChild(nsIDOMElement * *aActiveChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMenuBoxObject::SetActiveChild(nsIDOMElement *aActiveChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean handleKeyPress (in nsIDOMKeyEvent keyEvent); */
NS_IMETHODIMP nsMenuBoxObject::HandleKeyPress(nsIDOMKeyEvent *keyEvent, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean openedWithKey; */
NS_IMETHODIMP nsMenuBoxObject::GetOpenedWithKey(PRBool *aOpenedWithKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

nsresult
NS_NewMenuBoxObject(nsIBoxObject** aResult);

#endif /* __gen_nsIMenuBoxObject_h__ */
