/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/layout/xul/base/public/nsIPopupBoxObject.idl
 */

#ifndef __gen_nsIPopupBoxObject_h__
#define __gen_nsIPopupBoxObject_h__


#ifndef __gen_nsIBoxObject_h__
#include "nsIBoxObject.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMElement; /* forward declaration */

class nsIDOMNode; /* forward declaration */

class nsIDOMEvent; /* forward declaration */

class nsIDOMClientRect; /* forward declaration */


/* starting interface:    nsIPopupBoxObject */
#define NS_IPOPUPBOXOBJECT_IID_STR "6ad1b199-95d3-448b-98d7-896bce3a1dcd"

#define NS_IPOPUPBOXOBJECT_IID \
  {0x6ad1b199, 0x95d3, 0x448b, \
    { 0x98, 0xd7, 0x89, 0x6b, 0xce, 0x3a, 0x1d, 0xcd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPopupBoxObject : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPOPUPBOXOBJECT_IID)

  /* void showPopup (in nsIDOMElement srcContent, in nsIDOMElement popupContent, in long xpos, in long ypos, in wstring popupType, in wstring anchorAlignment, in wstring popupAlignment); */
  NS_SCRIPTABLE NS_IMETHOD ShowPopup(nsIDOMElement *srcContent, nsIDOMElement *popupContent, PRInt32 xpos, PRInt32 ypos, const PRUnichar * popupType, const PRUnichar * anchorAlignment, const PRUnichar * popupAlignment) = 0;

  /* void hidePopup (); */
  NS_SCRIPTABLE NS_IMETHOD HidePopup(void) = 0;

  /* attribute boolean autoPosition; */
  NS_SCRIPTABLE NS_IMETHOD GetAutoPosition(PRBool *aAutoPosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAutoPosition(PRBool aAutoPosition) = 0;

  /* void enableKeyboardNavigator (in boolean enableKeyboardNavigator); */
  NS_SCRIPTABLE NS_IMETHOD EnableKeyboardNavigator(PRBool enableKeyboardNavigator) = 0;

  /* void enableRollup (in boolean enableRollup); */
  NS_SCRIPTABLE NS_IMETHOD EnableRollup(PRBool enableRollup) = 0;

  enum { ROLLUP_DEFAULT = 0U };

  enum { ROLLUP_CONSUME = 1U };

  enum { ROLLUP_NO_CONSUME = 2U };

  /* void setConsumeRollupEvent (in PRUint32 consume); */
  NS_SCRIPTABLE NS_IMETHOD SetConsumeRollupEvent(PRUint32 consume) = 0;

  /* void sizeTo (in long width, in long height); */
  NS_SCRIPTABLE NS_IMETHOD SizeTo(PRInt32 width, PRInt32 height) = 0;

  /* void moveTo (in long left, in long top); */
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 left, PRInt32 top) = 0;

  /* void openPopup (in nsIDOMElement anchorElement, in AString position, in long x, in long y, in boolean isContextMenu, in boolean attributesOverride, in nsIDOMEvent triggerEvent); */
  NS_SCRIPTABLE NS_IMETHOD OpenPopup(nsIDOMElement *anchorElement, const nsAString & position, PRInt32 x, PRInt32 y, PRBool isContextMenu, PRBool attributesOverride, nsIDOMEvent *triggerEvent) = 0;

  /* void openPopupAtScreen (in long x, in long y, in boolean isContextMenu, in nsIDOMEvent triggerEvent); */
  NS_SCRIPTABLE NS_IMETHOD OpenPopupAtScreen(PRInt32 x, PRInt32 y, PRBool isContextMenu, nsIDOMEvent *triggerEvent) = 0;

  /* readonly attribute AString popupState; */
  NS_SCRIPTABLE NS_IMETHOD GetPopupState(nsAString & aPopupState) = 0;

  /* readonly attribute nsIDOMNode triggerNode; */
  NS_SCRIPTABLE NS_IMETHOD GetTriggerNode(nsIDOMNode * *aTriggerNode) = 0;

  /* readonly attribute nsIDOMElement anchorNode; */
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMElement * *aAnchorNode) = 0;

  /* nsIDOMClientRect getOuterScreenRect (); */
  NS_SCRIPTABLE NS_IMETHOD GetOuterScreenRect(nsIDOMClientRect * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPopupBoxObject, NS_IPOPUPBOXOBJECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPOPUPBOXOBJECT \
  NS_SCRIPTABLE NS_IMETHOD ShowPopup(nsIDOMElement *srcContent, nsIDOMElement *popupContent, PRInt32 xpos, PRInt32 ypos, const PRUnichar * popupType, const PRUnichar * anchorAlignment, const PRUnichar * popupAlignment); \
  NS_SCRIPTABLE NS_IMETHOD HidePopup(void); \
  NS_SCRIPTABLE NS_IMETHOD GetAutoPosition(PRBool *aAutoPosition); \
  NS_SCRIPTABLE NS_IMETHOD SetAutoPosition(PRBool aAutoPosition); \
  NS_SCRIPTABLE NS_IMETHOD EnableKeyboardNavigator(PRBool enableKeyboardNavigator); \
  NS_SCRIPTABLE NS_IMETHOD EnableRollup(PRBool enableRollup); \
  NS_SCRIPTABLE NS_IMETHOD SetConsumeRollupEvent(PRUint32 consume); \
  NS_SCRIPTABLE NS_IMETHOD SizeTo(PRInt32 width, PRInt32 height); \
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 left, PRInt32 top); \
  NS_SCRIPTABLE NS_IMETHOD OpenPopup(nsIDOMElement *anchorElement, const nsAString & position, PRInt32 x, PRInt32 y, PRBool isContextMenu, PRBool attributesOverride, nsIDOMEvent *triggerEvent); \
  NS_SCRIPTABLE NS_IMETHOD OpenPopupAtScreen(PRInt32 x, PRInt32 y, PRBool isContextMenu, nsIDOMEvent *triggerEvent); \
  NS_SCRIPTABLE NS_IMETHOD GetPopupState(nsAString & aPopupState); \
  NS_SCRIPTABLE NS_IMETHOD GetTriggerNode(nsIDOMNode * *aTriggerNode); \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMElement * *aAnchorNode); \
  NS_SCRIPTABLE NS_IMETHOD GetOuterScreenRect(nsIDOMClientRect * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPOPUPBOXOBJECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD ShowPopup(nsIDOMElement *srcContent, nsIDOMElement *popupContent, PRInt32 xpos, PRInt32 ypos, const PRUnichar * popupType, const PRUnichar * anchorAlignment, const PRUnichar * popupAlignment) { return _to ShowPopup(srcContent, popupContent, xpos, ypos, popupType, anchorAlignment, popupAlignment); } \
  NS_SCRIPTABLE NS_IMETHOD HidePopup(void) { return _to HidePopup(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAutoPosition(PRBool *aAutoPosition) { return _to GetAutoPosition(aAutoPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetAutoPosition(PRBool aAutoPosition) { return _to SetAutoPosition(aAutoPosition); } \
  NS_SCRIPTABLE NS_IMETHOD EnableKeyboardNavigator(PRBool enableKeyboardNavigator) { return _to EnableKeyboardNavigator(enableKeyboardNavigator); } \
  NS_SCRIPTABLE NS_IMETHOD EnableRollup(PRBool enableRollup) { return _to EnableRollup(enableRollup); } \
  NS_SCRIPTABLE NS_IMETHOD SetConsumeRollupEvent(PRUint32 consume) { return _to SetConsumeRollupEvent(consume); } \
  NS_SCRIPTABLE NS_IMETHOD SizeTo(PRInt32 width, PRInt32 height) { return _to SizeTo(width, height); } \
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 left, PRInt32 top) { return _to MoveTo(left, top); } \
  NS_SCRIPTABLE NS_IMETHOD OpenPopup(nsIDOMElement *anchorElement, const nsAString & position, PRInt32 x, PRInt32 y, PRBool isContextMenu, PRBool attributesOverride, nsIDOMEvent *triggerEvent) { return _to OpenPopup(anchorElement, position, x, y, isContextMenu, attributesOverride, triggerEvent); } \
  NS_SCRIPTABLE NS_IMETHOD OpenPopupAtScreen(PRInt32 x, PRInt32 y, PRBool isContextMenu, nsIDOMEvent *triggerEvent) { return _to OpenPopupAtScreen(x, y, isContextMenu, triggerEvent); } \
  NS_SCRIPTABLE NS_IMETHOD GetPopupState(nsAString & aPopupState) { return _to GetPopupState(aPopupState); } \
  NS_SCRIPTABLE NS_IMETHOD GetTriggerNode(nsIDOMNode * *aTriggerNode) { return _to GetTriggerNode(aTriggerNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMElement * *aAnchorNode) { return _to GetAnchorNode(aAnchorNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterScreenRect(nsIDOMClientRect * *_retval NS_OUTPARAM) { return _to GetOuterScreenRect(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPOPUPBOXOBJECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD ShowPopup(nsIDOMElement *srcContent, nsIDOMElement *popupContent, PRInt32 xpos, PRInt32 ypos, const PRUnichar * popupType, const PRUnichar * anchorAlignment, const PRUnichar * popupAlignment) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowPopup(srcContent, popupContent, xpos, ypos, popupType, anchorAlignment, popupAlignment); } \
  NS_SCRIPTABLE NS_IMETHOD HidePopup(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->HidePopup(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAutoPosition(PRBool *aAutoPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutoPosition(aAutoPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetAutoPosition(PRBool aAutoPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutoPosition(aAutoPosition); } \
  NS_SCRIPTABLE NS_IMETHOD EnableKeyboardNavigator(PRBool enableKeyboardNavigator) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableKeyboardNavigator(enableKeyboardNavigator); } \
  NS_SCRIPTABLE NS_IMETHOD EnableRollup(PRBool enableRollup) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableRollup(enableRollup); } \
  NS_SCRIPTABLE NS_IMETHOD SetConsumeRollupEvent(PRUint32 consume) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConsumeRollupEvent(consume); } \
  NS_SCRIPTABLE NS_IMETHOD SizeTo(PRInt32 width, PRInt32 height) { return !_to ? NS_ERROR_NULL_POINTER : _to->SizeTo(width, height); } \
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 left, PRInt32 top) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveTo(left, top); } \
  NS_SCRIPTABLE NS_IMETHOD OpenPopup(nsIDOMElement *anchorElement, const nsAString & position, PRInt32 x, PRInt32 y, PRBool isContextMenu, PRBool attributesOverride, nsIDOMEvent *triggerEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenPopup(anchorElement, position, x, y, isContextMenu, attributesOverride, triggerEvent); } \
  NS_SCRIPTABLE NS_IMETHOD OpenPopupAtScreen(PRInt32 x, PRInt32 y, PRBool isContextMenu, nsIDOMEvent *triggerEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenPopupAtScreen(x, y, isContextMenu, triggerEvent); } \
  NS_SCRIPTABLE NS_IMETHOD GetPopupState(nsAString & aPopupState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPopupState(aPopupState); } \
  NS_SCRIPTABLE NS_IMETHOD GetTriggerNode(nsIDOMNode * *aTriggerNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTriggerNode(aTriggerNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchorNode(nsIDOMElement * *aAnchorNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchorNode(aAnchorNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterScreenRect(nsIDOMClientRect * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterScreenRect(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPopupBoxObject : public nsIPopupBoxObject
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPOPUPBOXOBJECT

  nsPopupBoxObject();

private:
  ~nsPopupBoxObject();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPopupBoxObject, nsIPopupBoxObject)

nsPopupBoxObject::nsPopupBoxObject()
{
  /* member initializers and constructor code */
}

nsPopupBoxObject::~nsPopupBoxObject()
{
  /* destructor code */
}

/* void showPopup (in nsIDOMElement srcContent, in nsIDOMElement popupContent, in long xpos, in long ypos, in wstring popupType, in wstring anchorAlignment, in wstring popupAlignment); */
NS_IMETHODIMP nsPopupBoxObject::ShowPopup(nsIDOMElement *srcContent, nsIDOMElement *popupContent, PRInt32 xpos, PRInt32 ypos, const PRUnichar * popupType, const PRUnichar * anchorAlignment, const PRUnichar * popupAlignment)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void hidePopup (); */
NS_IMETHODIMP nsPopupBoxObject::HidePopup()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean autoPosition; */
NS_IMETHODIMP nsPopupBoxObject::GetAutoPosition(PRBool *aAutoPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPopupBoxObject::SetAutoPosition(PRBool aAutoPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableKeyboardNavigator (in boolean enableKeyboardNavigator); */
NS_IMETHODIMP nsPopupBoxObject::EnableKeyboardNavigator(PRBool enableKeyboardNavigator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableRollup (in boolean enableRollup); */
NS_IMETHODIMP nsPopupBoxObject::EnableRollup(PRBool enableRollup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setConsumeRollupEvent (in PRUint32 consume); */
NS_IMETHODIMP nsPopupBoxObject::SetConsumeRollupEvent(PRUint32 consume)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sizeTo (in long width, in long height); */
NS_IMETHODIMP nsPopupBoxObject::SizeTo(PRInt32 width, PRInt32 height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveTo (in long left, in long top); */
NS_IMETHODIMP nsPopupBoxObject::MoveTo(PRInt32 left, PRInt32 top)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openPopup (in nsIDOMElement anchorElement, in AString position, in long x, in long y, in boolean isContextMenu, in boolean attributesOverride, in nsIDOMEvent triggerEvent); */
NS_IMETHODIMP nsPopupBoxObject::OpenPopup(nsIDOMElement *anchorElement, const nsAString & position, PRInt32 x, PRInt32 y, PRBool isContextMenu, PRBool attributesOverride, nsIDOMEvent *triggerEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openPopupAtScreen (in long x, in long y, in boolean isContextMenu, in nsIDOMEvent triggerEvent); */
NS_IMETHODIMP nsPopupBoxObject::OpenPopupAtScreen(PRInt32 x, PRInt32 y, PRBool isContextMenu, nsIDOMEvent *triggerEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString popupState; */
NS_IMETHODIMP nsPopupBoxObject::GetPopupState(nsAString & aPopupState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode triggerNode; */
NS_IMETHODIMP nsPopupBoxObject::GetTriggerNode(nsIDOMNode * *aTriggerNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement anchorNode; */
NS_IMETHODIMP nsPopupBoxObject::GetAnchorNode(nsIDOMElement * *aAnchorNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMClientRect getOuterScreenRect (); */
NS_IMETHODIMP nsPopupBoxObject::GetOuterScreenRect(nsIDOMClientRect * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

nsresult
NS_NewPopupBoxObject(nsIBoxObject** aResult);

#endif /* __gen_nsIPopupBoxObject_h__ */
