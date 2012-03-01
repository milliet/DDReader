/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMNode.idl
 */

#ifndef __gen_nsIDOMNode_h__
#define __gen_nsIDOMNode_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */

class nsIDOMUserDataHandler; /* forward declaration */


/* starting interface:    nsIDOMNode */
#define NS_IDOMNODE_IID_STR "c8ac3f81-63e1-4c31-8543-70a656642789"

#define NS_IDOMNODE_IID \
  {0xc8ac3f81, 0x63e1, 0x4c31, \
    { 0x85, 0x43, 0x70, 0xa6, 0x56, 0x64, 0x27, 0x89 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNode : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNODE_IID)

  enum { ELEMENT_NODE = 1U };

  enum { ATTRIBUTE_NODE = 2U };

  enum { TEXT_NODE = 3U };

  enum { CDATA_SECTION_NODE = 4U };

  enum { ENTITY_REFERENCE_NODE = 5U };

  enum { ENTITY_NODE = 6U };

  enum { PROCESSING_INSTRUCTION_NODE = 7U };

  enum { COMMENT_NODE = 8U };

  enum { DOCUMENT_NODE = 9U };

  enum { DOCUMENT_TYPE_NODE = 10U };

  enum { DOCUMENT_FRAGMENT_NODE = 11U };

  enum { NOTATION_NODE = 12U };

  /* readonly attribute DOMString nodeName; */
  NS_SCRIPTABLE NS_IMETHOD GetNodeName(nsAString & aNodeName) = 0;

  /* attribute DOMString nodeValue; */
  NS_SCRIPTABLE NS_IMETHOD GetNodeValue(nsAString & aNodeValue) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNodeValue(const nsAString & aNodeValue) = 0;

  /* readonly attribute unsigned short nodeType; */
  NS_SCRIPTABLE NS_IMETHOD GetNodeType(PRUint16 *aNodeType) = 0;

  /* readonly attribute nsIDOMNode parentNode; */
  NS_SCRIPTABLE NS_IMETHOD GetParentNode(nsIDOMNode * *aParentNode) = 0;

  /* readonly attribute nsIDOMElement parentElement; */
  NS_SCRIPTABLE NS_IMETHOD GetParentElement(nsIDOMElement * *aParentElement) = 0;

  /* readonly attribute nsIDOMNodeList childNodes; */
  NS_SCRIPTABLE NS_IMETHOD GetChildNodes(nsIDOMNodeList * *aChildNodes) = 0;

  /* readonly attribute nsIDOMNode firstChild; */
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIDOMNode * *aFirstChild) = 0;

  /* readonly attribute nsIDOMNode lastChild; */
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIDOMNode * *aLastChild) = 0;

  /* readonly attribute nsIDOMNode previousSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling) = 0;

  /* readonly attribute nsIDOMNode nextSibling; */
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling) = 0;

  /* readonly attribute nsIDOMNamedNodeMap attributes; */
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIDOMNamedNodeMap * *aAttributes) = 0;

  /* readonly attribute nsIDOMDocument ownerDocument; */
  NS_SCRIPTABLE NS_IMETHOD GetOwnerDocument(nsIDOMDocument * *aOwnerDocument) = 0;

  /* nsIDOMNode insertBefore (in nsIDOMNode newChild, in nsIDOMNode refChild) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD InsertBefore(nsIDOMNode *newChild, nsIDOMNode *refChild, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNode replaceChild (in nsIDOMNode newChild, in nsIDOMNode oldChild) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceChild(nsIDOMNode *newChild, nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNode removeChild (in nsIDOMNode oldChild) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD RemoveChild(nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNode appendChild (in nsIDOMNode newChild) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD AppendChild(nsIDOMNode *newChild, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* boolean hasChildNodes (); */
  NS_SCRIPTABLE NS_IMETHOD HasChildNodes(PRBool *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNode cloneNode (in boolean deep); */
  NS_SCRIPTABLE NS_IMETHOD CloneNode(PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* void normalize (); */
  NS_SCRIPTABLE NS_IMETHOD Normalize(void) = 0;

  /* boolean isSupported (in DOMString feature, in DOMString version); */
  NS_SCRIPTABLE NS_IMETHOD IsSupported(const nsAString & feature, const nsAString & version, PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute DOMString namespaceURI; */
  NS_SCRIPTABLE NS_IMETHOD GetNamespaceURI(nsAString & aNamespaceURI) = 0;

  /* readonly attribute DOMString prefix; */
  NS_SCRIPTABLE NS_IMETHOD GetPrefix(nsAString & aPrefix) = 0;

  /* readonly attribute DOMString localName; */
  NS_SCRIPTABLE NS_IMETHOD GetLocalName(nsAString & aLocalName) = 0;

  /* boolean hasAttributes (); */
  NS_SCRIPTABLE NS_IMETHOD HasAttributes(PRBool *_retval NS_OUTPARAM) = 0;

  /* [binaryname(DOMBaseURI)] readonly attribute DOMString baseURI; */
  NS_SCRIPTABLE NS_IMETHOD GetDOMBaseURI(nsAString & aBaseURI) = 0;

  enum { DOCUMENT_POSITION_DISCONNECTED = 1U };

  enum { DOCUMENT_POSITION_PRECEDING = 2U };

  enum { DOCUMENT_POSITION_FOLLOWING = 4U };

  enum { DOCUMENT_POSITION_CONTAINS = 8U };

  enum { DOCUMENT_POSITION_CONTAINED_BY = 16U };

  enum { DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC = 32U };

  /* unsigned short compareDocumentPosition (in nsIDOMNode other) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD CompareDocumentPosition(nsIDOMNode *other, PRUint16 *_retval NS_OUTPARAM) = 0;

  /* attribute DOMString textContent; */
  NS_SCRIPTABLE NS_IMETHOD GetTextContent(nsAString & aTextContent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTextContent(const nsAString & aTextContent) = 0;

  /* boolean isSameNode (in nsIDOMNode other); */
  NS_SCRIPTABLE NS_IMETHOD IsSameNode(nsIDOMNode *other, PRBool *_retval NS_OUTPARAM) = 0;

  /* DOMString lookupPrefix (in DOMString namespaceURI); */
  NS_SCRIPTABLE NS_IMETHOD LookupPrefix(const nsAString & namespaceURI, nsAString & _retval NS_OUTPARAM) = 0;

  /* boolean isDefaultNamespace (in DOMString namespaceURI); */
  NS_SCRIPTABLE NS_IMETHOD IsDefaultNamespace(const nsAString & namespaceURI, PRBool *_retval NS_OUTPARAM) = 0;

  /* DOMString lookupNamespaceURI (in DOMString prefix); */
  NS_SCRIPTABLE NS_IMETHOD LookupNamespaceURI(const nsAString & prefix, nsAString & _retval NS_OUTPARAM) = 0;

  /* boolean isEqualNode (in nsIDOMNode arg); */
  NS_SCRIPTABLE NS_IMETHOD IsEqualNode(nsIDOMNode *arg, PRBool *_retval NS_OUTPARAM) = 0;

  /* nsIVariant setUserData (in DOMString key, in nsIVariant data, in nsIDOMUserDataHandler handler); */
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const nsAString & key, nsIVariant *data, nsIDOMUserDataHandler *handler, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* nsIVariant getUserData (in DOMString key); */
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const nsAString & key, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* boolean contains (in nsIDOMNode aOther); */
  NS_SCRIPTABLE NS_IMETHOD Contains(nsIDOMNode *aOther, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNode, NS_IDOMNODE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNODE \
  NS_SCRIPTABLE NS_IMETHOD GetNodeName(nsAString & aNodeName); \
  NS_SCRIPTABLE NS_IMETHOD GetNodeValue(nsAString & aNodeValue); \
  NS_SCRIPTABLE NS_IMETHOD SetNodeValue(const nsAString & aNodeValue); \
  NS_SCRIPTABLE NS_IMETHOD GetNodeType(PRUint16 *aNodeType); \
  NS_SCRIPTABLE NS_IMETHOD GetParentNode(nsIDOMNode * *aParentNode); \
  NS_SCRIPTABLE NS_IMETHOD GetParentElement(nsIDOMElement * *aParentElement); \
  NS_SCRIPTABLE NS_IMETHOD GetChildNodes(nsIDOMNodeList * *aChildNodes); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIDOMNode * *aFirstChild); \
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIDOMNode * *aLastChild); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIDOMNamedNodeMap * *aAttributes); \
  NS_SCRIPTABLE NS_IMETHOD GetOwnerDocument(nsIDOMDocument * *aOwnerDocument); \
  NS_SCRIPTABLE NS_IMETHOD InsertBefore(nsIDOMNode *newChild, nsIDOMNode *refChild, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceChild(nsIDOMNode *newChild, nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveChild(nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AppendChild(nsIDOMNode *newChild, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasChildNodes(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CloneNode(PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Normalize(void); \
  NS_SCRIPTABLE NS_IMETHOD IsSupported(const nsAString & feature, const nsAString & version, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNamespaceURI(nsAString & aNamespaceURI); \
  NS_SCRIPTABLE NS_IMETHOD GetPrefix(nsAString & aPrefix); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalName(nsAString & aLocalName); \
  NS_SCRIPTABLE NS_IMETHOD HasAttributes(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOMBaseURI(nsAString & aBaseURI); \
  NS_SCRIPTABLE NS_IMETHOD CompareDocumentPosition(nsIDOMNode *other, PRUint16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTextContent(nsAString & aTextContent); \
  NS_SCRIPTABLE NS_IMETHOD SetTextContent(const nsAString & aTextContent); \
  NS_SCRIPTABLE NS_IMETHOD IsSameNode(nsIDOMNode *other, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LookupPrefix(const nsAString & namespaceURI, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsDefaultNamespace(const nsAString & namespaceURI, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LookupNamespaceURI(const nsAString & prefix, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsEqualNode(nsIDOMNode *arg, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const nsAString & key, nsIVariant *data, nsIDOMUserDataHandler *handler, nsIVariant * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const nsAString & key, nsIVariant * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Contains(nsIDOMNode *aOther, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNodeName(nsAString & aNodeName) { return _to GetNodeName(aNodeName); } \
  NS_SCRIPTABLE NS_IMETHOD GetNodeValue(nsAString & aNodeValue) { return _to GetNodeValue(aNodeValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetNodeValue(const nsAString & aNodeValue) { return _to SetNodeValue(aNodeValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetNodeType(PRUint16 *aNodeType) { return _to GetNodeType(aNodeType); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentNode(nsIDOMNode * *aParentNode) { return _to GetParentNode(aParentNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentElement(nsIDOMElement * *aParentElement) { return _to GetParentElement(aParentElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildNodes(nsIDOMNodeList * *aChildNodes) { return _to GetChildNodes(aChildNodes); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIDOMNode * *aFirstChild) { return _to GetFirstChild(aFirstChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIDOMNode * *aLastChild) { return _to GetLastChild(aLastChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling) { return _to GetPreviousSibling(aPreviousSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling) { return _to GetNextSibling(aNextSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIDOMNamedNodeMap * *aAttributes) { return _to GetAttributes(aAttributes); } \
  NS_SCRIPTABLE NS_IMETHOD GetOwnerDocument(nsIDOMDocument * *aOwnerDocument) { return _to GetOwnerDocument(aOwnerDocument); } \
  NS_SCRIPTABLE NS_IMETHOD InsertBefore(nsIDOMNode *newChild, nsIDOMNode *refChild, nsIDOMNode * *_retval NS_OUTPARAM) { return _to InsertBefore(newChild, refChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceChild(nsIDOMNode *newChild, nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM) { return _to ReplaceChild(newChild, oldChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveChild(nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM) { return _to RemoveChild(oldChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendChild(nsIDOMNode *newChild, nsIDOMNode * *_retval NS_OUTPARAM) { return _to AppendChild(newChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasChildNodes(PRBool *_retval NS_OUTPARAM) { return _to HasChildNodes(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CloneNode(PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM) { return _to CloneNode(deep, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Normalize(void) { return _to Normalize(); } \
  NS_SCRIPTABLE NS_IMETHOD IsSupported(const nsAString & feature, const nsAString & version, PRBool *_retval NS_OUTPARAM) { return _to IsSupported(feature, version, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNamespaceURI(nsAString & aNamespaceURI) { return _to GetNamespaceURI(aNamespaceURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefix(nsAString & aPrefix) { return _to GetPrefix(aPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalName(nsAString & aLocalName) { return _to GetLocalName(aLocalName); } \
  NS_SCRIPTABLE NS_IMETHOD HasAttributes(PRBool *_retval NS_OUTPARAM) { return _to HasAttributes(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOMBaseURI(nsAString & aBaseURI) { return _to GetDOMBaseURI(aBaseURI); } \
  NS_SCRIPTABLE NS_IMETHOD CompareDocumentPosition(nsIDOMNode *other, PRUint16 *_retval NS_OUTPARAM) { return _to CompareDocumentPosition(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextContent(nsAString & aTextContent) { return _to GetTextContent(aTextContent); } \
  NS_SCRIPTABLE NS_IMETHOD SetTextContent(const nsAString & aTextContent) { return _to SetTextContent(aTextContent); } \
  NS_SCRIPTABLE NS_IMETHOD IsSameNode(nsIDOMNode *other, PRBool *_retval NS_OUTPARAM) { return _to IsSameNode(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LookupPrefix(const nsAString & namespaceURI, nsAString & _retval NS_OUTPARAM) { return _to LookupPrefix(namespaceURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsDefaultNamespace(const nsAString & namespaceURI, PRBool *_retval NS_OUTPARAM) { return _to IsDefaultNamespace(namespaceURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LookupNamespaceURI(const nsAString & prefix, nsAString & _retval NS_OUTPARAM) { return _to LookupNamespaceURI(prefix, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEqualNode(nsIDOMNode *arg, PRBool *_retval NS_OUTPARAM) { return _to IsEqualNode(arg, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const nsAString & key, nsIVariant *data, nsIDOMUserDataHandler *handler, nsIVariant * *_retval NS_OUTPARAM) { return _to SetUserData(key, data, handler, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const nsAString & key, nsIVariant * *_retval NS_OUTPARAM) { return _to GetUserData(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Contains(nsIDOMNode *aOther, PRBool *_retval NS_OUTPARAM) { return _to Contains(aOther, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNODE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNodeName(nsAString & aNodeName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNodeName(aNodeName); } \
  NS_SCRIPTABLE NS_IMETHOD GetNodeValue(nsAString & aNodeValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNodeValue(aNodeValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetNodeValue(const nsAString & aNodeValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNodeValue(aNodeValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetNodeType(PRUint16 *aNodeType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNodeType(aNodeType); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentNode(nsIDOMNode * *aParentNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentNode(aParentNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentElement(nsIDOMElement * *aParentElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentElement(aParentElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildNodes(nsIDOMNodeList * *aChildNodes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildNodes(aChildNodes); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstChild(nsIDOMNode * *aFirstChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstChild(aFirstChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastChild(nsIDOMNode * *aLastChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastChild(aLastChild); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousSibling(nsIDOMNode * *aPreviousSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousSibling(aPreviousSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSibling(nsIDOMNode * *aNextSibling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextSibling(aNextSibling); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributes(nsIDOMNamedNodeMap * *aAttributes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributes(aAttributes); } \
  NS_SCRIPTABLE NS_IMETHOD GetOwnerDocument(nsIDOMDocument * *aOwnerDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerDocument(aOwnerDocument); } \
  NS_SCRIPTABLE NS_IMETHOD InsertBefore(nsIDOMNode *newChild, nsIDOMNode *refChild, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertBefore(newChild, refChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceChild(nsIDOMNode *newChild, nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceChild(newChild, oldChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveChild(nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveChild(oldChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendChild(nsIDOMNode *newChild, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendChild(newChild, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasChildNodes(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasChildNodes(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CloneNode(PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneNode(deep, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Normalize(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Normalize(); } \
  NS_SCRIPTABLE NS_IMETHOD IsSupported(const nsAString & feature, const nsAString & version, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSupported(feature, version, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNamespaceURI(nsAString & aNamespaceURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNamespaceURI(aNamespaceURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrefix(nsAString & aPrefix) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrefix(aPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalName(nsAString & aLocalName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalName(aLocalName); } \
  NS_SCRIPTABLE NS_IMETHOD HasAttributes(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasAttributes(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOMBaseURI(nsAString & aBaseURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOMBaseURI(aBaseURI); } \
  NS_SCRIPTABLE NS_IMETHOD CompareDocumentPosition(nsIDOMNode *other, PRUint16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CompareDocumentPosition(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextContent(nsAString & aTextContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextContent(aTextContent); } \
  NS_SCRIPTABLE NS_IMETHOD SetTextContent(const nsAString & aTextContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTextContent(aTextContent); } \
  NS_SCRIPTABLE NS_IMETHOD IsSameNode(nsIDOMNode *other, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSameNode(other, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LookupPrefix(const nsAString & namespaceURI, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LookupPrefix(namespaceURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsDefaultNamespace(const nsAString & namespaceURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDefaultNamespace(namespaceURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LookupNamespaceURI(const nsAString & prefix, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LookupNamespaceURI(prefix, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEqualNode(nsIDOMNode *arg, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEqualNode(arg, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const nsAString & key, nsIVariant *data, nsIDOMUserDataHandler *handler, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserData(key, data, handler, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const nsAString & key, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserData(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Contains(nsIDOMNode *aOther, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Contains(aOther, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNode : public nsIDOMNode
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNODE

  nsDOMNode();

private:
  ~nsDOMNode();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNode, nsIDOMNode)

nsDOMNode::nsDOMNode()
{
  /* member initializers and constructor code */
}

nsDOMNode::~nsDOMNode()
{
  /* destructor code */
}

/* readonly attribute DOMString nodeName; */
NS_IMETHODIMP nsDOMNode::GetNodeName(nsAString & aNodeName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString nodeValue; */
NS_IMETHODIMP nsDOMNode::GetNodeValue(nsAString & aNodeValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNode::SetNodeValue(const nsAString & aNodeValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short nodeType; */
NS_IMETHODIMP nsDOMNode::GetNodeType(PRUint16 *aNodeType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode parentNode; */
NS_IMETHODIMP nsDOMNode::GetParentNode(nsIDOMNode * *aParentNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement parentElement; */
NS_IMETHODIMP nsDOMNode::GetParentElement(nsIDOMElement * *aParentElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNodeList childNodes; */
NS_IMETHODIMP nsDOMNode::GetChildNodes(nsIDOMNodeList * *aChildNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode firstChild; */
NS_IMETHODIMP nsDOMNode::GetFirstChild(nsIDOMNode * *aFirstChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode lastChild; */
NS_IMETHODIMP nsDOMNode::GetLastChild(nsIDOMNode * *aLastChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode previousSibling; */
NS_IMETHODIMP nsDOMNode::GetPreviousSibling(nsIDOMNode * *aPreviousSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode nextSibling; */
NS_IMETHODIMP nsDOMNode::GetNextSibling(nsIDOMNode * *aNextSibling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNamedNodeMap attributes; */
NS_IMETHODIMP nsDOMNode::GetAttributes(nsIDOMNamedNodeMap * *aAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDocument ownerDocument; */
NS_IMETHODIMP nsDOMNode::GetOwnerDocument(nsIDOMDocument * *aOwnerDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode insertBefore (in nsIDOMNode newChild, in nsIDOMNode refChild) raises (DOMException); */
NS_IMETHODIMP nsDOMNode::InsertBefore(nsIDOMNode *newChild, nsIDOMNode *refChild, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode replaceChild (in nsIDOMNode newChild, in nsIDOMNode oldChild) raises (DOMException); */
NS_IMETHODIMP nsDOMNode::ReplaceChild(nsIDOMNode *newChild, nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode removeChild (in nsIDOMNode oldChild) raises (DOMException); */
NS_IMETHODIMP nsDOMNode::RemoveChild(nsIDOMNode *oldChild, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode appendChild (in nsIDOMNode newChild) raises (DOMException); */
NS_IMETHODIMP nsDOMNode::AppendChild(nsIDOMNode *newChild, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasChildNodes (); */
NS_IMETHODIMP nsDOMNode::HasChildNodes(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode cloneNode (in boolean deep); */
NS_IMETHODIMP nsDOMNode::CloneNode(PRBool deep, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void normalize (); */
NS_IMETHODIMP nsDOMNode::Normalize()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSupported (in DOMString feature, in DOMString version); */
NS_IMETHODIMP nsDOMNode::IsSupported(const nsAString & feature, const nsAString & version, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString namespaceURI; */
NS_IMETHODIMP nsDOMNode::GetNamespaceURI(nsAString & aNamespaceURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString prefix; */
NS_IMETHODIMP nsDOMNode::GetPrefix(nsAString & aPrefix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString localName; */
NS_IMETHODIMP nsDOMNode::GetLocalName(nsAString & aLocalName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasAttributes (); */
NS_IMETHODIMP nsDOMNode::HasAttributes(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(DOMBaseURI)] readonly attribute DOMString baseURI; */
NS_IMETHODIMP nsDOMNode::GetDOMBaseURI(nsAString & aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned short compareDocumentPosition (in nsIDOMNode other) raises (DOMException); */
NS_IMETHODIMP nsDOMNode::CompareDocumentPosition(nsIDOMNode *other, PRUint16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString textContent; */
NS_IMETHODIMP nsDOMNode::GetTextContent(nsAString & aTextContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNode::SetTextContent(const nsAString & aTextContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSameNode (in nsIDOMNode other); */
NS_IMETHODIMP nsDOMNode::IsSameNode(nsIDOMNode *other, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString lookupPrefix (in DOMString namespaceURI); */
NS_IMETHODIMP nsDOMNode::LookupPrefix(const nsAString & namespaceURI, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isDefaultNamespace (in DOMString namespaceURI); */
NS_IMETHODIMP nsDOMNode::IsDefaultNamespace(const nsAString & namespaceURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString lookupNamespaceURI (in DOMString prefix); */
NS_IMETHODIMP nsDOMNode::LookupNamespaceURI(const nsAString & prefix, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isEqualNode (in nsIDOMNode arg); */
NS_IMETHODIMP nsDOMNode::IsEqualNode(nsIDOMNode *arg, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant setUserData (in DOMString key, in nsIVariant data, in nsIDOMUserDataHandler handler); */
NS_IMETHODIMP nsDOMNode::SetUserData(const nsAString & key, nsIVariant *data, nsIDOMUserDataHandler *handler, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant getUserData (in DOMString key); */
NS_IMETHODIMP nsDOMNode::GetUserData(const nsAString & key, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean contains (in nsIDOMNode aOther); */
NS_IMETHODIMP nsDOMNode::Contains(nsIDOMNode *aOther, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNode_h__ */
