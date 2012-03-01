/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessible.idl
 */

#ifndef __gen_nsIAccessible_h__
#define __gen_nsIAccessible_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPersistentProperties; /* forward declaration */

class nsIDOMDOMStringList; /* forward declaration */

class nsIAccessibleRelation; /* forward declaration */


/* starting interface:    nsIAccessible */
#define NS_IACCESSIBLE_IID_STR "3126544c-826c-4694-a2ed-67bfe56a1f37"

#define NS_IACCESSIBLE_IID \
  {0x3126544c, 0x826c, 0x4694, \
    { 0xa2, 0xed, 0x67, 0xbf, 0xe5, 0x6a, 0x1f, 0x37 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessible : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLE_IID)

  /* readonly attribute nsIAccessible parent; */
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIAccessible * *aParent) = 0;

  /* readonly attribute nsIAccessible nextSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIAccessible * *aNextSibling) = 0;

  /* readonly attribute nsIAccessible previousSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIAccessible * *aPreviousSibling) = 0;

  /* readonly attribute nsIAccessible firstChild; */
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIAccessible * *aFirstChild) = 0;

  /* readonly attribute nsIAccessible lastChild; */
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIAccessible * *aLastChild) = 0;

  /* readonly attribute nsIArray children; */
  NS_SCRIPTABLE NS_IMETHOD GetChildren(nsIArray * *aChildren) = 0;

  /* readonly attribute long childCount; */
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRInt32 *aChildCount) = 0;

  /* readonly attribute long indexInParent; */
  NS_SCRIPTABLE NS_IMETHOD GetIndexInParent(PRInt32 *aIndexInParent) = 0;

  /* attribute AString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* readonly attribute AString value; */
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue) = 0;

  /* readonly attribute AString description; */
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) = 0;

  /* readonly attribute AString keyboardShortcut; */
  NS_SCRIPTABLE NS_IMETHOD GetKeyboardShortcut(nsAString & aKeyboardShortcut) = 0;

  /* readonly attribute AString defaultKeyBinding; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultKeyBinding(nsAString & aDefaultKeyBinding) = 0;

  /* nsIDOMDOMStringList getKeyBindings (in PRUint8 aActionIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetKeyBindings(PRUint8 aActionIndex, nsIDOMDOMStringList * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long role; */
  NS_SCRIPTABLE NS_IMETHOD GetRole(PRUint32 *aRole) = 0;

  /* void getState (out unsigned long aState, out unsigned long aExtraState); */
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState NS_OUTPARAM, PRUint32 *aExtraState NS_OUTPARAM) = 0;

  /* readonly attribute AString help; */
  NS_SCRIPTABLE NS_IMETHOD GetHelp(nsAString & aHelp) = 0;

  /* readonly attribute nsIAccessible focusedChild; */
  NS_SCRIPTABLE NS_IMETHOD GetFocusedChild(nsIAccessible * *aFocusedChild) = 0;

  /* readonly attribute nsIPersistentProperties attributes; */
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIPersistentProperties * *aAttributes) = 0;

  /* void groupPosition (out long aGroupLevel, out long aSimilarItemsInGroup, out long aPositionInGroup); */
  NS_SCRIPTABLE NS_IMETHOD GroupPosition(PRInt32 *aGroupLevel NS_OUTPARAM, PRInt32 *aSimilarItemsInGroup NS_OUTPARAM, PRInt32 *aPositionInGroup NS_OUTPARAM) = 0;

  /* nsIAccessible getChildAtPoint (in long x, in long y); */
  NS_SCRIPTABLE NS_IMETHOD GetChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM) = 0;

  /* nsIAccessible getDeepestChildAtPoint (in long x, in long y); */
  NS_SCRIPTABLE NS_IMETHOD GetDeepestChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM) = 0;

  /* nsIAccessible getChildAt (in long aChildIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRInt32 aChildIndex, nsIAccessible * *_retval NS_OUTPARAM) = 0;

  /* nsIAccessibleRelation getRelationByType (in unsigned long aRelationType); */
  NS_SCRIPTABLE NS_IMETHOD GetRelationByType(PRUint32 aRelationType, nsIAccessibleRelation * *_retval NS_OUTPARAM) = 0;

  /* nsIArray getRelations (); */
  NS_SCRIPTABLE NS_IMETHOD GetRelations(nsIArray * *_retval NS_OUTPARAM) = 0;

  /* void getBounds (out long x, out long y, out long width, out long height); */
  NS_SCRIPTABLE NS_IMETHOD GetBounds(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) = 0;

  /* void setSelected (in boolean isSelected); */
  NS_SCRIPTABLE NS_IMETHOD SetSelected(PRBool isSelected) = 0;

  /* void extendSelection (); */
  NS_SCRIPTABLE NS_IMETHOD ExtendSelection(void) = 0;

  /* void takeSelection (); */
  NS_SCRIPTABLE NS_IMETHOD TakeSelection(void) = 0;

  /* void takeFocus (); */
  NS_SCRIPTABLE NS_IMETHOD TakeFocus(void) = 0;

  /* readonly attribute PRUint8 numActions; */
  NS_SCRIPTABLE NS_IMETHOD GetNumActions(PRUint8 *aNumActions) = 0;

  /* AString getActionName (in PRUint8 index); */
  NS_SCRIPTABLE NS_IMETHOD GetActionName(PRUint8 index, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getActionDescription (in PRUint8 aIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetActionDescription(PRUint8 aIndex, nsAString & _retval NS_OUTPARAM) = 0;

  /* void doAction (in PRUint8 index); */
  NS_SCRIPTABLE NS_IMETHOD DoAction(PRUint8 index) = 0;

  /* [noscript] void getNativeInterface (out voidPtr aOutAccessible); */
  NS_IMETHOD GetNativeInterface(void **aOutAccessible NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessible, NS_IACCESSIBLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLE \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIAccessible * *aParent); \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIAccessible * *aNextSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIAccessible * *aPreviousSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIAccessible * *aFirstChild); \
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIAccessible * *aLastChild); \
  NS_SCRIPTABLE NS_IMETHOD GetChildren(nsIArray * *aChildren); \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRInt32 *aChildCount); \
  NS_SCRIPTABLE NS_IMETHOD GetIndexInParent(PRInt32 *aIndexInParent); \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription); \
  NS_SCRIPTABLE NS_IMETHOD GetKeyboardShortcut(nsAString & aKeyboardShortcut); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultKeyBinding(nsAString & aDefaultKeyBinding); \
  NS_SCRIPTABLE NS_IMETHOD GetKeyBindings(PRUint8 aActionIndex, nsIDOMDOMStringList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRole(PRUint32 *aRole); \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState NS_OUTPARAM, PRUint32 *aExtraState NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetHelp(nsAString & aHelp); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedChild(nsIAccessible * *aFocusedChild); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIPersistentProperties * *aAttributes); \
  NS_SCRIPTABLE NS_IMETHOD GroupPosition(PRInt32 *aGroupLevel NS_OUTPARAM, PRInt32 *aSimilarItemsInGroup NS_OUTPARAM, PRInt32 *aPositionInGroup NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDeepestChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRInt32 aChildIndex, nsIAccessible * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRelationByType(PRUint32 aRelationType, nsIAccessibleRelation * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRelations(nsIArray * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBounds(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetSelected(PRBool isSelected); \
  NS_SCRIPTABLE NS_IMETHOD ExtendSelection(void); \
  NS_SCRIPTABLE NS_IMETHOD TakeSelection(void); \
  NS_SCRIPTABLE NS_IMETHOD TakeFocus(void); \
  NS_SCRIPTABLE NS_IMETHOD GetNumActions(PRUint8 *aNumActions); \
  NS_SCRIPTABLE NS_IMETHOD GetActionName(PRUint8 index, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActionDescription(PRUint8 aIndex, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DoAction(PRUint8 index); \
  NS_IMETHOD GetNativeInterface(void **aOutAccessible NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIAccessible * *aParent) { return _to GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIAccessible * *aNextSibling) { return _to GetNextSibling(aNextSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIAccessible * *aPreviousSibling) { return _to GetPreviousSibling(aPreviousSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIAccessible * *aFirstChild) { return _to GetFirstChild(aFirstChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIAccessible * *aLastChild) { return _to GetLastChild(aLastChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildren(nsIArray * *aChildren) { return _to GetChildren(aChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRInt32 *aChildCount) { return _to GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndexInParent(PRInt32 *aIndexInParent) { return _to GetIndexInParent(aIndexInParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue) { return _to GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) { return _to GetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeyboardShortcut(nsAString & aKeyboardShortcut) { return _to GetKeyboardShortcut(aKeyboardShortcut); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultKeyBinding(nsAString & aDefaultKeyBinding) { return _to GetDefaultKeyBinding(aDefaultKeyBinding); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeyBindings(PRUint8 aActionIndex, nsIDOMDOMStringList * *_retval NS_OUTPARAM) { return _to GetKeyBindings(aActionIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRole(PRUint32 *aRole) { return _to GetRole(aRole); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState NS_OUTPARAM, PRUint32 *aExtraState NS_OUTPARAM) { return _to GetState(aState, aExtraState); } \
  NS_SCRIPTABLE NS_IMETHOD GetHelp(nsAString & aHelp) { return _to GetHelp(aHelp); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedChild(nsIAccessible * *aFocusedChild) { return _to GetFocusedChild(aFocusedChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIPersistentProperties * *aAttributes) { return _to GetAttributes(aAttributes); } \
  NS_SCRIPTABLE NS_IMETHOD GroupPosition(PRInt32 *aGroupLevel NS_OUTPARAM, PRInt32 *aSimilarItemsInGroup NS_OUTPARAM, PRInt32 *aPositionInGroup NS_OUTPARAM) { return _to GroupPosition(aGroupLevel, aSimilarItemsInGroup, aPositionInGroup); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM) { return _to GetChildAtPoint(x, y, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDeepestChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM) { return _to GetDeepestChildAtPoint(x, y, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRInt32 aChildIndex, nsIAccessible * *_retval NS_OUTPARAM) { return _to GetChildAt(aChildIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelationByType(PRUint32 aRelationType, nsIAccessibleRelation * *_retval NS_OUTPARAM) { return _to GetRelationByType(aRelationType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelations(nsIArray * *_retval NS_OUTPARAM) { return _to GetRelations(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBounds(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) { return _to GetBounds(x, y, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelected(PRBool isSelected) { return _to SetSelected(isSelected); } \
  NS_SCRIPTABLE NS_IMETHOD ExtendSelection(void) { return _to ExtendSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD TakeSelection(void) { return _to TakeSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD TakeFocus(void) { return _to TakeFocus(); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumActions(PRUint8 *aNumActions) { return _to GetNumActions(aNumActions); } \
  NS_SCRIPTABLE NS_IMETHOD GetActionName(PRUint8 index, nsAString & _retval NS_OUTPARAM) { return _to GetActionName(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActionDescription(PRUint8 aIndex, nsAString & _retval NS_OUTPARAM) { return _to GetActionDescription(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoAction(PRUint8 index) { return _to DoAction(index); } \
  NS_IMETHOD GetNativeInterface(void **aOutAccessible NS_OUTPARAM) { return _to GetNativeInterface(aOutAccessible); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIAccessible * *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIAccessible * *aNextSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextSibling(aNextSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIAccessible * *aPreviousSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousSibling(aPreviousSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIAccessible * *aFirstChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstChild(aFirstChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIAccessible * *aLastChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastChild(aLastChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildren(nsIArray * *aChildren) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildren(aChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildCount(PRInt32 *aChildCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildCount(aChildCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndexInParent(PRInt32 *aIndexInParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndexInParent(aIndexInParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeyboardShortcut(nsAString & aKeyboardShortcut) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeyboardShortcut(aKeyboardShortcut); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultKeyBinding(nsAString & aDefaultKeyBinding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultKeyBinding(aDefaultKeyBinding); } \
  NS_SCRIPTABLE NS_IMETHOD GetKeyBindings(PRUint8 aActionIndex, nsIDOMDOMStringList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeyBindings(aActionIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRole(PRUint32 *aRole) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRole(aRole); } \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState NS_OUTPARAM, PRUint32 *aExtraState NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState, aExtraState); } \
  NS_SCRIPTABLE NS_IMETHOD GetHelp(nsAString & aHelp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHelp(aHelp); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedChild(nsIAccessible * *aFocusedChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedChild(aFocusedChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIPersistentProperties * *aAttributes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributes(aAttributes); } \
  NS_SCRIPTABLE NS_IMETHOD GroupPosition(PRInt32 *aGroupLevel NS_OUTPARAM, PRInt32 *aSimilarItemsInGroup NS_OUTPARAM, PRInt32 *aPositionInGroup NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GroupPosition(aGroupLevel, aSimilarItemsInGroup, aPositionInGroup); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildAtPoint(x, y, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDeepestChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDeepestChildAtPoint(x, y, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildAt(PRInt32 aChildIndex, nsIAccessible * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildAt(aChildIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelationByType(PRUint32 aRelationType, nsIAccessibleRelation * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelationByType(aRelationType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelations(nsIArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelations(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBounds(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBounds(x, y, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelected(PRBool isSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelected(isSelected); } \
  NS_SCRIPTABLE NS_IMETHOD ExtendSelection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtendSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD TakeSelection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->TakeSelection(); } \
  NS_SCRIPTABLE NS_IMETHOD TakeFocus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->TakeFocus(); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumActions(PRUint8 *aNumActions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumActions(aNumActions); } \
  NS_SCRIPTABLE NS_IMETHOD GetActionName(PRUint8 index, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActionName(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActionDescription(PRUint8 aIndex, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActionDescription(aIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoAction(PRUint8 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoAction(index); } \
  NS_IMETHOD GetNativeInterface(void **aOutAccessible NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativeInterface(aOutAccessible); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessible : public nsIAccessible
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLE

  nsAccessible();

private:
  ~nsAccessible();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessible, nsIAccessible)

nsAccessible::nsAccessible()
{
  /* member initializers and constructor code */
}

nsAccessible::~nsAccessible()
{
  /* destructor code */
}

/* readonly attribute nsIAccessible parent; */
NS_IMETHODIMP nsAccessible::GetParent(nsIAccessible * *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible nextSibling; */
NS_IMETHODIMP nsAccessible::GetNextSibling(nsIAccessible * *aNextSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible previousSibling; */
NS_IMETHODIMP nsAccessible::GetPreviousSibling(nsIAccessible * *aPreviousSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible firstChild; */
NS_IMETHODIMP nsAccessible::GetFirstChild(nsIAccessible * *aFirstChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible lastChild; */
NS_IMETHODIMP nsAccessible::GetLastChild(nsIAccessible * *aLastChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray children; */
NS_IMETHODIMP nsAccessible::GetChildren(nsIArray * *aChildren)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long childCount; */
NS_IMETHODIMP nsAccessible::GetChildCount(PRInt32 *aChildCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long indexInParent; */
NS_IMETHODIMP nsAccessible::GetIndexInParent(PRInt32 *aIndexInParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString name; */
NS_IMETHODIMP nsAccessible::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAccessible::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString value; */
NS_IMETHODIMP nsAccessible::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString description; */
NS_IMETHODIMP nsAccessible::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString keyboardShortcut; */
NS_IMETHODIMP nsAccessible::GetKeyboardShortcut(nsAString & aKeyboardShortcut)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString defaultKeyBinding; */
NS_IMETHODIMP nsAccessible::GetDefaultKeyBinding(nsAString & aDefaultKeyBinding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMStringList getKeyBindings (in PRUint8 aActionIndex); */
NS_IMETHODIMP nsAccessible::GetKeyBindings(PRUint8 aActionIndex, nsIDOMDOMStringList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long role; */
NS_IMETHODIMP nsAccessible::GetRole(PRUint32 *aRole)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getState (out unsigned long aState, out unsigned long aExtraState); */
NS_IMETHODIMP nsAccessible::GetState(PRUint32 *aState NS_OUTPARAM, PRUint32 *aExtraState NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString help; */
NS_IMETHODIMP nsAccessible::GetHelp(nsAString & aHelp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible focusedChild; */
NS_IMETHODIMP nsAccessible::GetFocusedChild(nsIAccessible * *aFocusedChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIPersistentProperties attributes; */
NS_IMETHODIMP nsAccessible::GetAttributes(nsIPersistentProperties * *aAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void groupPosition (out long aGroupLevel, out long aSimilarItemsInGroup, out long aPositionInGroup); */
NS_IMETHODIMP nsAccessible::GroupPosition(PRInt32 *aGroupLevel NS_OUTPARAM, PRInt32 *aSimilarItemsInGroup NS_OUTPARAM, PRInt32 *aPositionInGroup NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessible getChildAtPoint (in long x, in long y); */
NS_IMETHODIMP nsAccessible::GetChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessible getDeepestChildAtPoint (in long x, in long y); */
NS_IMETHODIMP nsAccessible::GetDeepestChildAtPoint(PRInt32 x, PRInt32 y, nsIAccessible * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessible getChildAt (in long aChildIndex); */
NS_IMETHODIMP nsAccessible::GetChildAt(PRInt32 aChildIndex, nsIAccessible * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessibleRelation getRelationByType (in unsigned long aRelationType); */
NS_IMETHODIMP nsAccessible::GetRelationByType(PRUint32 aRelationType, nsIAccessibleRelation * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIArray getRelations (); */
NS_IMETHODIMP nsAccessible::GetRelations(nsIArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getBounds (out long x, out long y, out long width, out long height); */
NS_IMETHODIMP nsAccessible::GetBounds(PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelected (in boolean isSelected); */
NS_IMETHODIMP nsAccessible::SetSelected(PRBool isSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void extendSelection (); */
NS_IMETHODIMP nsAccessible::ExtendSelection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void takeSelection (); */
NS_IMETHODIMP nsAccessible::TakeSelection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void takeFocus (); */
NS_IMETHODIMP nsAccessible::TakeFocus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRUint8 numActions; */
NS_IMETHODIMP nsAccessible::GetNumActions(PRUint8 *aNumActions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getActionName (in PRUint8 index); */
NS_IMETHODIMP nsAccessible::GetActionName(PRUint8 index, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getActionDescription (in PRUint8 aIndex); */
NS_IMETHODIMP nsAccessible::GetActionDescription(PRUint8 aIndex, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doAction (in PRUint8 index); */
NS_IMETHODIMP nsAccessible::DoAction(PRUint8 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getNativeInterface (out voidPtr aOutAccessible); */
NS_IMETHODIMP nsAccessible::GetNativeInterface(void **aOutAccessible NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessible_h__ */
