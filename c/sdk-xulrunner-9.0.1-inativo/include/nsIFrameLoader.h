/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIFrameLoader.idl
 */

#ifndef __gen_nsIFrameLoader_h__
#define __gen_nsIFrameLoader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocShell; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIFrame; /* forward declaration */

class nsIChromeFrameMessageManager; /* forward declaration */

class nsIVariant; /* forward declaration */

typedef PRUint64  nsContentViewId;


/* starting interface:    nsIContentView */
#define NS_ICONTENTVIEW_IID_STR "fbd25468-d2cf-487b-bc58-a0e105398b47"

#define NS_ICONTENTVIEW_IID \
  {0xfbd25468, 0xd2cf, 0x487b, \
    { 0xbc, 0x58, 0xa0, 0xe1, 0x05, 0x39, 0x8b, 0x47 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentView : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTVIEW_IID)

  /* void scrollTo (in float xPx, in float yPx); */
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(float xPx, float yPx) = 0;

  /* void scrollBy (in float dxPx, in float dyPx); */
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(float dxPx, float dyPx) = 0;

  /* void setScale (in float xScale, in float yScale); */
  NS_SCRIPTABLE NS_IMETHOD SetScale(float xScale, float yScale) = 0;

  /* readonly attribute float scrollX; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(float *aScrollX) = 0;

  /* readonly attribute float scrollY; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(float *aScrollY) = 0;

  /* readonly attribute float viewportWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetViewportWidth(float *aViewportWidth) = 0;

  /* readonly attribute float viewportHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetViewportHeight(float *aViewportHeight) = 0;

  /* readonly attribute float contentWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetContentWidth(float *aContentWidth) = 0;

  /* readonly attribute float contentHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetContentHeight(float *aContentHeight) = 0;

  /* readonly attribute nsContentViewId id; */
  NS_SCRIPTABLE NS_IMETHOD GetId(nsContentViewId *aId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentView, NS_ICONTENTVIEW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTVIEW \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(float xPx, float yPx); \
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(float dxPx, float dyPx); \
  NS_SCRIPTABLE NS_IMETHOD SetScale(float xScale, float yScale); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(float *aScrollX); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(float *aScrollY); \
  NS_SCRIPTABLE NS_IMETHOD GetViewportWidth(float *aViewportWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetViewportHeight(float *aViewportHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetContentWidth(float *aContentWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetContentHeight(float *aContentHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsContentViewId *aId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTVIEW(_to) \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(float xPx, float yPx) { return _to ScrollTo(xPx, yPx); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(float dxPx, float dyPx) { return _to ScrollBy(dxPx, dyPx); } \
  NS_SCRIPTABLE NS_IMETHOD SetScale(float xScale, float yScale) { return _to SetScale(xScale, yScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(float *aScrollX) { return _to GetScrollX(aScrollX); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(float *aScrollY) { return _to GetScrollY(aScrollY); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewportWidth(float *aViewportWidth) { return _to GetViewportWidth(aViewportWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewportHeight(float *aViewportHeight) { return _to GetViewportHeight(aViewportHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentWidth(float *aContentWidth) { return _to GetContentWidth(aContentWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentHeight(float *aContentHeight) { return _to GetContentHeight(aContentHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsContentViewId *aId) { return _to GetId(aId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTVIEW(_to) \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(float xPx, float yPx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollTo(xPx, yPx); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(float dxPx, float dyPx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollBy(dxPx, dyPx); } \
  NS_SCRIPTABLE NS_IMETHOD SetScale(float xScale, float yScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScale(xScale, yScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(float *aScrollX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollX(aScrollX); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(float *aScrollY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollY(aScrollY); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewportWidth(float *aViewportWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViewportWidth(aViewportWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewportHeight(float *aViewportHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViewportHeight(aViewportHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentWidth(float *aContentWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentWidth(aContentWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentHeight(float *aContentHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentHeight(aContentHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsContentViewId *aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentView : public nsIContentView
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTVIEW

  nsContentView();

private:
  ~nsContentView();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentView, nsIContentView)

nsContentView::nsContentView()
{
  /* member initializers and constructor code */
}

nsContentView::~nsContentView()
{
  /* destructor code */
}

/* void scrollTo (in float xPx, in float yPx); */
NS_IMETHODIMP nsContentView::ScrollTo(float xPx, float yPx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollBy (in float dxPx, in float dyPx); */
NS_IMETHODIMP nsContentView::ScrollBy(float dxPx, float dyPx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setScale (in float xScale, in float yScale); */
NS_IMETHODIMP nsContentView::SetScale(float xScale, float yScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float scrollX; */
NS_IMETHODIMP nsContentView::GetScrollX(float *aScrollX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float scrollY; */
NS_IMETHODIMP nsContentView::GetScrollY(float *aScrollY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float viewportWidth; */
NS_IMETHODIMP nsContentView::GetViewportWidth(float *aViewportWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float viewportHeight; */
NS_IMETHODIMP nsContentView::GetViewportHeight(float *aViewportHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float contentWidth; */
NS_IMETHODIMP nsContentView::GetContentWidth(float *aContentWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float contentHeight; */
NS_IMETHODIMP nsContentView::GetContentHeight(float *aContentHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsContentViewId id; */
NS_IMETHODIMP nsContentView::GetId(nsContentViewId *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIContentViewManager */
#define NS_ICONTENTVIEWMANAGER_IID_STR "ba5af90d-ece5-40b2-9a1d-a0154128db1c"

#define NS_ICONTENTVIEWMANAGER_IID \
  {0xba5af90d, 0xece5, 0x40b2, \
    { 0x9a, 0x1d, 0xa0, 0x15, 0x41, 0x28, 0xdb, 0x1c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentViewManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTVIEWMANAGER_IID)

  /* void getContentViewsIn (in float aXPx, in float aYPx, in float aTopSize, in float aRightSize, in float aBottomSize, in float aLeftSize, [optional] out unsigned long aLength, [array, size_is (aLength), retval] out nsIContentView aResult); */
  NS_SCRIPTABLE NS_IMETHOD GetContentViewsIn(float aXPx, float aYPx, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, PRUint32 *aLength NS_OUTPARAM, nsIContentView * **aResult NS_OUTPARAM) = 0;

  /* readonly attribute nsIContentView rootContentView; */
  NS_SCRIPTABLE NS_IMETHOD GetRootContentView(nsIContentView * *aRootContentView) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentViewManager, NS_ICONTENTVIEWMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTVIEWMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewsIn(float aXPx, float aYPx, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, PRUint32 *aLength NS_OUTPARAM, nsIContentView * **aResult NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRootContentView(nsIContentView * *aRootContentView); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTVIEWMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewsIn(float aXPx, float aYPx, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, PRUint32 *aLength NS_OUTPARAM, nsIContentView * **aResult NS_OUTPARAM) { return _to GetContentViewsIn(aXPx, aYPx, aTopSize, aRightSize, aBottomSize, aLeftSize, aLength, aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootContentView(nsIContentView * *aRootContentView) { return _to GetRootContentView(aRootContentView); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTVIEWMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewsIn(float aXPx, float aYPx, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, PRUint32 *aLength NS_OUTPARAM, nsIContentView * **aResult NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentViewsIn(aXPx, aYPx, aTopSize, aRightSize, aBottomSize, aLeftSize, aLength, aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootContentView(nsIContentView * *aRootContentView) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootContentView(aRootContentView); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentViewManager : public nsIContentViewManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTVIEWMANAGER

  nsContentViewManager();

private:
  ~nsContentViewManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentViewManager, nsIContentViewManager)

nsContentViewManager::nsContentViewManager()
{
  /* member initializers and constructor code */
}

nsContentViewManager::~nsContentViewManager()
{
  /* destructor code */
}

/* void getContentViewsIn (in float aXPx, in float aYPx, in float aTopSize, in float aRightSize, in float aBottomSize, in float aLeftSize, [optional] out unsigned long aLength, [array, size_is (aLength), retval] out nsIContentView aResult); */
NS_IMETHODIMP nsContentViewManager::GetContentViewsIn(float aXPx, float aYPx, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, PRUint32 *aLength NS_OUTPARAM, nsIContentView * **aResult NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIContentView rootContentView; */
NS_IMETHODIMP nsContentViewManager::GetRootContentView(nsIContentView * *aRootContentView)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFrameLoader */
#define NS_IFRAMELOADER_IID_STR "12905a29-4246-475a-81d4-fc389197df02"

#define NS_IFRAMELOADER_IID \
  {0x12905a29, 0x4246, 0x475a, \
    { 0x81, 0xd4, 0xfc, 0x38, 0x91, 0x97, 0xdf, 0x02 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFrameLoader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMELOADER_IID)

  /* readonly attribute nsIDocShell docShell; */
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) = 0;

  /* void loadFrame (); */
  NS_SCRIPTABLE NS_IMETHOD LoadFrame(void) = 0;

  /* void loadURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD LoadURI(nsIURI *aURI) = 0;

  /* void destroy (); */
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) = 0;

  /* readonly attribute boolean depthTooGreat; */
  NS_SCRIPTABLE NS_IMETHOD GetDepthTooGreat(PRBool *aDepthTooGreat) = 0;

  /* [noscript] void updatePositionAndSize (in nsIFrame aIFrame); */
  NS_IMETHOD UpdatePositionAndSize(nsIFrame *aIFrame) = 0;

  /* void activateRemoteFrame (); */
  NS_SCRIPTABLE NS_IMETHOD ActivateRemoteFrame(void) = 0;

  /* void deactivateRemoteFrame (); */
  NS_SCRIPTABLE NS_IMETHOD DeactivateRemoteFrame(void) = 0;

  /* void sendCrossProcessMouseEvent (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, PRBool aIgnoreRootScrollFrame) = 0;

  /* void activateFrameEvent (in AString aType, in boolean capture); */
  NS_SCRIPTABLE NS_IMETHOD ActivateFrameEvent(const nsAString & aType, PRBool capture) = 0;

  /* readonly attribute nsIChromeFrameMessageManager messageManager; */
  NS_SCRIPTABLE NS_IMETHOD GetMessageManager(nsIChromeFrameMessageManager * *aMessageManager) = 0;

  /* void sendCrossProcessKeyEvent (in AString aType, in long aKeyCode, in long aCharCode, in long aModifiers, [optional] in boolean aPreventDefault); */
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRBool aPreventDefault) = 0;

  /* attribute boolean delayRemoteDialogs; */
  NS_SCRIPTABLE NS_IMETHOD GetDelayRemoteDialogs(PRBool *aDelayRemoteDialogs) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDelayRemoteDialogs(PRBool aDelayRemoteDialogs) = 0;

  enum { RENDER_MODE_DEFAULT = 0U };

  enum { RENDER_MODE_ASYNC_SCROLL = 1U };

  /* attribute unsigned long renderMode; */
  NS_SCRIPTABLE NS_IMETHOD GetRenderMode(PRUint32 *aRenderMode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRenderMode(PRUint32 aRenderMode) = 0;

  enum { EVENT_MODE_NORMAL_DISPATCH = 0U };

  enum { EVENT_MODE_DONT_FORWARD_TO_CHILD = 1U };

  /* attribute unsigned long eventMode; */
  NS_SCRIPTABLE NS_IMETHOD GetEventMode(PRUint32 *aEventMode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEventMode(PRUint32 aEventMode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameLoader, NS_IFRAMELOADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMELOADER \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell); \
  NS_SCRIPTABLE NS_IMETHOD LoadFrame(void); \
  NS_SCRIPTABLE NS_IMETHOD LoadURI(nsIURI *aURI); \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void); \
  NS_SCRIPTABLE NS_IMETHOD GetDepthTooGreat(PRBool *aDepthTooGreat); \
  NS_IMETHOD UpdatePositionAndSize(nsIFrame *aIFrame); \
  NS_SCRIPTABLE NS_IMETHOD ActivateRemoteFrame(void); \
  NS_SCRIPTABLE NS_IMETHOD DeactivateRemoteFrame(void); \
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, PRBool aIgnoreRootScrollFrame); \
  NS_SCRIPTABLE NS_IMETHOD ActivateFrameEvent(const nsAString & aType, PRBool capture); \
  NS_SCRIPTABLE NS_IMETHOD GetMessageManager(nsIChromeFrameMessageManager * *aMessageManager); \
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRBool aPreventDefault); \
  NS_SCRIPTABLE NS_IMETHOD GetDelayRemoteDialogs(PRBool *aDelayRemoteDialogs); \
  NS_SCRIPTABLE NS_IMETHOD SetDelayRemoteDialogs(PRBool aDelayRemoteDialogs); \
  NS_SCRIPTABLE NS_IMETHOD GetRenderMode(PRUint32 *aRenderMode); \
  NS_SCRIPTABLE NS_IMETHOD SetRenderMode(PRUint32 aRenderMode); \
  NS_SCRIPTABLE NS_IMETHOD GetEventMode(PRUint32 *aEventMode); \
  NS_SCRIPTABLE NS_IMETHOD SetEventMode(PRUint32 aEventMode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMELOADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return _to GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD LoadFrame(void) { return _to LoadFrame(); } \
  NS_SCRIPTABLE NS_IMETHOD LoadURI(nsIURI *aURI) { return _to LoadURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return _to Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepthTooGreat(PRBool *aDepthTooGreat) { return _to GetDepthTooGreat(aDepthTooGreat); } \
  NS_IMETHOD UpdatePositionAndSize(nsIFrame *aIFrame) { return _to UpdatePositionAndSize(aIFrame); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateRemoteFrame(void) { return _to ActivateRemoteFrame(); } \
  NS_SCRIPTABLE NS_IMETHOD DeactivateRemoteFrame(void) { return _to DeactivateRemoteFrame(); } \
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, PRBool aIgnoreRootScrollFrame) { return _to SendCrossProcessMouseEvent(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateFrameEvent(const nsAString & aType, PRBool capture) { return _to ActivateFrameEvent(aType, capture); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessageManager(nsIChromeFrameMessageManager * *aMessageManager) { return _to GetMessageManager(aMessageManager); } \
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRBool aPreventDefault) { return _to SendCrossProcessKeyEvent(aType, aKeyCode, aCharCode, aModifiers, aPreventDefault); } \
  NS_SCRIPTABLE NS_IMETHOD GetDelayRemoteDialogs(PRBool *aDelayRemoteDialogs) { return _to GetDelayRemoteDialogs(aDelayRemoteDialogs); } \
  NS_SCRIPTABLE NS_IMETHOD SetDelayRemoteDialogs(PRBool aDelayRemoteDialogs) { return _to SetDelayRemoteDialogs(aDelayRemoteDialogs); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderMode(PRUint32 *aRenderMode) { return _to GetRenderMode(aRenderMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetRenderMode(PRUint32 aRenderMode) { return _to SetRenderMode(aRenderMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventMode(PRUint32 *aEventMode) { return _to GetEventMode(aEventMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetEventMode(PRUint32 aEventMode) { return _to SetEventMode(aEventMode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMELOADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD LoadFrame(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadFrame(); } \
  NS_SCRIPTABLE NS_IMETHOD LoadURI(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadURI(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepthTooGreat(PRBool *aDepthTooGreat) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDepthTooGreat(aDepthTooGreat); } \
  NS_IMETHOD UpdatePositionAndSize(nsIFrame *aIFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdatePositionAndSize(aIFrame); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateRemoteFrame(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateRemoteFrame(); } \
  NS_SCRIPTABLE NS_IMETHOD DeactivateRemoteFrame(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeactivateRemoteFrame(); } \
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, PRBool aIgnoreRootScrollFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendCrossProcessMouseEvent(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateFrameEvent(const nsAString & aType, PRBool capture) { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateFrameEvent(aType, capture); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessageManager(nsIChromeFrameMessageManager * *aMessageManager) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessageManager(aMessageManager); } \
  NS_SCRIPTABLE NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRBool aPreventDefault) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendCrossProcessKeyEvent(aType, aKeyCode, aCharCode, aModifiers, aPreventDefault); } \
  NS_SCRIPTABLE NS_IMETHOD GetDelayRemoteDialogs(PRBool *aDelayRemoteDialogs) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDelayRemoteDialogs(aDelayRemoteDialogs); } \
  NS_SCRIPTABLE NS_IMETHOD SetDelayRemoteDialogs(PRBool aDelayRemoteDialogs) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDelayRemoteDialogs(aDelayRemoteDialogs); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderMode(PRUint32 *aRenderMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRenderMode(aRenderMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetRenderMode(PRUint32 aRenderMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRenderMode(aRenderMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventMode(PRUint32 *aEventMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventMode(aEventMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetEventMode(PRUint32 aEventMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEventMode(aEventMode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameLoader : public nsIFrameLoader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMELOADER

  nsFrameLoader();

private:
  ~nsFrameLoader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFrameLoader, nsIFrameLoader)

nsFrameLoader::nsFrameLoader()
{
  /* member initializers and constructor code */
}

nsFrameLoader::~nsFrameLoader()
{
  /* destructor code */
}

/* readonly attribute nsIDocShell docShell; */
NS_IMETHODIMP nsFrameLoader::GetDocShell(nsIDocShell * *aDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadFrame (); */
NS_IMETHODIMP nsFrameLoader::LoadFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadURI (in nsIURI aURI); */
NS_IMETHODIMP nsFrameLoader::LoadURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroy (); */
NS_IMETHODIMP nsFrameLoader::Destroy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean depthTooGreat; */
NS_IMETHODIMP nsFrameLoader::GetDepthTooGreat(PRBool *aDepthTooGreat)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void updatePositionAndSize (in nsIFrame aIFrame); */
NS_IMETHODIMP nsFrameLoader::UpdatePositionAndSize(nsIFrame *aIFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateRemoteFrame (); */
NS_IMETHODIMP nsFrameLoader::ActivateRemoteFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deactivateRemoteFrame (); */
NS_IMETHODIMP nsFrameLoader::DeactivateRemoteFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendCrossProcessMouseEvent (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
NS_IMETHODIMP nsFrameLoader::SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, PRBool aIgnoreRootScrollFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateFrameEvent (in AString aType, in boolean capture); */
NS_IMETHODIMP nsFrameLoader::ActivateFrameEvent(const nsAString & aType, PRBool capture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIChromeFrameMessageManager messageManager; */
NS_IMETHODIMP nsFrameLoader::GetMessageManager(nsIChromeFrameMessageManager * *aMessageManager)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendCrossProcessKeyEvent (in AString aType, in long aKeyCode, in long aCharCode, in long aModifiers, [optional] in boolean aPreventDefault); */
NS_IMETHODIMP nsFrameLoader::SendCrossProcessKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRBool aPreventDefault)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean delayRemoteDialogs; */
NS_IMETHODIMP nsFrameLoader::GetDelayRemoteDialogs(PRBool *aDelayRemoteDialogs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetDelayRemoteDialogs(PRBool aDelayRemoteDialogs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long renderMode; */
NS_IMETHODIMP nsFrameLoader::GetRenderMode(PRUint32 *aRenderMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetRenderMode(PRUint32 aRenderMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long eventMode; */
NS_IMETHODIMP nsFrameLoader::GetEventMode(PRUint32 *aEventMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetEventMode(PRUint32 aEventMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFrameLoaderOwner */
#define NS_IFRAMELOADEROWNER_IID_STR "5879040e-83e9-40e3-b2bb-5ddf43b76e47"

#define NS_IFRAMELOADEROWNER_IID \
  {0x5879040e, 0x83e9, 0x40e3, \
    { 0xb2, 0xbb, 0x5d, 0xdf, 0x43, 0xb7, 0x6e, 0x47 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFrameLoaderOwner : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMELOADEROWNER_IID)

  /* readonly attribute nsIFrameLoader frameLoader; */
  NS_SCRIPTABLE NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) = 0;

  /* [noscript,notxpcom] alreadyAddRefed_nsFrameLoader GetFrameLoader (); */
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) = 0;

  /* void swapFrameLoaders (in nsIFrameLoaderOwner aOtherOwner); */
  NS_SCRIPTABLE NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameLoaderOwner, NS_IFRAMELOADEROWNER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMELOADEROWNER \
  NS_SCRIPTABLE NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader); \
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void); \
  NS_SCRIPTABLE NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMELOADEROWNER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) { return _to GetFrameLoader(aFrameLoader); } \
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) { return _to GetFrameLoader(); } \
  NS_SCRIPTABLE NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) { return _to SwapFrameLoaders(aOtherOwner); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMELOADEROWNER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrameLoader(aFrameLoader); } \
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrameLoader(); } \
  NS_SCRIPTABLE NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) { return !_to ? NS_ERROR_NULL_POINTER : _to->SwapFrameLoaders(aOtherOwner); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameLoaderOwner : public nsIFrameLoaderOwner
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMELOADEROWNER

  nsFrameLoaderOwner();

private:
  ~nsFrameLoaderOwner();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFrameLoaderOwner, nsIFrameLoaderOwner)

nsFrameLoaderOwner::nsFrameLoaderOwner()
{
  /* member initializers and constructor code */
}

nsFrameLoaderOwner::~nsFrameLoaderOwner()
{
  /* destructor code */
}

/* readonly attribute nsIFrameLoader frameLoader; */
NS_IMETHODIMP nsFrameLoaderOwner::GetFrameLoader(nsIFrameLoader * *aFrameLoader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] alreadyAddRefed_nsFrameLoader GetFrameLoader (); */
NS_IMETHODIMP_(already_AddRefed<nsFrameLoader>) nsFrameLoaderOwner::GetFrameLoader()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void swapFrameLoaders (in nsIFrameLoaderOwner aOtherOwner); */
NS_IMETHODIMP nsFrameLoaderOwner::SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFrameLoader_h__ */
