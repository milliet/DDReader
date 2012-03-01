/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMWindow.idl
 */

#ifndef __gen_nsIDOMWindow_h__
#define __gen_nsIDOMWindow_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAnimationFrameListener; /* forward declaration */

class nsIControllers; /* forward declaration */

class nsIDOMBlob; /* forward declaration */

class nsIDOMLocation; /* forward declaration */

class nsIDOMMediaQueryList; /* forward declaration */

class nsIDOMOfflineResourceList; /* forward declaration */

class nsIDOMPerformance; /* forward declaration */

class nsIDOMStorage; /* forward declaration */

class nsIDOMStorageList; /* forward declaration */

class nsIPrompt; /* forward declaration */

class nsISelection; /* forward declaration */

class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMMozURLProperty */
#define NS_IDOMMOZURLPROPERTY_IID_STR "8fc58f56-f769-4368-a098-edd08550cf1a"

#define NS_IDOMMOZURLPROPERTY_IID \
  {0x8fc58f56, 0xf769, 0x4368, \
    { 0xa0, 0x98, 0xed, 0xd0, 0x85, 0x50, 0xcf, 0x1a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozURLProperty : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZURLPROPERTY_IID)

  /* DOMString createObjectURL (in nsIDOMBlob blob); */
  NS_SCRIPTABLE NS_IMETHOD CreateObjectURL(nsIDOMBlob *blob, nsAString & _retval NS_OUTPARAM) = 0;

  /* void revokeObjectURL (in DOMString URL); */
  NS_SCRIPTABLE NS_IMETHOD RevokeObjectURL(const nsAString & URL) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozURLProperty, NS_IDOMMOZURLPROPERTY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZURLPROPERTY \
  NS_SCRIPTABLE NS_IMETHOD CreateObjectURL(nsIDOMBlob *blob, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RevokeObjectURL(const nsAString & URL); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZURLPROPERTY(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateObjectURL(nsIDOMBlob *blob, nsAString & _retval NS_OUTPARAM) { return _to CreateObjectURL(blob, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RevokeObjectURL(const nsAString & URL) { return _to RevokeObjectURL(URL); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZURLPROPERTY(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateObjectURL(nsIDOMBlob *blob, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateObjectURL(blob, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RevokeObjectURL(const nsAString & URL) { return !_to ? NS_ERROR_NULL_POINTER : _to->RevokeObjectURL(URL); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozURLProperty : public nsIDOMMozURLProperty
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZURLPROPERTY

  nsDOMMozURLProperty();

private:
  ~nsDOMMozURLProperty();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozURLProperty, nsIDOMMozURLProperty)

nsDOMMozURLProperty::nsDOMMozURLProperty()
{
  /* member initializers and constructor code */
}

nsDOMMozURLProperty::~nsDOMMozURLProperty()
{
  /* destructor code */
}

/* DOMString createObjectURL (in nsIDOMBlob blob); */
NS_IMETHODIMP nsDOMMozURLProperty::CreateObjectURL(nsIDOMBlob *blob, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void revokeObjectURL (in DOMString URL); */
NS_IMETHODIMP nsDOMMozURLProperty::RevokeObjectURL(const nsAString & URL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMWindow */
#define NS_IDOMWINDOW_IID_STR "3f5b2af2-604e-4253-8d25-6d3cafc13a69"

#define NS_IDOMWINDOW_IID \
  {0x3f5b2af2, 0x604e, 0x4253, \
    { 0x8d, 0x25, 0x6d, 0x3c, 0xaf, 0xc1, 0x3a, 0x69 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMWindow : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOW_IID)

  /* readonly attribute nsIDOMWindow window; */
  NS_SCRIPTABLE NS_IMETHOD GetWindow(nsIDOMWindow * *aWindow) = 0;

  /* readonly attribute nsIDOMWindow self; */
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMWindow * *aSelf) = 0;

  /* readonly attribute nsIDOMDocument document; */
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument) = 0;

  /* attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* readonly attribute nsIDOMLocation location; */
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation) = 0;

  /* readonly attribute nsIDOMHistory history; */
  NS_SCRIPTABLE NS_IMETHOD GetHistory(nsIDOMHistory * *aHistory) = 0;

  /* readonly attribute nsIDOMBarProp locationbar; */
  NS_SCRIPTABLE NS_IMETHOD GetLocationbar(nsIDOMBarProp * *aLocationbar) = 0;

  /* readonly attribute nsIDOMBarProp menubar; */
  NS_SCRIPTABLE NS_IMETHOD GetMenubar(nsIDOMBarProp * *aMenubar) = 0;

  /* readonly attribute nsIDOMBarProp personalbar; */
  NS_SCRIPTABLE NS_IMETHOD GetPersonalbar(nsIDOMBarProp * *aPersonalbar) = 0;

  /* readonly attribute nsIDOMBarProp scrollbars; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollbars(nsIDOMBarProp * *aScrollbars) = 0;

  /* readonly attribute nsIDOMBarProp statusbar; */
  NS_SCRIPTABLE NS_IMETHOD GetStatusbar(nsIDOMBarProp * *aStatusbar) = 0;

  /* readonly attribute nsIDOMBarProp toolbar; */
  NS_SCRIPTABLE NS_IMETHOD GetToolbar(nsIDOMBarProp * *aToolbar) = 0;

  /* attribute DOMString status; */
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStatus(const nsAString & aStatus) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* void stop (); */
  NS_SCRIPTABLE NS_IMETHOD Stop(void) = 0;

  /* void focus (); */
  NS_SCRIPTABLE NS_IMETHOD Focus(void) = 0;

  /* void blur (); */
  NS_SCRIPTABLE NS_IMETHOD Blur(void) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* readonly attribute nsIDOMWindow top; */
  NS_SCRIPTABLE NS_IMETHOD GetTop(nsIDOMWindow * *aTop) = 0;

  /* attribute nsIDOMWindow opener; */
  NS_SCRIPTABLE NS_IMETHOD GetOpener(nsIDOMWindow * *aOpener) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOpener(nsIDOMWindow *aOpener) = 0;

  /* readonly attribute nsIDOMWindow parent; */
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIDOMWindow * *aParent) = 0;

  /* readonly attribute nsIDOMElement frameElement; */
  NS_SCRIPTABLE NS_IMETHOD GetFrameElement(nsIDOMElement * *aFrameElement) = 0;

  /* readonly attribute nsIDOMNavigator navigator; */
  NS_SCRIPTABLE NS_IMETHOD GetNavigator(nsIDOMNavigator * *aNavigator) = 0;

  /* readonly attribute nsIDOMOfflineResourceList applicationCache; */
  NS_SCRIPTABLE NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache) = 0;

  /* void alert (in DOMString text); */
  NS_SCRIPTABLE NS_IMETHOD Alert(const nsAString & text) = 0;

  /* boolean confirm (in DOMString text); */
  NS_SCRIPTABLE NS_IMETHOD Confirm(const nsAString & text, PRBool *_retval NS_OUTPARAM) = 0;

  /* DOMString prompt ([optional] in DOMString aMessage, [optional] in DOMString aInitial); */
  NS_SCRIPTABLE NS_IMETHOD Prompt(const nsAString & aMessage, const nsAString & aInitial, nsAString & _retval NS_OUTPARAM) = 0;

  /* void print (); */
  NS_SCRIPTABLE NS_IMETHOD Print(void) = 0;

  /* nsIVariant showModalDialog (in DOMString aURI, [optional] in nsIVariant aArgs, [optional] in DOMString aOptions); */
  NS_SCRIPTABLE NS_IMETHOD ShowModalDialog(const nsAString & aURI, nsIVariant *aArgs, const nsAString & aOptions, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* [binaryname(PostMessageMoz),implicit_jscontext] void postMessage (in jsval message, in DOMString targetOrigin); */
  NS_SCRIPTABLE NS_IMETHOD PostMessageMoz(const JS::Value & message, const nsAString & targetOrigin, JSContext* cx) = 0;

  /* DOMString atob (in DOMString aAsciiString); */
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) = 0;

  /* DOMString btoa (in DOMString aBase64Data); */
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIDOMStorage sessionStorage; */
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorage(nsIDOMStorage * *aSessionStorage) = 0;

  /* readonly attribute nsIDOMStorage localStorage; */
  NS_SCRIPTABLE NS_IMETHOD GetLocalStorage(nsIDOMStorage * *aLocalStorage) = 0;

  /* nsISelection getSelection (); */
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMMediaQueryList matchMedia (in DOMString media_query_list); */
  NS_SCRIPTABLE NS_IMETHOD MatchMedia(const nsAString & media_query_list, nsIDOMMediaQueryList * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIDOMScreen screen; */
  NS_SCRIPTABLE NS_IMETHOD GetScreen(nsIDOMScreen * *aScreen) = 0;

  /* attribute long innerWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetInnerWidth(PRInt32 *aInnerWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInnerWidth(PRInt32 aInnerWidth) = 0;

  /* attribute long innerHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetInnerHeight(PRInt32 *aInnerHeight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInnerHeight(PRInt32 aInnerHeight) = 0;

  /* readonly attribute long scrollX; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(PRInt32 *aScrollX) = 0;

  /* readonly attribute long pageXOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetPageXOffset(PRInt32 *aPageXOffset) = 0;

  /* readonly attribute long scrollY; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(PRInt32 *aScrollY) = 0;

  /* readonly attribute long pageYOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetPageYOffset(PRInt32 *aPageYOffset) = 0;

  /* void scroll (in long xScroll, in long yScroll); */
  NS_SCRIPTABLE NS_IMETHOD Scroll(PRInt32 xScroll, PRInt32 yScroll) = 0;

  /* void scrollTo (in long xScroll, in long yScroll); */
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRInt32 xScroll, PRInt32 yScroll) = 0;

  /* void scrollBy (in long xScrollDif, in long yScrollDif); */
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(PRInt32 xScrollDif, PRInt32 yScrollDif) = 0;

  /* attribute long screenX; */
  NS_SCRIPTABLE NS_IMETHOD GetScreenX(PRInt32 *aScreenX) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetScreenX(PRInt32 aScreenX) = 0;

  /* attribute long screenY; */
  NS_SCRIPTABLE NS_IMETHOD GetScreenY(PRInt32 *aScreenY) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetScreenY(PRInt32 aScreenY) = 0;

  /* attribute long outerWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetOuterWidth(PRInt32 *aOuterWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOuterWidth(PRInt32 aOuterWidth) = 0;

  /* attribute long outerHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetOuterHeight(PRInt32 *aOuterHeight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOuterHeight(PRInt32 aOuterHeight) = 0;

  /* nsIDOMCSSStyleDeclaration getComputedStyle (in nsIDOMElement elt, [optional] in DOMString pseudoElt); */
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyle(nsIDOMElement *elt, const nsAString & pseudoElt, nsIDOMCSSStyleDeclaration * *_retval NS_OUTPARAM) = 0;

  /* [noscript] readonly attribute nsIDOMEventTarget windowRoot; */
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot) = 0;

  /* [noscript] readonly attribute nsIDOMWindowCollection frames; */
  NS_IMETHOD GetFrames(nsIDOMWindowCollection * *aFrames) = 0;

  /* [noscript] attribute float textZoom; */
  NS_IMETHOD GetTextZoom(float *aTextZoom) = 0;
  NS_IMETHOD SetTextZoom(float aTextZoom) = 0;

  /* void scrollByLines (in long numLines); */
  NS_SCRIPTABLE NS_IMETHOD ScrollByLines(PRInt32 numLines) = 0;

  /* void scrollByPages (in long numPages); */
  NS_SCRIPTABLE NS_IMETHOD ScrollByPages(PRInt32 numPages) = 0;

  /* void sizeToContent (); */
  NS_SCRIPTABLE NS_IMETHOD SizeToContent(void) = 0;

  /* readonly attribute nsIDOMWindow content; */
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) = 0;

  /* [noscript] readonly attribute nsIPrompt prompter; */
  NS_IMETHOD GetPrompter(nsIPrompt * *aPrompter) = 0;

  /* readonly attribute boolean closed; */
  NS_SCRIPTABLE NS_IMETHOD GetClosed(PRBool *aClosed) = 0;

  /* readonly attribute nsIDOMCrypto crypto; */
  NS_SCRIPTABLE NS_IMETHOD GetCrypto(nsIDOMCrypto * *aCrypto) = 0;

  /* readonly attribute nsIDOMPkcs11 pkcs11; */
  NS_SCRIPTABLE NS_IMETHOD GetPkcs11(nsIDOMPkcs11 * *aPkcs11) = 0;

  /* readonly attribute nsIControllers controllers; */
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers) = 0;

  /* attribute DOMString defaultStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultStatus(nsAString & aDefaultStatus) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDefaultStatus(const nsAString & aDefaultStatus) = 0;

  /* readonly attribute float mozInnerScreenX; */
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenX(float *aMozInnerScreenX) = 0;

  /* readonly attribute float mozInnerScreenY; */
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenY(float *aMozInnerScreenY) = 0;

  /* readonly attribute long scrollMaxX; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxX(PRInt32 *aScrollMaxX) = 0;

  /* readonly attribute long scrollMaxY; */
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxY(PRInt32 *aScrollMaxY) = 0;

  /* attribute boolean fullScreen; */
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(PRBool *aFullScreen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(PRBool aFullScreen) = 0;

  /* void back (); */
  NS_SCRIPTABLE NS_IMETHOD Back(void) = 0;

  /* void forward (); */
  NS_SCRIPTABLE NS_IMETHOD Forward(void) = 0;

  /* void home (); */
  NS_SCRIPTABLE NS_IMETHOD Home(void) = 0;

  /* void moveTo (in long xPos, in long yPos); */
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 xPos, PRInt32 yPos) = 0;

  /* void moveBy (in long xDif, in long yDif); */
  NS_SCRIPTABLE NS_IMETHOD MoveBy(PRInt32 xDif, PRInt32 yDif) = 0;

  /* void resizeTo (in long width, in long height); */
  NS_SCRIPTABLE NS_IMETHOD ResizeTo(PRInt32 width, PRInt32 height) = 0;

  /* void resizeBy (in long widthDif, in long heightDif); */
  NS_SCRIPTABLE NS_IMETHOD ResizeBy(PRInt32 widthDif, PRInt32 heightDif) = 0;

  /* [noscript] nsIDOMWindow open (in DOMString url, in DOMString name, in DOMString options); */
  NS_IMETHOD Open(const nsAString & url, const nsAString & name, const nsAString & options, nsIDOMWindow * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIDOMWindow openDialog (in DOMString url, in DOMString name, in DOMString options, in nsISupports aExtraArgument); */
  NS_IMETHOD OpenDialog(const nsAString & url, const nsAString & name, const nsAString & options, nsISupports *aExtraArgument, nsIDOMWindow * *_retval NS_OUTPARAM) = 0;

  /* void updateCommands (in DOMString action); */
  NS_SCRIPTABLE NS_IMETHOD UpdateCommands(const nsAString & action) = 0;

  /* boolean find ([optional] in DOMString str, [optional] in boolean caseSensitive, [optional] in boolean backwards, [optional] in boolean wrapAround, [optional] in boolean wholeWord, [optional] in boolean searchInFrames, [optional] in boolean showDialog); */
  NS_SCRIPTABLE NS_IMETHOD Find(const nsAString & str, PRBool caseSensitive, PRBool backwards, PRBool wrapAround, PRBool wholeWord, PRBool searchInFrames, PRBool showDialog, PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long long mozPaintCount; */
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintCount(PRUint64 *aMozPaintCount) = 0;

  /* void mozRequestAnimationFrame ([optional] in nsIAnimationFrameListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD MozRequestAnimationFrame(nsIAnimationFrameListener *aListener) = 0;

  /* readonly attribute long long mozAnimationStartTime; */
  NS_SCRIPTABLE NS_IMETHOD GetMozAnimationStartTime(PRInt64 *aMozAnimationStartTime) = 0;

  /* readonly attribute nsIDOMMozURLProperty URL; */
  NS_SCRIPTABLE NS_IMETHOD GetURL(nsIDOMMozURLProperty * *aURL) = 0;

  /* readonly attribute nsIDOMStorageList globalStorage; */
  NS_SCRIPTABLE NS_IMETHOD GetGlobalStorage(nsIDOMStorageList * *aGlobalStorage) = 0;

  /* [implicit_jscontext] attribute jsval onafterprint; */
  NS_SCRIPTABLE NS_IMETHOD GetOnafterprint(JSContext* cx, JS::Value *aOnafterprint) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnafterprint(JSContext* cx, const JS::Value & aOnafterprint) = 0;

  /* [implicit_jscontext] attribute jsval onbeforeprint; */
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeprint(JSContext* cx, JS::Value *aOnbeforeprint) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeprint(JSContext* cx, const JS::Value & aOnbeforeprint) = 0;

  /* [implicit_jscontext] attribute jsval onbeforeunload; */
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeunload(JSContext* cx, JS::Value *aOnbeforeunload) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeunload(JSContext* cx, const JS::Value & aOnbeforeunload) = 0;

  /* [implicit_jscontext] attribute jsval onhashchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnhashchange(JSContext* cx, JS::Value *aOnhashchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnhashchange(JSContext* cx, const JS::Value & aOnhashchange) = 0;

  /* [implicit_jscontext] attribute jsval onmessage; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(JSContext* cx, JS::Value *aOnmessage) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(JSContext* cx, const JS::Value & aOnmessage) = 0;

  /* [implicit_jscontext] attribute jsval onoffline; */
  NS_SCRIPTABLE NS_IMETHOD GetOnoffline(JSContext* cx, JS::Value *aOnoffline) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnoffline(JSContext* cx, const JS::Value & aOnoffline) = 0;

  /* [implicit_jscontext] attribute jsval ononline; */
  NS_SCRIPTABLE NS_IMETHOD GetOnonline(JSContext* cx, JS::Value *aOnonline) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnonline(JSContext* cx, const JS::Value & aOnonline) = 0;

  /* [implicit_jscontext] attribute jsval onpopstate; */
  NS_SCRIPTABLE NS_IMETHOD GetOnpopstate(JSContext* cx, JS::Value *aOnpopstate) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnpopstate(JSContext* cx, const JS::Value & aOnpopstate) = 0;

  /* [implicit_jscontext] attribute jsval onpagehide; */
  NS_SCRIPTABLE NS_IMETHOD GetOnpagehide(JSContext* cx, JS::Value *aOnpagehide) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnpagehide(JSContext* cx, const JS::Value & aOnpagehide) = 0;

  /* [implicit_jscontext] attribute jsval onpageshow; */
  NS_SCRIPTABLE NS_IMETHOD GetOnpageshow(JSContext* cx, JS::Value *aOnpageshow) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnpageshow(JSContext* cx, const JS::Value & aOnpageshow) = 0;

  /* [implicit_jscontext] attribute jsval onresize; */
  NS_SCRIPTABLE NS_IMETHOD GetOnresize(JSContext* cx, JS::Value *aOnresize) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnresize(JSContext* cx, const JS::Value & aOnresize) = 0;

  /* [implicit_jscontext] attribute jsval onunload; */
  NS_SCRIPTABLE NS_IMETHOD GetOnunload(JSContext* cx, JS::Value *aOnunload) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnunload(JSContext* cx, const JS::Value & aOnunload) = 0;

  /* [implicit_jscontext] attribute jsval ondevicemotion; */
  NS_SCRIPTABLE NS_IMETHOD GetOndevicemotion(JSContext* cx, JS::Value *aOndevicemotion) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOndevicemotion(JSContext* cx, const JS::Value & aOndevicemotion) = 0;

  /* [implicit_jscontext] attribute jsval ondeviceorientation; */
  NS_SCRIPTABLE NS_IMETHOD GetOndeviceorientation(JSContext* cx, JS::Value *aOndeviceorientation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOndeviceorientation(JSContext* cx, const JS::Value & aOndeviceorientation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindow, NS_IDOMWINDOW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOW \
  NS_SCRIPTABLE NS_IMETHOD GetWindow(nsIDOMWindow * *aWindow); \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMWindow * *aSelf); \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation); \
  NS_SCRIPTABLE NS_IMETHOD GetHistory(nsIDOMHistory * *aHistory); \
  NS_SCRIPTABLE NS_IMETHOD GetLocationbar(nsIDOMBarProp * *aLocationbar); \
  NS_SCRIPTABLE NS_IMETHOD GetMenubar(nsIDOMBarProp * *aMenubar); \
  NS_SCRIPTABLE NS_IMETHOD GetPersonalbar(nsIDOMBarProp * *aPersonalbar); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollbars(nsIDOMBarProp * *aScrollbars); \
  NS_SCRIPTABLE NS_IMETHOD GetStatusbar(nsIDOMBarProp * *aStatusbar); \
  NS_SCRIPTABLE NS_IMETHOD GetToolbar(nsIDOMBarProp * *aToolbar); \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus); \
  NS_SCRIPTABLE NS_IMETHOD SetStatus(const nsAString & aStatus); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_SCRIPTABLE NS_IMETHOD Stop(void); \
  NS_SCRIPTABLE NS_IMETHOD Focus(void); \
  NS_SCRIPTABLE NS_IMETHOD Blur(void); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD GetTop(nsIDOMWindow * *aTop); \
  NS_SCRIPTABLE NS_IMETHOD GetOpener(nsIDOMWindow * *aOpener); \
  NS_SCRIPTABLE NS_IMETHOD SetOpener(nsIDOMWindow *aOpener); \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIDOMWindow * *aParent); \
  NS_SCRIPTABLE NS_IMETHOD GetFrameElement(nsIDOMElement * *aFrameElement); \
  NS_SCRIPTABLE NS_IMETHOD GetNavigator(nsIDOMNavigator * *aNavigator); \
  NS_SCRIPTABLE NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache); \
  NS_SCRIPTABLE NS_IMETHOD Alert(const nsAString & text); \
  NS_SCRIPTABLE NS_IMETHOD Confirm(const nsAString & text, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Prompt(const nsAString & aMessage, const nsAString & aInitial, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Print(void); \
  NS_SCRIPTABLE NS_IMETHOD ShowModalDialog(const nsAString & aURI, nsIVariant *aArgs, const nsAString & aOptions, nsIVariant * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PostMessageMoz(const JS::Value & message, const nsAString & targetOrigin, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorage(nsIDOMStorage * *aSessionStorage); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalStorage(nsIDOMStorage * *aLocalStorage); \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MatchMedia(const nsAString & media_query_list, nsIDOMMediaQueryList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetScreen(nsIDOMScreen * *aScreen); \
  NS_SCRIPTABLE NS_IMETHOD GetInnerWidth(PRInt32 *aInnerWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetInnerWidth(PRInt32 aInnerWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHeight(PRInt32 *aInnerHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetInnerHeight(PRInt32 aInnerHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(PRInt32 *aScrollX); \
  NS_SCRIPTABLE NS_IMETHOD GetPageXOffset(PRInt32 *aPageXOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(PRInt32 *aScrollY); \
  NS_SCRIPTABLE NS_IMETHOD GetPageYOffset(PRInt32 *aPageYOffset); \
  NS_SCRIPTABLE NS_IMETHOD Scroll(PRInt32 xScroll, PRInt32 yScroll); \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRInt32 xScroll, PRInt32 yScroll); \
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(PRInt32 xScrollDif, PRInt32 yScrollDif); \
  NS_SCRIPTABLE NS_IMETHOD GetScreenX(PRInt32 *aScreenX); \
  NS_SCRIPTABLE NS_IMETHOD SetScreenX(PRInt32 aScreenX); \
  NS_SCRIPTABLE NS_IMETHOD GetScreenY(PRInt32 *aScreenY); \
  NS_SCRIPTABLE NS_IMETHOD SetScreenY(PRInt32 aScreenY); \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWidth(PRInt32 *aOuterWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetOuterWidth(PRInt32 aOuterWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetOuterHeight(PRInt32 *aOuterHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetOuterHeight(PRInt32 aOuterHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyle(nsIDOMElement *elt, const nsAString & pseudoElt, nsIDOMCSSStyleDeclaration * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot); \
  NS_IMETHOD GetFrames(nsIDOMWindowCollection * *aFrames); \
  NS_IMETHOD GetTextZoom(float *aTextZoom); \
  NS_IMETHOD SetTextZoom(float aTextZoom); \
  NS_SCRIPTABLE NS_IMETHOD ScrollByLines(PRInt32 numLines); \
  NS_SCRIPTABLE NS_IMETHOD ScrollByPages(PRInt32 numPages); \
  NS_SCRIPTABLE NS_IMETHOD SizeToContent(void); \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent); \
  NS_IMETHOD GetPrompter(nsIPrompt * *aPrompter); \
  NS_SCRIPTABLE NS_IMETHOD GetClosed(PRBool *aClosed); \
  NS_SCRIPTABLE NS_IMETHOD GetCrypto(nsIDOMCrypto * *aCrypto); \
  NS_SCRIPTABLE NS_IMETHOD GetPkcs11(nsIDOMPkcs11 * *aPkcs11); \
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultStatus(nsAString & aDefaultStatus); \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultStatus(const nsAString & aDefaultStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenX(float *aMozInnerScreenX); \
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenY(float *aMozInnerScreenY); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxX(PRInt32 *aScrollMaxX); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxY(PRInt32 *aScrollMaxY); \
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(PRBool *aFullScreen); \
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(PRBool aFullScreen); \
  NS_SCRIPTABLE NS_IMETHOD Back(void); \
  NS_SCRIPTABLE NS_IMETHOD Forward(void); \
  NS_SCRIPTABLE NS_IMETHOD Home(void); \
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 xPos, PRInt32 yPos); \
  NS_SCRIPTABLE NS_IMETHOD MoveBy(PRInt32 xDif, PRInt32 yDif); \
  NS_SCRIPTABLE NS_IMETHOD ResizeTo(PRInt32 width, PRInt32 height); \
  NS_SCRIPTABLE NS_IMETHOD ResizeBy(PRInt32 widthDif, PRInt32 heightDif); \
  NS_IMETHOD Open(const nsAString & url, const nsAString & name, const nsAString & options, nsIDOMWindow * *_retval NS_OUTPARAM); \
  NS_IMETHOD OpenDialog(const nsAString & url, const nsAString & name, const nsAString & options, nsISupports *aExtraArgument, nsIDOMWindow * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UpdateCommands(const nsAString & action); \
  NS_SCRIPTABLE NS_IMETHOD Find(const nsAString & str, PRBool caseSensitive, PRBool backwards, PRBool wrapAround, PRBool wholeWord, PRBool searchInFrames, PRBool showDialog, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintCount(PRUint64 *aMozPaintCount); \
  NS_SCRIPTABLE NS_IMETHOD MozRequestAnimationFrame(nsIAnimationFrameListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD GetMozAnimationStartTime(PRInt64 *aMozAnimationStartTime); \
  NS_SCRIPTABLE NS_IMETHOD GetURL(nsIDOMMozURLProperty * *aURL); \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalStorage(nsIDOMStorageList * *aGlobalStorage); \
  NS_SCRIPTABLE NS_IMETHOD GetOnafterprint(JSContext* cx, JS::Value *aOnafterprint); \
  NS_SCRIPTABLE NS_IMETHOD SetOnafterprint(JSContext* cx, const JS::Value & aOnafterprint); \
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeprint(JSContext* cx, JS::Value *aOnbeforeprint); \
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeprint(JSContext* cx, const JS::Value & aOnbeforeprint); \
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeunload(JSContext* cx, JS::Value *aOnbeforeunload); \
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeunload(JSContext* cx, const JS::Value & aOnbeforeunload); \
  NS_SCRIPTABLE NS_IMETHOD GetOnhashchange(JSContext* cx, JS::Value *aOnhashchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnhashchange(JSContext* cx, const JS::Value & aOnhashchange); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(JSContext* cx, JS::Value *aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(JSContext* cx, const JS::Value & aOnmessage); \
  NS_SCRIPTABLE NS_IMETHOD GetOnoffline(JSContext* cx, JS::Value *aOnoffline); \
  NS_SCRIPTABLE NS_IMETHOD SetOnoffline(JSContext* cx, const JS::Value & aOnoffline); \
  NS_SCRIPTABLE NS_IMETHOD GetOnonline(JSContext* cx, JS::Value *aOnonline); \
  NS_SCRIPTABLE NS_IMETHOD SetOnonline(JSContext* cx, const JS::Value & aOnonline); \
  NS_SCRIPTABLE NS_IMETHOD GetOnpopstate(JSContext* cx, JS::Value *aOnpopstate); \
  NS_SCRIPTABLE NS_IMETHOD SetOnpopstate(JSContext* cx, const JS::Value & aOnpopstate); \
  NS_SCRIPTABLE NS_IMETHOD GetOnpagehide(JSContext* cx, JS::Value *aOnpagehide); \
  NS_SCRIPTABLE NS_IMETHOD SetOnpagehide(JSContext* cx, const JS::Value & aOnpagehide); \
  NS_SCRIPTABLE NS_IMETHOD GetOnpageshow(JSContext* cx, JS::Value *aOnpageshow); \
  NS_SCRIPTABLE NS_IMETHOD SetOnpageshow(JSContext* cx, const JS::Value & aOnpageshow); \
  NS_SCRIPTABLE NS_IMETHOD GetOnresize(JSContext* cx, JS::Value *aOnresize); \
  NS_SCRIPTABLE NS_IMETHOD SetOnresize(JSContext* cx, const JS::Value & aOnresize); \
  NS_SCRIPTABLE NS_IMETHOD GetOnunload(JSContext* cx, JS::Value *aOnunload); \
  NS_SCRIPTABLE NS_IMETHOD SetOnunload(JSContext* cx, const JS::Value & aOnunload); \
  NS_SCRIPTABLE NS_IMETHOD GetOndevicemotion(JSContext* cx, JS::Value *aOndevicemotion); \
  NS_SCRIPTABLE NS_IMETHOD SetOndevicemotion(JSContext* cx, const JS::Value & aOndevicemotion); \
  NS_SCRIPTABLE NS_IMETHOD GetOndeviceorientation(JSContext* cx, JS::Value *aOndeviceorientation); \
  NS_SCRIPTABLE NS_IMETHOD SetOndeviceorientation(JSContext* cx, const JS::Value & aOndeviceorientation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWindow(nsIDOMWindow * *aWindow) { return _to GetWindow(aWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMWindow * *aSelf) { return _to GetSelf(aSelf); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument) { return _to GetDocument(aDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation) { return _to GetLocation(aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistory(nsIDOMHistory * *aHistory) { return _to GetHistory(aHistory); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocationbar(nsIDOMBarProp * *aLocationbar) { return _to GetLocationbar(aLocationbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetMenubar(nsIDOMBarProp * *aMenubar) { return _to GetMenubar(aMenubar); } \
  NS_SCRIPTABLE NS_IMETHOD GetPersonalbar(nsIDOMBarProp * *aPersonalbar) { return _to GetPersonalbar(aPersonalbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollbars(nsIDOMBarProp * *aScrollbars) { return _to GetScrollbars(aScrollbars); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusbar(nsIDOMBarProp * *aStatusbar) { return _to GetStatusbar(aStatusbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetToolbar(nsIDOMBarProp * *aToolbar) { return _to GetToolbar(aToolbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus) { return _to GetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD SetStatus(const nsAString & aStatus) { return _to SetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_SCRIPTABLE NS_IMETHOD Stop(void) { return _to Stop(); } \
  NS_SCRIPTABLE NS_IMETHOD Focus(void) { return _to Focus(); } \
  NS_SCRIPTABLE NS_IMETHOD Blur(void) { return _to Blur(); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetTop(nsIDOMWindow * *aTop) { return _to GetTop(aTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetOpener(nsIDOMWindow * *aOpener) { return _to GetOpener(aOpener); } \
  NS_SCRIPTABLE NS_IMETHOD SetOpener(nsIDOMWindow *aOpener) { return _to SetOpener(aOpener); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIDOMWindow * *aParent) { return _to GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetFrameElement(nsIDOMElement * *aFrameElement) { return _to GetFrameElement(aFrameElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetNavigator(nsIDOMNavigator * *aNavigator) { return _to GetNavigator(aNavigator); } \
  NS_SCRIPTABLE NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache) { return _to GetApplicationCache(aApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD Alert(const nsAString & text) { return _to Alert(text); } \
  NS_SCRIPTABLE NS_IMETHOD Confirm(const nsAString & text, PRBool *_retval NS_OUTPARAM) { return _to Confirm(text, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Prompt(const nsAString & aMessage, const nsAString & aInitial, nsAString & _retval NS_OUTPARAM) { return _to Prompt(aMessage, aInitial, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Print(void) { return _to Print(); } \
  NS_SCRIPTABLE NS_IMETHOD ShowModalDialog(const nsAString & aURI, nsIVariant *aArgs, const nsAString & aOptions, nsIVariant * *_retval NS_OUTPARAM) { return _to ShowModalDialog(aURI, aArgs, aOptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PostMessageMoz(const JS::Value & message, const nsAString & targetOrigin, JSContext* cx) { return _to PostMessageMoz(message, targetOrigin, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) { return _to Atob(aAsciiString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) { return _to Btoa(aBase64Data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorage(nsIDOMStorage * *aSessionStorage) { return _to GetSessionStorage(aSessionStorage); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalStorage(nsIDOMStorage * *aLocalStorage) { return _to GetLocalStorage(aLocalStorage); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *_retval NS_OUTPARAM) { return _to GetSelection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MatchMedia(const nsAString & media_query_list, nsIDOMMediaQueryList * *_retval NS_OUTPARAM) { return _to MatchMedia(media_query_list, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreen(nsIDOMScreen * *aScreen) { return _to GetScreen(aScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerWidth(PRInt32 *aInnerWidth) { return _to GetInnerWidth(aInnerWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetInnerWidth(PRInt32 aInnerWidth) { return _to SetInnerWidth(aInnerWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHeight(PRInt32 *aInnerHeight) { return _to GetInnerHeight(aInnerHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetInnerHeight(PRInt32 aInnerHeight) { return _to SetInnerHeight(aInnerHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(PRInt32 *aScrollX) { return _to GetScrollX(aScrollX); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageXOffset(PRInt32 *aPageXOffset) { return _to GetPageXOffset(aPageXOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(PRInt32 *aScrollY) { return _to GetScrollY(aScrollY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageYOffset(PRInt32 *aPageYOffset) { return _to GetPageYOffset(aPageYOffset); } \
  NS_SCRIPTABLE NS_IMETHOD Scroll(PRInt32 xScroll, PRInt32 yScroll) { return _to Scroll(xScroll, yScroll); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRInt32 xScroll, PRInt32 yScroll) { return _to ScrollTo(xScroll, yScroll); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(PRInt32 xScrollDif, PRInt32 yScrollDif) { return _to ScrollBy(xScrollDif, yScrollDif); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreenX(PRInt32 *aScreenX) { return _to GetScreenX(aScreenX); } \
  NS_SCRIPTABLE NS_IMETHOD SetScreenX(PRInt32 aScreenX) { return _to SetScreenX(aScreenX); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreenY(PRInt32 *aScreenY) { return _to GetScreenY(aScreenY); } \
  NS_SCRIPTABLE NS_IMETHOD SetScreenY(PRInt32 aScreenY) { return _to SetScreenY(aScreenY); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWidth(PRInt32 *aOuterWidth) { return _to GetOuterWidth(aOuterWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetOuterWidth(PRInt32 aOuterWidth) { return _to SetOuterWidth(aOuterWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterHeight(PRInt32 *aOuterHeight) { return _to GetOuterHeight(aOuterHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetOuterHeight(PRInt32 aOuterHeight) { return _to SetOuterHeight(aOuterHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyle(nsIDOMElement *elt, const nsAString & pseudoElt, nsIDOMCSSStyleDeclaration * *_retval NS_OUTPARAM) { return _to GetComputedStyle(elt, pseudoElt, _retval); } \
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot) { return _to GetWindowRoot(aWindowRoot); } \
  NS_IMETHOD GetFrames(nsIDOMWindowCollection * *aFrames) { return _to GetFrames(aFrames); } \
  NS_IMETHOD GetTextZoom(float *aTextZoom) { return _to GetTextZoom(aTextZoom); } \
  NS_IMETHOD SetTextZoom(float aTextZoom) { return _to SetTextZoom(aTextZoom); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollByLines(PRInt32 numLines) { return _to ScrollByLines(numLines); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollByPages(PRInt32 numPages) { return _to ScrollByPages(numPages); } \
  NS_SCRIPTABLE NS_IMETHOD SizeToContent(void) { return _to SizeToContent(); } \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) { return _to GetContent(aContent); } \
  NS_IMETHOD GetPrompter(nsIPrompt * *aPrompter) { return _to GetPrompter(aPrompter); } \
  NS_SCRIPTABLE NS_IMETHOD GetClosed(PRBool *aClosed) { return _to GetClosed(aClosed); } \
  NS_SCRIPTABLE NS_IMETHOD GetCrypto(nsIDOMCrypto * *aCrypto) { return _to GetCrypto(aCrypto); } \
  NS_SCRIPTABLE NS_IMETHOD GetPkcs11(nsIDOMPkcs11 * *aPkcs11) { return _to GetPkcs11(aPkcs11); } \
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return _to GetControllers(aControllers); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultStatus(nsAString & aDefaultStatus) { return _to GetDefaultStatus(aDefaultStatus); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultStatus(const nsAString & aDefaultStatus) { return _to SetDefaultStatus(aDefaultStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenX(float *aMozInnerScreenX) { return _to GetMozInnerScreenX(aMozInnerScreenX); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenY(float *aMozInnerScreenY) { return _to GetMozInnerScreenY(aMozInnerScreenY); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxX(PRInt32 *aScrollMaxX) { return _to GetScrollMaxX(aScrollMaxX); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxY(PRInt32 *aScrollMaxY) { return _to GetScrollMaxY(aScrollMaxY); } \
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(PRBool *aFullScreen) { return _to GetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(PRBool aFullScreen) { return _to SetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD Back(void) { return _to Back(); } \
  NS_SCRIPTABLE NS_IMETHOD Forward(void) { return _to Forward(); } \
  NS_SCRIPTABLE NS_IMETHOD Home(void) { return _to Home(); } \
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 xPos, PRInt32 yPos) { return _to MoveTo(xPos, yPos); } \
  NS_SCRIPTABLE NS_IMETHOD MoveBy(PRInt32 xDif, PRInt32 yDif) { return _to MoveBy(xDif, yDif); } \
  NS_SCRIPTABLE NS_IMETHOD ResizeTo(PRInt32 width, PRInt32 height) { return _to ResizeTo(width, height); } \
  NS_SCRIPTABLE NS_IMETHOD ResizeBy(PRInt32 widthDif, PRInt32 heightDif) { return _to ResizeBy(widthDif, heightDif); } \
  NS_IMETHOD Open(const nsAString & url, const nsAString & name, const nsAString & options, nsIDOMWindow * *_retval NS_OUTPARAM) { return _to Open(url, name, options, _retval); } \
  NS_IMETHOD OpenDialog(const nsAString & url, const nsAString & name, const nsAString & options, nsISupports *aExtraArgument, nsIDOMWindow * *_retval NS_OUTPARAM) { return _to OpenDialog(url, name, options, aExtraArgument, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateCommands(const nsAString & action) { return _to UpdateCommands(action); } \
  NS_SCRIPTABLE NS_IMETHOD Find(const nsAString & str, PRBool caseSensitive, PRBool backwards, PRBool wrapAround, PRBool wholeWord, PRBool searchInFrames, PRBool showDialog, PRBool *_retval NS_OUTPARAM) { return _to Find(str, caseSensitive, backwards, wrapAround, wholeWord, searchInFrames, showDialog, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintCount(PRUint64 *aMozPaintCount) { return _to GetMozPaintCount(aMozPaintCount); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestAnimationFrame(nsIAnimationFrameListener *aListener) { return _to MozRequestAnimationFrame(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAnimationStartTime(PRInt64 *aMozAnimationStartTime) { return _to GetMozAnimationStartTime(aMozAnimationStartTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetURL(nsIDOMMozURLProperty * *aURL) { return _to GetURL(aURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalStorage(nsIDOMStorageList * *aGlobalStorage) { return _to GetGlobalStorage(aGlobalStorage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnafterprint(JSContext* cx, JS::Value *aOnafterprint) { return _to GetOnafterprint(cx, aOnafterprint); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnafterprint(JSContext* cx, const JS::Value & aOnafterprint) { return _to SetOnafterprint(cx, aOnafterprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeprint(JSContext* cx, JS::Value *aOnbeforeprint) { return _to GetOnbeforeprint(cx, aOnbeforeprint); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeprint(JSContext* cx, const JS::Value & aOnbeforeprint) { return _to SetOnbeforeprint(cx, aOnbeforeprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeunload(JSContext* cx, JS::Value *aOnbeforeunload) { return _to GetOnbeforeunload(cx, aOnbeforeunload); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeunload(JSContext* cx, const JS::Value & aOnbeforeunload) { return _to SetOnbeforeunload(cx, aOnbeforeunload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnhashchange(JSContext* cx, JS::Value *aOnhashchange) { return _to GetOnhashchange(cx, aOnhashchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnhashchange(JSContext* cx, const JS::Value & aOnhashchange) { return _to SetOnhashchange(cx, aOnhashchange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(JSContext* cx, JS::Value *aOnmessage) { return _to GetOnmessage(cx, aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(JSContext* cx, const JS::Value & aOnmessage) { return _to SetOnmessage(cx, aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnoffline(JSContext* cx, JS::Value *aOnoffline) { return _to GetOnoffline(cx, aOnoffline); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnoffline(JSContext* cx, const JS::Value & aOnoffline) { return _to SetOnoffline(cx, aOnoffline); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnonline(JSContext* cx, JS::Value *aOnonline) { return _to GetOnonline(cx, aOnonline); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnonline(JSContext* cx, const JS::Value & aOnonline) { return _to SetOnonline(cx, aOnonline); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnpopstate(JSContext* cx, JS::Value *aOnpopstate) { return _to GetOnpopstate(cx, aOnpopstate); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnpopstate(JSContext* cx, const JS::Value & aOnpopstate) { return _to SetOnpopstate(cx, aOnpopstate); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnpagehide(JSContext* cx, JS::Value *aOnpagehide) { return _to GetOnpagehide(cx, aOnpagehide); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnpagehide(JSContext* cx, const JS::Value & aOnpagehide) { return _to SetOnpagehide(cx, aOnpagehide); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnpageshow(JSContext* cx, JS::Value *aOnpageshow) { return _to GetOnpageshow(cx, aOnpageshow); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnpageshow(JSContext* cx, const JS::Value & aOnpageshow) { return _to SetOnpageshow(cx, aOnpageshow); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnresize(JSContext* cx, JS::Value *aOnresize) { return _to GetOnresize(cx, aOnresize); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnresize(JSContext* cx, const JS::Value & aOnresize) { return _to SetOnresize(cx, aOnresize); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnunload(JSContext* cx, JS::Value *aOnunload) { return _to GetOnunload(cx, aOnunload); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnunload(JSContext* cx, const JS::Value & aOnunload) { return _to SetOnunload(cx, aOnunload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndevicemotion(JSContext* cx, JS::Value *aOndevicemotion) { return _to GetOndevicemotion(cx, aOndevicemotion); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndevicemotion(JSContext* cx, const JS::Value & aOndevicemotion) { return _to SetOndevicemotion(cx, aOndevicemotion); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndeviceorientation(JSContext* cx, JS::Value *aOndeviceorientation) { return _to GetOndeviceorientation(cx, aOndeviceorientation); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndeviceorientation(JSContext* cx, const JS::Value & aOndeviceorientation) { return _to SetOndeviceorientation(cx, aOndeviceorientation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWindow(nsIDOMWindow * *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindow(aWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelf(nsIDOMWindow * *aSelf) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelf(aSelf); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocument(aDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocation(aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistory(nsIDOMHistory * *aHistory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistory(aHistory); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocationbar(nsIDOMBarProp * *aLocationbar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocationbar(aLocationbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetMenubar(nsIDOMBarProp * *aMenubar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMenubar(aMenubar); } \
  NS_SCRIPTABLE NS_IMETHOD GetPersonalbar(nsIDOMBarProp * *aPersonalbar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersonalbar(aPersonalbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollbars(nsIDOMBarProp * *aScrollbars) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollbars(aScrollbars); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusbar(nsIDOMBarProp * *aStatusbar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatusbar(aStatusbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetToolbar(nsIDOMBarProp * *aToolbar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetToolbar(aToolbar); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatus(nsAString & aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD SetStatus(const nsAString & aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStatus(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_SCRIPTABLE NS_IMETHOD Stop(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Stop(); } \
  NS_SCRIPTABLE NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } \
  NS_SCRIPTABLE NS_IMETHOD Blur(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Blur(); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetTop(nsIDOMWindow * *aTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTop(aTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetOpener(nsIDOMWindow * *aOpener) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOpener(aOpener); } \
  NS_SCRIPTABLE NS_IMETHOD SetOpener(nsIDOMWindow *aOpener) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOpener(aOpener); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(nsIDOMWindow * *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetFrameElement(nsIDOMElement * *aFrameElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrameElement(aFrameElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetNavigator(nsIDOMNavigator * *aNavigator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNavigator(aNavigator); } \
  NS_SCRIPTABLE NS_IMETHOD GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetApplicationCache(aApplicationCache); } \
  NS_SCRIPTABLE NS_IMETHOD Alert(const nsAString & text) { return !_to ? NS_ERROR_NULL_POINTER : _to->Alert(text); } \
  NS_SCRIPTABLE NS_IMETHOD Confirm(const nsAString & text, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Confirm(text, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Prompt(const nsAString & aMessage, const nsAString & aInitial, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Prompt(aMessage, aInitial, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Print(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Print(); } \
  NS_SCRIPTABLE NS_IMETHOD ShowModalDialog(const nsAString & aURI, nsIVariant *aArgs, const nsAString & aOptions, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowModalDialog(aURI, aArgs, aOptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PostMessageMoz(const JS::Value & message, const nsAString & targetOrigin, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostMessageMoz(message, targetOrigin, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Atob(aAsciiString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Btoa(aBase64Data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorage(nsIDOMStorage * *aSessionStorage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionStorage(aSessionStorage); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalStorage(nsIDOMStorage * *aLocalStorage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalStorage(aLocalStorage); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MatchMedia(const nsAString & media_query_list, nsIDOMMediaQueryList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MatchMedia(media_query_list, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreen(nsIDOMScreen * *aScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreen(aScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerWidth(PRInt32 *aInnerWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerWidth(aInnerWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetInnerWidth(PRInt32 aInnerWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInnerWidth(aInnerWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerHeight(PRInt32 *aInnerHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerHeight(aInnerHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetInnerHeight(PRInt32 aInnerHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInnerHeight(aInnerHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollX(PRInt32 *aScrollX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollX(aScrollX); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageXOffset(PRInt32 *aPageXOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageXOffset(aPageXOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollY(PRInt32 *aScrollY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollY(aScrollY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPageYOffset(PRInt32 *aPageYOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageYOffset(aPageYOffset); } \
  NS_SCRIPTABLE NS_IMETHOD Scroll(PRInt32 xScroll, PRInt32 yScroll) { return !_to ? NS_ERROR_NULL_POINTER : _to->Scroll(xScroll, yScroll); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollTo(PRInt32 xScroll, PRInt32 yScroll) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollTo(xScroll, yScroll); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollBy(PRInt32 xScrollDif, PRInt32 yScrollDif) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollBy(xScrollDif, yScrollDif); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreenX(PRInt32 *aScreenX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreenX(aScreenX); } \
  NS_SCRIPTABLE NS_IMETHOD SetScreenX(PRInt32 aScreenX) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScreenX(aScreenX); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreenY(PRInt32 *aScreenY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreenY(aScreenY); } \
  NS_SCRIPTABLE NS_IMETHOD SetScreenY(PRInt32 aScreenY) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScreenY(aScreenY); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWidth(PRInt32 *aOuterWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterWidth(aOuterWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetOuterWidth(PRInt32 aOuterWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOuterWidth(aOuterWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterHeight(PRInt32 *aOuterHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterHeight(aOuterHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetOuterHeight(PRInt32 aOuterHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOuterHeight(aOuterHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetComputedStyle(nsIDOMElement *elt, const nsAString & pseudoElt, nsIDOMCSSStyleDeclaration * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetComputedStyle(elt, pseudoElt, _retval); } \
  NS_IMETHOD GetWindowRoot(nsIDOMEventTarget * *aWindowRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowRoot(aWindowRoot); } \
  NS_IMETHOD GetFrames(nsIDOMWindowCollection * *aFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrames(aFrames); } \
  NS_IMETHOD GetTextZoom(float *aTextZoom) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextZoom(aTextZoom); } \
  NS_IMETHOD SetTextZoom(float aTextZoom) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTextZoom(aTextZoom); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollByLines(PRInt32 numLines) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollByLines(numLines); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollByPages(PRInt32 numPages) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollByPages(numPages); } \
  NS_SCRIPTABLE NS_IMETHOD SizeToContent(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SizeToContent(); } \
  NS_SCRIPTABLE NS_IMETHOD GetContent(nsIDOMWindow * *aContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContent(aContent); } \
  NS_IMETHOD GetPrompter(nsIPrompt * *aPrompter) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrompter(aPrompter); } \
  NS_SCRIPTABLE NS_IMETHOD GetClosed(PRBool *aClosed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosed(aClosed); } \
  NS_SCRIPTABLE NS_IMETHOD GetCrypto(nsIDOMCrypto * *aCrypto) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCrypto(aCrypto); } \
  NS_SCRIPTABLE NS_IMETHOD GetPkcs11(nsIDOMPkcs11 * *aPkcs11) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPkcs11(aPkcs11); } \
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllers(aControllers); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultStatus(nsAString & aDefaultStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultStatus(aDefaultStatus); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultStatus(const nsAString & aDefaultStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultStatus(aDefaultStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenX(float *aMozInnerScreenX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozInnerScreenX(aMozInnerScreenX); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozInnerScreenY(float *aMozInnerScreenY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozInnerScreenY(aMozInnerScreenY); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxX(PRInt32 *aScrollMaxX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollMaxX(aScrollMaxX); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollMaxY(PRInt32 *aScrollMaxY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollMaxY(aScrollMaxY); } \
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(PRBool *aFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(PRBool aFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD Back(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Back(); } \
  NS_SCRIPTABLE NS_IMETHOD Forward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Forward(); } \
  NS_SCRIPTABLE NS_IMETHOD Home(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Home(); } \
  NS_SCRIPTABLE NS_IMETHOD MoveTo(PRInt32 xPos, PRInt32 yPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveTo(xPos, yPos); } \
  NS_SCRIPTABLE NS_IMETHOD MoveBy(PRInt32 xDif, PRInt32 yDif) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveBy(xDif, yDif); } \
  NS_SCRIPTABLE NS_IMETHOD ResizeTo(PRInt32 width, PRInt32 height) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResizeTo(width, height); } \
  NS_SCRIPTABLE NS_IMETHOD ResizeBy(PRInt32 widthDif, PRInt32 heightDif) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResizeBy(widthDif, heightDif); } \
  NS_IMETHOD Open(const nsAString & url, const nsAString & name, const nsAString & options, nsIDOMWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(url, name, options, _retval); } \
  NS_IMETHOD OpenDialog(const nsAString & url, const nsAString & name, const nsAString & options, nsISupports *aExtraArgument, nsIDOMWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenDialog(url, name, options, aExtraArgument, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateCommands(const nsAString & action) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateCommands(action); } \
  NS_SCRIPTABLE NS_IMETHOD Find(const nsAString & str, PRBool caseSensitive, PRBool backwards, PRBool wrapAround, PRBool wholeWord, PRBool searchInFrames, PRBool showDialog, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Find(str, caseSensitive, backwards, wrapAround, wholeWord, searchInFrames, showDialog, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozPaintCount(PRUint64 *aMozPaintCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozPaintCount(aMozPaintCount); } \
  NS_SCRIPTABLE NS_IMETHOD MozRequestAnimationFrame(nsIAnimationFrameListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozRequestAnimationFrame(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAnimationStartTime(PRInt64 *aMozAnimationStartTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozAnimationStartTime(aMozAnimationStartTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetURL(nsIDOMMozURLProperty * *aURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURL(aURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalStorage(nsIDOMStorageList * *aGlobalStorage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalStorage(aGlobalStorage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnafterprint(JSContext* cx, JS::Value *aOnafterprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnafterprint(cx, aOnafterprint); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnafterprint(JSContext* cx, const JS::Value & aOnafterprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnafterprint(cx, aOnafterprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeprint(JSContext* cx, JS::Value *aOnbeforeprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnbeforeprint(cx, aOnbeforeprint); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeprint(JSContext* cx, const JS::Value & aOnbeforeprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnbeforeprint(cx, aOnbeforeprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnbeforeunload(JSContext* cx, JS::Value *aOnbeforeunload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnbeforeunload(cx, aOnbeforeunload); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnbeforeunload(JSContext* cx, const JS::Value & aOnbeforeunload) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnbeforeunload(cx, aOnbeforeunload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnhashchange(JSContext* cx, JS::Value *aOnhashchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnhashchange(cx, aOnhashchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnhashchange(JSContext* cx, const JS::Value & aOnhashchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnhashchange(cx, aOnhashchange); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmessage(JSContext* cx, JS::Value *aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmessage(cx, aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmessage(JSContext* cx, const JS::Value & aOnmessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmessage(cx, aOnmessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnoffline(JSContext* cx, JS::Value *aOnoffline) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnoffline(cx, aOnoffline); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnoffline(JSContext* cx, const JS::Value & aOnoffline) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnoffline(cx, aOnoffline); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnonline(JSContext* cx, JS::Value *aOnonline) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnonline(cx, aOnonline); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnonline(JSContext* cx, const JS::Value & aOnonline) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnonline(cx, aOnonline); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnpopstate(JSContext* cx, JS::Value *aOnpopstate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnpopstate(cx, aOnpopstate); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnpopstate(JSContext* cx, const JS::Value & aOnpopstate) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnpopstate(cx, aOnpopstate); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnpagehide(JSContext* cx, JS::Value *aOnpagehide) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnpagehide(cx, aOnpagehide); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnpagehide(JSContext* cx, const JS::Value & aOnpagehide) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnpagehide(cx, aOnpagehide); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnpageshow(JSContext* cx, JS::Value *aOnpageshow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnpageshow(cx, aOnpageshow); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnpageshow(JSContext* cx, const JS::Value & aOnpageshow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnpageshow(cx, aOnpageshow); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnresize(JSContext* cx, JS::Value *aOnresize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnresize(cx, aOnresize); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnresize(JSContext* cx, const JS::Value & aOnresize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnresize(cx, aOnresize); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnunload(JSContext* cx, JS::Value *aOnunload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnunload(cx, aOnunload); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnunload(JSContext* cx, const JS::Value & aOnunload) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnunload(cx, aOnunload); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndevicemotion(JSContext* cx, JS::Value *aOndevicemotion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOndevicemotion(cx, aOndevicemotion); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndevicemotion(JSContext* cx, const JS::Value & aOndevicemotion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOndevicemotion(cx, aOndevicemotion); } \
  NS_SCRIPTABLE NS_IMETHOD GetOndeviceorientation(JSContext* cx, JS::Value *aOndeviceorientation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOndeviceorientation(cx, aOndeviceorientation); } \
  NS_SCRIPTABLE NS_IMETHOD SetOndeviceorientation(JSContext* cx, const JS::Value & aOndeviceorientation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOndeviceorientation(cx, aOndeviceorientation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindow : public nsIDOMWindow
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOW

  nsDOMWindow();

private:
  ~nsDOMWindow();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMWindow, nsIDOMWindow)

nsDOMWindow::nsDOMWindow()
{
  /* member initializers and constructor code */
}

nsDOMWindow::~nsDOMWindow()
{
  /* destructor code */
}

/* readonly attribute nsIDOMWindow window; */
NS_IMETHODIMP nsDOMWindow::GetWindow(nsIDOMWindow * *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow self; */
NS_IMETHODIMP nsDOMWindow::GetSelf(nsIDOMWindow * *aSelf)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDocument document; */
NS_IMETHODIMP nsDOMWindow::GetDocument(nsIDOMDocument * *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMWindow::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMLocation location; */
NS_IMETHODIMP nsDOMWindow::GetLocation(nsIDOMLocation * *aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHistory history; */
NS_IMETHODIMP nsDOMWindow::GetHistory(nsIDOMHistory * *aHistory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMBarProp locationbar; */
NS_IMETHODIMP nsDOMWindow::GetLocationbar(nsIDOMBarProp * *aLocationbar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMBarProp menubar; */
NS_IMETHODIMP nsDOMWindow::GetMenubar(nsIDOMBarProp * *aMenubar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMBarProp personalbar; */
NS_IMETHODIMP nsDOMWindow::GetPersonalbar(nsIDOMBarProp * *aPersonalbar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMBarProp scrollbars; */
NS_IMETHODIMP nsDOMWindow::GetScrollbars(nsIDOMBarProp * *aScrollbars)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMBarProp statusbar; */
NS_IMETHODIMP nsDOMWindow::GetStatusbar(nsIDOMBarProp * *aStatusbar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMBarProp toolbar; */
NS_IMETHODIMP nsDOMWindow::GetToolbar(nsIDOMBarProp * *aToolbar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString status; */
NS_IMETHODIMP nsDOMWindow::GetStatus(nsAString & aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetStatus(const nsAString & aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsDOMWindow::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stop (); */
NS_IMETHODIMP nsDOMWindow::Stop()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsDOMWindow::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blur (); */
NS_IMETHODIMP nsDOMWindow::Blur()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMWindow::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow top; */
NS_IMETHODIMP nsDOMWindow::GetTop(nsIDOMWindow * *aTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMWindow opener; */
NS_IMETHODIMP nsDOMWindow::GetOpener(nsIDOMWindow * *aOpener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOpener(nsIDOMWindow *aOpener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow parent; */
NS_IMETHODIMP nsDOMWindow::GetParent(nsIDOMWindow * *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement frameElement; */
NS_IMETHODIMP nsDOMWindow::GetFrameElement(nsIDOMElement * *aFrameElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNavigator navigator; */
NS_IMETHODIMP nsDOMWindow::GetNavigator(nsIDOMNavigator * *aNavigator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMOfflineResourceList applicationCache; */
NS_IMETHODIMP nsDOMWindow::GetApplicationCache(nsIDOMOfflineResourceList * *aApplicationCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void alert (in DOMString text); */
NS_IMETHODIMP nsDOMWindow::Alert(const nsAString & text)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirm (in DOMString text); */
NS_IMETHODIMP nsDOMWindow::Confirm(const nsAString & text, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString prompt ([optional] in DOMString aMessage, [optional] in DOMString aInitial); */
NS_IMETHODIMP nsDOMWindow::Prompt(const nsAString & aMessage, const nsAString & aInitial, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void print (); */
NS_IMETHODIMP nsDOMWindow::Print()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant showModalDialog (in DOMString aURI, [optional] in nsIVariant aArgs, [optional] in DOMString aOptions); */
NS_IMETHODIMP nsDOMWindow::ShowModalDialog(const nsAString & aURI, nsIVariant *aArgs, const nsAString & aOptions, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(PostMessageMoz),implicit_jscontext] void postMessage (in jsval message, in DOMString targetOrigin); */
NS_IMETHODIMP nsDOMWindow::PostMessageMoz(const JS::Value & message, const nsAString & targetOrigin, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString atob (in DOMString aAsciiString); */
NS_IMETHODIMP nsDOMWindow::Atob(const nsAString & aAsciiString, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString btoa (in DOMString aBase64Data); */
NS_IMETHODIMP nsDOMWindow::Btoa(const nsAString & aBase64Data, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMStorage sessionStorage; */
NS_IMETHODIMP nsDOMWindow::GetSessionStorage(nsIDOMStorage * *aSessionStorage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMStorage localStorage; */
NS_IMETHODIMP nsDOMWindow::GetLocalStorage(nsIDOMStorage * *aLocalStorage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISelection getSelection (); */
NS_IMETHODIMP nsDOMWindow::GetSelection(nsISelection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMediaQueryList matchMedia (in DOMString media_query_list); */
NS_IMETHODIMP nsDOMWindow::MatchMedia(const nsAString & media_query_list, nsIDOMMediaQueryList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMScreen screen; */
NS_IMETHODIMP nsDOMWindow::GetScreen(nsIDOMScreen * *aScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long innerWidth; */
NS_IMETHODIMP nsDOMWindow::GetInnerWidth(PRInt32 *aInnerWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetInnerWidth(PRInt32 aInnerWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long innerHeight; */
NS_IMETHODIMP nsDOMWindow::GetInnerHeight(PRInt32 *aInnerHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetInnerHeight(PRInt32 aInnerHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long scrollX; */
NS_IMETHODIMP nsDOMWindow::GetScrollX(PRInt32 *aScrollX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pageXOffset; */
NS_IMETHODIMP nsDOMWindow::GetPageXOffset(PRInt32 *aPageXOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long scrollY; */
NS_IMETHODIMP nsDOMWindow::GetScrollY(PRInt32 *aScrollY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pageYOffset; */
NS_IMETHODIMP nsDOMWindow::GetPageYOffset(PRInt32 *aPageYOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scroll (in long xScroll, in long yScroll); */
NS_IMETHODIMP nsDOMWindow::Scroll(PRInt32 xScroll, PRInt32 yScroll)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollTo (in long xScroll, in long yScroll); */
NS_IMETHODIMP nsDOMWindow::ScrollTo(PRInt32 xScroll, PRInt32 yScroll)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollBy (in long xScrollDif, in long yScrollDif); */
NS_IMETHODIMP nsDOMWindow::ScrollBy(PRInt32 xScrollDif, PRInt32 yScrollDif)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long screenX; */
NS_IMETHODIMP nsDOMWindow::GetScreenX(PRInt32 *aScreenX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetScreenX(PRInt32 aScreenX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long screenY; */
NS_IMETHODIMP nsDOMWindow::GetScreenY(PRInt32 *aScreenY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetScreenY(PRInt32 aScreenY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long outerWidth; */
NS_IMETHODIMP nsDOMWindow::GetOuterWidth(PRInt32 *aOuterWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOuterWidth(PRInt32 aOuterWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long outerHeight; */
NS_IMETHODIMP nsDOMWindow::GetOuterHeight(PRInt32 *aOuterHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOuterHeight(PRInt32 aOuterHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMCSSStyleDeclaration getComputedStyle (in nsIDOMElement elt, [optional] in DOMString pseudoElt); */
NS_IMETHODIMP nsDOMWindow::GetComputedStyle(nsIDOMElement *elt, const nsAString & pseudoElt, nsIDOMCSSStyleDeclaration * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIDOMEventTarget windowRoot; */
NS_IMETHODIMP nsDOMWindow::GetWindowRoot(nsIDOMEventTarget * *aWindowRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIDOMWindowCollection frames; */
NS_IMETHODIMP nsDOMWindow::GetFrames(nsIDOMWindowCollection * *aFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute float textZoom; */
NS_IMETHODIMP nsDOMWindow::GetTextZoom(float *aTextZoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetTextZoom(float aTextZoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollByLines (in long numLines); */
NS_IMETHODIMP nsDOMWindow::ScrollByLines(PRInt32 numLines)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollByPages (in long numPages); */
NS_IMETHODIMP nsDOMWindow::ScrollByPages(PRInt32 numPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sizeToContent (); */
NS_IMETHODIMP nsDOMWindow::SizeToContent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow content; */
NS_IMETHODIMP nsDOMWindow::GetContent(nsIDOMWindow * *aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIPrompt prompter; */
NS_IMETHODIMP nsDOMWindow::GetPrompter(nsIPrompt * *aPrompter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean closed; */
NS_IMETHODIMP nsDOMWindow::GetClosed(PRBool *aClosed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMCrypto crypto; */
NS_IMETHODIMP nsDOMWindow::GetCrypto(nsIDOMCrypto * *aCrypto)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMPkcs11 pkcs11; */
NS_IMETHODIMP nsDOMWindow::GetPkcs11(nsIDOMPkcs11 * *aPkcs11)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIControllers controllers; */
NS_IMETHODIMP nsDOMWindow::GetControllers(nsIControllers * *aControllers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString defaultStatus; */
NS_IMETHODIMP nsDOMWindow::GetDefaultStatus(nsAString & aDefaultStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetDefaultStatus(const nsAString & aDefaultStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float mozInnerScreenX; */
NS_IMETHODIMP nsDOMWindow::GetMozInnerScreenX(float *aMozInnerScreenX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float mozInnerScreenY; */
NS_IMETHODIMP nsDOMWindow::GetMozInnerScreenY(float *aMozInnerScreenY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long scrollMaxX; */
NS_IMETHODIMP nsDOMWindow::GetScrollMaxX(PRInt32 *aScrollMaxX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long scrollMaxY; */
NS_IMETHODIMP nsDOMWindow::GetScrollMaxY(PRInt32 *aScrollMaxY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean fullScreen; */
NS_IMETHODIMP nsDOMWindow::GetFullScreen(PRBool *aFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetFullScreen(PRBool aFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void back (); */
NS_IMETHODIMP nsDOMWindow::Back()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forward (); */
NS_IMETHODIMP nsDOMWindow::Forward()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void home (); */
NS_IMETHODIMP nsDOMWindow::Home()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveTo (in long xPos, in long yPos); */
NS_IMETHODIMP nsDOMWindow::MoveTo(PRInt32 xPos, PRInt32 yPos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveBy (in long xDif, in long yDif); */
NS_IMETHODIMP nsDOMWindow::MoveBy(PRInt32 xDif, PRInt32 yDif)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resizeTo (in long width, in long height); */
NS_IMETHODIMP nsDOMWindow::ResizeTo(PRInt32 width, PRInt32 height)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resizeBy (in long widthDif, in long heightDif); */
NS_IMETHODIMP nsDOMWindow::ResizeBy(PRInt32 widthDif, PRInt32 heightDif)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIDOMWindow open (in DOMString url, in DOMString name, in DOMString options); */
NS_IMETHODIMP nsDOMWindow::Open(const nsAString & url, const nsAString & name, const nsAString & options, nsIDOMWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIDOMWindow openDialog (in DOMString url, in DOMString name, in DOMString options, in nsISupports aExtraArgument); */
NS_IMETHODIMP nsDOMWindow::OpenDialog(const nsAString & url, const nsAString & name, const nsAString & options, nsISupports *aExtraArgument, nsIDOMWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateCommands (in DOMString action); */
NS_IMETHODIMP nsDOMWindow::UpdateCommands(const nsAString & action)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean find ([optional] in DOMString str, [optional] in boolean caseSensitive, [optional] in boolean backwards, [optional] in boolean wrapAround, [optional] in boolean wholeWord, [optional] in boolean searchInFrames, [optional] in boolean showDialog); */
NS_IMETHODIMP nsDOMWindow::Find(const nsAString & str, PRBool caseSensitive, PRBool backwards, PRBool wrapAround, PRBool wholeWord, PRBool searchInFrames, PRBool showDialog, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long mozPaintCount; */
NS_IMETHODIMP nsDOMWindow::GetMozPaintCount(PRUint64 *aMozPaintCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozRequestAnimationFrame ([optional] in nsIAnimationFrameListener aListener); */
NS_IMETHODIMP nsDOMWindow::MozRequestAnimationFrame(nsIAnimationFrameListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long mozAnimationStartTime; */
NS_IMETHODIMP nsDOMWindow::GetMozAnimationStartTime(PRInt64 *aMozAnimationStartTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMMozURLProperty URL; */
NS_IMETHODIMP nsDOMWindow::GetURL(nsIDOMMozURLProperty * *aURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMStorageList globalStorage; */
NS_IMETHODIMP nsDOMWindow::GetGlobalStorage(nsIDOMStorageList * *aGlobalStorage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onafterprint; */
NS_IMETHODIMP nsDOMWindow::GetOnafterprint(JSContext* cx, JS::Value *aOnafterprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnafterprint(JSContext* cx, const JS::Value & aOnafterprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onbeforeprint; */
NS_IMETHODIMP nsDOMWindow::GetOnbeforeprint(JSContext* cx, JS::Value *aOnbeforeprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnbeforeprint(JSContext* cx, const JS::Value & aOnbeforeprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onbeforeunload; */
NS_IMETHODIMP nsDOMWindow::GetOnbeforeunload(JSContext* cx, JS::Value *aOnbeforeunload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnbeforeunload(JSContext* cx, const JS::Value & aOnbeforeunload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onhashchange; */
NS_IMETHODIMP nsDOMWindow::GetOnhashchange(JSContext* cx, JS::Value *aOnhashchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnhashchange(JSContext* cx, const JS::Value & aOnhashchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onmessage; */
NS_IMETHODIMP nsDOMWindow::GetOnmessage(JSContext* cx, JS::Value *aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnmessage(JSContext* cx, const JS::Value & aOnmessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onoffline; */
NS_IMETHODIMP nsDOMWindow::GetOnoffline(JSContext* cx, JS::Value *aOnoffline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnoffline(JSContext* cx, const JS::Value & aOnoffline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval ononline; */
NS_IMETHODIMP nsDOMWindow::GetOnonline(JSContext* cx, JS::Value *aOnonline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnonline(JSContext* cx, const JS::Value & aOnonline)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onpopstate; */
NS_IMETHODIMP nsDOMWindow::GetOnpopstate(JSContext* cx, JS::Value *aOnpopstate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnpopstate(JSContext* cx, const JS::Value & aOnpopstate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onpagehide; */
NS_IMETHODIMP nsDOMWindow::GetOnpagehide(JSContext* cx, JS::Value *aOnpagehide)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnpagehide(JSContext* cx, const JS::Value & aOnpagehide)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onpageshow; */
NS_IMETHODIMP nsDOMWindow::GetOnpageshow(JSContext* cx, JS::Value *aOnpageshow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnpageshow(JSContext* cx, const JS::Value & aOnpageshow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onresize; */
NS_IMETHODIMP nsDOMWindow::GetOnresize(JSContext* cx, JS::Value *aOnresize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnresize(JSContext* cx, const JS::Value & aOnresize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onunload; */
NS_IMETHODIMP nsDOMWindow::GetOnunload(JSContext* cx, JS::Value *aOnunload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOnunload(JSContext* cx, const JS::Value & aOnunload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval ondevicemotion; */
NS_IMETHODIMP nsDOMWindow::GetOndevicemotion(JSContext* cx, JS::Value *aOndevicemotion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOndevicemotion(JSContext* cx, const JS::Value & aOndevicemotion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval ondeviceorientation; */
NS_IMETHODIMP nsDOMWindow::GetOndeviceorientation(JSContext* cx, JS::Value *aOndeviceorientation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindow::SetOndeviceorientation(JSContext* cx, const JS::Value & aOndeviceorientation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMWindowPerformance */
#define NS_IDOMWINDOWPERFORMANCE_IID_STR "2146c906-57f7-486c-a1b4-8cdb57ef577f"

#define NS_IDOMWINDOWPERFORMANCE_IID \
  {0x2146c906, 0x57f7, 0x486c, \
    { 0xa1, 0xb4, 0x8c, 0xdb, 0x57, 0xef, 0x57, 0x7f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMWindowPerformance : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOWPERFORMANCE_IID)

  /* readonly attribute nsIDOMPerformance performance; */
  NS_SCRIPTABLE NS_IMETHOD GetPerformance(nsIDOMPerformance * *aPerformance) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindowPerformance, NS_IDOMWINDOWPERFORMANCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOWPERFORMANCE \
  NS_SCRIPTABLE NS_IMETHOD GetPerformance(nsIDOMPerformance * *aPerformance); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOWPERFORMANCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPerformance(nsIDOMPerformance * *aPerformance) { return _to GetPerformance(aPerformance); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOWPERFORMANCE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPerformance(nsIDOMPerformance * *aPerformance) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPerformance(aPerformance); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindowPerformance : public nsIDOMWindowPerformance
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOWPERFORMANCE

  nsDOMWindowPerformance();

private:
  ~nsDOMWindowPerformance();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMWindowPerformance, nsIDOMWindowPerformance)

nsDOMWindowPerformance::nsDOMWindowPerformance()
{
  /* member initializers and constructor code */
}

nsDOMWindowPerformance::~nsDOMWindowPerformance()
{
  /* destructor code */
}

/* readonly attribute nsIDOMPerformance performance; */
NS_IMETHODIMP nsDOMWindowPerformance::GetPerformance(nsIDOMPerformance * *aPerformance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMWindowInternal */
#define NS_IDOMWINDOWINTERNAL_IID_STR "8614bdb7-5b07-4d00-a7ba-4d44697a343d"

#define NS_IDOMWINDOWINTERNAL_IID \
  {0x8614bdb7, 0x5b07, 0x4d00, \
    { 0xa7, 0xba, 0x4d, 0x44, 0x69, 0x7a, 0x34, 0x3d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMWindowInternal : public nsIDOMWindow {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOWINTERNAL_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindowInternal, NS_IDOMWINDOWINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOWINTERNAL \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOWINTERNAL(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOWINTERNAL(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindowInternal : public nsIDOMWindowInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOWINTERNAL

  nsDOMWindowInternal();

private:
  ~nsDOMWindowInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMWindowInternal, nsIDOMWindowInternal)

nsDOMWindowInternal::nsDOMWindowInternal()
{
  /* member initializers and constructor code */
}

nsDOMWindowInternal::~nsDOMWindowInternal()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMWindow_h__ */
