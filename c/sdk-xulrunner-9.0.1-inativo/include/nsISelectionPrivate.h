/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsISelectionPrivate.idl
 */

#ifndef __gen_nsISelectionPrivate_h__
#define __gen_nsISelectionPrivate_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsISelectionListener_h__
#include "nsISelectionListener.h"
#endif

#ifndef __gen_nsIEnumerator_h__
#include "nsIEnumerator.h"
#endif

#ifndef __gen_nsISelection_h__
#include "nsISelection.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMRange; /* forward declaration */

class nsIDOMNode; /* forward declaration */

class nsISelectionListener; /* forward declaration */

class nsIContent; /* forward declaration */

class nsFrameSelection;
class nsIFrame;
class nsIPresShell;
struct nsTextRangeStyle;
struct nsPoint;
#include "nsIFrame.h"
#include "nsCOMArray.h"

/* starting interface:    nsISelectionPrivate */
#define NS_ISELECTIONPRIVATE_IID_STR "1820a940-6203-4e27-bc94-fa81131722a4"

#define NS_ISELECTIONPRIVATE_IID \
  {0x1820a940, 0x6203, 0x4e27, \
    { 0xbc, 0x94, 0xfa, 0x81, 0x13, 0x17, 0x22, 0xa4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISelectionPrivate : public nsISelection {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISELECTIONPRIVATE_IID)

  enum { ENDOFPRECEDINGLINE = 0 };

  enum { STARTOFNEXTLINE = 1 };

  /* attribute boolean interlinePosition; */
  NS_SCRIPTABLE NS_IMETHOD GetInterlinePosition(PRBool *aInterlinePosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterlinePosition(PRBool aInterlinePosition) = 0;

  /* void startBatchChanges (); */
  NS_SCRIPTABLE NS_IMETHOD StartBatchChanges(void) = 0;

  /* void endBatchChanges (); */
  NS_SCRIPTABLE NS_IMETHOD EndBatchChanges(void) = 0;

  /* nsIEnumerator getEnumerator (); */
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsIEnumerator * *_retval NS_OUTPARAM) = 0;

  /* wstring toStringWithFormat (in string formatType, in unsigned long flags, in PRInt32 wrapColumn); */
  NS_SCRIPTABLE NS_IMETHOD ToStringWithFormat(const char * formatType, PRUint32 flags, PRInt32 wrapColumn, PRUnichar * *_retval NS_OUTPARAM) = 0;

  /* void addSelectionListener (in nsISelectionListener newListener); */
  NS_SCRIPTABLE NS_IMETHOD AddSelectionListener(nsISelectionListener *newListener) = 0;

  /* void removeSelectionListener (in nsISelectionListener listenerToRemove); */
  NS_SCRIPTABLE NS_IMETHOD RemoveSelectionListener(nsISelectionListener *listenerToRemove) = 0;

  enum { TABLESELECTION_NONE = 0 };

  enum { TABLESELECTION_CELL = 1 };

  enum { TABLESELECTION_ROW = 2 };

  enum { TABLESELECTION_COLUMN = 3 };

  enum { TABLESELECTION_TABLE = 4 };

  enum { TABLESELECTION_ALLCELLS = 5 };

  /* long getTableSelectionType (in nsIDOMRange range); */
  NS_SCRIPTABLE NS_IMETHOD GetTableSelectionType(nsIDOMRange *range, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* [noscript] void setPresShell (in nsIPresShell aPresShell); */
  NS_IMETHOD SetPresShell(nsIPresShell *aPresShell) = 0;

  /* [noscript] attribute boolean canCacheFrameOffset; */
  NS_IMETHOD GetCanCacheFrameOffset(PRBool *aCanCacheFrameOffset) = 0;
  NS_IMETHOD SetCanCacheFrameOffset(PRBool aCanCacheFrameOffset) = 0;

  /* [noscript] void getCachedFrameOffset (in nsIFrame aFrame, in PRInt32 inOffset, in nsPointRef aPoint); */
  NS_IMETHOD GetCachedFrameOffset(nsIFrame *aFrame, PRInt32 inOffset, nsPoint & aPoint) = 0;

  /* [noscript] nsFrameSelection getFrameSelection (); */
  NS_IMETHOD GetFrameSelection(nsFrameSelection **_retval NS_OUTPARAM) = 0;

  /* [noscript] void setAncestorLimiter (in nsIContent aContent); */
  NS_IMETHOD SetAncestorLimiter(nsIContent *aContent) = 0;

  /* [noscript] void setTextRangeStyle (in nsIDOMRange range, in constTextRangeStyleRef textRangeStyle); */
  NS_IMETHOD SetTextRangeStyle(nsIDOMRange *range, const nsTextRangeStyle & textRangeStyle) = 0;

  /* [noscript,notxpcom] nsDirection getSelectionDirection (); */
  NS_IMETHOD_(nsDirection) GetSelectionDirection(void) = 0;

  /* [noscript,notxpcom] void setSelectionDirection (in nsDirection aDirection); */
  NS_IMETHOD_(void) SetSelectionDirection(nsDirection aDirection) = 0;

  /* readonly attribute short type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt16 *aType) = 0;

  /* void GetRangesForInterval (in nsIDOMNode beginNode, in PRInt32 beginOffset, in nsIDOMNode endNode, in PRInt32 endOffset, in boolean allowAdjacent, out PRUint32 resultCount, [array, size_is (resultCount), retval] out nsIDOMRange results); */
  NS_SCRIPTABLE NS_IMETHOD GetRangesForInterval(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, PRUint32 *resultCount NS_OUTPARAM, nsIDOMRange * **results NS_OUTPARAM) = 0;

  /* [noscript] void GetRangesForIntervalCOMArray (in nsIDOMNode beginNode, in PRInt32 beginOffset, in nsIDOMNode endNode, in PRInt32 endOffset, in boolean allowAdjacent, in RangeArray results); */
  NS_IMETHOD GetRangesForIntervalCOMArray(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, nsCOMArray<nsIDOMRange> *results) = 0;

  /* void scrollIntoView (in short aRegion, in boolean aIsSynchronous, in short aVPercent, in short aHPercent); */
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRInt16 aRegion, PRBool aIsSynchronous, PRInt16 aVPercent, PRInt16 aHPercent) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISelectionPrivate, NS_ISELECTIONPRIVATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISELECTIONPRIVATE \
  NS_SCRIPTABLE NS_IMETHOD GetInterlinePosition(PRBool *aInterlinePosition); \
  NS_SCRIPTABLE NS_IMETHOD SetInterlinePosition(PRBool aInterlinePosition); \
  NS_SCRIPTABLE NS_IMETHOD StartBatchChanges(void); \
  NS_SCRIPTABLE NS_IMETHOD EndBatchChanges(void); \
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsIEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ToStringWithFormat(const char * formatType, PRUint32 flags, PRInt32 wrapColumn, PRUnichar * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddSelectionListener(nsISelectionListener *newListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveSelectionListener(nsISelectionListener *listenerToRemove); \
  NS_SCRIPTABLE NS_IMETHOD GetTableSelectionType(nsIDOMRange *range, PRInt32 *_retval NS_OUTPARAM); \
  NS_IMETHOD SetPresShell(nsIPresShell *aPresShell); \
  NS_IMETHOD GetCanCacheFrameOffset(PRBool *aCanCacheFrameOffset); \
  NS_IMETHOD SetCanCacheFrameOffset(PRBool aCanCacheFrameOffset); \
  NS_IMETHOD GetCachedFrameOffset(nsIFrame *aFrame, PRInt32 inOffset, nsPoint & aPoint); \
  NS_IMETHOD GetFrameSelection(nsFrameSelection **_retval NS_OUTPARAM); \
  NS_IMETHOD SetAncestorLimiter(nsIContent *aContent); \
  NS_IMETHOD SetTextRangeStyle(nsIDOMRange *range, const nsTextRangeStyle & textRangeStyle); \
  NS_IMETHOD_(nsDirection) GetSelectionDirection(void); \
  NS_IMETHOD_(void) SetSelectionDirection(nsDirection aDirection); \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt16 *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetRangesForInterval(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, PRUint32 *resultCount NS_OUTPARAM, nsIDOMRange * **results NS_OUTPARAM); \
  NS_IMETHOD GetRangesForIntervalCOMArray(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, nsCOMArray<nsIDOMRange> *results); \
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRInt16 aRegion, PRBool aIsSynchronous, PRInt16 aVPercent, PRInt16 aHPercent); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISELECTIONPRIVATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterlinePosition(PRBool *aInterlinePosition) { return _to GetInterlinePosition(aInterlinePosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterlinePosition(PRBool aInterlinePosition) { return _to SetInterlinePosition(aInterlinePosition); } \
  NS_SCRIPTABLE NS_IMETHOD StartBatchChanges(void) { return _to StartBatchChanges(); } \
  NS_SCRIPTABLE NS_IMETHOD EndBatchChanges(void) { return _to EndBatchChanges(); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsIEnumerator * *_retval NS_OUTPARAM) { return _to GetEnumerator(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ToStringWithFormat(const char * formatType, PRUint32 flags, PRInt32 wrapColumn, PRUnichar * *_retval NS_OUTPARAM) { return _to ToStringWithFormat(formatType, flags, wrapColumn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddSelectionListener(nsISelectionListener *newListener) { return _to AddSelectionListener(newListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveSelectionListener(nsISelectionListener *listenerToRemove) { return _to RemoveSelectionListener(listenerToRemove); } \
  NS_SCRIPTABLE NS_IMETHOD GetTableSelectionType(nsIDOMRange *range, PRInt32 *_retval NS_OUTPARAM) { return _to GetTableSelectionType(range, _retval); } \
  NS_IMETHOD SetPresShell(nsIPresShell *aPresShell) { return _to SetPresShell(aPresShell); } \
  NS_IMETHOD GetCanCacheFrameOffset(PRBool *aCanCacheFrameOffset) { return _to GetCanCacheFrameOffset(aCanCacheFrameOffset); } \
  NS_IMETHOD SetCanCacheFrameOffset(PRBool aCanCacheFrameOffset) { return _to SetCanCacheFrameOffset(aCanCacheFrameOffset); } \
  NS_IMETHOD GetCachedFrameOffset(nsIFrame *aFrame, PRInt32 inOffset, nsPoint & aPoint) { return _to GetCachedFrameOffset(aFrame, inOffset, aPoint); } \
  NS_IMETHOD GetFrameSelection(nsFrameSelection **_retval NS_OUTPARAM) { return _to GetFrameSelection(_retval); } \
  NS_IMETHOD SetAncestorLimiter(nsIContent *aContent) { return _to SetAncestorLimiter(aContent); } \
  NS_IMETHOD SetTextRangeStyle(nsIDOMRange *range, const nsTextRangeStyle & textRangeStyle) { return _to SetTextRangeStyle(range, textRangeStyle); } \
  NS_IMETHOD_(nsDirection) GetSelectionDirection(void) { return _to GetSelectionDirection(); } \
  NS_IMETHOD_(void) SetSelectionDirection(nsDirection aDirection) { return _to SetSelectionDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt16 *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangesForInterval(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, PRUint32 *resultCount NS_OUTPARAM, nsIDOMRange * **results NS_OUTPARAM) { return _to GetRangesForInterval(beginNode, beginOffset, endNode, endOffset, allowAdjacent, resultCount, results); } \
  NS_IMETHOD GetRangesForIntervalCOMArray(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, nsCOMArray<nsIDOMRange> *results) { return _to GetRangesForIntervalCOMArray(beginNode, beginOffset, endNode, endOffset, allowAdjacent, results); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRInt16 aRegion, PRBool aIsSynchronous, PRInt16 aVPercent, PRInt16 aHPercent) { return _to ScrollIntoView(aRegion, aIsSynchronous, aVPercent, aHPercent); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISELECTIONPRIVATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterlinePosition(PRBool *aInterlinePosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterlinePosition(aInterlinePosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterlinePosition(PRBool aInterlinePosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterlinePosition(aInterlinePosition); } \
  NS_SCRIPTABLE NS_IMETHOD StartBatchChanges(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartBatchChanges(); } \
  NS_SCRIPTABLE NS_IMETHOD EndBatchChanges(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndBatchChanges(); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnumerator(nsIEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnumerator(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ToStringWithFormat(const char * formatType, PRUint32 flags, PRInt32 wrapColumn, PRUnichar * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToStringWithFormat(formatType, flags, wrapColumn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddSelectionListener(nsISelectionListener *newListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddSelectionListener(newListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveSelectionListener(nsISelectionListener *listenerToRemove) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveSelectionListener(listenerToRemove); } \
  NS_SCRIPTABLE NS_IMETHOD GetTableSelectionType(nsIDOMRange *range, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTableSelectionType(range, _retval); } \
  NS_IMETHOD SetPresShell(nsIPresShell *aPresShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPresShell(aPresShell); } \
  NS_IMETHOD GetCanCacheFrameOffset(PRBool *aCanCacheFrameOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanCacheFrameOffset(aCanCacheFrameOffset); } \
  NS_IMETHOD SetCanCacheFrameOffset(PRBool aCanCacheFrameOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCanCacheFrameOffset(aCanCacheFrameOffset); } \
  NS_IMETHOD GetCachedFrameOffset(nsIFrame *aFrame, PRInt32 inOffset, nsPoint & aPoint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCachedFrameOffset(aFrame, inOffset, aPoint); } \
  NS_IMETHOD GetFrameSelection(nsFrameSelection **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrameSelection(_retval); } \
  NS_IMETHOD SetAncestorLimiter(nsIContent *aContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAncestorLimiter(aContent); } \
  NS_IMETHOD SetTextRangeStyle(nsIDOMRange *range, const nsTextRangeStyle & textRangeStyle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTextRangeStyle(range, textRangeStyle); } \
  NS_IMETHOD_(nsDirection) GetSelectionDirection(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionDirection(); } \
  NS_IMETHOD_(void) SetSelectionDirection(nsDirection aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt16 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangesForInterval(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, PRUint32 *resultCount NS_OUTPARAM, nsIDOMRange * **results NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangesForInterval(beginNode, beginOffset, endNode, endOffset, allowAdjacent, resultCount, results); } \
  NS_IMETHOD GetRangesForIntervalCOMArray(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, nsCOMArray<nsIDOMRange> *results) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangesForIntervalCOMArray(beginNode, beginOffset, endNode, endOffset, allowAdjacent, results); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollIntoView(PRInt16 aRegion, PRBool aIsSynchronous, PRInt16 aVPercent, PRInt16 aHPercent) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollIntoView(aRegion, aIsSynchronous, aVPercent, aHPercent); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSelectionPrivate : public nsISelectionPrivate
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISELECTIONPRIVATE

  nsSelectionPrivate();

private:
  ~nsSelectionPrivate();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSelectionPrivate, nsISelectionPrivate)

nsSelectionPrivate::nsSelectionPrivate()
{
  /* member initializers and constructor code */
}

nsSelectionPrivate::~nsSelectionPrivate()
{
  /* destructor code */
}

/* attribute boolean interlinePosition; */
NS_IMETHODIMP nsSelectionPrivate::GetInterlinePosition(PRBool *aInterlinePosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSelectionPrivate::SetInterlinePosition(PRBool aInterlinePosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void startBatchChanges (); */
NS_IMETHODIMP nsSelectionPrivate::StartBatchChanges()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endBatchChanges (); */
NS_IMETHODIMP nsSelectionPrivate::EndBatchChanges()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIEnumerator getEnumerator (); */
NS_IMETHODIMP nsSelectionPrivate::GetEnumerator(nsIEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wstring toStringWithFormat (in string formatType, in unsigned long flags, in PRInt32 wrapColumn); */
NS_IMETHODIMP nsSelectionPrivate::ToStringWithFormat(const char * formatType, PRUint32 flags, PRInt32 wrapColumn, PRUnichar * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addSelectionListener (in nsISelectionListener newListener); */
NS_IMETHODIMP nsSelectionPrivate::AddSelectionListener(nsISelectionListener *newListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeSelectionListener (in nsISelectionListener listenerToRemove); */
NS_IMETHODIMP nsSelectionPrivate::RemoveSelectionListener(nsISelectionListener *listenerToRemove)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getTableSelectionType (in nsIDOMRange range); */
NS_IMETHODIMP nsSelectionPrivate::GetTableSelectionType(nsIDOMRange *range, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setPresShell (in nsIPresShell aPresShell); */
NS_IMETHODIMP nsSelectionPrivate::SetPresShell(nsIPresShell *aPresShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute boolean canCacheFrameOffset; */
NS_IMETHODIMP nsSelectionPrivate::GetCanCacheFrameOffset(PRBool *aCanCacheFrameOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSelectionPrivate::SetCanCacheFrameOffset(PRBool aCanCacheFrameOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void getCachedFrameOffset (in nsIFrame aFrame, in PRInt32 inOffset, in nsPointRef aPoint); */
NS_IMETHODIMP nsSelectionPrivate::GetCachedFrameOffset(nsIFrame *aFrame, PRInt32 inOffset, nsPoint & aPoint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsFrameSelection getFrameSelection (); */
NS_IMETHODIMP nsSelectionPrivate::GetFrameSelection(nsFrameSelection **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setAncestorLimiter (in nsIContent aContent); */
NS_IMETHODIMP nsSelectionPrivate::SetAncestorLimiter(nsIContent *aContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setTextRangeStyle (in nsIDOMRange range, in constTextRangeStyleRef textRangeStyle); */
NS_IMETHODIMP nsSelectionPrivate::SetTextRangeStyle(nsIDOMRange *range, const nsTextRangeStyle & textRangeStyle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsDirection getSelectionDirection (); */
NS_IMETHODIMP_(nsDirection) nsSelectionPrivate::GetSelectionDirection()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void setSelectionDirection (in nsDirection aDirection); */
NS_IMETHODIMP_(void) nsSelectionPrivate::SetSelectionDirection(nsDirection aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short type; */
NS_IMETHODIMP nsSelectionPrivate::GetType(PRInt16 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRangesForInterval (in nsIDOMNode beginNode, in PRInt32 beginOffset, in nsIDOMNode endNode, in PRInt32 endOffset, in boolean allowAdjacent, out PRUint32 resultCount, [array, size_is (resultCount), retval] out nsIDOMRange results); */
NS_IMETHODIMP nsSelectionPrivate::GetRangesForInterval(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, PRUint32 *resultCount NS_OUTPARAM, nsIDOMRange * **results NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void GetRangesForIntervalCOMArray (in nsIDOMNode beginNode, in PRInt32 beginOffset, in nsIDOMNode endNode, in PRInt32 endOffset, in boolean allowAdjacent, in RangeArray results); */
NS_IMETHODIMP nsSelectionPrivate::GetRangesForIntervalCOMArray(nsIDOMNode *beginNode, PRInt32 beginOffset, nsIDOMNode *endNode, PRInt32 endOffset, PRBool allowAdjacent, nsCOMArray<nsIDOMRange> *results)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollIntoView (in short aRegion, in boolean aIsSynchronous, in short aVPercent, in short aHPercent); */
NS_IMETHODIMP nsSelectionPrivate::ScrollIntoView(PRInt16 aRegion, PRBool aIsSynchronous, PRInt16 aVPercent, PRInt16 aHPercent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISelectionPrivate_h__ */
