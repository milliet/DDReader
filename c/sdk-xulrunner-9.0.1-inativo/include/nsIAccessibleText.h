/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleText.idl
 */

#ifndef __gen_nsIAccessibleText_h__
#define __gen_nsIAccessibleText_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
typedef PRInt32  nsAccessibleTextBoundary;

class nsIAccessible; /* forward declaration */

class nsIPersistentProperties; /* forward declaration */


/* starting interface:    nsIAccessibleText */
#define NS_IACCESSIBLETEXT_IID_STR "0f4633b1-550c-4b50-8c04-0eb1005eef2f"

#define NS_IACCESSIBLETEXT_IID \
  {0x0f4633b1, 0x550c, 0x4b50, \
    { 0x8c, 0x04, 0x0e, 0xb1, 0x00, 0x5e, 0xef, 0x2f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleText : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLETEXT_IID)

  enum { TEXT_OFFSET_END_OF_TEXT = -1 };

  enum { TEXT_OFFSET_CARET = -2 };

  enum { BOUNDARY_CHAR = 0 };

  enum { BOUNDARY_WORD_START = 1 };

  enum { BOUNDARY_WORD_END = 2 };

  enum { BOUNDARY_SENTENCE_START = 3 };

  enum { BOUNDARY_SENTENCE_END = 4 };

  enum { BOUNDARY_LINE_START = 5 };

  enum { BOUNDARY_LINE_END = 6 };

  enum { BOUNDARY_ATTRIBUTE_RANGE = 7 };

  /* attribute long caretOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCaretOffset(PRInt32 aCaretOffset) = 0;

  /* readonly attribute long characterCount; */
  NS_SCRIPTABLE NS_IMETHOD GetCharacterCount(PRInt32 *aCharacterCount) = 0;

  /* readonly attribute long selectionCount; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount) = 0;

  /* AString getText (in long startOffset, in long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetText(PRInt32 startOffset, PRInt32 endOffset, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getTextAfterOffset (in long offset, in nsAccessibleTextBoundary boundaryType, out long startOffset, out long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetTextAfterOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getTextAtOffset (in long offset, in nsAccessibleTextBoundary boundaryType, out long startOffset, out long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetTextAtOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getTextBeforeOffset (in long offset, in nsAccessibleTextBoundary boundaryType, out long startOffset, out long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetTextBeforeOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* wchar getCharacterAtOffset (in long offset); */
  NS_SCRIPTABLE NS_IMETHOD GetCharacterAtOffset(PRInt32 offset, PRUnichar *_retval NS_OUTPARAM) = 0;

  /* nsIPersistentProperties getTextAttributes (in boolean includeDefAttrs, in long offset, out long rangeStartOffset, out long rangeEndOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetTextAttributes(PRBool includeDefAttrs, PRInt32 offset, PRInt32 *rangeStartOffset NS_OUTPARAM, PRInt32 *rangeEndOffset NS_OUTPARAM, nsIPersistentProperties * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIPersistentProperties defaultTextAttributes; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultTextAttributes(nsIPersistentProperties * *aDefaultTextAttributes) = 0;

  /* void getCharacterExtents (in long offset, out long x, out long y, out long width, out long height, in unsigned long coordType); */
  NS_SCRIPTABLE NS_IMETHOD GetCharacterExtents(PRInt32 offset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType) = 0;

  /* void getRangeExtents (in long startOffset, in long endOffset, out long x, out long y, out long width, out long height, in unsigned long coordType); */
  NS_SCRIPTABLE NS_IMETHOD GetRangeExtents(PRInt32 startOffset, PRInt32 endOffset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType) = 0;

  /* long getOffsetAtPoint (in long x, in long y, in unsigned long coordType); */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetAtPoint(PRInt32 x, PRInt32 y, PRUint32 coordType, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void getSelectionBounds (in long selectionNum, out long startOffset, out long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionBounds(PRInt32 selectionNum, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM) = 0;

  /* void setSelectionBounds (in long selectionNum, in long startOffset, in long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD SetSelectionBounds(PRInt32 selectionNum, PRInt32 startOffset, PRInt32 endOffset) = 0;

  /* void addSelection (in long startOffset, in long endOffset); */
  NS_SCRIPTABLE NS_IMETHOD AddSelection(PRInt32 startOffset, PRInt32 endOffset) = 0;

  /* void removeSelection (in long selectionNum); */
  NS_SCRIPTABLE NS_IMETHOD RemoveSelection(PRInt32 selectionNum) = 0;

  /* void scrollSubstringTo (in long startIndex, in long endIndex, in unsigned long scrollType); */
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringTo(PRInt32 startIndex, PRInt32 endIndex, PRUint32 scrollType) = 0;

  /* void scrollSubstringToPoint (in long startIndex, in long endIndex, in unsigned long coordinateType, in long x, in long y); */
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringToPoint(PRInt32 startIndex, PRInt32 endIndex, PRUint32 coordinateType, PRInt32 x, PRInt32 y) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleText, NS_IACCESSIBLETEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLETEXT \
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset); \
  NS_SCRIPTABLE NS_IMETHOD SetCaretOffset(PRInt32 aCaretOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterCount(PRInt32 *aCharacterCount); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount); \
  NS_SCRIPTABLE NS_IMETHOD GetText(PRInt32 startOffset, PRInt32 endOffset, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTextAfterOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTextAtOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTextBeforeOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterAtOffset(PRInt32 offset, PRUnichar *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTextAttributes(PRBool includeDefAttrs, PRInt32 offset, PRInt32 *rangeStartOffset NS_OUTPARAM, PRInt32 *rangeEndOffset NS_OUTPARAM, nsIPersistentProperties * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultTextAttributes(nsIPersistentProperties * *aDefaultTextAttributes); \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterExtents(PRInt32 offset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType); \
  NS_SCRIPTABLE NS_IMETHOD GetRangeExtents(PRInt32 startOffset, PRInt32 endOffset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType); \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetAtPoint(PRInt32 x, PRInt32 y, PRUint32 coordType, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionBounds(PRInt32 selectionNum, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionBounds(PRInt32 selectionNum, PRInt32 startOffset, PRInt32 endOffset); \
  NS_SCRIPTABLE NS_IMETHOD AddSelection(PRInt32 startOffset, PRInt32 endOffset); \
  NS_SCRIPTABLE NS_IMETHOD RemoveSelection(PRInt32 selectionNum); \
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringTo(PRInt32 startIndex, PRInt32 endIndex, PRUint32 scrollType); \
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringToPoint(PRInt32 startIndex, PRInt32 endIndex, PRUint32 coordinateType, PRInt32 x, PRInt32 y); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLETEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset) { return _to GetCaretOffset(aCaretOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetCaretOffset(PRInt32 aCaretOffset) { return _to SetCaretOffset(aCaretOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterCount(PRInt32 *aCharacterCount) { return _to GetCharacterCount(aCharacterCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount) { return _to GetSelectionCount(aSelectionCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetText(PRInt32 startOffset, PRInt32 endOffset, nsAString & _retval NS_OUTPARAM) { return _to GetText(startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextAfterOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetTextAfterOffset(offset, boundaryType, startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextAtOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetTextAtOffset(offset, boundaryType, startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextBeforeOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to GetTextBeforeOffset(offset, boundaryType, startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterAtOffset(PRInt32 offset, PRUnichar *_retval NS_OUTPARAM) { return _to GetCharacterAtOffset(offset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextAttributes(PRBool includeDefAttrs, PRInt32 offset, PRInt32 *rangeStartOffset NS_OUTPARAM, PRInt32 *rangeEndOffset NS_OUTPARAM, nsIPersistentProperties * *_retval NS_OUTPARAM) { return _to GetTextAttributes(includeDefAttrs, offset, rangeStartOffset, rangeEndOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultTextAttributes(nsIPersistentProperties * *aDefaultTextAttributes) { return _to GetDefaultTextAttributes(aDefaultTextAttributes); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterExtents(PRInt32 offset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType) { return _to GetCharacterExtents(offset, x, y, width, height, coordType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeExtents(PRInt32 startOffset, PRInt32 endOffset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType) { return _to GetRangeExtents(startOffset, endOffset, x, y, width, height, coordType); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetAtPoint(PRInt32 x, PRInt32 y, PRUint32 coordType, PRInt32 *_retval NS_OUTPARAM) { return _to GetOffsetAtPoint(x, y, coordType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionBounds(PRInt32 selectionNum, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM) { return _to GetSelectionBounds(selectionNum, startOffset, endOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionBounds(PRInt32 selectionNum, PRInt32 startOffset, PRInt32 endOffset) { return _to SetSelectionBounds(selectionNum, startOffset, endOffset); } \
  NS_SCRIPTABLE NS_IMETHOD AddSelection(PRInt32 startOffset, PRInt32 endOffset) { return _to AddSelection(startOffset, endOffset); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveSelection(PRInt32 selectionNum) { return _to RemoveSelection(selectionNum); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringTo(PRInt32 startIndex, PRInt32 endIndex, PRUint32 scrollType) { return _to ScrollSubstringTo(startIndex, endIndex, scrollType); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringToPoint(PRInt32 startIndex, PRInt32 endIndex, PRUint32 coordinateType, PRInt32 x, PRInt32 y) { return _to ScrollSubstringToPoint(startIndex, endIndex, coordinateType, x, y); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLETEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCaretOffset(aCaretOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetCaretOffset(PRInt32 aCaretOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCaretOffset(aCaretOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterCount(PRInt32 *aCharacterCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharacterCount(aCharacterCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionCount(PRInt32 *aSelectionCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionCount(aSelectionCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetText(PRInt32 startOffset, PRInt32 endOffset, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetText(startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextAfterOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextAfterOffset(offset, boundaryType, startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextAtOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextAtOffset(offset, boundaryType, startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextBeforeOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextBeforeOffset(offset, boundaryType, startOffset, endOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterAtOffset(PRInt32 offset, PRUnichar *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharacterAtOffset(offset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextAttributes(PRBool includeDefAttrs, PRInt32 offset, PRInt32 *rangeStartOffset NS_OUTPARAM, PRInt32 *rangeEndOffset NS_OUTPARAM, nsIPersistentProperties * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextAttributes(includeDefAttrs, offset, rangeStartOffset, rangeEndOffset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultTextAttributes(nsIPersistentProperties * *aDefaultTextAttributes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultTextAttributes(aDefaultTextAttributes); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharacterExtents(PRInt32 offset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharacterExtents(offset, x, y, width, height, coordType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRangeExtents(PRInt32 startOffset, PRInt32 endOffset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeExtents(startOffset, endOffset, x, y, width, height, coordType); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetAtPoint(PRInt32 x, PRInt32 y, PRUint32 coordType, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetAtPoint(x, y, coordType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionBounds(PRInt32 selectionNum, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionBounds(selectionNum, startOffset, endOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionBounds(PRInt32 selectionNum, PRInt32 startOffset, PRInt32 endOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionBounds(selectionNum, startOffset, endOffset); } \
  NS_SCRIPTABLE NS_IMETHOD AddSelection(PRInt32 startOffset, PRInt32 endOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddSelection(startOffset, endOffset); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveSelection(PRInt32 selectionNum) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveSelection(selectionNum); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringTo(PRInt32 startIndex, PRInt32 endIndex, PRUint32 scrollType) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollSubstringTo(startIndex, endIndex, scrollType); } \
  NS_SCRIPTABLE NS_IMETHOD ScrollSubstringToPoint(PRInt32 startIndex, PRInt32 endIndex, PRUint32 coordinateType, PRInt32 x, PRInt32 y) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScrollSubstringToPoint(startIndex, endIndex, coordinateType, x, y); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleText : public nsIAccessibleText
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLETEXT

  nsAccessibleText();

private:
  ~nsAccessibleText();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleText, nsIAccessibleText)

nsAccessibleText::nsAccessibleText()
{
  /* member initializers and constructor code */
}

nsAccessibleText::~nsAccessibleText()
{
  /* destructor code */
}

/* attribute long caretOffset; */
NS_IMETHODIMP nsAccessibleText::GetCaretOffset(PRInt32 *aCaretOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAccessibleText::SetCaretOffset(PRInt32 aCaretOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long characterCount; */
NS_IMETHODIMP nsAccessibleText::GetCharacterCount(PRInt32 *aCharacterCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long selectionCount; */
NS_IMETHODIMP nsAccessibleText::GetSelectionCount(PRInt32 *aSelectionCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getText (in long startOffset, in long endOffset); */
NS_IMETHODIMP nsAccessibleText::GetText(PRInt32 startOffset, PRInt32 endOffset, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getTextAfterOffset (in long offset, in nsAccessibleTextBoundary boundaryType, out long startOffset, out long endOffset); */
NS_IMETHODIMP nsAccessibleText::GetTextAfterOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getTextAtOffset (in long offset, in nsAccessibleTextBoundary boundaryType, out long startOffset, out long endOffset); */
NS_IMETHODIMP nsAccessibleText::GetTextAtOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getTextBeforeOffset (in long offset, in nsAccessibleTextBoundary boundaryType, out long startOffset, out long endOffset); */
NS_IMETHODIMP nsAccessibleText::GetTextBeforeOffset(PRInt32 offset, nsAccessibleTextBoundary boundaryType, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* wchar getCharacterAtOffset (in long offset); */
NS_IMETHODIMP nsAccessibleText::GetCharacterAtOffset(PRInt32 offset, PRUnichar *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPersistentProperties getTextAttributes (in boolean includeDefAttrs, in long offset, out long rangeStartOffset, out long rangeEndOffset); */
NS_IMETHODIMP nsAccessibleText::GetTextAttributes(PRBool includeDefAttrs, PRInt32 offset, PRInt32 *rangeStartOffset NS_OUTPARAM, PRInt32 *rangeEndOffset NS_OUTPARAM, nsIPersistentProperties * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIPersistentProperties defaultTextAttributes; */
NS_IMETHODIMP nsAccessibleText::GetDefaultTextAttributes(nsIPersistentProperties * *aDefaultTextAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCharacterExtents (in long offset, out long x, out long y, out long width, out long height, in unsigned long coordType); */
NS_IMETHODIMP nsAccessibleText::GetCharacterExtents(PRInt32 offset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getRangeExtents (in long startOffset, in long endOffset, out long x, out long y, out long width, out long height, in unsigned long coordType); */
NS_IMETHODIMP nsAccessibleText::GetRangeExtents(PRInt32 startOffset, PRInt32 endOffset, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM, PRUint32 coordType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getOffsetAtPoint (in long x, in long y, in unsigned long coordType); */
NS_IMETHODIMP nsAccessibleText::GetOffsetAtPoint(PRInt32 x, PRInt32 y, PRUint32 coordType, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getSelectionBounds (in long selectionNum, out long startOffset, out long endOffset); */
NS_IMETHODIMP nsAccessibleText::GetSelectionBounds(PRInt32 selectionNum, PRInt32 *startOffset NS_OUTPARAM, PRInt32 *endOffset NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelectionBounds (in long selectionNum, in long startOffset, in long endOffset); */
NS_IMETHODIMP nsAccessibleText::SetSelectionBounds(PRInt32 selectionNum, PRInt32 startOffset, PRInt32 endOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addSelection (in long startOffset, in long endOffset); */
NS_IMETHODIMP nsAccessibleText::AddSelection(PRInt32 startOffset, PRInt32 endOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeSelection (in long selectionNum); */
NS_IMETHODIMP nsAccessibleText::RemoveSelection(PRInt32 selectionNum)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollSubstringTo (in long startIndex, in long endIndex, in unsigned long scrollType); */
NS_IMETHODIMP nsAccessibleText::ScrollSubstringTo(PRInt32 startIndex, PRInt32 endIndex, PRUint32 scrollType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void scrollSubstringToPoint (in long startIndex, in long endIndex, in unsigned long coordinateType, in long x, in long y); */
NS_IMETHODIMP nsAccessibleText::ScrollSubstringToPoint(PRInt32 startIndex, PRInt32 endIndex, PRUint32 coordinateType, PRInt32 x, PRInt32 y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleText_h__ */
