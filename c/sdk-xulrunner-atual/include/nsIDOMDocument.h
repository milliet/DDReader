/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMDocument.idl
 */

#ifndef __gen_nsIDOMDocument_h__
#define __gen_nsIDOMDocument_h__


#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jspubtd.h"
class nsIDOMNodeIterator; /* forward declaration */

class nsIDOMNodeFilter; /* forward declaration */

class nsIDOMTreeWalker; /* forward declaration */

class nsIDOMLocation; /* forward declaration */


/* starting interface:    nsIDOMDocument */
#define NS_IDOMDOCUMENT_IID_STR "6cba4f7e-7e71-427d-b914-44517ae1e45b"

#define NS_IDOMDOCUMENT_IID \
  {0x6cba4f7e, 0x7e71, 0x427d, \
    { 0xb9, 0x14, 0x44, 0x51, 0x7a, 0xe1, 0xe4, 0x5b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMDocument : public nsIDOMNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMDOCUMENT_IID)

  /* readonly attribute nsIDOMDocumentType doctype; */
  NS_SCRIPTABLE NS_IMETHOD GetDoctype(nsIDOMDocumentType * *aDoctype) = 0;

  /* readonly attribute nsIDOMDOMImplementation implementation; */
  NS_SCRIPTABLE NS_IMETHOD GetImplementation(nsIDOMDOMImplementation * *aImplementation) = 0;

  /* readonly attribute nsIDOMElement documentElement; */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentElement(nsIDOMElement * *aDocumentElement) = 0;

  /* nsIDOMElement createElement (in DOMString tagName) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateElement(const nsAString & tagName, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDocumentFragment createDocumentFragment (); */
  NS_SCRIPTABLE NS_IMETHOD CreateDocumentFragment(nsIDOMDocumentFragment * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMText createTextNode (in DOMString data); */
  NS_SCRIPTABLE NS_IMETHOD CreateTextNode(const nsAString & data, nsIDOMText * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMComment createComment (in DOMString data); */
  NS_SCRIPTABLE NS_IMETHOD CreateComment(const nsAString & data, nsIDOMComment * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMCDATASection createCDATASection (in DOMString data) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateCDATASection(const nsAString & data, nsIDOMCDATASection * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMProcessingInstruction createProcessingInstruction (in DOMString target, in DOMString data) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateProcessingInstruction(const nsAString & target, const nsAString & data, nsIDOMProcessingInstruction * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr createAttribute (in DOMString name) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateAttribute(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeList getElementsByTagName (in DOMString tagname); */
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & tagname, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNode importNode (in nsIDOMNode importedNode, in boolean deep) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD ImportNode(nsIDOMNode *importedNode, PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement createElementNS (in DOMString namespaceURI, in DOMString qualifiedName) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateElementNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMAttr createAttributeNS (in DOMString namespaceURI, in DOMString qualifiedName) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMAttr * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeList getElementsByTagNameNS (in DOMString namespaceURI, in DOMString localName); */
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement getElementById (in DOMString elementId); */
  NS_SCRIPTABLE NS_IMETHOD GetElementById(const nsAString & elementId, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute DOMString inputEncoding; */
  NS_SCRIPTABLE NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding) = 0;

  /* readonly attribute DOMString xmlEncoding; */
  NS_SCRIPTABLE NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding) = 0;

  /* attribute boolean xmlStandalone; */
  NS_SCRIPTABLE NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone) = 0;

  /* attribute DOMString xmlVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion) = 0;

  /* attribute DOMString documentURI; */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI) = 0;

  /* nsIDOMNode adoptNode (in nsIDOMNode source) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMRange createRange (); */
  NS_SCRIPTABLE NS_IMETHOD CreateRange(nsIDOMRange * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeIterator createNodeIterator (in nsIDOMNode root, in unsigned long whatToShow, in nsIDOMNodeFilter filter, in boolean entityReferenceExpansion) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateNodeIterator(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMNodeIterator * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMTreeWalker createTreeWalker (in nsIDOMNode root, in unsigned long whatToShow, in nsIDOMNodeFilter filter, in boolean entityReferenceExpansion) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateTreeWalker(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMTreeWalker * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMEvent createEvent (in DOMString eventType) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CreateEvent(const nsAString & eventType, nsIDOMEvent * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIDOMWindow defaultView; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultView(nsIDOMWindow * *aDefaultView) = 0;

  /* readonly attribute DOMString characterSet; */
  NS_SCRIPTABLE NS_IMETHOD GetCharacterSet(nsAString & aCharacterSet) = 0;

  /* attribute DOMString dir; */
  NS_SCRIPTABLE NS_IMETHOD GetDir(nsAString & aDir) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDir(const nsAString & aDir) = 0;

  /* readonly attribute nsIDOMLocation location; */
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation) = 0;

  /* attribute DOMString title; */
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsAString & aTitle) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle) = 0;

  /* readonly attribute DOMString readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) = 0;

  /* readonly attribute DOMString lastModified; */
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(nsAString & aLastModified) = 0;

  /* readonly attribute DOMString referrer; */
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsAString & aReferrer) = 0;

  /* boolean hasFocus (); */
  NS_SCRIPTABLE NS_IMETHOD HasFocus(PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIDOMElement activeElement; */
  NS_SCRIPTABLE NS_IMETHOD GetActiveElement(nsIDOMElement * *aActiveElement) = 0;

  /* nsIDOMNodeList getElementsByClassName (in DOMString classes); */
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIDOMStyleSheetList styleSheets; */
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheets(nsIDOMStyleSheetList * *aStyleSheets) = 0;

  /* readonly attribute DOMString preferredStyleSheetSet; */
  NS_SCRIPTABLE NS_IMETHOD GetPreferredStyleSheetSet(nsAString & aPreferredStyleSheetSet) = 0;

  /* attribute DOMString selectedStyleSheetSet; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedStyleSheetSet(nsAString & aSelectedStyleSheetSet) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelectedStyleSheetSet(const nsAString & aSelectedStyleSheetSet) = 0;

  /* readonly attribute DOMString lastStyleSheetSet; */
  NS_SCRIPTABLE NS_IMETHOD GetLastStyleSheetSet(nsAString & aLastStyleSheetSet) = 0;

  /* readonly attribute nsIDOMDOMStringList styleSheetSets; */
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheetSets(nsIDOMDOMStringList * *aStyleSheetSets) = 0;

  /* void enableStyleSheetsForSet (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD EnableStyleSheetsForSet(const nsAString & name) = 0;

  /* nsIDOMElement elementFromPoint (in float x, in float y); */
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float x, float y, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute DOMString contentType; */
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsAString & aContentType) = 0;

  /* readonly attribute boolean mozSyntheticDocument; */
  NS_SCRIPTABLE NS_IMETHOD GetMozSyntheticDocument(PRBool *aMozSyntheticDocument) = 0;

  /* readonly attribute nsIDOMElement currentScript; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentScript(nsIDOMElement * *aCurrentScript) = 0;

  /* void releaseCapture (); */
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void) = 0;

  /* void mozSetImageElement (in DOMString aImageElementId, in nsIDOMElement aImageElement); */
  NS_SCRIPTABLE NS_IMETHOD MozSetImageElement(const nsAString & aImageElementId, nsIDOMElement *aImageElement) = 0;

  /* readonly attribute nsIDOMHTMLElement mozFullScreenElement; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreenElement(nsIDOMHTMLElement * *aMozFullScreenElement) = 0;

  /* void mozCancelFullScreen (); */
  NS_SCRIPTABLE NS_IMETHOD MozCancelFullScreen(void) = 0;

  /* readonly attribute boolean mozFullScreen; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreen(PRBool *aMozFullScreen) = 0;

  /* [implicit_jscontext] attribute jsval onreadystatechange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(JSContext* cx, JS::Value *aOnreadystatechange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(JSContext* cx, const JS::Value & aOnreadystatechange) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMDocument, NS_IDOMDOCUMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMDOCUMENT \
  NS_SCRIPTABLE NS_IMETHOD GetDoctype(nsIDOMDocumentType * *aDoctype); \
  NS_SCRIPTABLE NS_IMETHOD GetImplementation(nsIDOMDOMImplementation * *aImplementation); \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentElement(nsIDOMElement * *aDocumentElement); \
  NS_SCRIPTABLE NS_IMETHOD CreateElement(const nsAString & tagName, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateDocumentFragment(nsIDOMDocumentFragment * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateTextNode(const nsAString & data, nsIDOMText * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateComment(const nsAString & data, nsIDOMComment * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateCDATASection(const nsAString & data, nsIDOMCDATASection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateProcessingInstruction(const nsAString & target, const nsAString & data, nsIDOMProcessingInstruction * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateAttribute(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & tagname, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ImportNode(nsIDOMNode *importedNode, PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateElementNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMAttr * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetElementById(const nsAString & elementId, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding); \
  NS_SCRIPTABLE NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding); \
  NS_SCRIPTABLE NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone); \
  NS_SCRIPTABLE NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone); \
  NS_SCRIPTABLE NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion); \
  NS_SCRIPTABLE NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI); \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI); \
  NS_SCRIPTABLE NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateRange(nsIDOMRange * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateNodeIterator(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMNodeIterator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateTreeWalker(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMTreeWalker * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateEvent(const nsAString & eventType, nsIDOMEvent * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultView(nsIDOMWindow * *aDefaultView); \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterSet(nsAString & aCharacterSet); \
  NS_SCRIPTABLE NS_IMETHOD GetDir(nsAString & aDir); \
  NS_SCRIPTABLE NS_IMETHOD SetDir(const nsAString & aDir); \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation); \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsAString & aTitle); \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(nsAString & aLastModified); \
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsAString & aReferrer); \
  NS_SCRIPTABLE NS_IMETHOD HasFocus(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveElement(nsIDOMElement * *aActiveElement); \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheets(nsIDOMStyleSheetList * *aStyleSheets); \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredStyleSheetSet(nsAString & aPreferredStyleSheetSet); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedStyleSheetSet(nsAString & aSelectedStyleSheetSet); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectedStyleSheetSet(const nsAString & aSelectedStyleSheetSet); \
  NS_SCRIPTABLE NS_IMETHOD GetLastStyleSheetSet(nsAString & aLastStyleSheetSet); \
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheetSets(nsIDOMDOMStringList * *aStyleSheetSets); \
  NS_SCRIPTABLE NS_IMETHOD EnableStyleSheetsForSet(const nsAString & name); \
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float x, float y, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsAString & aContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetMozSyntheticDocument(PRBool *aMozSyntheticDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentScript(nsIDOMElement * *aCurrentScript); \
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void); \
  NS_SCRIPTABLE NS_IMETHOD MozSetImageElement(const nsAString & aImageElementId, nsIDOMElement *aImageElement); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreenElement(nsIDOMHTMLElement * *aMozFullScreenElement); \
  NS_SCRIPTABLE NS_IMETHOD MozCancelFullScreen(void); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreen(PRBool *aMozFullScreen); \
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(JSContext* cx, JS::Value *aOnreadystatechange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(JSContext* cx, const JS::Value & aOnreadystatechange); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMDOCUMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDoctype(nsIDOMDocumentType * *aDoctype) { return _to GetDoctype(aDoctype); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementation(nsIDOMDOMImplementation * *aImplementation) { return _to GetImplementation(aImplementation); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentElement(nsIDOMElement * *aDocumentElement) { return _to GetDocumentElement(aDocumentElement); } \
  NS_SCRIPTABLE NS_IMETHOD CreateElement(const nsAString & tagName, nsIDOMElement * *_retval NS_OUTPARAM) { return _to CreateElement(tagName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateDocumentFragment(nsIDOMDocumentFragment * *_retval NS_OUTPARAM) { return _to CreateDocumentFragment(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTextNode(const nsAString & data, nsIDOMText * *_retval NS_OUTPARAM) { return _to CreateTextNode(data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateComment(const nsAString & data, nsIDOMComment * *_retval NS_OUTPARAM) { return _to CreateComment(data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateCDATASection(const nsAString & data, nsIDOMCDATASection * *_retval NS_OUTPARAM) { return _to CreateCDATASection(data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateProcessingInstruction(const nsAString & target, const nsAString & data, nsIDOMProcessingInstruction * *_retval NS_OUTPARAM) { return _to CreateProcessingInstruction(target, data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAttribute(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to CreateAttribute(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & tagname, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to GetElementsByTagName(tagname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ImportNode(nsIDOMNode *importedNode, PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM) { return _to ImportNode(importedNode, deep, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateElementNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMElement * *_retval NS_OUTPARAM) { return _to CreateElementNS(namespaceURI, qualifiedName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMAttr * *_retval NS_OUTPARAM) { return _to CreateAttributeNS(namespaceURI, qualifiedName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to GetElementsByTagNameNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementById(const nsAString & elementId, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetElementById(elementId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding) { return _to GetInputEncoding(aInputEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding) { return _to GetXmlEncoding(aXmlEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone) { return _to GetXmlStandalone(aXmlStandalone); } \
  NS_SCRIPTABLE NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone) { return _to SetXmlStandalone(aXmlStandalone); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion) { return _to GetXmlVersion(aXmlVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion) { return _to SetXmlVersion(aXmlVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI) { return _to GetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI) { return _to SetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode * *_retval NS_OUTPARAM) { return _to AdoptNode(source, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateRange(nsIDOMRange * *_retval NS_OUTPARAM) { return _to CreateRange(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateNodeIterator(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMNodeIterator * *_retval NS_OUTPARAM) { return _to CreateNodeIterator(root, whatToShow, filter, entityReferenceExpansion, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTreeWalker(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMTreeWalker * *_retval NS_OUTPARAM) { return _to CreateTreeWalker(root, whatToShow, filter, entityReferenceExpansion, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateEvent(const nsAString & eventType, nsIDOMEvent * *_retval NS_OUTPARAM) { return _to CreateEvent(eventType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultView(nsIDOMWindow * *aDefaultView) { return _to GetDefaultView(aDefaultView); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterSet(nsAString & aCharacterSet) { return _to GetCharacterSet(aCharacterSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetDir(nsAString & aDir) { return _to GetDir(aDir); } \
  NS_SCRIPTABLE NS_IMETHOD SetDir(const nsAString & aDir) { return _to SetDir(aDir); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation) { return _to GetLocation(aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsAString & aTitle) { return _to GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle) { return _to SetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(nsAString & aLastModified) { return _to GetLastModified(aLastModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsAString & aReferrer) { return _to GetReferrer(aReferrer); } \
  NS_SCRIPTABLE NS_IMETHOD HasFocus(PRBool *_retval NS_OUTPARAM) { return _to HasFocus(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveElement(nsIDOMElement * *aActiveElement) { return _to GetActiveElement(aActiveElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to GetElementsByClassName(classes, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheets(nsIDOMStyleSheetList * *aStyleSheets) { return _to GetStyleSheets(aStyleSheets); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredStyleSheetSet(nsAString & aPreferredStyleSheetSet) { return _to GetPreferredStyleSheetSet(aPreferredStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedStyleSheetSet(nsAString & aSelectedStyleSheetSet) { return _to GetSelectedStyleSheetSet(aSelectedStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectedStyleSheetSet(const nsAString & aSelectedStyleSheetSet) { return _to SetSelectedStyleSheetSet(aSelectedStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastStyleSheetSet(nsAString & aLastStyleSheetSet) { return _to GetLastStyleSheetSet(aLastStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheetSets(nsIDOMDOMStringList * *aStyleSheetSets) { return _to GetStyleSheetSets(aStyleSheetSets); } \
  NS_SCRIPTABLE NS_IMETHOD EnableStyleSheetsForSet(const nsAString & name) { return _to EnableStyleSheetsForSet(name); } \
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float x, float y, nsIDOMElement * *_retval NS_OUTPARAM) { return _to ElementFromPoint(x, y, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsAString & aContentType) { return _to GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozSyntheticDocument(PRBool *aMozSyntheticDocument) { return _to GetMozSyntheticDocument(aMozSyntheticDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentScript(nsIDOMElement * *aCurrentScript) { return _to GetCurrentScript(aCurrentScript); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void) { return _to ReleaseCapture(); } \
  NS_SCRIPTABLE NS_IMETHOD MozSetImageElement(const nsAString & aImageElementId, nsIDOMElement *aImageElement) { return _to MozSetImageElement(aImageElementId, aImageElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreenElement(nsIDOMHTMLElement * *aMozFullScreenElement) { return _to GetMozFullScreenElement(aMozFullScreenElement); } \
  NS_SCRIPTABLE NS_IMETHOD MozCancelFullScreen(void) { return _to MozCancelFullScreen(); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreen(PRBool *aMozFullScreen) { return _to GetMozFullScreen(aMozFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(JSContext* cx, JS::Value *aOnreadystatechange) { return _to GetOnreadystatechange(cx, aOnreadystatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(JSContext* cx, const JS::Value & aOnreadystatechange) { return _to SetOnreadystatechange(cx, aOnreadystatechange); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMDOCUMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDoctype(nsIDOMDocumentType * *aDoctype) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDoctype(aDoctype); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementation(nsIDOMDOMImplementation * *aImplementation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImplementation(aImplementation); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentElement(nsIDOMElement * *aDocumentElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentElement(aDocumentElement); } \
  NS_SCRIPTABLE NS_IMETHOD CreateElement(const nsAString & tagName, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateElement(tagName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateDocumentFragment(nsIDOMDocumentFragment * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateDocumentFragment(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTextNode(const nsAString & data, nsIDOMText * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateTextNode(data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateComment(const nsAString & data, nsIDOMComment * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateComment(data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateCDATASection(const nsAString & data, nsIDOMCDATASection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateCDATASection(data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateProcessingInstruction(const nsAString & target, const nsAString & data, nsIDOMProcessingInstruction * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateProcessingInstruction(target, data, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAttribute(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateAttribute(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagName(const nsAString & tagname, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByTagName(tagname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ImportNode(nsIDOMNode *importedNode, PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportNode(importedNode, deep, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateElementNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateElementNS(namespaceURI, qualifiedName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMAttr * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateAttributeNS(namespaceURI, qualifiedName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByTagNameNS(namespaceURI, localName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementById(const nsAString & elementId, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementById(elementId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInputEncoding(nsAString & aInputEncoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputEncoding(aInputEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmlEncoding(nsAString & aXmlEncoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmlEncoding(aXmlEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmlStandalone(PRBool *aXmlStandalone) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmlStandalone(aXmlStandalone); } \
  NS_SCRIPTABLE NS_IMETHOD SetXmlStandalone(PRBool aXmlStandalone) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetXmlStandalone(aXmlStandalone); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmlVersion(nsAString & aXmlVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmlVersion(aXmlVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetXmlVersion(const nsAString & aXmlVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetXmlVersion(aXmlVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentURI(nsAString & aDocumentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentURI(const nsAString & aDocumentURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocumentURI(aDocumentURI); } \
  NS_SCRIPTABLE NS_IMETHOD AdoptNode(nsIDOMNode *source, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AdoptNode(source, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateRange(nsIDOMRange * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateRange(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateNodeIterator(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMNodeIterator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateNodeIterator(root, whatToShow, filter, entityReferenceExpansion, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTreeWalker(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMTreeWalker * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateTreeWalker(root, whatToShow, filter, entityReferenceExpansion, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateEvent(const nsAString & eventType, nsIDOMEvent * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateEvent(eventType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultView(nsIDOMWindow * *aDefaultView) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultView(aDefaultView); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterSet(nsAString & aCharacterSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharacterSet(aCharacterSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetDir(nsAString & aDir) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDir(aDir); } \
  NS_SCRIPTABLE NS_IMETHOD SetDir(const nsAString & aDir) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDir(aDir); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(nsIDOMLocation * *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocation(aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(nsAString & aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const nsAString & aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(nsAString & aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModified(nsAString & aLastModified) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastModified(aLastModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsAString & aReferrer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrer(aReferrer); } \
  NS_SCRIPTABLE NS_IMETHOD HasFocus(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasFocus(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveElement(nsIDOMElement * *aActiveElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveElement(aActiveElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByClassName(classes, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheets(nsIDOMStyleSheetList * *aStyleSheets) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStyleSheets(aStyleSheets); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredStyleSheetSet(nsAString & aPreferredStyleSheetSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreferredStyleSheetSet(aPreferredStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedStyleSheetSet(nsAString & aSelectedStyleSheetSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedStyleSheetSet(aSelectedStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectedStyleSheetSet(const nsAString & aSelectedStyleSheetSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectedStyleSheetSet(aSelectedStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastStyleSheetSet(nsAString & aLastStyleSheetSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastStyleSheetSet(aLastStyleSheetSet); } \
  NS_SCRIPTABLE NS_IMETHOD GetStyleSheetSets(nsIDOMDOMStringList * *aStyleSheetSets) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStyleSheetSets(aStyleSheetSets); } \
  NS_SCRIPTABLE NS_IMETHOD EnableStyleSheetsForSet(const nsAString & name) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableStyleSheetsForSet(name); } \
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float x, float y, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ElementFromPoint(x, y, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsAString & aContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozSyntheticDocument(PRBool *aMozSyntheticDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozSyntheticDocument(aMozSyntheticDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentScript(nsIDOMElement * *aCurrentScript) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentScript(aCurrentScript); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseCapture(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseCapture(); } \
  NS_SCRIPTABLE NS_IMETHOD MozSetImageElement(const nsAString & aImageElementId, nsIDOMElement *aImageElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSetImageElement(aImageElementId, aImageElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreenElement(nsIDOMHTMLElement * *aMozFullScreenElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFullScreenElement(aMozFullScreenElement); } \
  NS_SCRIPTABLE NS_IMETHOD MozCancelFullScreen(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCancelFullScreen(); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullScreen(PRBool *aMozFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFullScreen(aMozFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnreadystatechange(JSContext* cx, JS::Value *aOnreadystatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnreadystatechange(cx, aOnreadystatechange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnreadystatechange(JSContext* cx, const JS::Value & aOnreadystatechange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnreadystatechange(cx, aOnreadystatechange); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMDocument : public nsIDOMDocument
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMDOCUMENT

  nsDOMDocument();

private:
  ~nsDOMDocument();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMDocument, nsIDOMDocument)

nsDOMDocument::nsDOMDocument()
{
  /* member initializers and constructor code */
}

nsDOMDocument::~nsDOMDocument()
{
  /* destructor code */
}

/* readonly attribute nsIDOMDocumentType doctype; */
NS_IMETHODIMP nsDOMDocument::GetDoctype(nsIDOMDocumentType * *aDoctype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMImplementation implementation; */
NS_IMETHODIMP nsDOMDocument::GetImplementation(nsIDOMDOMImplementation * *aImplementation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement documentElement; */
NS_IMETHODIMP nsDOMDocument::GetDocumentElement(nsIDOMElement * *aDocumentElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement createElement (in DOMString tagName) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateElement(const nsAString & tagName, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDocumentFragment createDocumentFragment (); */
NS_IMETHODIMP nsDOMDocument::CreateDocumentFragment(nsIDOMDocumentFragment * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMText createTextNode (in DOMString data); */
NS_IMETHODIMP nsDOMDocument::CreateTextNode(const nsAString & data, nsIDOMText * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMComment createComment (in DOMString data); */
NS_IMETHODIMP nsDOMDocument::CreateComment(const nsAString & data, nsIDOMComment * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMCDATASection createCDATASection (in DOMString data) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateCDATASection(const nsAString & data, nsIDOMCDATASection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMProcessingInstruction createProcessingInstruction (in DOMString target, in DOMString data) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateProcessingInstruction(const nsAString & target, const nsAString & data, nsIDOMProcessingInstruction * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr createAttribute (in DOMString name) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateAttribute(const nsAString & name, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByTagName (in DOMString tagname); */
NS_IMETHODIMP nsDOMDocument::GetElementsByTagName(const nsAString & tagname, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode importNode (in nsIDOMNode importedNode, in boolean deep) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::ImportNode(nsIDOMNode *importedNode, PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement createElementNS (in DOMString namespaceURI, in DOMString qualifiedName) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateElementNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMAttr createAttributeNS (in DOMString namespaceURI, in DOMString qualifiedName) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateAttributeNS(const nsAString & namespaceURI, const nsAString & qualifiedName, nsIDOMAttr * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByTagNameNS (in DOMString namespaceURI, in DOMString localName); */
NS_IMETHODIMP nsDOMDocument::GetElementsByTagNameNS(const nsAString & namespaceURI, const nsAString & localName, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getElementById (in DOMString elementId); */
NS_IMETHODIMP nsDOMDocument::GetElementById(const nsAString & elementId, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString inputEncoding; */
NS_IMETHODIMP nsDOMDocument::GetInputEncoding(nsAString & aInputEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString xmlEncoding; */
NS_IMETHODIMP nsDOMDocument::GetXmlEncoding(nsAString & aXmlEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean xmlStandalone; */
NS_IMETHODIMP nsDOMDocument::GetXmlStandalone(PRBool *aXmlStandalone)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetXmlStandalone(PRBool aXmlStandalone)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString xmlVersion; */
NS_IMETHODIMP nsDOMDocument::GetXmlVersion(nsAString & aXmlVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetXmlVersion(const nsAString & aXmlVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString documentURI; */
NS_IMETHODIMP nsDOMDocument::GetDocumentURI(nsAString & aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetDocumentURI(const nsAString & aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode adoptNode (in nsIDOMNode source) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::AdoptNode(nsIDOMNode *source, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMRange createRange (); */
NS_IMETHODIMP nsDOMDocument::CreateRange(nsIDOMRange * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeIterator createNodeIterator (in nsIDOMNode root, in unsigned long whatToShow, in nsIDOMNodeFilter filter, in boolean entityReferenceExpansion) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateNodeIterator(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMNodeIterator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMTreeWalker createTreeWalker (in nsIDOMNode root, in unsigned long whatToShow, in nsIDOMNodeFilter filter, in boolean entityReferenceExpansion) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateTreeWalker(nsIDOMNode *root, PRUint32 whatToShow, nsIDOMNodeFilter *filter, PRBool entityReferenceExpansion, nsIDOMTreeWalker * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMEvent createEvent (in DOMString eventType) raises (DOMException); */
NS_IMETHODIMP nsDOMDocument::CreateEvent(const nsAString & eventType, nsIDOMEvent * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow defaultView; */
NS_IMETHODIMP nsDOMDocument::GetDefaultView(nsIDOMWindow * *aDefaultView)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString characterSet; */
NS_IMETHODIMP nsDOMDocument::GetCharacterSet(nsAString & aCharacterSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString dir; */
NS_IMETHODIMP nsDOMDocument::GetDir(nsAString & aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetDir(const nsAString & aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMLocation location; */
NS_IMETHODIMP nsDOMDocument::GetLocation(nsIDOMLocation * *aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString title; */
NS_IMETHODIMP nsDOMDocument::GetTitle(nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetTitle(const nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString readyState; */
NS_IMETHODIMP nsDOMDocument::GetReadyState(nsAString & aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString lastModified; */
NS_IMETHODIMP nsDOMDocument::GetLastModified(nsAString & aLastModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString referrer; */
NS_IMETHODIMP nsDOMDocument::GetReferrer(nsAString & aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasFocus (); */
NS_IMETHODIMP nsDOMDocument::HasFocus(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement activeElement; */
NS_IMETHODIMP nsDOMDocument::GetActiveElement(nsIDOMElement * *aActiveElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByClassName (in DOMString classes); */
NS_IMETHODIMP nsDOMDocument::GetElementsByClassName(const nsAString & classes, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMStyleSheetList styleSheets; */
NS_IMETHODIMP nsDOMDocument::GetStyleSheets(nsIDOMStyleSheetList * *aStyleSheets)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString preferredStyleSheetSet; */
NS_IMETHODIMP nsDOMDocument::GetPreferredStyleSheetSet(nsAString & aPreferredStyleSheetSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString selectedStyleSheetSet; */
NS_IMETHODIMP nsDOMDocument::GetSelectedStyleSheetSet(nsAString & aSelectedStyleSheetSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetSelectedStyleSheetSet(const nsAString & aSelectedStyleSheetSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString lastStyleSheetSet; */
NS_IMETHODIMP nsDOMDocument::GetLastStyleSheetSet(nsAString & aLastStyleSheetSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMStringList styleSheetSets; */
NS_IMETHODIMP nsDOMDocument::GetStyleSheetSets(nsIDOMDOMStringList * *aStyleSheetSets)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableStyleSheetsForSet (in DOMString name); */
NS_IMETHODIMP nsDOMDocument::EnableStyleSheetsForSet(const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement elementFromPoint (in float x, in float y); */
NS_IMETHODIMP nsDOMDocument::ElementFromPoint(float x, float y, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString contentType; */
NS_IMETHODIMP nsDOMDocument::GetContentType(nsAString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozSyntheticDocument; */
NS_IMETHODIMP nsDOMDocument::GetMozSyntheticDocument(PRBool *aMozSyntheticDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement currentScript; */
NS_IMETHODIMP nsDOMDocument::GetCurrentScript(nsIDOMElement * *aCurrentScript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void releaseCapture (); */
NS_IMETHODIMP nsDOMDocument::ReleaseCapture()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozSetImageElement (in DOMString aImageElementId, in nsIDOMElement aImageElement); */
NS_IMETHODIMP nsDOMDocument::MozSetImageElement(const nsAString & aImageElementId, nsIDOMElement *aImageElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLElement mozFullScreenElement; */
NS_IMETHODIMP nsDOMDocument::GetMozFullScreenElement(nsIDOMHTMLElement * *aMozFullScreenElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozCancelFullScreen (); */
NS_IMETHODIMP nsDOMDocument::MozCancelFullScreen()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozFullScreen; */
NS_IMETHODIMP nsDOMDocument::GetMozFullScreen(PRBool *aMozFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval onreadystatechange; */
NS_IMETHODIMP nsDOMDocument::GetOnreadystatechange(JSContext* cx, JS::Value *aOnreadystatechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMDocument::SetOnreadystatechange(JSContext* cx, const JS::Value & aOnreadystatechange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMDocument_h__ */
