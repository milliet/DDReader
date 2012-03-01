/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/idl/nsIEditor.idl
 */

#ifndef __gen_nsIEditor_h__
#define __gen_nsIEditor_h__


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
class nsIURI; /* forward declaration */

class nsIAtom; /* forward declaration */

class nsIContent; /* forward declaration */

class nsISelection; /* forward declaration */

class nsISelectionController; /* forward declaration */

class nsIDocumentStateListener; /* forward declaration */

class nsIOutputStream; /* forward declaration */

class nsITransactionManager; /* forward declaration */

class nsITransaction; /* forward declaration */

class nsIEditorObserver; /* forward declaration */

class nsIEditActionListener; /* forward declaration */

class nsIInlineSpellChecker; /* forward declaration */

class nsITransferable; /* forward declaration */


/* starting interface:    nsIEditor */
#define NS_IEDITOR_IID_STR "20ee0b70-c528-11e0-9572-0800200c9a66"

#define NS_IEDITOR_IID \
  {0x20ee0b70, 0xc528, 0x11e0, \
    { 0x95, 0x72, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_SCRIPTABLE nsIEditor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEDITOR_IID)

    typedef short EDirection;
  enum { eNone = 0 };

  enum { eNext = 1 };

  enum { ePrevious = 2 };

  enum { eNextWord = 3 };

  enum { ePreviousWord = 4 };

  enum { eToBeginningOfLine = 5 };

  enum { eToEndOfLine = 6 };

  /* readonly attribute nsISelection selection; */
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *aSelection) = 0;

  /* [noscript] void init (in nsIDOMDocument doc, in nsIContent aRoot, in nsISelectionController aSelCon, in unsigned long aFlags); */
  NS_IMETHOD Init(nsIDOMDocument *doc, nsIContent *aRoot, nsISelectionController *aSelCon, PRUint32 aFlags) = 0;

  /* void setAttributeOrEquivalent (in nsIDOMElement element, in AString sourceAttrName, in AString sourceAttrValue, in boolean aSuppressTransaction); */
  NS_SCRIPTABLE NS_IMETHOD SetAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, const nsAString & sourceAttrValue, PRBool aSuppressTransaction) = 0;

  /* void removeAttributeOrEquivalent (in nsIDOMElement element, in DOMString sourceAttrName, in boolean aSuppressTransaction); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, PRBool aSuppressTransaction) = 0;

  /* void postCreate (); */
  NS_SCRIPTABLE NS_IMETHOD PostCreate(void) = 0;

  /* void preDestroy (in boolean aDestroyingFrames); */
  NS_SCRIPTABLE NS_IMETHOD PreDestroy(PRBool aDestroyingFrames) = 0;

  /* attribute unsigned long flags; */
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) = 0;

  /* attribute string contentsMIMEType; */
  NS_SCRIPTABLE NS_IMETHOD GetContentsMIMEType(char * *aContentsMIMEType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentsMIMEType(const char * aContentsMIMEType) = 0;

  /* readonly attribute boolean isDocumentEditable; */
  NS_SCRIPTABLE NS_IMETHOD GetIsDocumentEditable(PRBool *aIsDocumentEditable) = 0;

  /* readonly attribute boolean isSelectionEditable; */
  NS_SCRIPTABLE NS_IMETHOD GetIsSelectionEditable(PRBool *aIsSelectionEditable) = 0;

  /* readonly attribute nsIDOMDocument document; */
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument) = 0;

  /* readonly attribute nsIDOMElement rootElement; */
  NS_SCRIPTABLE NS_IMETHOD GetRootElement(nsIDOMElement * *aRootElement) = 0;

  /* readonly attribute nsISelectionController selectionController; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionController(nsISelectionController * *aSelectionController) = 0;

  /* void deleteSelection (in short action); */
  NS_SCRIPTABLE NS_IMETHOD DeleteSelection(PRInt16 action) = 0;

  /* readonly attribute boolean documentIsEmpty; */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentIsEmpty(PRBool *aDocumentIsEmpty) = 0;

  /* readonly attribute boolean documentModified; */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentModified(PRBool *aDocumentModified) = 0;

  /* attribute ACString documentCharacterSet; */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentCharacterSet(nsACString & aDocumentCharacterSet) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDocumentCharacterSet(const nsACString & aDocumentCharacterSet) = 0;

  /* void resetModificationCount (); */
  NS_SCRIPTABLE NS_IMETHOD ResetModificationCount(void) = 0;

  /* long getModificationCount (); */
  NS_SCRIPTABLE NS_IMETHOD GetModificationCount(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void incrementModificationCount (in long aModCount); */
  NS_SCRIPTABLE NS_IMETHOD IncrementModificationCount(PRInt32 aModCount) = 0;

  /* attribute nsITransactionManager transactionManager; */
  NS_SCRIPTABLE NS_IMETHOD GetTransactionManager(nsITransactionManager * *aTransactionManager) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTransactionManager(nsITransactionManager *aTransactionManager) = 0;

  /* void doTransaction (in nsITransaction txn); */
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *txn) = 0;

  /* void enableUndo (in boolean enable); */
  NS_SCRIPTABLE NS_IMETHOD EnableUndo(PRBool enable) = 0;

  /* void undo (in unsigned long count); */
  NS_SCRIPTABLE NS_IMETHOD Undo(PRUint32 count) = 0;

  /* void canUndo (out boolean isEnabled, out boolean canUndo); */
  NS_SCRIPTABLE NS_IMETHOD CanUndo(PRBool *isEnabled NS_OUTPARAM, PRBool *canUndo NS_OUTPARAM) = 0;

  /* void redo (in unsigned long count); */
  NS_SCRIPTABLE NS_IMETHOD Redo(PRUint32 count) = 0;

  /* void canRedo (out boolean isEnabled, out boolean canRedo); */
  NS_SCRIPTABLE NS_IMETHOD CanRedo(PRBool *isEnabled NS_OUTPARAM, PRBool *canRedo NS_OUTPARAM) = 0;

  /* void beginTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void) = 0;

  /* void endTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD EndTransaction(void) = 0;

  /* void beginPlaceHolderTransaction (in nsIAtom name); */
  NS_SCRIPTABLE NS_IMETHOD BeginPlaceHolderTransaction(nsIAtom *name) = 0;

  /* void endPlaceHolderTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD EndPlaceHolderTransaction(void) = 0;

  /* boolean shouldTxnSetSelection (); */
  NS_SCRIPTABLE NS_IMETHOD ShouldTxnSetSelection(PRBool *_retval NS_OUTPARAM) = 0;

  /* void setShouldTxnSetSelection (in boolean should); */
  NS_SCRIPTABLE NS_IMETHOD SetShouldTxnSetSelection(PRBool should) = 0;

  /* nsIInlineSpellChecker getInlineSpellChecker (in boolean autoCreate); */
  NS_SCRIPTABLE NS_IMETHOD GetInlineSpellChecker(PRBool autoCreate, nsIInlineSpellChecker * *_retval NS_OUTPARAM) = 0;

  /* void syncRealTimeSpell (); */
  NS_SCRIPTABLE NS_IMETHOD SyncRealTimeSpell(void) = 0;

  /* void setSpellcheckUserOverride (in boolean enable); */
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheckUserOverride(PRBool enable) = 0;

  /* void cut (); */
  NS_SCRIPTABLE NS_IMETHOD Cut(void) = 0;

  /* boolean canCut (); */
  NS_SCRIPTABLE NS_IMETHOD CanCut(PRBool *_retval NS_OUTPARAM) = 0;

  /* void copy (); */
  NS_SCRIPTABLE NS_IMETHOD Copy(void) = 0;

  /* boolean canCopy (); */
  NS_SCRIPTABLE NS_IMETHOD CanCopy(PRBool *_retval NS_OUTPARAM) = 0;

  /* void paste (in long aSelectionType); */
  NS_SCRIPTABLE NS_IMETHOD Paste(PRInt32 aSelectionType) = 0;

  /* void pasteTransferable (in nsITransferable aTransferable); */
  NS_SCRIPTABLE NS_IMETHOD PasteTransferable(nsITransferable *aTransferable) = 0;

  /* boolean canPaste (in long aSelectionType); */
  NS_SCRIPTABLE NS_IMETHOD CanPaste(PRInt32 aSelectionType, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean canPasteTransferable ([optional] in nsITransferable aTransferable); */
  NS_SCRIPTABLE NS_IMETHOD CanPasteTransferable(nsITransferable *aTransferable, PRBool *_retval NS_OUTPARAM) = 0;

  /* void selectAll (); */
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void) = 0;

  /* void beginningOfDocument (); */
  NS_SCRIPTABLE NS_IMETHOD BeginningOfDocument(void) = 0;

  /* void endOfDocument (); */
  NS_SCRIPTABLE NS_IMETHOD EndOfDocument(void) = 0;

  /* boolean canDrag (in nsIDOMEvent aEvent); */
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM) = 0;

  /* void doDrag (in nsIDOMEvent aEvent); */
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent) = 0;

  /* void insertFromDrop (in nsIDOMEvent aEvent); */
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent) = 0;

  /* void setAttribute (in nsIDOMElement aElement, in AString attributestr, in AString attvalue); */
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(nsIDOMElement *aElement, const nsAString & attributestr, const nsAString & attvalue) = 0;

  /* boolean getAttributeValue (in nsIDOMElement aElement, in AString attributestr, out AString resultValue); */
  NS_SCRIPTABLE NS_IMETHOD GetAttributeValue(nsIDOMElement *aElement, const nsAString & attributestr, nsAString & resultValue NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* void removeAttribute (in nsIDOMElement aElement, in AString aAttribute); */
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(nsIDOMElement *aElement, const nsAString & aAttribute) = 0;

  /* void cloneAttribute (in AString aAttribute, in nsIDOMNode aDestNode, in nsIDOMNode aSourceNode); */
  NS_SCRIPTABLE NS_IMETHOD CloneAttribute(const nsAString & aAttribute, nsIDOMNode *aDestNode, nsIDOMNode *aSourceNode) = 0;

  /* void cloneAttributes (in nsIDOMNode destNode, in nsIDOMNode sourceNode); */
  NS_SCRIPTABLE NS_IMETHOD CloneAttributes(nsIDOMNode *destNode, nsIDOMNode *sourceNode) = 0;

  /* nsIDOMNode createNode (in AString tag, in nsIDOMNode parent, in long position); */
  NS_SCRIPTABLE NS_IMETHOD CreateNode(const nsAString & tag, nsIDOMNode *parent, PRInt32 position, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* void insertNode (in nsIDOMNode node, in nsIDOMNode parent, in long aPosition); */
  NS_SCRIPTABLE NS_IMETHOD InsertNode(nsIDOMNode *node, nsIDOMNode *parent, PRInt32 aPosition) = 0;

  /* void splitNode (in nsIDOMNode existingRightNode, in long offset, out nsIDOMNode newLeftNode); */
  NS_SCRIPTABLE NS_IMETHOD SplitNode(nsIDOMNode *existingRightNode, PRInt32 offset, nsIDOMNode * *newLeftNode NS_OUTPARAM) = 0;

  /* void joinNodes (in nsIDOMNode leftNode, in nsIDOMNode rightNode, in nsIDOMNode parent); */
  NS_SCRIPTABLE NS_IMETHOD JoinNodes(nsIDOMNode *leftNode, nsIDOMNode *rightNode, nsIDOMNode *parent) = 0;

  /* void deleteNode (in nsIDOMNode child); */
  NS_SCRIPTABLE NS_IMETHOD DeleteNode(nsIDOMNode *child) = 0;

  /* void markNodeDirty (in nsIDOMNode node); */
  NS_SCRIPTABLE NS_IMETHOD MarkNodeDirty(nsIDOMNode *node) = 0;

  /* void switchTextDirection (); */
  NS_SCRIPTABLE NS_IMETHOD SwitchTextDirection(void) = 0;

  /* AString outputToString (in AString formatType, in unsigned long flags); */
  NS_SCRIPTABLE NS_IMETHOD OutputToString(const nsAString & formatType, PRUint32 flags, nsAString & _retval NS_OUTPARAM) = 0;

  /* void outputToStream (in nsIOutputStream aStream, in AString formatType, in ACString charsetOverride, in unsigned long flags); */
  NS_SCRIPTABLE NS_IMETHOD OutputToStream(nsIOutputStream *aStream, const nsAString & formatType, const nsACString & charsetOverride, PRUint32 flags) = 0;

  /* void addEditorObserver (in nsIEditorObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD AddEditorObserver(nsIEditorObserver *observer) = 0;

  /* void removeEditorObserver (in nsIEditorObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD RemoveEditorObserver(nsIEditorObserver *observer) = 0;

  /* void addEditActionListener (in nsIEditActionListener listener); */
  NS_SCRIPTABLE NS_IMETHOD AddEditActionListener(nsIEditActionListener *listener) = 0;

  /* void removeEditActionListener (in nsIEditActionListener listener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveEditActionListener(nsIEditActionListener *listener) = 0;

  /* void addDocumentStateListener (in nsIDocumentStateListener listener); */
  NS_SCRIPTABLE NS_IMETHOD AddDocumentStateListener(nsIDocumentStateListener *listener) = 0;

  /* void removeDocumentStateListener (in nsIDocumentStateListener listener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveDocumentStateListener(nsIDocumentStateListener *listener) = 0;

  /* void dumpContentTree (); */
  NS_SCRIPTABLE NS_IMETHOD DumpContentTree(void) = 0;

  /* void debugDumpContent (); */
  NS_SCRIPTABLE NS_IMETHOD DebugDumpContent(void) = 0;

  /* void debugUnitTests (out long outNumTests, out long outNumTestsFailed); */
  NS_SCRIPTABLE NS_IMETHOD DebugUnitTests(PRInt32 *outNumTests NS_OUTPARAM, PRInt32 *outNumTestsFailed NS_OUTPARAM) = 0;

  /* [notxpcom] boolean isModifiableNode (in nsIDOMNode aNode); */
  NS_IMETHOD_(PRBool) IsModifiableNode(nsIDOMNode *aNode) = 0;

  /* readonly attribute boolean lastKeypressEventTrusted; */
  NS_SCRIPTABLE NS_IMETHOD GetLastKeypressEventTrusted(PRBool *aLastKeypressEventTrusted) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEditor, NS_IEDITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEDITOR \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *aSelection); \
  NS_IMETHOD Init(nsIDOMDocument *doc, nsIContent *aRoot, nsISelectionController *aSelCon, PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, const nsAString & sourceAttrValue, PRBool aSuppressTransaction); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, PRBool aSuppressTransaction); \
  NS_SCRIPTABLE NS_IMETHOD PostCreate(void); \
  NS_SCRIPTABLE NS_IMETHOD PreDestroy(PRBool aDestroyingFrames); \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetContentsMIMEType(char * *aContentsMIMEType); \
  NS_SCRIPTABLE NS_IMETHOD SetContentsMIMEType(const char * aContentsMIMEType); \
  NS_SCRIPTABLE NS_IMETHOD GetIsDocumentEditable(PRBool *aIsDocumentEditable); \
  NS_SCRIPTABLE NS_IMETHOD GetIsSelectionEditable(PRBool *aIsSelectionEditable); \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetRootElement(nsIDOMElement * *aRootElement); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionController(nsISelectionController * *aSelectionController); \
  NS_SCRIPTABLE NS_IMETHOD DeleteSelection(PRInt16 action); \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentIsEmpty(PRBool *aDocumentIsEmpty); \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentModified(PRBool *aDocumentModified); \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentCharacterSet(nsACString & aDocumentCharacterSet); \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentCharacterSet(const nsACString & aDocumentCharacterSet); \
  NS_SCRIPTABLE NS_IMETHOD ResetModificationCount(void); \
  NS_SCRIPTABLE NS_IMETHOD GetModificationCount(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IncrementModificationCount(PRInt32 aModCount); \
  NS_SCRIPTABLE NS_IMETHOD GetTransactionManager(nsITransactionManager * *aTransactionManager); \
  NS_SCRIPTABLE NS_IMETHOD SetTransactionManager(nsITransactionManager *aTransactionManager); \
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *txn); \
  NS_SCRIPTABLE NS_IMETHOD EnableUndo(PRBool enable); \
  NS_SCRIPTABLE NS_IMETHOD Undo(PRUint32 count); \
  NS_SCRIPTABLE NS_IMETHOD CanUndo(PRBool *isEnabled NS_OUTPARAM, PRBool *canUndo NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Redo(PRUint32 count); \
  NS_SCRIPTABLE NS_IMETHOD CanRedo(PRBool *isEnabled NS_OUTPARAM, PRBool *canRedo NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD EndTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD BeginPlaceHolderTransaction(nsIAtom *name); \
  NS_SCRIPTABLE NS_IMETHOD EndPlaceHolderTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD ShouldTxnSetSelection(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetShouldTxnSetSelection(PRBool should); \
  NS_SCRIPTABLE NS_IMETHOD GetInlineSpellChecker(PRBool autoCreate, nsIInlineSpellChecker * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SyncRealTimeSpell(void); \
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheckUserOverride(PRBool enable); \
  NS_SCRIPTABLE NS_IMETHOD Cut(void); \
  NS_SCRIPTABLE NS_IMETHOD CanCut(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Copy(void); \
  NS_SCRIPTABLE NS_IMETHOD CanCopy(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Paste(PRInt32 aSelectionType); \
  NS_SCRIPTABLE NS_IMETHOD PasteTransferable(nsITransferable *aTransferable); \
  NS_SCRIPTABLE NS_IMETHOD CanPaste(PRInt32 aSelectionType, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CanPasteTransferable(nsITransferable *aTransferable, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void); \
  NS_SCRIPTABLE NS_IMETHOD BeginningOfDocument(void); \
  NS_SCRIPTABLE NS_IMETHOD EndOfDocument(void); \
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent); \
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent); \
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(nsIDOMElement *aElement, const nsAString & attributestr, const nsAString & attvalue); \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeValue(nsIDOMElement *aElement, const nsAString & attributestr, nsAString & resultValue NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(nsIDOMElement *aElement, const nsAString & aAttribute); \
  NS_SCRIPTABLE NS_IMETHOD CloneAttribute(const nsAString & aAttribute, nsIDOMNode *aDestNode, nsIDOMNode *aSourceNode); \
  NS_SCRIPTABLE NS_IMETHOD CloneAttributes(nsIDOMNode *destNode, nsIDOMNode *sourceNode); \
  NS_SCRIPTABLE NS_IMETHOD CreateNode(const nsAString & tag, nsIDOMNode *parent, PRInt32 position, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertNode(nsIDOMNode *node, nsIDOMNode *parent, PRInt32 aPosition); \
  NS_SCRIPTABLE NS_IMETHOD SplitNode(nsIDOMNode *existingRightNode, PRInt32 offset, nsIDOMNode * *newLeftNode NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD JoinNodes(nsIDOMNode *leftNode, nsIDOMNode *rightNode, nsIDOMNode *parent); \
  NS_SCRIPTABLE NS_IMETHOD DeleteNode(nsIDOMNode *child); \
  NS_SCRIPTABLE NS_IMETHOD MarkNodeDirty(nsIDOMNode *node); \
  NS_SCRIPTABLE NS_IMETHOD SwitchTextDirection(void); \
  NS_SCRIPTABLE NS_IMETHOD OutputToString(const nsAString & formatType, PRUint32 flags, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OutputToStream(nsIOutputStream *aStream, const nsAString & formatType, const nsACString & charsetOverride, PRUint32 flags); \
  NS_SCRIPTABLE NS_IMETHOD AddEditorObserver(nsIEditorObserver *observer); \
  NS_SCRIPTABLE NS_IMETHOD RemoveEditorObserver(nsIEditorObserver *observer); \
  NS_SCRIPTABLE NS_IMETHOD AddEditActionListener(nsIEditActionListener *listener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveEditActionListener(nsIEditActionListener *listener); \
  NS_SCRIPTABLE NS_IMETHOD AddDocumentStateListener(nsIDocumentStateListener *listener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveDocumentStateListener(nsIDocumentStateListener *listener); \
  NS_SCRIPTABLE NS_IMETHOD DumpContentTree(void); \
  NS_SCRIPTABLE NS_IMETHOD DebugDumpContent(void); \
  NS_SCRIPTABLE NS_IMETHOD DebugUnitTests(PRInt32 *outNumTests NS_OUTPARAM, PRInt32 *outNumTestsFailed NS_OUTPARAM); \
  NS_IMETHOD_(PRBool) IsModifiableNode(nsIDOMNode *aNode); \
  NS_SCRIPTABLE NS_IMETHOD GetLastKeypressEventTrusted(PRBool *aLastKeypressEventTrusted); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *aSelection) { return _to GetSelection(aSelection); } \
  NS_IMETHOD Init(nsIDOMDocument *doc, nsIContent *aRoot, nsISelectionController *aSelCon, PRUint32 aFlags) { return _to Init(doc, aRoot, aSelCon, aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, const nsAString & sourceAttrValue, PRBool aSuppressTransaction) { return _to SetAttributeOrEquivalent(element, sourceAttrName, sourceAttrValue, aSuppressTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, PRBool aSuppressTransaction) { return _to RemoveAttributeOrEquivalent(element, sourceAttrName, aSuppressTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD PostCreate(void) { return _to PostCreate(); } \
  NS_SCRIPTABLE NS_IMETHOD PreDestroy(PRBool aDestroyingFrames) { return _to PreDestroy(aDestroyingFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return _to SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentsMIMEType(char * *aContentsMIMEType) { return _to GetContentsMIMEType(aContentsMIMEType); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentsMIMEType(const char * aContentsMIMEType) { return _to SetContentsMIMEType(aContentsMIMEType); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsDocumentEditable(PRBool *aIsDocumentEditable) { return _to GetIsDocumentEditable(aIsDocumentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsSelectionEditable(PRBool *aIsSelectionEditable) { return _to GetIsSelectionEditable(aIsSelectionEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument) { return _to GetDocument(aDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootElement(nsIDOMElement * *aRootElement) { return _to GetRootElement(aRootElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionController(nsISelectionController * *aSelectionController) { return _to GetSelectionController(aSelectionController); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteSelection(PRInt16 action) { return _to DeleteSelection(action); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentIsEmpty(PRBool *aDocumentIsEmpty) { return _to GetDocumentIsEmpty(aDocumentIsEmpty); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentModified(PRBool *aDocumentModified) { return _to GetDocumentModified(aDocumentModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentCharacterSet(nsACString & aDocumentCharacterSet) { return _to GetDocumentCharacterSet(aDocumentCharacterSet); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentCharacterSet(const nsACString & aDocumentCharacterSet) { return _to SetDocumentCharacterSet(aDocumentCharacterSet); } \
  NS_SCRIPTABLE NS_IMETHOD ResetModificationCount(void) { return _to ResetModificationCount(); } \
  NS_SCRIPTABLE NS_IMETHOD GetModificationCount(PRInt32 *_retval NS_OUTPARAM) { return _to GetModificationCount(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IncrementModificationCount(PRInt32 aModCount) { return _to IncrementModificationCount(aModCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransactionManager(nsITransactionManager * *aTransactionManager) { return _to GetTransactionManager(aTransactionManager); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransactionManager(nsITransactionManager *aTransactionManager) { return _to SetTransactionManager(aTransactionManager); } \
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *txn) { return _to DoTransaction(txn); } \
  NS_SCRIPTABLE NS_IMETHOD EnableUndo(PRBool enable) { return _to EnableUndo(enable); } \
  NS_SCRIPTABLE NS_IMETHOD Undo(PRUint32 count) { return _to Undo(count); } \
  NS_SCRIPTABLE NS_IMETHOD CanUndo(PRBool *isEnabled NS_OUTPARAM, PRBool *canUndo NS_OUTPARAM) { return _to CanUndo(isEnabled, canUndo); } \
  NS_SCRIPTABLE NS_IMETHOD Redo(PRUint32 count) { return _to Redo(count); } \
  NS_SCRIPTABLE NS_IMETHOD CanRedo(PRBool *isEnabled NS_OUTPARAM, PRBool *canRedo NS_OUTPARAM) { return _to CanRedo(isEnabled, canRedo); } \
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void) { return _to BeginTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD EndTransaction(void) { return _to EndTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginPlaceHolderTransaction(nsIAtom *name) { return _to BeginPlaceHolderTransaction(name); } \
  NS_SCRIPTABLE NS_IMETHOD EndPlaceHolderTransaction(void) { return _to EndPlaceHolderTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD ShouldTxnSetSelection(PRBool *_retval NS_OUTPARAM) { return _to ShouldTxnSetSelection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetShouldTxnSetSelection(PRBool should) { return _to SetShouldTxnSetSelection(should); } \
  NS_SCRIPTABLE NS_IMETHOD GetInlineSpellChecker(PRBool autoCreate, nsIInlineSpellChecker * *_retval NS_OUTPARAM) { return _to GetInlineSpellChecker(autoCreate, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SyncRealTimeSpell(void) { return _to SyncRealTimeSpell(); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheckUserOverride(PRBool enable) { return _to SetSpellcheckUserOverride(enable); } \
  NS_SCRIPTABLE NS_IMETHOD Cut(void) { return _to Cut(); } \
  NS_SCRIPTABLE NS_IMETHOD CanCut(PRBool *_retval NS_OUTPARAM) { return _to CanCut(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Copy(void) { return _to Copy(); } \
  NS_SCRIPTABLE NS_IMETHOD CanCopy(PRBool *_retval NS_OUTPARAM) { return _to CanCopy(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Paste(PRInt32 aSelectionType) { return _to Paste(aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD PasteTransferable(nsITransferable *aTransferable) { return _to PasteTransferable(aTransferable); } \
  NS_SCRIPTABLE NS_IMETHOD CanPaste(PRInt32 aSelectionType, PRBool *_retval NS_OUTPARAM) { return _to CanPaste(aSelectionType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CanPasteTransferable(nsITransferable *aTransferable, PRBool *_retval NS_OUTPARAM) { return _to CanPasteTransferable(aTransferable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void) { return _to SelectAll(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginningOfDocument(void) { return _to BeginningOfDocument(); } \
  NS_SCRIPTABLE NS_IMETHOD EndOfDocument(void) { return _to EndOfDocument(); } \
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM) { return _to CanDrag(aEvent, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent) { return _to DoDrag(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent) { return _to InsertFromDrop(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(nsIDOMElement *aElement, const nsAString & attributestr, const nsAString & attvalue) { return _to SetAttribute(aElement, attributestr, attvalue); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeValue(nsIDOMElement *aElement, const nsAString & attributestr, nsAString & resultValue NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetAttributeValue(aElement, attributestr, resultValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(nsIDOMElement *aElement, const nsAString & aAttribute) { return _to RemoveAttribute(aElement, aAttribute); } \
  NS_SCRIPTABLE NS_IMETHOD CloneAttribute(const nsAString & aAttribute, nsIDOMNode *aDestNode, nsIDOMNode *aSourceNode) { return _to CloneAttribute(aAttribute, aDestNode, aSourceNode); } \
  NS_SCRIPTABLE NS_IMETHOD CloneAttributes(nsIDOMNode *destNode, nsIDOMNode *sourceNode) { return _to CloneAttributes(destNode, sourceNode); } \
  NS_SCRIPTABLE NS_IMETHOD CreateNode(const nsAString & tag, nsIDOMNode *parent, PRInt32 position, nsIDOMNode * *_retval NS_OUTPARAM) { return _to CreateNode(tag, parent, position, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertNode(nsIDOMNode *node, nsIDOMNode *parent, PRInt32 aPosition) { return _to InsertNode(node, parent, aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SplitNode(nsIDOMNode *existingRightNode, PRInt32 offset, nsIDOMNode * *newLeftNode NS_OUTPARAM) { return _to SplitNode(existingRightNode, offset, newLeftNode); } \
  NS_SCRIPTABLE NS_IMETHOD JoinNodes(nsIDOMNode *leftNode, nsIDOMNode *rightNode, nsIDOMNode *parent) { return _to JoinNodes(leftNode, rightNode, parent); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteNode(nsIDOMNode *child) { return _to DeleteNode(child); } \
  NS_SCRIPTABLE NS_IMETHOD MarkNodeDirty(nsIDOMNode *node) { return _to MarkNodeDirty(node); } \
  NS_SCRIPTABLE NS_IMETHOD SwitchTextDirection(void) { return _to SwitchTextDirection(); } \
  NS_SCRIPTABLE NS_IMETHOD OutputToString(const nsAString & formatType, PRUint32 flags, nsAString & _retval NS_OUTPARAM) { return _to OutputToString(formatType, flags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OutputToStream(nsIOutputStream *aStream, const nsAString & formatType, const nsACString & charsetOverride, PRUint32 flags) { return _to OutputToStream(aStream, formatType, charsetOverride, flags); } \
  NS_SCRIPTABLE NS_IMETHOD AddEditorObserver(nsIEditorObserver *observer) { return _to AddEditorObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEditorObserver(nsIEditorObserver *observer) { return _to RemoveEditorObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD AddEditActionListener(nsIEditActionListener *listener) { return _to AddEditActionListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEditActionListener(nsIEditActionListener *listener) { return _to RemoveEditActionListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD AddDocumentStateListener(nsIDocumentStateListener *listener) { return _to AddDocumentStateListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDocumentStateListener(nsIDocumentStateListener *listener) { return _to RemoveDocumentStateListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD DumpContentTree(void) { return _to DumpContentTree(); } \
  NS_SCRIPTABLE NS_IMETHOD DebugDumpContent(void) { return _to DebugDumpContent(); } \
  NS_SCRIPTABLE NS_IMETHOD DebugUnitTests(PRInt32 *outNumTests NS_OUTPARAM, PRInt32 *outNumTestsFailed NS_OUTPARAM) { return _to DebugUnitTests(outNumTests, outNumTestsFailed); } \
  NS_IMETHOD_(PRBool) IsModifiableNode(nsIDOMNode *aNode) { return _to IsModifiableNode(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastKeypressEventTrusted(PRBool *aLastKeypressEventTrusted) { return _to GetLastKeypressEventTrusted(aLastKeypressEventTrusted); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsISelection * *aSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelection(aSelection); } \
  NS_IMETHOD Init(nsIDOMDocument *doc, nsIContent *aRoot, nsISelectionController *aSelCon, PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(doc, aRoot, aSelCon, aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, const nsAString & sourceAttrValue, PRBool aSuppressTransaction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttributeOrEquivalent(element, sourceAttrName, sourceAttrValue, aSuppressTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, PRBool aSuppressTransaction) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAttributeOrEquivalent(element, sourceAttrName, aSuppressTransaction); } \
  NS_SCRIPTABLE NS_IMETHOD PostCreate(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostCreate(); } \
  NS_SCRIPTABLE NS_IMETHOD PreDestroy(PRBool aDestroyingFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreDestroy(aDestroyingFrames); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentsMIMEType(char * *aContentsMIMEType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentsMIMEType(aContentsMIMEType); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentsMIMEType(const char * aContentsMIMEType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentsMIMEType(aContentsMIMEType); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsDocumentEditable(PRBool *aIsDocumentEditable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsDocumentEditable(aIsDocumentEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsSelectionEditable(PRBool *aIsSelectionEditable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSelectionEditable(aIsSelectionEditable); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocument(nsIDOMDocument * *aDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocument(aDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootElement(nsIDOMElement * *aRootElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootElement(aRootElement); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionController(nsISelectionController * *aSelectionController) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionController(aSelectionController); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteSelection(PRInt16 action) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteSelection(action); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentIsEmpty(PRBool *aDocumentIsEmpty) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentIsEmpty(aDocumentIsEmpty); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentModified(PRBool *aDocumentModified) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentModified(aDocumentModified); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentCharacterSet(nsACString & aDocumentCharacterSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentCharacterSet(aDocumentCharacterSet); } \
  NS_SCRIPTABLE NS_IMETHOD SetDocumentCharacterSet(const nsACString & aDocumentCharacterSet) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocumentCharacterSet(aDocumentCharacterSet); } \
  NS_SCRIPTABLE NS_IMETHOD ResetModificationCount(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetModificationCount(); } \
  NS_SCRIPTABLE NS_IMETHOD GetModificationCount(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetModificationCount(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IncrementModificationCount(PRInt32 aModCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->IncrementModificationCount(aModCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransactionManager(nsITransactionManager * *aTransactionManager) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransactionManager(aTransactionManager); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransactionManager(nsITransactionManager *aTransactionManager) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransactionManager(aTransactionManager); } \
  NS_SCRIPTABLE NS_IMETHOD DoTransaction(nsITransaction *txn) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoTransaction(txn); } \
  NS_SCRIPTABLE NS_IMETHOD EnableUndo(PRBool enable) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableUndo(enable); } \
  NS_SCRIPTABLE NS_IMETHOD Undo(PRUint32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->Undo(count); } \
  NS_SCRIPTABLE NS_IMETHOD CanUndo(PRBool *isEnabled NS_OUTPARAM, PRBool *canUndo NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanUndo(isEnabled, canUndo); } \
  NS_SCRIPTABLE NS_IMETHOD Redo(PRUint32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->Redo(count); } \
  NS_SCRIPTABLE NS_IMETHOD CanRedo(PRBool *isEnabled NS_OUTPARAM, PRBool *canRedo NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanRedo(isEnabled, canRedo); } \
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD EndTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginPlaceHolderTransaction(nsIAtom *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginPlaceHolderTransaction(name); } \
  NS_SCRIPTABLE NS_IMETHOD EndPlaceHolderTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndPlaceHolderTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD ShouldTxnSetSelection(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShouldTxnSetSelection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetShouldTxnSetSelection(PRBool should) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShouldTxnSetSelection(should); } \
  NS_SCRIPTABLE NS_IMETHOD GetInlineSpellChecker(PRBool autoCreate, nsIInlineSpellChecker * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInlineSpellChecker(autoCreate, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SyncRealTimeSpell(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SyncRealTimeSpell(); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpellcheckUserOverride(PRBool enable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSpellcheckUserOverride(enable); } \
  NS_SCRIPTABLE NS_IMETHOD Cut(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Cut(); } \
  NS_SCRIPTABLE NS_IMETHOD CanCut(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanCut(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Copy(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Copy(); } \
  NS_SCRIPTABLE NS_IMETHOD CanCopy(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanCopy(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Paste(PRInt32 aSelectionType) { return !_to ? NS_ERROR_NULL_POINTER : _to->Paste(aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD PasteTransferable(nsITransferable *aTransferable) { return !_to ? NS_ERROR_NULL_POINTER : _to->PasteTransferable(aTransferable); } \
  NS_SCRIPTABLE NS_IMETHOD CanPaste(PRInt32 aSelectionType, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanPaste(aSelectionType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CanPasteTransferable(nsITransferable *aTransferable, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanPasteTransferable(aTransferable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAll(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectAll(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginningOfDocument(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginningOfDocument(); } \
  NS_SCRIPTABLE NS_IMETHOD EndOfDocument(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndOfDocument(); } \
  NS_SCRIPTABLE NS_IMETHOD CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanDrag(aEvent, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoDrag(nsIDOMEvent *aEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoDrag(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD InsertFromDrop(nsIDOMEvent *aEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertFromDrop(aEvent); } \
  NS_SCRIPTABLE NS_IMETHOD SetAttribute(nsIDOMElement *aElement, const nsAString & attributestr, const nsAString & attvalue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAttribute(aElement, attributestr, attvalue); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttributeValue(nsIDOMElement *aElement, const nsAString & attributestr, nsAString & resultValue NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttributeValue(aElement, attributestr, resultValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveAttribute(nsIDOMElement *aElement, const nsAString & aAttribute) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAttribute(aElement, aAttribute); } \
  NS_SCRIPTABLE NS_IMETHOD CloneAttribute(const nsAString & aAttribute, nsIDOMNode *aDestNode, nsIDOMNode *aSourceNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneAttribute(aAttribute, aDestNode, aSourceNode); } \
  NS_SCRIPTABLE NS_IMETHOD CloneAttributes(nsIDOMNode *destNode, nsIDOMNode *sourceNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneAttributes(destNode, sourceNode); } \
  NS_SCRIPTABLE NS_IMETHOD CreateNode(const nsAString & tag, nsIDOMNode *parent, PRInt32 position, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateNode(tag, parent, position, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertNode(nsIDOMNode *node, nsIDOMNode *parent, PRInt32 aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertNode(node, parent, aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SplitNode(nsIDOMNode *existingRightNode, PRInt32 offset, nsIDOMNode * *newLeftNode NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SplitNode(existingRightNode, offset, newLeftNode); } \
  NS_SCRIPTABLE NS_IMETHOD JoinNodes(nsIDOMNode *leftNode, nsIDOMNode *rightNode, nsIDOMNode *parent) { return !_to ? NS_ERROR_NULL_POINTER : _to->JoinNodes(leftNode, rightNode, parent); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteNode(nsIDOMNode *child) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteNode(child); } \
  NS_SCRIPTABLE NS_IMETHOD MarkNodeDirty(nsIDOMNode *node) { return !_to ? NS_ERROR_NULL_POINTER : _to->MarkNodeDirty(node); } \
  NS_SCRIPTABLE NS_IMETHOD SwitchTextDirection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SwitchTextDirection(); } \
  NS_SCRIPTABLE NS_IMETHOD OutputToString(const nsAString & formatType, PRUint32 flags, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OutputToString(formatType, flags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OutputToStream(nsIOutputStream *aStream, const nsAString & formatType, const nsACString & charsetOverride, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->OutputToStream(aStream, formatType, charsetOverride, flags); } \
  NS_SCRIPTABLE NS_IMETHOD AddEditorObserver(nsIEditorObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEditorObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEditorObserver(nsIEditorObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveEditorObserver(observer); } \
  NS_SCRIPTABLE NS_IMETHOD AddEditActionListener(nsIEditActionListener *listener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEditActionListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEditActionListener(nsIEditActionListener *listener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveEditActionListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD AddDocumentStateListener(nsIDocumentStateListener *listener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDocumentStateListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDocumentStateListener(nsIDocumentStateListener *listener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDocumentStateListener(listener); } \
  NS_SCRIPTABLE NS_IMETHOD DumpContentTree(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DumpContentTree(); } \
  NS_SCRIPTABLE NS_IMETHOD DebugDumpContent(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDumpContent(); } \
  NS_SCRIPTABLE NS_IMETHOD DebugUnitTests(PRInt32 *outNumTests NS_OUTPARAM, PRInt32 *outNumTestsFailed NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugUnitTests(outNumTests, outNumTestsFailed); } \
  NS_IMETHOD_(PRBool) IsModifiableNode(nsIDOMNode *aNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsModifiableNode(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastKeypressEventTrusted(PRBool *aLastKeypressEventTrusted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastKeypressEventTrusted(aLastKeypressEventTrusted); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEditor : public nsIEditor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEDITOR

  nsEditor();

private:
  ~nsEditor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEditor, nsIEditor)

nsEditor::nsEditor()
{
  /* member initializers and constructor code */
}

nsEditor::~nsEditor()
{
  /* destructor code */
}

/* readonly attribute nsISelection selection; */
NS_IMETHODIMP nsEditor::GetSelection(nsISelection * *aSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIDOMDocument doc, in nsIContent aRoot, in nsISelectionController aSelCon, in unsigned long aFlags); */
NS_IMETHODIMP nsEditor::Init(nsIDOMDocument *doc, nsIContent *aRoot, nsISelectionController *aSelCon, PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAttributeOrEquivalent (in nsIDOMElement element, in AString sourceAttrName, in AString sourceAttrValue, in boolean aSuppressTransaction); */
NS_IMETHODIMP nsEditor::SetAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, const nsAString & sourceAttrValue, PRBool aSuppressTransaction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAttributeOrEquivalent (in nsIDOMElement element, in DOMString sourceAttrName, in boolean aSuppressTransaction); */
NS_IMETHODIMP nsEditor::RemoveAttributeOrEquivalent(nsIDOMElement *element, const nsAString & sourceAttrName, PRBool aSuppressTransaction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void postCreate (); */
NS_IMETHODIMP nsEditor::PostCreate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preDestroy (in boolean aDestroyingFrames); */
NS_IMETHODIMP nsEditor::PreDestroy(PRBool aDestroyingFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long flags; */
NS_IMETHODIMP nsEditor::GetFlags(PRUint32 *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEditor::SetFlags(PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string contentsMIMEType; */
NS_IMETHODIMP nsEditor::GetContentsMIMEType(char * *aContentsMIMEType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEditor::SetContentsMIMEType(const char * aContentsMIMEType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isDocumentEditable; */
NS_IMETHODIMP nsEditor::GetIsDocumentEditable(PRBool *aIsDocumentEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSelectionEditable; */
NS_IMETHODIMP nsEditor::GetIsSelectionEditable(PRBool *aIsSelectionEditable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDocument document; */
NS_IMETHODIMP nsEditor::GetDocument(nsIDOMDocument * *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement rootElement; */
NS_IMETHODIMP nsEditor::GetRootElement(nsIDOMElement * *aRootElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISelectionController selectionController; */
NS_IMETHODIMP nsEditor::GetSelectionController(nsISelectionController * *aSelectionController)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteSelection (in short action); */
NS_IMETHODIMP nsEditor::DeleteSelection(PRInt16 action)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean documentIsEmpty; */
NS_IMETHODIMP nsEditor::GetDocumentIsEmpty(PRBool *aDocumentIsEmpty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean documentModified; */
NS_IMETHODIMP nsEditor::GetDocumentModified(PRBool *aDocumentModified)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString documentCharacterSet; */
NS_IMETHODIMP nsEditor::GetDocumentCharacterSet(nsACString & aDocumentCharacterSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEditor::SetDocumentCharacterSet(const nsACString & aDocumentCharacterSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetModificationCount (); */
NS_IMETHODIMP nsEditor::ResetModificationCount()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getModificationCount (); */
NS_IMETHODIMP nsEditor::GetModificationCount(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void incrementModificationCount (in long aModCount); */
NS_IMETHODIMP nsEditor::IncrementModificationCount(PRInt32 aModCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsITransactionManager transactionManager; */
NS_IMETHODIMP nsEditor::GetTransactionManager(nsITransactionManager * *aTransactionManager)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEditor::SetTransactionManager(nsITransactionManager *aTransactionManager)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doTransaction (in nsITransaction txn); */
NS_IMETHODIMP nsEditor::DoTransaction(nsITransaction *txn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableUndo (in boolean enable); */
NS_IMETHODIMP nsEditor::EnableUndo(PRBool enable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void undo (in unsigned long count); */
NS_IMETHODIMP nsEditor::Undo(PRUint32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void canUndo (out boolean isEnabled, out boolean canUndo); */
NS_IMETHODIMP nsEditor::CanUndo(PRBool *isEnabled NS_OUTPARAM, PRBool *canUndo NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void redo (in unsigned long count); */
NS_IMETHODIMP nsEditor::Redo(PRUint32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void canRedo (out boolean isEnabled, out boolean canRedo); */
NS_IMETHODIMP nsEditor::CanRedo(PRBool *isEnabled NS_OUTPARAM, PRBool *canRedo NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginTransaction (); */
NS_IMETHODIMP nsEditor::BeginTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endTransaction (); */
NS_IMETHODIMP nsEditor::EndTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginPlaceHolderTransaction (in nsIAtom name); */
NS_IMETHODIMP nsEditor::BeginPlaceHolderTransaction(nsIAtom *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endPlaceHolderTransaction (); */
NS_IMETHODIMP nsEditor::EndPlaceHolderTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean shouldTxnSetSelection (); */
NS_IMETHODIMP nsEditor::ShouldTxnSetSelection(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setShouldTxnSetSelection (in boolean should); */
NS_IMETHODIMP nsEditor::SetShouldTxnSetSelection(PRBool should)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInlineSpellChecker getInlineSpellChecker (in boolean autoCreate); */
NS_IMETHODIMP nsEditor::GetInlineSpellChecker(PRBool autoCreate, nsIInlineSpellChecker * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void syncRealTimeSpell (); */
NS_IMETHODIMP nsEditor::SyncRealTimeSpell()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSpellcheckUserOverride (in boolean enable); */
NS_IMETHODIMP nsEditor::SetSpellcheckUserOverride(PRBool enable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cut (); */
NS_IMETHODIMP nsEditor::Cut()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canCut (); */
NS_IMETHODIMP nsEditor::CanCut(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void copy (); */
NS_IMETHODIMP nsEditor::Copy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canCopy (); */
NS_IMETHODIMP nsEditor::CanCopy(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void paste (in long aSelectionType); */
NS_IMETHODIMP nsEditor::Paste(PRInt32 aSelectionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pasteTransferable (in nsITransferable aTransferable); */
NS_IMETHODIMP nsEditor::PasteTransferable(nsITransferable *aTransferable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canPaste (in long aSelectionType); */
NS_IMETHODIMP nsEditor::CanPaste(PRInt32 aSelectionType, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canPasteTransferable ([optional] in nsITransferable aTransferable); */
NS_IMETHODIMP nsEditor::CanPasteTransferable(nsITransferable *aTransferable, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectAll (); */
NS_IMETHODIMP nsEditor::SelectAll()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginningOfDocument (); */
NS_IMETHODIMP nsEditor::BeginningOfDocument()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endOfDocument (); */
NS_IMETHODIMP nsEditor::EndOfDocument()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canDrag (in nsIDOMEvent aEvent); */
NS_IMETHODIMP nsEditor::CanDrag(nsIDOMEvent *aEvent, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doDrag (in nsIDOMEvent aEvent); */
NS_IMETHODIMP nsEditor::DoDrag(nsIDOMEvent *aEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertFromDrop (in nsIDOMEvent aEvent); */
NS_IMETHODIMP nsEditor::InsertFromDrop(nsIDOMEvent *aEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAttribute (in nsIDOMElement aElement, in AString attributestr, in AString attvalue); */
NS_IMETHODIMP nsEditor::SetAttribute(nsIDOMElement *aElement, const nsAString & attributestr, const nsAString & attvalue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getAttributeValue (in nsIDOMElement aElement, in AString attributestr, out AString resultValue); */
NS_IMETHODIMP nsEditor::GetAttributeValue(nsIDOMElement *aElement, const nsAString & attributestr, nsAString & resultValue NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAttribute (in nsIDOMElement aElement, in AString aAttribute); */
NS_IMETHODIMP nsEditor::RemoveAttribute(nsIDOMElement *aElement, const nsAString & aAttribute)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cloneAttribute (in AString aAttribute, in nsIDOMNode aDestNode, in nsIDOMNode aSourceNode); */
NS_IMETHODIMP nsEditor::CloneAttribute(const nsAString & aAttribute, nsIDOMNode *aDestNode, nsIDOMNode *aSourceNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cloneAttributes (in nsIDOMNode destNode, in nsIDOMNode sourceNode); */
NS_IMETHODIMP nsEditor::CloneAttributes(nsIDOMNode *destNode, nsIDOMNode *sourceNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode createNode (in AString tag, in nsIDOMNode parent, in long position); */
NS_IMETHODIMP nsEditor::CreateNode(const nsAString & tag, nsIDOMNode *parent, PRInt32 position, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertNode (in nsIDOMNode node, in nsIDOMNode parent, in long aPosition); */
NS_IMETHODIMP nsEditor::InsertNode(nsIDOMNode *node, nsIDOMNode *parent, PRInt32 aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void splitNode (in nsIDOMNode existingRightNode, in long offset, out nsIDOMNode newLeftNode); */
NS_IMETHODIMP nsEditor::SplitNode(nsIDOMNode *existingRightNode, PRInt32 offset, nsIDOMNode * *newLeftNode NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void joinNodes (in nsIDOMNode leftNode, in nsIDOMNode rightNode, in nsIDOMNode parent); */
NS_IMETHODIMP nsEditor::JoinNodes(nsIDOMNode *leftNode, nsIDOMNode *rightNode, nsIDOMNode *parent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteNode (in nsIDOMNode child); */
NS_IMETHODIMP nsEditor::DeleteNode(nsIDOMNode *child)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void markNodeDirty (in nsIDOMNode node); */
NS_IMETHODIMP nsEditor::MarkNodeDirty(nsIDOMNode *node)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void switchTextDirection (); */
NS_IMETHODIMP nsEditor::SwitchTextDirection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString outputToString (in AString formatType, in unsigned long flags); */
NS_IMETHODIMP nsEditor::OutputToString(const nsAString & formatType, PRUint32 flags, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void outputToStream (in nsIOutputStream aStream, in AString formatType, in ACString charsetOverride, in unsigned long flags); */
NS_IMETHODIMP nsEditor::OutputToStream(nsIOutputStream *aStream, const nsAString & formatType, const nsACString & charsetOverride, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addEditorObserver (in nsIEditorObserver observer); */
NS_IMETHODIMP nsEditor::AddEditorObserver(nsIEditorObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeEditorObserver (in nsIEditorObserver observer); */
NS_IMETHODIMP nsEditor::RemoveEditorObserver(nsIEditorObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addEditActionListener (in nsIEditActionListener listener); */
NS_IMETHODIMP nsEditor::AddEditActionListener(nsIEditActionListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeEditActionListener (in nsIEditActionListener listener); */
NS_IMETHODIMP nsEditor::RemoveEditActionListener(nsIEditActionListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addDocumentStateListener (in nsIDocumentStateListener listener); */
NS_IMETHODIMP nsEditor::AddDocumentStateListener(nsIDocumentStateListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDocumentStateListener (in nsIDocumentStateListener listener); */
NS_IMETHODIMP nsEditor::RemoveDocumentStateListener(nsIDocumentStateListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void dumpContentTree (); */
NS_IMETHODIMP nsEditor::DumpContentTree()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDumpContent (); */
NS_IMETHODIMP nsEditor::DebugDumpContent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugUnitTests (out long outNumTests, out long outNumTestsFailed); */
NS_IMETHODIMP nsEditor::DebugUnitTests(PRInt32 *outNumTests NS_OUTPARAM, PRInt32 *outNumTestsFailed NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean isModifiableNode (in nsIDOMNode aNode); */
NS_IMETHODIMP_(PRBool) nsEditor::IsModifiableNode(nsIDOMNode *aNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean lastKeypressEventTrusted; */
NS_IMETHODIMP nsEditor::GetLastKeypressEventTrusted(PRBool *aLastKeypressEventTrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEditor_h__ */
