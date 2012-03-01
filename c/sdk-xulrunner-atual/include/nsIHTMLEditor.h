/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/idl/nsIHTMLEditor.idl
 */

#ifndef __gen_nsIHTMLEditor_h__
#define __gen_nsIHTMLEditor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAtom; /* forward declaration */

class nsIContent; /* forward declaration */

class nsISupportsArray; /* forward declaration */

class nsISelection; /* forward declaration */

class nsIContentFilter; /* forward declaration */

#define NS_EDITOR_ELEMENT_NOT_FOUND \
  NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_EDITOR, 1)

/* starting interface:    nsIHTMLEditor */
#define NS_IHTMLEDITOR_IID_STR "d58f35a7-c269-4292-b9aa-a79e200a7c99"

#define NS_IHTMLEDITOR_IID \
  {0xd58f35a7, 0xc269, 0x4292, \
    { 0xb9, 0xaa, 0xa7, 0x9e, 0x20, 0x0a, 0x7c, 0x99 }}

class NS_SCRIPTABLE nsIHTMLEditor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTMLEDITOR_IID)

    typedef short EAlignment;
  enum { eLeft = 0 };

  enum { eCenter = 1 };

  enum { eRight = 2 };

  enum { eJustify = 3 };

  /* void addDefaultProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
  NS_SCRIPTABLE NS_IMETHOD AddDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) = 0;

  /* void removeDefaultProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
  NS_SCRIPTABLE NS_IMETHOD RemoveDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) = 0;

  /* void removeAllDefaultProperties (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAllDefaultProperties(void) = 0;

  /* void setCSSInlineProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetCSSInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) = 0;

  /* void setInlineProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) = 0;

  /* void getInlineProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue, out boolean aFirst, out boolean aAny, out boolean aAll); */
  NS_SCRIPTABLE NS_IMETHOD GetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM) = 0;

  /* AString getInlinePropertyWithAttrValue (in nsIAtom aProperty, in AString aAttribute, in AString aValue, out boolean aFirst, out boolean aAny, out boolean aAll); */
  NS_SCRIPTABLE NS_IMETHOD GetInlinePropertyWithAttrValue(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* void removeAllInlineProperties (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAllInlineProperties(void) = 0;

  /* void removeInlineProperty (in nsIAtom aProperty, in AString aAttribute); */
  NS_SCRIPTABLE NS_IMETHOD RemoveInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute) = 0;

  /* void increaseFontSize (); */
  NS_SCRIPTABLE NS_IMETHOD IncreaseFontSize(void) = 0;

  /* void decreaseFontSize (); */
  NS_SCRIPTABLE NS_IMETHOD DecreaseFontSize(void) = 0;

  /* boolean canDrag (in nsIDOMEvent aEvent); */
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM) = 0;

  /* void doDrag (in nsIDOMEvent aEvent); */
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent) = 0;

  /* void insertFromDrop (in nsIDOMEvent aEvent); */
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent) = 0;

  /* boolean nodeIsBlock (in nsIDOMNode node); */
  NS_SCRIPTABLE NS_IMETHOD NodeIsBlock(nsIDOMNode *node, PRBool *_retval NS_OUTPARAM) = 0;

  /* void insertHTML (in AString aInputString); */
  NS_SCRIPTABLE NS_IMETHOD InsertHTML(const nsAString & aInputString) = 0;

  /* void pasteNoFormatting (in long aSelectionType); */
  NS_SCRIPTABLE NS_IMETHOD PasteNoFormatting(PRInt32 aSelectionType) = 0;

  /* void rebuildDocumentFromSource (in AString aSourceString); */
  NS_SCRIPTABLE NS_IMETHOD RebuildDocumentFromSource(const nsAString & aSourceString) = 0;

  /* void insertHTMLWithContext (in AString aInputString, in AString aContextStr, in AString aInfoStr, in AString aFlavor, in nsIDOMDocument aSourceDoc, in nsIDOMNode aDestinationNode, in long aDestinationOffset, in boolean aDeleteSelection); */
  NS_SCRIPTABLE NS_IMETHOD InsertHTMLWithContext(const nsAString & aInputString, const nsAString & aContextStr, const nsAString & aInfoStr, const nsAString & aFlavor, nsIDOMDocument *aSourceDoc, nsIDOMNode *aDestinationNode, PRInt32 aDestinationOffset, PRBool aDeleteSelection) = 0;

  /* void insertElementAtSelection (in nsIDOMElement aElement, in boolean aDeleteSelection); */
  NS_SCRIPTABLE NS_IMETHOD InsertElementAtSelection(nsIDOMElement *aElement, PRBool aDeleteSelection) = 0;

  /* void setDocumentTitle (in AString aTitle); */
  NS_SCRIPTABLE NS_IMETHOD SetDocumentTitle(const nsAString & aTitle) = 0;

  /* void updateBaseURL (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateBaseURL(void) = 0;

  /* void selectElement (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD SelectElement(nsIDOMElement *aElement) = 0;

  /* void setCaretAfterElement (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD SetCaretAfterElement(nsIDOMElement *aElement) = 0;

  /* void setParagraphFormat (in AString aParagraphFormat); */
  NS_SCRIPTABLE NS_IMETHOD SetParagraphFormat(const nsAString & aParagraphFormat) = 0;

  /* AString getParagraphState (out boolean aMixed); */
  NS_SCRIPTABLE NS_IMETHOD GetParagraphState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getFontFaceState (out boolean aMixed); */
  NS_SCRIPTABLE NS_IMETHOD GetFontFaceState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getFontColorState (out boolean aMixed); */
  NS_SCRIPTABLE NS_IMETHOD GetFontColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getBackgroundColorState (out boolean aMixed); */
  NS_SCRIPTABLE NS_IMETHOD GetBackgroundColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getHighlightColorState (out boolean aMixed); */
  NS_SCRIPTABLE NS_IMETHOD GetHighlightColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* void getListState (out boolean aMixed, out boolean aOL, out boolean aUL, out boolean aDL); */
  NS_SCRIPTABLE NS_IMETHOD GetListState(PRBool *aMixed NS_OUTPARAM, PRBool *aOL NS_OUTPARAM, PRBool *aUL NS_OUTPARAM, PRBool *aDL NS_OUTPARAM) = 0;

  /* void getListItemState (out boolean aMixed, out boolean aLI, out boolean aDT, out boolean aDD); */
  NS_SCRIPTABLE NS_IMETHOD GetListItemState(PRBool *aMixed NS_OUTPARAM, PRBool *aLI NS_OUTPARAM, PRBool *aDT NS_OUTPARAM, PRBool *aDD NS_OUTPARAM) = 0;

  /* void getAlignment (out boolean aMixed, out short aAlign); */
  NS_SCRIPTABLE NS_IMETHOD GetAlignment(PRBool *aMixed NS_OUTPARAM, PRInt16 *aAlign NS_OUTPARAM) = 0;

  /* void getIndentState (out boolean aCanIndent, out boolean aCanOutdent); */
  NS_SCRIPTABLE NS_IMETHOD GetIndentState(PRBool *aCanIndent NS_OUTPARAM, PRBool *aCanOutdent NS_OUTPARAM) = 0;

  /* void makeOrChangeList (in AString aListType, in boolean entireList, in AString aBulletType); */
  NS_SCRIPTABLE NS_IMETHOD MakeOrChangeList(const nsAString & aListType, PRBool entireList, const nsAString & aBulletType) = 0;

  /* void removeList (in AString aListType); */
  NS_SCRIPTABLE NS_IMETHOD RemoveList(const nsAString & aListType) = 0;

  /* void indent (in AString aIndent); */
  NS_SCRIPTABLE NS_IMETHOD Indent(const nsAString & aIndent) = 0;

  /* void align (in AString aAlign); */
  NS_SCRIPTABLE NS_IMETHOD Align(const nsAString & aAlign) = 0;

  /* nsIDOMElement getElementOrParentByTagName (in AString aTagName, in nsIDOMNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD GetElementOrParentByTagName(const nsAString & aTagName, nsIDOMNode *aNode, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement getSelectedElement (in AString aTagName); */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedElement(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* AString getHeadContentsAsHTML (); */
  NS_SCRIPTABLE NS_IMETHOD GetHeadContentsAsHTML(nsAString & _retval NS_OUTPARAM) = 0;

  /* void replaceHeadContentsWithHTML (in AString aSourceToInsert); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceHeadContentsWithHTML(const nsAString & aSourceToInsert) = 0;

  /* nsIDOMElement createElementWithDefaults (in AString aTagName); */
  NS_SCRIPTABLE NS_IMETHOD CreateElementWithDefaults(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* void insertLinkAroundSelection (in nsIDOMElement aAnchorElement); */
  NS_SCRIPTABLE NS_IMETHOD InsertLinkAroundSelection(nsIDOMElement *aAnchorElement) = 0;

  /* void setBackgroundColor (in AString aColor); */
  NS_SCRIPTABLE NS_IMETHOD SetBackgroundColor(const nsAString & aColor) = 0;

  /* void setBodyAttribute (in AString aAttr, in AString aValue); */
  NS_SCRIPTABLE NS_IMETHOD SetBodyAttribute(const nsAString & aAttr, const nsAString & aValue) = 0;

  /* void ignoreSpuriousDragEvent (in boolean aIgnoreSpuriousDragEvent); */
  NS_SCRIPTABLE NS_IMETHOD IgnoreSpuriousDragEvent(PRBool aIgnoreSpuriousDragEvent) = 0;

  /* nsISupportsArray getLinkedObjects (); */
  NS_SCRIPTABLE NS_IMETHOD GetLinkedObjects(nsISupportsArray * *_retval NS_OUTPARAM) = 0;

  /* attribute boolean isCSSEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetIsCSSEnabled(PRBool *aIsCSSEnabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIsCSSEnabled(PRBool aIsCSSEnabled) = 0;

  /* void addInsertionListener (in nsIContentFilter inFilter); */
  NS_SCRIPTABLE NS_IMETHOD AddInsertionListener(nsIContentFilter *inFilter) = 0;

  /* void removeInsertionListener (in nsIContentFilter inFilter); */
  NS_SCRIPTABLE NS_IMETHOD RemoveInsertionListener(nsIContentFilter *inFilter) = 0;

  /* nsIDOMElement createAnonymousElement (in AString aTag, in nsIDOMNode aParentNode, in AString aAnonClass, in boolean aIsCreatedHidden); */
  NS_SCRIPTABLE NS_IMETHOD CreateAnonymousElement(const nsAString & aTag, nsIDOMNode *aParentNode, const nsAString & aAnonClass, PRBool aIsCreatedHidden, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement getSelectionContainer (); */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionContainer(nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* void checkSelectionStateForAnonymousButtons (in nsISelection aSelection); */
  NS_SCRIPTABLE NS_IMETHOD CheckSelectionStateForAnonymousButtons(nsISelection *aSelection) = 0;

  /* boolean isAnonymousElement (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousElement(nsIDOMElement *aElement, PRBool *_retval NS_OUTPARAM) = 0;

  /* attribute boolean returnInParagraphCreatesNewParagraph; */
  NS_SCRIPTABLE NS_IMETHOD GetReturnInParagraphCreatesNewParagraph(PRBool *aReturnInParagraphCreatesNewParagraph) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetReturnInParagraphCreatesNewParagraph(PRBool aReturnInParagraphCreatesNewParagraph) = 0;

  /* boolean breakIsVisible (in nsIDOMNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD BreakIsVisible(nsIDOMNode *aNode, PRBool *_retval NS_OUTPARAM) = 0;

  /* [noscript,notxpcom] nsIContent GetActiveEditingHost (); */
  NS_IMETHOD_(nsIContent *) GetActiveEditingHost(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHTMLEditor, NS_IHTMLEDITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTMLEDITOR \
  NS_SCRIPTABLE NS_IMETHOD AddDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD RemoveDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllDefaultProperties(void); \
  NS_SCRIPTABLE NS_IMETHOD SetCSSInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD SetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInlinePropertyWithAttrValue(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllInlineProperties(void); \
  NS_SCRIPTABLE NS_IMETHOD RemoveInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute); \
  NS_SCRIPTABLE NS_IMETHOD IncreaseFontSize(void); \
  NS_SCRIPTABLE NS_IMETHOD DecreaseFontSize(void); \
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent); \
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent); \
  NS_SCRIPTABLE NS_IMETHOD NodeIsBlock(nsIDOMNode *node, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertHTML(const nsAString & aInputString); \
  NS_SCRIPTABLE NS_IMETHOD PasteNoFormatting(PRInt32 aSelectionType); \
  NS_SCRIPTABLE NS_IMETHOD RebuildDocumentFromSource(const nsAString & aSourceString); \
  NS_SCRIPTABLE NS_IMETHOD InsertHTMLWithContext(const nsAString & aInputString, const nsAString & aContextStr, const nsAString & aInfoStr, const nsAString & aFlavor, nsIDOMDocument *aSourceDoc, nsIDOMNode *aDestinationNode, PRInt32 aDestinationOffset, PRBool aDeleteSelection); \
  NS_SCRIPTABLE NS_IMETHOD InsertElementAtSelection(nsIDOMElement *aElement, PRBool aDeleteSelection); \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentTitle(const nsAString & aTitle); \
  NS_SCRIPTABLE NS_IMETHOD UpdateBaseURL(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectElement(nsIDOMElement *aElement); \
  NS_SCRIPTABLE NS_IMETHOD SetCaretAfterElement(nsIDOMElement *aElement); \
  NS_SCRIPTABLE NS_IMETHOD SetParagraphFormat(const nsAString & aParagraphFormat); \
  NS_SCRIPTABLE NS_IMETHOD GetParagraphState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFontFaceState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFontColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBackgroundColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetHighlightColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetListState(PRBool *aMixed NS_OUTPARAM, PRBool *aOL NS_OUTPARAM, PRBool *aUL NS_OUTPARAM, PRBool *aDL NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetListItemState(PRBool *aMixed NS_OUTPARAM, PRBool *aLI NS_OUTPARAM, PRBool *aDT NS_OUTPARAM, PRBool *aDD NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAlignment(PRBool *aMixed NS_OUTPARAM, PRInt16 *aAlign NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIndentState(PRBool *aCanIndent NS_OUTPARAM, PRBool *aCanOutdent NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MakeOrChangeList(const nsAString & aListType, PRBool entireList, const nsAString & aBulletType); \
  NS_SCRIPTABLE NS_IMETHOD RemoveList(const nsAString & aListType); \
  NS_SCRIPTABLE NS_IMETHOD Indent(const nsAString & aIndent); \
  NS_SCRIPTABLE NS_IMETHOD Align(const nsAString & aAlign); \
  NS_SCRIPTABLE NS_IMETHOD GetElementOrParentByTagName(const nsAString & aTagName, nsIDOMNode *aNode, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedElement(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetHeadContentsAsHTML(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceHeadContentsWithHTML(const nsAString & aSourceToInsert); \
  NS_SCRIPTABLE NS_IMETHOD CreateElementWithDefaults(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertLinkAroundSelection(nsIDOMElement *aAnchorElement); \
  NS_SCRIPTABLE NS_IMETHOD SetBackgroundColor(const nsAString & aColor); \
  NS_SCRIPTABLE NS_IMETHOD SetBodyAttribute(const nsAString & aAttr, const nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD IgnoreSpuriousDragEvent(PRBool aIgnoreSpuriousDragEvent); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkedObjects(nsISupportsArray * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIsCSSEnabled(PRBool *aIsCSSEnabled); \
  NS_SCRIPTABLE NS_IMETHOD SetIsCSSEnabled(PRBool aIsCSSEnabled); \
  NS_SCRIPTABLE NS_IMETHOD AddInsertionListener(nsIContentFilter *inFilter); \
  NS_SCRIPTABLE NS_IMETHOD RemoveInsertionListener(nsIContentFilter *inFilter); \
  NS_SCRIPTABLE NS_IMETHOD CreateAnonymousElement(const nsAString & aTag, nsIDOMNode *aParentNode, const nsAString & aAnonClass, PRBool aIsCreatedHidden, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionContainer(nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckSelectionStateForAnonymousButtons(nsISelection *aSelection); \
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousElement(nsIDOMElement *aElement, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetReturnInParagraphCreatesNewParagraph(PRBool *aReturnInParagraphCreatesNewParagraph); \
  NS_SCRIPTABLE NS_IMETHOD SetReturnInParagraphCreatesNewParagraph(PRBool aReturnInParagraphCreatesNewParagraph); \
  NS_SCRIPTABLE NS_IMETHOD BreakIsVisible(nsIDOMNode *aNode, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD_(nsIContent *) GetActiveEditingHost(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTMLEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return _to AddDefaultProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return _to RemoveDefaultProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllDefaultProperties(void) { return _to RemoveAllDefaultProperties(); } \
  NS_SCRIPTABLE NS_IMETHOD SetCSSInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return _to SetCSSInlineProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return _to SetInlineProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM) { return _to GetInlineProperty(aProperty, aAttribute, aValue, aFirst, aAny, aAll); } \
  NS_SCRIPTABLE NS_IMETHOD GetInlinePropertyWithAttrValue(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetInlinePropertyWithAttrValue(aProperty, aAttribute, aValue, aFirst, aAny, aAll, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllInlineProperties(void) { return _to RemoveAllInlineProperties(); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute) { return _to RemoveInlineProperty(aProperty, aAttribute); } \
  NS_SCRIPTABLE NS_IMETHOD IncreaseFontSize(void) { return _to IncreaseFontSize(); } \
  NS_SCRIPTABLE NS_IMETHOD DecreaseFontSize(void) { return _to DecreaseFontSize(); } \
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM) { return _to CanDrag(aEvent, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent) { return _to DoDrag(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent) { return _to InsertFromDrop(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD NodeIsBlock(nsIDOMNode *node, PRBool *_retval NS_OUTPARAM) { return _to NodeIsBlock(node, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertHTML(const nsAString & aInputString) { return _to InsertHTML(aInputString); } \
  NS_SCRIPTABLE NS_IMETHOD PasteNoFormatting(PRInt32 aSelectionType) { return _to PasteNoFormatting(aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD RebuildDocumentFromSource(const nsAString & aSourceString) { return _to RebuildDocumentFromSource(aSourceString); } \
  NS_SCRIPTABLE NS_IMETHOD InsertHTMLWithContext(const nsAString & aInputString, const nsAString & aContextStr, const nsAString & aInfoStr, const nsAString & aFlavor, nsIDOMDocument *aSourceDoc, nsIDOMNode *aDestinationNode, PRInt32 aDestinationOffset, PRBool aDeleteSelection) { return _to InsertHTMLWithContext(aInputString, aContextStr, aInfoStr, aFlavor, aSourceDoc, aDestinationNode, aDestinationOffset, aDeleteSelection); } \
  NS_SCRIPTABLE NS_IMETHOD InsertElementAtSelection(nsIDOMElement *aElement, PRBool aDeleteSelection) { return _to InsertElementAtSelection(aElement, aDeleteSelection); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentTitle(const nsAString & aTitle) { return _to SetDocumentTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateBaseURL(void) { return _to UpdateBaseURL(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectElement(nsIDOMElement *aElement) { return _to SelectElement(aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetCaretAfterElement(nsIDOMElement *aElement) { return _to SetCaretAfterElement(aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetParagraphFormat(const nsAString & aParagraphFormat) { return _to SetParagraphFormat(aParagraphFormat); } \
  NS_SCRIPTABLE NS_IMETHOD GetParagraphState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetParagraphState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFontFaceState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetFontFaceState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFontColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetFontColorState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBackgroundColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetBackgroundColorState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHighlightColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetHighlightColorState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetListState(PRBool *aMixed NS_OUTPARAM, PRBool *aOL NS_OUTPARAM, PRBool *aUL NS_OUTPARAM, PRBool *aDL NS_OUTPARAM) { return _to GetListState(aMixed, aOL, aUL, aDL); } \
  NS_SCRIPTABLE NS_IMETHOD GetListItemState(PRBool *aMixed NS_OUTPARAM, PRBool *aLI NS_OUTPARAM, PRBool *aDT NS_OUTPARAM, PRBool *aDD NS_OUTPARAM) { return _to GetListItemState(aMixed, aLI, aDT, aDD); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlignment(PRBool *aMixed NS_OUTPARAM, PRInt16 *aAlign NS_OUTPARAM) { return _to GetAlignment(aMixed, aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndentState(PRBool *aCanIndent NS_OUTPARAM, PRBool *aCanOutdent NS_OUTPARAM) { return _to GetIndentState(aCanIndent, aCanOutdent); } \
  NS_SCRIPTABLE NS_IMETHOD MakeOrChangeList(const nsAString & aListType, PRBool entireList, const nsAString & aBulletType) { return _to MakeOrChangeList(aListType, entireList, aBulletType); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveList(const nsAString & aListType) { return _to RemoveList(aListType); } \
  NS_SCRIPTABLE NS_IMETHOD Indent(const nsAString & aIndent) { return _to Indent(aIndent); } \
  NS_SCRIPTABLE NS_IMETHOD Align(const nsAString & aAlign) { return _to Align(aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementOrParentByTagName(const nsAString & aTagName, nsIDOMNode *aNode, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetElementOrParentByTagName(aTagName, aNode, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedElement(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetSelectedElement(aTagName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeadContentsAsHTML(nsAString & _retval NS_OUTPARAM) { return _to GetHeadContentsAsHTML(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceHeadContentsWithHTML(const nsAString & aSourceToInsert) { return _to ReplaceHeadContentsWithHTML(aSourceToInsert); } \
  NS_SCRIPTABLE NS_IMETHOD CreateElementWithDefaults(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM) { return _to CreateElementWithDefaults(aTagName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertLinkAroundSelection(nsIDOMElement *aAnchorElement) { return _to InsertLinkAroundSelection(aAnchorElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetBackgroundColor(const nsAString & aColor) { return _to SetBackgroundColor(aColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyAttribute(const nsAString & aAttr, const nsAString & aValue) { return _to SetBodyAttribute(aAttr, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD IgnoreSpuriousDragEvent(PRBool aIgnoreSpuriousDragEvent) { return _to IgnoreSpuriousDragEvent(aIgnoreSpuriousDragEvent); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkedObjects(nsISupportsArray * *_retval NS_OUTPARAM) { return _to GetLinkedObjects(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsCSSEnabled(PRBool *aIsCSSEnabled) { return _to GetIsCSSEnabled(aIsCSSEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsCSSEnabled(PRBool aIsCSSEnabled) { return _to SetIsCSSEnabled(aIsCSSEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD AddInsertionListener(nsIContentFilter *inFilter) { return _to AddInsertionListener(inFilter); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveInsertionListener(nsIContentFilter *inFilter) { return _to RemoveInsertionListener(inFilter); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAnonymousElement(const nsAString & aTag, nsIDOMNode *aParentNode, const nsAString & aAnonClass, PRBool aIsCreatedHidden, nsIDOMElement * *_retval NS_OUTPARAM) { return _to CreateAnonymousElement(aTag, aParentNode, aAnonClass, aIsCreatedHidden, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionContainer(nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetSelectionContainer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckSelectionStateForAnonymousButtons(nsISelection *aSelection) { return _to CheckSelectionStateForAnonymousButtons(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousElement(nsIDOMElement *aElement, PRBool *_retval NS_OUTPARAM) { return _to IsAnonymousElement(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReturnInParagraphCreatesNewParagraph(PRBool *aReturnInParagraphCreatesNewParagraph) { return _to GetReturnInParagraphCreatesNewParagraph(aReturnInParagraphCreatesNewParagraph); } \
  NS_SCRIPTABLE NS_IMETHOD SetReturnInParagraphCreatesNewParagraph(PRBool aReturnInParagraphCreatesNewParagraph) { return _to SetReturnInParagraphCreatesNewParagraph(aReturnInParagraphCreatesNewParagraph); } \
  NS_SCRIPTABLE NS_IMETHOD BreakIsVisible(nsIDOMNode *aNode, PRBool *_retval NS_OUTPARAM) { return _to BreakIsVisible(aNode, _retval); } \
  NS_IMETHOD_(nsIContent *) GetActiveEditingHost(void) { return _to GetActiveEditingHost(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTMLEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDefaultProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDefaultProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllDefaultProperties(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllDefaultProperties(); } \
  NS_SCRIPTABLE NS_IMETHOD SetCSSInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCSSInlineProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInlineProperty(aProperty, aAttribute, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInlineProperty(aProperty, aAttribute, aValue, aFirst, aAny, aAll); } \
  NS_SCRIPTABLE NS_IMETHOD GetInlinePropertyWithAttrValue(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInlinePropertyWithAttrValue(aProperty, aAttribute, aValue, aFirst, aAny, aAll, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAllInlineProperties(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllInlineProperties(); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveInlineProperty(aProperty, aAttribute); } \
  NS_SCRIPTABLE NS_IMETHOD IncreaseFontSize(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->IncreaseFontSize(); } \
  NS_SCRIPTABLE NS_IMETHOD DecreaseFontSize(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DecreaseFontSize(); } \
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanDrag(aEvent, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoDrag(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertFromDrop(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD NodeIsBlock(nsIDOMNode *node, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodeIsBlock(node, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertHTML(const nsAString & aInputString) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertHTML(aInputString); } \
  NS_SCRIPTABLE NS_IMETHOD PasteNoFormatting(PRInt32 aSelectionType) { return !_to ? NS_ERROR_NULL_POINTER : _to->PasteNoFormatting(aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD RebuildDocumentFromSource(const nsAString & aSourceString) { return !_to ? NS_ERROR_NULL_POINTER : _to->RebuildDocumentFromSource(aSourceString); } \
  NS_SCRIPTABLE NS_IMETHOD InsertHTMLWithContext(const nsAString & aInputString, const nsAString & aContextStr, const nsAString & aInfoStr, const nsAString & aFlavor, nsIDOMDocument *aSourceDoc, nsIDOMNode *aDestinationNode, PRInt32 aDestinationOffset, PRBool aDeleteSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertHTMLWithContext(aInputString, aContextStr, aInfoStr, aFlavor, aSourceDoc, aDestinationNode, aDestinationOffset, aDeleteSelection); } \
  NS_SCRIPTABLE NS_IMETHOD InsertElementAtSelection(nsIDOMElement *aElement, PRBool aDeleteSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertElementAtSelection(aElement, aDeleteSelection); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentTitle(const nsAString & aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocumentTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateBaseURL(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateBaseURL(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectElement(nsIDOMElement *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectElement(aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetCaretAfterElement(nsIDOMElement *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCaretAfterElement(aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetParagraphFormat(const nsAString & aParagraphFormat) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParagraphFormat(aParagraphFormat); } \
  NS_SCRIPTABLE NS_IMETHOD GetParagraphState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParagraphState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFontFaceState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFontFaceState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFontColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFontColorState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBackgroundColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBackgroundColorState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHighlightColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHighlightColorState(aMixed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetListState(PRBool *aMixed NS_OUTPARAM, PRBool *aOL NS_OUTPARAM, PRBool *aUL NS_OUTPARAM, PRBool *aDL NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListState(aMixed, aOL, aUL, aDL); } \
  NS_SCRIPTABLE NS_IMETHOD GetListItemState(PRBool *aMixed NS_OUTPARAM, PRBool *aLI NS_OUTPARAM, PRBool *aDT NS_OUTPARAM, PRBool *aDD NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListItemState(aMixed, aLI, aDT, aDD); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlignment(PRBool *aMixed NS_OUTPARAM, PRInt16 *aAlign NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlignment(aMixed, aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndentState(PRBool *aCanIndent NS_OUTPARAM, PRBool *aCanOutdent NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndentState(aCanIndent, aCanOutdent); } \
  NS_SCRIPTABLE NS_IMETHOD MakeOrChangeList(const nsAString & aListType, PRBool entireList, const nsAString & aBulletType) { return !_to ? NS_ERROR_NULL_POINTER : _to->MakeOrChangeList(aListType, entireList, aBulletType); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveList(const nsAString & aListType) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveList(aListType); } \
  NS_SCRIPTABLE NS_IMETHOD Indent(const nsAString & aIndent) { return !_to ? NS_ERROR_NULL_POINTER : _to->Indent(aIndent); } \
  NS_SCRIPTABLE NS_IMETHOD Align(const nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->Align(aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD GetElementOrParentByTagName(const nsAString & aTagName, nsIDOMNode *aNode, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementOrParentByTagName(aTagName, aNode, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedElement(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedElement(aTagName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeadContentsAsHTML(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeadContentsAsHTML(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceHeadContentsWithHTML(const nsAString & aSourceToInsert) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceHeadContentsWithHTML(aSourceToInsert); } \
  NS_SCRIPTABLE NS_IMETHOD CreateElementWithDefaults(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateElementWithDefaults(aTagName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertLinkAroundSelection(nsIDOMElement *aAnchorElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertLinkAroundSelection(aAnchorElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetBackgroundColor(const nsAString & aColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBackgroundColor(aColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyAttribute(const nsAString & aAttr, const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBodyAttribute(aAttr, aValue); } \
  NS_SCRIPTABLE NS_IMETHOD IgnoreSpuriousDragEvent(PRBool aIgnoreSpuriousDragEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->IgnoreSpuriousDragEvent(aIgnoreSpuriousDragEvent); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkedObjects(nsISupportsArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkedObjects(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsCSSEnabled(PRBool *aIsCSSEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsCSSEnabled(aIsCSSEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsCSSEnabled(PRBool aIsCSSEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsCSSEnabled(aIsCSSEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD AddInsertionListener(nsIContentFilter *inFilter) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddInsertionListener(inFilter); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveInsertionListener(nsIContentFilter *inFilter) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveInsertionListener(inFilter); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAnonymousElement(const nsAString & aTag, nsIDOMNode *aParentNode, const nsAString & aAnonClass, PRBool aIsCreatedHidden, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateAnonymousElement(aTag, aParentNode, aAnonClass, aIsCreatedHidden, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionContainer(nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionContainer(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckSelectionStateForAnonymousButtons(nsISelection *aSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckSelectionStateForAnonymousButtons(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousElement(nsIDOMElement *aElement, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAnonymousElement(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReturnInParagraphCreatesNewParagraph(PRBool *aReturnInParagraphCreatesNewParagraph) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReturnInParagraphCreatesNewParagraph(aReturnInParagraphCreatesNewParagraph); } \
  NS_SCRIPTABLE NS_IMETHOD SetReturnInParagraphCreatesNewParagraph(PRBool aReturnInParagraphCreatesNewParagraph) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReturnInParagraphCreatesNewParagraph(aReturnInParagraphCreatesNewParagraph); } \
  NS_SCRIPTABLE NS_IMETHOD BreakIsVisible(nsIDOMNode *aNode, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->BreakIsVisible(aNode, _retval); } \
  NS_IMETHOD_(nsIContent *) GetActiveEditingHost(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveEditingHost(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHTMLEditor : public nsIHTMLEditor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTMLEDITOR

  nsHTMLEditor();

private:
  ~nsHTMLEditor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHTMLEditor, nsIHTMLEditor)

nsHTMLEditor::nsHTMLEditor()
{
  /* member initializers and constructor code */
}

nsHTMLEditor::~nsHTMLEditor()
{
  /* destructor code */
}

/* void addDefaultProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
NS_IMETHODIMP nsHTMLEditor::AddDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDefaultProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
NS_IMETHODIMP nsHTMLEditor::RemoveDefaultProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllDefaultProperties (); */
NS_IMETHODIMP nsHTMLEditor::RemoveAllDefaultProperties()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCSSInlineProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
NS_IMETHODIMP nsHTMLEditor::SetCSSInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setInlineProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue); */
NS_IMETHODIMP nsHTMLEditor::SetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getInlineProperty (in nsIAtom aProperty, in AString aAttribute, in AString aValue, out boolean aFirst, out boolean aAny, out boolean aAll); */
NS_IMETHODIMP nsHTMLEditor::GetInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getInlinePropertyWithAttrValue (in nsIAtom aProperty, in AString aAttribute, in AString aValue, out boolean aFirst, out boolean aAny, out boolean aAll); */
NS_IMETHODIMP nsHTMLEditor::GetInlinePropertyWithAttrValue(nsIAtom *aProperty, const nsAString & aAttribute, const nsAString & aValue, PRBool *aFirst NS_OUTPARAM, PRBool *aAny NS_OUTPARAM, PRBool *aAll NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllInlineProperties (); */
NS_IMETHODIMP nsHTMLEditor::RemoveAllInlineProperties()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeInlineProperty (in nsIAtom aProperty, in AString aAttribute); */
NS_IMETHODIMP nsHTMLEditor::RemoveInlineProperty(nsIAtom *aProperty, const nsAString & aAttribute)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void increaseFontSize (); */
NS_IMETHODIMP nsHTMLEditor::IncreaseFontSize()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void decreaseFontSize (); */
NS_IMETHODIMP nsHTMLEditor::DecreaseFontSize()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canDrag (in nsIDOMEvent aEvent); */
NS_IMETHODIMP nsHTMLEditor::CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doDrag (in nsIDOMEvent aEvent); */
NS_IMETHODIMP nsHTMLEditor::DoDrag(nsIDOMEvent *aEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertFromDrop (in nsIDOMEvent aEvent); */
NS_IMETHODIMP nsHTMLEditor::InsertFromDrop(nsIDOMEvent *aEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean nodeIsBlock (in nsIDOMNode node); */
NS_IMETHODIMP nsHTMLEditor::NodeIsBlock(nsIDOMNode *node, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertHTML (in AString aInputString); */
NS_IMETHODIMP nsHTMLEditor::InsertHTML(const nsAString & aInputString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pasteNoFormatting (in long aSelectionType); */
NS_IMETHODIMP nsHTMLEditor::PasteNoFormatting(PRInt32 aSelectionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rebuildDocumentFromSource (in AString aSourceString); */
NS_IMETHODIMP nsHTMLEditor::RebuildDocumentFromSource(const nsAString & aSourceString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertHTMLWithContext (in AString aInputString, in AString aContextStr, in AString aInfoStr, in AString aFlavor, in nsIDOMDocument aSourceDoc, in nsIDOMNode aDestinationNode, in long aDestinationOffset, in boolean aDeleteSelection); */
NS_IMETHODIMP nsHTMLEditor::InsertHTMLWithContext(const nsAString & aInputString, const nsAString & aContextStr, const nsAString & aInfoStr, const nsAString & aFlavor, nsIDOMDocument *aSourceDoc, nsIDOMNode *aDestinationNode, PRInt32 aDestinationOffset, PRBool aDeleteSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertElementAtSelection (in nsIDOMElement aElement, in boolean aDeleteSelection); */
NS_IMETHODIMP nsHTMLEditor::InsertElementAtSelection(nsIDOMElement *aElement, PRBool aDeleteSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDocumentTitle (in AString aTitle); */
NS_IMETHODIMP nsHTMLEditor::SetDocumentTitle(const nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateBaseURL (); */
NS_IMETHODIMP nsHTMLEditor::UpdateBaseURL()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectElement (in nsIDOMElement aElement); */
NS_IMETHODIMP nsHTMLEditor::SelectElement(nsIDOMElement *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCaretAfterElement (in nsIDOMElement aElement); */
NS_IMETHODIMP nsHTMLEditor::SetCaretAfterElement(nsIDOMElement *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setParagraphFormat (in AString aParagraphFormat); */
NS_IMETHODIMP nsHTMLEditor::SetParagraphFormat(const nsAString & aParagraphFormat)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getParagraphState (out boolean aMixed); */
NS_IMETHODIMP nsHTMLEditor::GetParagraphState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getFontFaceState (out boolean aMixed); */
NS_IMETHODIMP nsHTMLEditor::GetFontFaceState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getFontColorState (out boolean aMixed); */
NS_IMETHODIMP nsHTMLEditor::GetFontColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getBackgroundColorState (out boolean aMixed); */
NS_IMETHODIMP nsHTMLEditor::GetBackgroundColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getHighlightColorState (out boolean aMixed); */
NS_IMETHODIMP nsHTMLEditor::GetHighlightColorState(PRBool *aMixed NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getListState (out boolean aMixed, out boolean aOL, out boolean aUL, out boolean aDL); */
NS_IMETHODIMP nsHTMLEditor::GetListState(PRBool *aMixed NS_OUTPARAM, PRBool *aOL NS_OUTPARAM, PRBool *aUL NS_OUTPARAM, PRBool *aDL NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getListItemState (out boolean aMixed, out boolean aLI, out boolean aDT, out boolean aDD); */
NS_IMETHODIMP nsHTMLEditor::GetListItemState(PRBool *aMixed NS_OUTPARAM, PRBool *aLI NS_OUTPARAM, PRBool *aDT NS_OUTPARAM, PRBool *aDD NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAlignment (out boolean aMixed, out short aAlign); */
NS_IMETHODIMP nsHTMLEditor::GetAlignment(PRBool *aMixed NS_OUTPARAM, PRInt16 *aAlign NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getIndentState (out boolean aCanIndent, out boolean aCanOutdent); */
NS_IMETHODIMP nsHTMLEditor::GetIndentState(PRBool *aCanIndent NS_OUTPARAM, PRBool *aCanOutdent NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void makeOrChangeList (in AString aListType, in boolean entireList, in AString aBulletType); */
NS_IMETHODIMP nsHTMLEditor::MakeOrChangeList(const nsAString & aListType, PRBool entireList, const nsAString & aBulletType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeList (in AString aListType); */
NS_IMETHODIMP nsHTMLEditor::RemoveList(const nsAString & aListType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void indent (in AString aIndent); */
NS_IMETHODIMP nsHTMLEditor::Indent(const nsAString & aIndent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void align (in AString aAlign); */
NS_IMETHODIMP nsHTMLEditor::Align(const nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getElementOrParentByTagName (in AString aTagName, in nsIDOMNode aNode); */
NS_IMETHODIMP nsHTMLEditor::GetElementOrParentByTagName(const nsAString & aTagName, nsIDOMNode *aNode, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getSelectedElement (in AString aTagName); */
NS_IMETHODIMP nsHTMLEditor::GetSelectedElement(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getHeadContentsAsHTML (); */
NS_IMETHODIMP nsHTMLEditor::GetHeadContentsAsHTML(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceHeadContentsWithHTML (in AString aSourceToInsert); */
NS_IMETHODIMP nsHTMLEditor::ReplaceHeadContentsWithHTML(const nsAString & aSourceToInsert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement createElementWithDefaults (in AString aTagName); */
NS_IMETHODIMP nsHTMLEditor::CreateElementWithDefaults(const nsAString & aTagName, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertLinkAroundSelection (in nsIDOMElement aAnchorElement); */
NS_IMETHODIMP nsHTMLEditor::InsertLinkAroundSelection(nsIDOMElement *aAnchorElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setBackgroundColor (in AString aColor); */
NS_IMETHODIMP nsHTMLEditor::SetBackgroundColor(const nsAString & aColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setBodyAttribute (in AString aAttr, in AString aValue); */
NS_IMETHODIMP nsHTMLEditor::SetBodyAttribute(const nsAString & aAttr, const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ignoreSpuriousDragEvent (in boolean aIgnoreSpuriousDragEvent); */
NS_IMETHODIMP nsHTMLEditor::IgnoreSpuriousDragEvent(PRBool aIgnoreSpuriousDragEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupportsArray getLinkedObjects (); */
NS_IMETHODIMP nsHTMLEditor::GetLinkedObjects(nsISupportsArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isCSSEnabled; */
NS_IMETHODIMP nsHTMLEditor::GetIsCSSEnabled(PRBool *aIsCSSEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHTMLEditor::SetIsCSSEnabled(PRBool aIsCSSEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addInsertionListener (in nsIContentFilter inFilter); */
NS_IMETHODIMP nsHTMLEditor::AddInsertionListener(nsIContentFilter *inFilter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeInsertionListener (in nsIContentFilter inFilter); */
NS_IMETHODIMP nsHTMLEditor::RemoveInsertionListener(nsIContentFilter *inFilter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement createAnonymousElement (in AString aTag, in nsIDOMNode aParentNode, in AString aAnonClass, in boolean aIsCreatedHidden); */
NS_IMETHODIMP nsHTMLEditor::CreateAnonymousElement(const nsAString & aTag, nsIDOMNode *aParentNode, const nsAString & aAnonClass, PRBool aIsCreatedHidden, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getSelectionContainer (); */
NS_IMETHODIMP nsHTMLEditor::GetSelectionContainer(nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkSelectionStateForAnonymousButtons (in nsISelection aSelection); */
NS_IMETHODIMP nsHTMLEditor::CheckSelectionStateForAnonymousButtons(nsISelection *aSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isAnonymousElement (in nsIDOMElement aElement); */
NS_IMETHODIMP nsHTMLEditor::IsAnonymousElement(nsIDOMElement *aElement, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean returnInParagraphCreatesNewParagraph; */
NS_IMETHODIMP nsHTMLEditor::GetReturnInParagraphCreatesNewParagraph(PRBool *aReturnInParagraphCreatesNewParagraph)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHTMLEditor::SetReturnInParagraphCreatesNewParagraph(PRBool aReturnInParagraphCreatesNewParagraph)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean breakIsVisible (in nsIDOMNode aNode); */
NS_IMETHODIMP nsHTMLEditor::BreakIsVisible(nsIDOMNode *aNode, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsIContent GetActiveEditingHost (); */
NS_IMETHODIMP_(nsIContent *) nsHTMLEditor::GetActiveEditingHost()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIHTMLEditor_h__ */
