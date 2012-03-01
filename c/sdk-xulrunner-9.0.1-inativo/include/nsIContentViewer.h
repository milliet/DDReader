/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/base/nsIContentViewer.idl
 */

#ifndef __gen_nsIContentViewer_h__
#define __gen_nsIContentViewer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDocument; /* forward declaration */

class nsISHEntry; /* forward declaration */

class nsIPrintSettings; /* forward declaration */

class nsIWidget;
class nsIDocument;
struct nsIntRect;

/* starting interface:    nsIContentViewer */
#define NS_ICONTENTVIEWER_IID_STR "75306a89-e3ad-4a2b-9daf-ac4de06661a4"

#define NS_ICONTENTVIEWER_IID \
  {0x75306a89, 0xe3ad, 0x4a2b, \
    { 0x9d, 0xaf, 0xac, 0x4d, 0xe0, 0x66, 0x61, 0xa4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIContentViewer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTVIEWER_IID)

  /* [noscript] void init (in nsIWidgetPtr aParentWidget, [const] in nsIntRectRef aBounds); */
  NS_IMETHOD Init(nsIWidget *aParentWidget, const nsIntRect & aBounds) = 0;

  /* attribute nsISupports container; */
  NS_SCRIPTABLE NS_IMETHOD GetContainer(nsISupports * *aContainer) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContainer(nsISupports *aContainer) = 0;

  /* void loadStart (in nsISupports aDoc); */
  NS_SCRIPTABLE NS_IMETHOD LoadStart(nsISupports *aDoc) = 0;

  /* void loadComplete (in unsigned long aStatus); */
  NS_SCRIPTABLE NS_IMETHOD LoadComplete(PRUint32 aStatus) = 0;

  /* boolean permitUnload ([optional] in boolean aCallerClosesWindow); */
  NS_SCRIPTABLE NS_IMETHOD PermitUnload(PRBool aCallerClosesWindow, PRBool *_retval NS_OUTPARAM) = 0;

  /* void resetCloseWindow (); */
  NS_SCRIPTABLE NS_IMETHOD ResetCloseWindow(void) = 0;

  /* void pageHide (in boolean isUnload); */
  NS_SCRIPTABLE NS_IMETHOD PageHide(PRBool isUnload) = 0;

  /* void close (in nsISHEntry historyEntry); */
  NS_SCRIPTABLE NS_IMETHOD Close(nsISHEntry *historyEntry) = 0;

  /* void destroy (); */
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) = 0;

  /* void stop (); */
  NS_SCRIPTABLE NS_IMETHOD Stop(void) = 0;

  /* attribute nsIDOMDocument DOMDocument; */
  NS_SCRIPTABLE NS_IMETHOD GetDOMDocument(nsIDOMDocument * *aDOMDocument) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDOMDocument(nsIDOMDocument *aDOMDocument) = 0;

  /* [noscript,notxpcom] nsIDocumentPtr getDocument (); */
  NS_IMETHOD_(nsIDocument *) GetDocument(void) = 0;

  /* [noscript] void getBounds (in nsIntRectRef aBounds); */
  NS_IMETHOD GetBounds(nsIntRect & aBounds) = 0;

  /* [noscript] void setBounds ([const] in nsIntRectRef aBounds); */
  NS_IMETHOD SetBounds(const nsIntRect & aBounds) = 0;

  /* [noscript] attribute nsIContentViewer previousViewer; */
  NS_IMETHOD GetPreviousViewer(nsIContentViewer * *aPreviousViewer) = 0;
  NS_IMETHOD SetPreviousViewer(nsIContentViewer *aPreviousViewer) = 0;

  /* void move (in long aX, in long aY); */
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 aX, PRInt32 aY) = 0;

  /* void show (); */
  NS_SCRIPTABLE NS_IMETHOD Show(void) = 0;

  /* void hide (); */
  NS_SCRIPTABLE NS_IMETHOD Hide(void) = 0;

  /* attribute boolean sticky; */
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky) = 0;

  /* boolean requestWindowClose (); */
  NS_SCRIPTABLE NS_IMETHOD RequestWindowClose(PRBool *_retval NS_OUTPARAM) = 0;

  /* void open (in nsISupports aState, in nsISHEntry aSHEntry); */
  NS_SCRIPTABLE NS_IMETHOD Open(nsISupports *aState, nsISHEntry *aSHEntry) = 0;

  /* void clearHistoryEntry (); */
  NS_SCRIPTABLE NS_IMETHOD ClearHistoryEntry(void) = 0;

  /* void setPageMode (in boolean aPageMode, in nsIPrintSettings aPrintSettings); */
  NS_SCRIPTABLE NS_IMETHOD SetPageMode(PRBool aPageMode, nsIPrintSettings *aPrintSettings) = 0;

  /* readonly attribute nsISHEntry historyEntry; */
  NS_SCRIPTABLE NS_IMETHOD GetHistoryEntry(nsISHEntry * *aHistoryEntry) = 0;

  /* readonly attribute boolean isTabModalPromptAllowed; */
  NS_SCRIPTABLE NS_IMETHOD GetIsTabModalPromptAllowed(PRBool *aIsTabModalPromptAllowed) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentViewer, NS_ICONTENTVIEWER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTVIEWER \
  NS_IMETHOD Init(nsIWidget *aParentWidget, const nsIntRect & aBounds); \
  NS_SCRIPTABLE NS_IMETHOD GetContainer(nsISupports * *aContainer); \
  NS_SCRIPTABLE NS_IMETHOD SetContainer(nsISupports *aContainer); \
  NS_SCRIPTABLE NS_IMETHOD LoadStart(nsISupports *aDoc); \
  NS_SCRIPTABLE NS_IMETHOD LoadComplete(PRUint32 aStatus); \
  NS_SCRIPTABLE NS_IMETHOD PermitUnload(PRBool aCallerClosesWindow, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ResetCloseWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD PageHide(PRBool isUnload); \
  NS_SCRIPTABLE NS_IMETHOD Close(nsISHEntry *historyEntry); \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void); \
  NS_SCRIPTABLE NS_IMETHOD Stop(void); \
  NS_SCRIPTABLE NS_IMETHOD GetDOMDocument(nsIDOMDocument * *aDOMDocument); \
  NS_SCRIPTABLE NS_IMETHOD SetDOMDocument(nsIDOMDocument *aDOMDocument); \
  NS_IMETHOD_(nsIDocument *) GetDocument(void); \
  NS_IMETHOD GetBounds(nsIntRect & aBounds); \
  NS_IMETHOD SetBounds(const nsIntRect & aBounds); \
  NS_IMETHOD GetPreviousViewer(nsIContentViewer * *aPreviousViewer); \
  NS_IMETHOD SetPreviousViewer(nsIContentViewer *aPreviousViewer); \
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 aX, PRInt32 aY); \
  NS_SCRIPTABLE NS_IMETHOD Show(void); \
  NS_SCRIPTABLE NS_IMETHOD Hide(void); \
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky); \
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky); \
  NS_SCRIPTABLE NS_IMETHOD RequestWindowClose(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Open(nsISupports *aState, nsISHEntry *aSHEntry); \
  NS_SCRIPTABLE NS_IMETHOD ClearHistoryEntry(void); \
  NS_SCRIPTABLE NS_IMETHOD SetPageMode(PRBool aPageMode, nsIPrintSettings *aPrintSettings); \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryEntry(nsISHEntry * *aHistoryEntry); \
  NS_SCRIPTABLE NS_IMETHOD GetIsTabModalPromptAllowed(PRBool *aIsTabModalPromptAllowed); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTVIEWER(_to) \
  NS_IMETHOD Init(nsIWidget *aParentWidget, const nsIntRect & aBounds) { return _to Init(aParentWidget, aBounds); } \
  NS_SCRIPTABLE NS_IMETHOD GetContainer(nsISupports * *aContainer) { return _to GetContainer(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD SetContainer(nsISupports *aContainer) { return _to SetContainer(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD LoadStart(nsISupports *aDoc) { return _to LoadStart(aDoc); } \
  NS_SCRIPTABLE NS_IMETHOD LoadComplete(PRUint32 aStatus) { return _to LoadComplete(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD PermitUnload(PRBool aCallerClosesWindow, PRBool *_retval NS_OUTPARAM) { return _to PermitUnload(aCallerClosesWindow, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ResetCloseWindow(void) { return _to ResetCloseWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD PageHide(PRBool isUnload) { return _to PageHide(isUnload); } \
  NS_SCRIPTABLE NS_IMETHOD Close(nsISHEntry *historyEntry) { return _to Close(historyEntry); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return _to Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD Stop(void) { return _to Stop(); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOMDocument(nsIDOMDocument * *aDOMDocument) { return _to GetDOMDocument(aDOMDocument); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOMDocument(nsIDOMDocument *aDOMDocument) { return _to SetDOMDocument(aDOMDocument); } \
  NS_IMETHOD_(nsIDocument *) GetDocument(void) { return _to GetDocument(); } \
  NS_IMETHOD GetBounds(nsIntRect & aBounds) { return _to GetBounds(aBounds); } \
  NS_IMETHOD SetBounds(const nsIntRect & aBounds) { return _to SetBounds(aBounds); } \
  NS_IMETHOD GetPreviousViewer(nsIContentViewer * *aPreviousViewer) { return _to GetPreviousViewer(aPreviousViewer); } \
  NS_IMETHOD SetPreviousViewer(nsIContentViewer *aPreviousViewer) { return _to SetPreviousViewer(aPreviousViewer); } \
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 aX, PRInt32 aY) { return _to Move(aX, aY); } \
  NS_SCRIPTABLE NS_IMETHOD Show(void) { return _to Show(); } \
  NS_SCRIPTABLE NS_IMETHOD Hide(void) { return _to Hide(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky) { return _to GetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky) { return _to SetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD RequestWindowClose(PRBool *_retval NS_OUTPARAM) { return _to RequestWindowClose(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Open(nsISupports *aState, nsISHEntry *aSHEntry) { return _to Open(aState, aSHEntry); } \
  NS_SCRIPTABLE NS_IMETHOD ClearHistoryEntry(void) { return _to ClearHistoryEntry(); } \
  NS_SCRIPTABLE NS_IMETHOD SetPageMode(PRBool aPageMode, nsIPrintSettings *aPrintSettings) { return _to SetPageMode(aPageMode, aPrintSettings); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryEntry(nsISHEntry * *aHistoryEntry) { return _to GetHistoryEntry(aHistoryEntry); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsTabModalPromptAllowed(PRBool *aIsTabModalPromptAllowed) { return _to GetIsTabModalPromptAllowed(aIsTabModalPromptAllowed); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTVIEWER(_to) \
  NS_IMETHOD Init(nsIWidget *aParentWidget, const nsIntRect & aBounds) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aParentWidget, aBounds); } \
  NS_SCRIPTABLE NS_IMETHOD GetContainer(nsISupports * *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContainer(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD SetContainer(nsISupports *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContainer(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD LoadStart(nsISupports *aDoc) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadStart(aDoc); } \
  NS_SCRIPTABLE NS_IMETHOD LoadComplete(PRUint32 aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadComplete(aStatus); } \
  NS_SCRIPTABLE NS_IMETHOD PermitUnload(PRBool aCallerClosesWindow, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PermitUnload(aCallerClosesWindow, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ResetCloseWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetCloseWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD PageHide(PRBool isUnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->PageHide(isUnload); } \
  NS_SCRIPTABLE NS_IMETHOD Close(nsISHEntry *historyEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(historyEntry); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD Stop(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Stop(); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOMDocument(nsIDOMDocument * *aDOMDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOMDocument(aDOMDocument); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOMDocument(nsIDOMDocument *aDOMDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOMDocument(aDOMDocument); } \
  NS_IMETHOD_(nsIDocument *) GetDocument(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocument(); } \
  NS_IMETHOD GetBounds(nsIntRect & aBounds) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBounds(aBounds); } \
  NS_IMETHOD SetBounds(const nsIntRect & aBounds) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBounds(aBounds); } \
  NS_IMETHOD GetPreviousViewer(nsIContentViewer * *aPreviousViewer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousViewer(aPreviousViewer); } \
  NS_IMETHOD SetPreviousViewer(nsIContentViewer *aPreviousViewer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreviousViewer(aPreviousViewer); } \
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 aX, PRInt32 aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->Move(aX, aY); } \
  NS_SCRIPTABLE NS_IMETHOD Show(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Show(); } \
  NS_SCRIPTABLE NS_IMETHOD Hide(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Hide(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSticky(PRBool *aSticky) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD SetSticky(PRBool aSticky) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSticky(aSticky); } \
  NS_SCRIPTABLE NS_IMETHOD RequestWindowClose(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestWindowClose(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Open(nsISupports *aState, nsISHEntry *aSHEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(aState, aSHEntry); } \
  NS_SCRIPTABLE NS_IMETHOD ClearHistoryEntry(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearHistoryEntry(); } \
  NS_SCRIPTABLE NS_IMETHOD SetPageMode(PRBool aPageMode, nsIPrintSettings *aPrintSettings) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPageMode(aPageMode, aPrintSettings); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryEntry(nsISHEntry * *aHistoryEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistoryEntry(aHistoryEntry); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsTabModalPromptAllowed(PRBool *aIsTabModalPromptAllowed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsTabModalPromptAllowed(aIsTabModalPromptAllowed); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentViewer : public nsIContentViewer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTVIEWER

  nsContentViewer();

private:
  ~nsContentViewer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsContentViewer, nsIContentViewer)

nsContentViewer::nsContentViewer()
{
  /* member initializers and constructor code */
}

nsContentViewer::~nsContentViewer()
{
  /* destructor code */
}

/* [noscript] void init (in nsIWidgetPtr aParentWidget, [const] in nsIntRectRef aBounds); */
NS_IMETHODIMP nsContentViewer::Init(nsIWidget *aParentWidget, const nsIntRect & aBounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports container; */
NS_IMETHODIMP nsContentViewer::GetContainer(nsISupports * *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsContentViewer::SetContainer(nsISupports *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadStart (in nsISupports aDoc); */
NS_IMETHODIMP nsContentViewer::LoadStart(nsISupports *aDoc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadComplete (in unsigned long aStatus); */
NS_IMETHODIMP nsContentViewer::LoadComplete(PRUint32 aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean permitUnload ([optional] in boolean aCallerClosesWindow); */
NS_IMETHODIMP nsContentViewer::PermitUnload(PRBool aCallerClosesWindow, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetCloseWindow (); */
NS_IMETHODIMP nsContentViewer::ResetCloseWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pageHide (in boolean isUnload); */
NS_IMETHODIMP nsContentViewer::PageHide(PRBool isUnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (in nsISHEntry historyEntry); */
NS_IMETHODIMP nsContentViewer::Close(nsISHEntry *historyEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroy (); */
NS_IMETHODIMP nsContentViewer::Destroy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stop (); */
NS_IMETHODIMP nsContentViewer::Stop()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMDocument DOMDocument; */
NS_IMETHODIMP nsContentViewer::GetDOMDocument(nsIDOMDocument * *aDOMDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsContentViewer::SetDOMDocument(nsIDOMDocument *aDOMDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsIDocumentPtr getDocument (); */
NS_IMETHODIMP_(nsIDocument *) nsContentViewer::GetDocument()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getBounds (in nsIntRectRef aBounds); */
NS_IMETHODIMP nsContentViewer::GetBounds(nsIntRect & aBounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setBounds ([const] in nsIntRectRef aBounds); */
NS_IMETHODIMP nsContentViewer::SetBounds(const nsIntRect & aBounds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute nsIContentViewer previousViewer; */
NS_IMETHODIMP nsContentViewer::GetPreviousViewer(nsIContentViewer * *aPreviousViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsContentViewer::SetPreviousViewer(nsIContentViewer *aPreviousViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void move (in long aX, in long aY); */
NS_IMETHODIMP nsContentViewer::Move(PRInt32 aX, PRInt32 aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void show (); */
NS_IMETHODIMP nsContentViewer::Show()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void hide (); */
NS_IMETHODIMP nsContentViewer::Hide()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean sticky; */
NS_IMETHODIMP nsContentViewer::GetSticky(PRBool *aSticky)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsContentViewer::SetSticky(PRBool aSticky)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean requestWindowClose (); */
NS_IMETHODIMP nsContentViewer::RequestWindowClose(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void open (in nsISupports aState, in nsISHEntry aSHEntry); */
NS_IMETHODIMP nsContentViewer::Open(nsISupports *aState, nsISHEntry *aSHEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearHistoryEntry (); */
NS_IMETHODIMP nsContentViewer::ClearHistoryEntry()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setPageMode (in boolean aPageMode, in nsIPrintSettings aPrintSettings); */
NS_IMETHODIMP nsContentViewer::SetPageMode(PRBool aPageMode, nsIPrintSettings *aPrintSettings)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISHEntry historyEntry; */
NS_IMETHODIMP nsContentViewer::GetHistoryEntry(nsISHEntry * *aHistoryEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isTabModalPromptAllowed; */
NS_IMETHODIMP nsContentViewer::GetIsTabModalPromptAllowed(PRBool *aIsTabModalPromptAllowed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIContentViewer_h__ */
