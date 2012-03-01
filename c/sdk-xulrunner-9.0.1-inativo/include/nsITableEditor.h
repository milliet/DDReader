/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/idl/nsITableEditor.idl
 */

#ifndef __gen_nsITableEditor_h__
#define __gen_nsITableEditor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMNode; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIDOMRange; /* forward declaration */


/* starting interface:    nsITableEditor */
#define NS_ITABLEEDITOR_IID_STR "4805e684-49b9-11d3-9ce4-ed60bd6cb5bc"

#define NS_ITABLEEDITOR_IID \
  {0x4805e684, 0x49b9, 0x11d3, \
    { 0x9c, 0xe4, 0xed, 0x60, 0xbd, 0x6c, 0xb5, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITableEditor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITABLEEDITOR_IID)

  enum { eNoSearch = 0 };

  enum { ePreviousColumn = 1 };

  enum { ePreviousRow = 2 };

  /* void insertTableCell (in long aNumber, in boolean aAfter); */
  NS_SCRIPTABLE NS_IMETHOD InsertTableCell(PRInt32 aNumber, PRBool aAfter) = 0;

  /* void insertTableColumn (in long aNumber, in boolean aAfter); */
  NS_SCRIPTABLE NS_IMETHOD InsertTableColumn(PRInt32 aNumber, PRBool aAfter) = 0;

  /* void insertTableRow (in long aNumber, in boolean aAfter); */
  NS_SCRIPTABLE NS_IMETHOD InsertTableRow(PRInt32 aNumber, PRBool aAfter) = 0;

  /* void deleteTable (); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTable(void) = 0;

  /* void deleteTableCellContents (); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCellContents(void) = 0;

  /* void deleteTableCell (in long aNumber); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCell(PRInt32 aNumber) = 0;

  /* void deleteTableColumn (in long aNumber); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTableColumn(PRInt32 aNumber) = 0;

  /* void deleteTableRow (in long aNumber); */
  NS_SCRIPTABLE NS_IMETHOD DeleteTableRow(PRInt32 aNumber) = 0;

  /* void selectTableCell (); */
  NS_SCRIPTABLE NS_IMETHOD SelectTableCell(void) = 0;

  /* void selectBlockOfCells (in nsIDOMElement aStartCell, in nsIDOMElement aEndCell); */
  NS_SCRIPTABLE NS_IMETHOD SelectBlockOfCells(nsIDOMElement *aStartCell, nsIDOMElement *aEndCell) = 0;

  /* void selectTableRow (); */
  NS_SCRIPTABLE NS_IMETHOD SelectTableRow(void) = 0;

  /* void selectTableColumn (); */
  NS_SCRIPTABLE NS_IMETHOD SelectTableColumn(void) = 0;

  /* void selectTable (); */
  NS_SCRIPTABLE NS_IMETHOD SelectTable(void) = 0;

  /* void selectAllTableCells (); */
  NS_SCRIPTABLE NS_IMETHOD SelectAllTableCells(void) = 0;

  /* nsIDOMElement switchTableCellHeaderType (in nsIDOMElement aSourceCell); */
  NS_SCRIPTABLE NS_IMETHOD SwitchTableCellHeaderType(nsIDOMElement *aSourceCell, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* void joinTableCells (in boolean aMergeNonContiguousContents); */
  NS_SCRIPTABLE NS_IMETHOD JoinTableCells(PRBool aMergeNonContiguousContents) = 0;

  /* void splitTableCell (); */
  NS_SCRIPTABLE NS_IMETHOD SplitTableCell(void) = 0;

  /* void normalizeTable (in nsIDOMElement aTable); */
  NS_SCRIPTABLE NS_IMETHOD NormalizeTable(nsIDOMElement *aTable) = 0;

  /* void getCellIndexes (in nsIDOMElement aCell, out long aRowIndex, out long aColIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetCellIndexes(nsIDOMElement *aCell, PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM) = 0;

  /* void getTableSize (in nsIDOMElement aTable, out long aRowCount, out long aColCount); */
  NS_SCRIPTABLE NS_IMETHOD GetTableSize(nsIDOMElement *aTable, PRInt32 *aRowCount NS_OUTPARAM, PRInt32 *aColCount NS_OUTPARAM) = 0;

  /* nsIDOMElement getCellAt (in nsIDOMElement aTable, in long aRowIndex, in long aColIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetCellAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* void getCellDataAt (in nsIDOMElement aTable, in long aRowIndex, in long aColIndex, out nsIDOMElement aCell, out long aStartRowIndex, out long aStartColIndex, out long aRowSpan, out long aColSpan, out long aActualRowSpan, out long aActualColSpan, out boolean aIsSelected); */
  NS_SCRIPTABLE NS_IMETHOD GetCellDataAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *aCell NS_OUTPARAM, PRInt32 *aStartRowIndex NS_OUTPARAM, PRInt32 *aStartColIndex NS_OUTPARAM, PRInt32 *aRowSpan NS_OUTPARAM, PRInt32 *aColSpan NS_OUTPARAM, PRInt32 *aActualRowSpan NS_OUTPARAM, PRInt32 *aActualColSpan NS_OUTPARAM, PRBool *aIsSelected NS_OUTPARAM) = 0;

  /* nsIDOMNode getFirstRow (in nsIDOMElement aTableElement); */
  NS_SCRIPTABLE NS_IMETHOD GetFirstRow(nsIDOMElement *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNode getNextRow (in nsIDOMNode aTableElement); */
  NS_SCRIPTABLE NS_IMETHOD GetNextRow(nsIDOMNode *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* void setSelectionAfterTableEdit (in nsIDOMElement aTable, in long aRow, in long aCol, in long aDirection, in boolean aSelected); */
  NS_SCRIPTABLE NS_IMETHOD SetSelectionAfterTableEdit(nsIDOMElement *aTable, PRInt32 aRow, PRInt32 aCol, PRInt32 aDirection, PRBool aSelected) = 0;

  /* nsIDOMElement getSelectedOrParentTableElement (out AString aTagName, out long aCount); */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedOrParentTableElement(nsAString & aTagName NS_OUTPARAM, PRInt32 *aCount NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* PRUint32 getSelectedCellsType (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedCellsType(nsIDOMElement *aElement, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement getFirstSelectedCell (out nsIDOMRange aRange); */
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement getFirstSelectedCellInTable (out long aRowIndex, out long aColIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCellInTable(PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMElement getNextSelectedCell (out nsIDOMRange aRange); */
  NS_SCRIPTABLE NS_IMETHOD GetNextSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITableEditor, NS_ITABLEEDITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITABLEEDITOR \
  NS_SCRIPTABLE NS_IMETHOD InsertTableCell(PRInt32 aNumber, PRBool aAfter); \
  NS_SCRIPTABLE NS_IMETHOD InsertTableColumn(PRInt32 aNumber, PRBool aAfter); \
  NS_SCRIPTABLE NS_IMETHOD InsertTableRow(PRInt32 aNumber, PRBool aAfter); \
  NS_SCRIPTABLE NS_IMETHOD DeleteTable(void); \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCellContents(void); \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCell(PRInt32 aNumber); \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableColumn(PRInt32 aNumber); \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableRow(PRInt32 aNumber); \
  NS_SCRIPTABLE NS_IMETHOD SelectTableCell(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectBlockOfCells(nsIDOMElement *aStartCell, nsIDOMElement *aEndCell); \
  NS_SCRIPTABLE NS_IMETHOD SelectTableRow(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectTableColumn(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectTable(void); \
  NS_SCRIPTABLE NS_IMETHOD SelectAllTableCells(void); \
  NS_SCRIPTABLE NS_IMETHOD SwitchTableCellHeaderType(nsIDOMElement *aSourceCell, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD JoinTableCells(PRBool aMergeNonContiguousContents); \
  NS_SCRIPTABLE NS_IMETHOD SplitTableCell(void); \
  NS_SCRIPTABLE NS_IMETHOD NormalizeTable(nsIDOMElement *aTable); \
  NS_SCRIPTABLE NS_IMETHOD GetCellIndexes(nsIDOMElement *aCell, PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTableSize(nsIDOMElement *aTable, PRInt32 *aRowCount NS_OUTPARAM, PRInt32 *aColCount NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCellAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCellDataAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *aCell NS_OUTPARAM, PRInt32 *aStartRowIndex NS_OUTPARAM, PRInt32 *aStartColIndex NS_OUTPARAM, PRInt32 *aRowSpan NS_OUTPARAM, PRInt32 *aColSpan NS_OUTPARAM, PRInt32 *aActualRowSpan NS_OUTPARAM, PRInt32 *aActualColSpan NS_OUTPARAM, PRBool *aIsSelected NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstRow(nsIDOMElement *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNextRow(nsIDOMNode *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionAfterTableEdit(nsIDOMElement *aTable, PRInt32 aRow, PRInt32 aCol, PRInt32 aDirection, PRBool aSelected); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedOrParentTableElement(nsAString & aTagName NS_OUTPARAM, PRInt32 *aCount NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedCellsType(nsIDOMElement *aElement, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCellInTable(PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNextSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITABLEEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD InsertTableCell(PRInt32 aNumber, PRBool aAfter) { return _to InsertTableCell(aNumber, aAfter); } \
  NS_SCRIPTABLE NS_IMETHOD InsertTableColumn(PRInt32 aNumber, PRBool aAfter) { return _to InsertTableColumn(aNumber, aAfter); } \
  NS_SCRIPTABLE NS_IMETHOD InsertTableRow(PRInt32 aNumber, PRBool aAfter) { return _to InsertTableRow(aNumber, aAfter); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTable(void) { return _to DeleteTable(); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCellContents(void) { return _to DeleteTableCellContents(); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCell(PRInt32 aNumber) { return _to DeleteTableCell(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableColumn(PRInt32 aNumber) { return _to DeleteTableColumn(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableRow(PRInt32 aNumber) { return _to DeleteTableRow(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTableCell(void) { return _to SelectTableCell(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectBlockOfCells(nsIDOMElement *aStartCell, nsIDOMElement *aEndCell) { return _to SelectBlockOfCells(aStartCell, aEndCell); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTableRow(void) { return _to SelectTableRow(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTableColumn(void) { return _to SelectTableColumn(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTable(void) { return _to SelectTable(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAllTableCells(void) { return _to SelectAllTableCells(); } \
  NS_SCRIPTABLE NS_IMETHOD SwitchTableCellHeaderType(nsIDOMElement *aSourceCell, nsIDOMElement * *_retval NS_OUTPARAM) { return _to SwitchTableCellHeaderType(aSourceCell, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD JoinTableCells(PRBool aMergeNonContiguousContents) { return _to JoinTableCells(aMergeNonContiguousContents); } \
  NS_SCRIPTABLE NS_IMETHOD SplitTableCell(void) { return _to SplitTableCell(); } \
  NS_SCRIPTABLE NS_IMETHOD NormalizeTable(nsIDOMElement *aTable) { return _to NormalizeTable(aTable); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellIndexes(nsIDOMElement *aCell, PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM) { return _to GetCellIndexes(aCell, aRowIndex, aColIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetTableSize(nsIDOMElement *aTable, PRInt32 *aRowCount NS_OUTPARAM, PRInt32 *aColCount NS_OUTPARAM) { return _to GetTableSize(aTable, aRowCount, aColCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetCellAt(aTable, aRowIndex, aColIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellDataAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *aCell NS_OUTPARAM, PRInt32 *aStartRowIndex NS_OUTPARAM, PRInt32 *aStartColIndex NS_OUTPARAM, PRInt32 *aRowSpan NS_OUTPARAM, PRInt32 *aColSpan NS_OUTPARAM, PRInt32 *aActualRowSpan NS_OUTPARAM, PRInt32 *aActualColSpan NS_OUTPARAM, PRBool *aIsSelected NS_OUTPARAM) { return _to GetCellDataAt(aTable, aRowIndex, aColIndex, aCell, aStartRowIndex, aStartColIndex, aRowSpan, aColSpan, aActualRowSpan, aActualColSpan, aIsSelected); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstRow(nsIDOMElement *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM) { return _to GetFirstRow(aTableElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextRow(nsIDOMNode *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM) { return _to GetNextRow(aTableElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionAfterTableEdit(nsIDOMElement *aTable, PRInt32 aRow, PRInt32 aCol, PRInt32 aDirection, PRBool aSelected) { return _to SetSelectionAfterTableEdit(aTable, aRow, aCol, aDirection, aSelected); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedOrParentTableElement(nsAString & aTagName NS_OUTPARAM, PRInt32 *aCount NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetSelectedOrParentTableElement(aTagName, aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedCellsType(nsIDOMElement *aElement, PRUint32 *_retval NS_OUTPARAM) { return _to GetSelectedCellsType(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetFirstSelectedCell(aRange, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCellInTable(PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetFirstSelectedCellInTable(aRowIndex, aColIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return _to GetNextSelectedCell(aRange, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITABLEEDITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD InsertTableCell(PRInt32 aNumber, PRBool aAfter) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertTableCell(aNumber, aAfter); } \
  NS_SCRIPTABLE NS_IMETHOD InsertTableColumn(PRInt32 aNumber, PRBool aAfter) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertTableColumn(aNumber, aAfter); } \
  NS_SCRIPTABLE NS_IMETHOD InsertTableRow(PRInt32 aNumber, PRBool aAfter) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertTableRow(aNumber, aAfter); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTable(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTable(); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCellContents(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTableCellContents(); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableCell(PRInt32 aNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTableCell(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableColumn(PRInt32 aNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTableColumn(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteTableRow(PRInt32 aNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTableRow(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTableCell(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectTableCell(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectBlockOfCells(nsIDOMElement *aStartCell, nsIDOMElement *aEndCell) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectBlockOfCells(aStartCell, aEndCell); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTableRow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectTableRow(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTableColumn(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectTableColumn(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectTable(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectTable(); } \
  NS_SCRIPTABLE NS_IMETHOD SelectAllTableCells(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectAllTableCells(); } \
  NS_SCRIPTABLE NS_IMETHOD SwitchTableCellHeaderType(nsIDOMElement *aSourceCell, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SwitchTableCellHeaderType(aSourceCell, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD JoinTableCells(PRBool aMergeNonContiguousContents) { return !_to ? NS_ERROR_NULL_POINTER : _to->JoinTableCells(aMergeNonContiguousContents); } \
  NS_SCRIPTABLE NS_IMETHOD SplitTableCell(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SplitTableCell(); } \
  NS_SCRIPTABLE NS_IMETHOD NormalizeTable(nsIDOMElement *aTable) { return !_to ? NS_ERROR_NULL_POINTER : _to->NormalizeTable(aTable); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellIndexes(nsIDOMElement *aCell, PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCellIndexes(aCell, aRowIndex, aColIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetTableSize(nsIDOMElement *aTable, PRInt32 *aRowCount NS_OUTPARAM, PRInt32 *aColCount NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTableSize(aTable, aRowCount, aColCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCellAt(aTable, aRowIndex, aColIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellDataAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *aCell NS_OUTPARAM, PRInt32 *aStartRowIndex NS_OUTPARAM, PRInt32 *aStartColIndex NS_OUTPARAM, PRInt32 *aRowSpan NS_OUTPARAM, PRInt32 *aColSpan NS_OUTPARAM, PRInt32 *aActualRowSpan NS_OUTPARAM, PRInt32 *aActualColSpan NS_OUTPARAM, PRBool *aIsSelected NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCellDataAt(aTable, aRowIndex, aColIndex, aCell, aStartRowIndex, aStartColIndex, aRowSpan, aColSpan, aActualRowSpan, aActualColSpan, aIsSelected); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstRow(nsIDOMElement *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstRow(aTableElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextRow(nsIDOMNode *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextRow(aTableElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionAfterTableEdit(nsIDOMElement *aTable, PRInt32 aRow, PRInt32 aCol, PRInt32 aDirection, PRBool aSelected) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionAfterTableEdit(aTable, aRow, aCol, aDirection, aSelected); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedOrParentTableElement(nsAString & aTagName NS_OUTPARAM, PRInt32 *aCount NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedOrParentTableElement(aTagName, aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedCellsType(nsIDOMElement *aElement, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedCellsType(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstSelectedCell(aRange, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstSelectedCellInTable(PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstSelectedCellInTable(aRowIndex, aColIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextSelectedCell(aRange, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTableEditor : public nsITableEditor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITABLEEDITOR

  nsTableEditor();

private:
  ~nsTableEditor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTableEditor, nsITableEditor)

nsTableEditor::nsTableEditor()
{
  /* member initializers and constructor code */
}

nsTableEditor::~nsTableEditor()
{
  /* destructor code */
}

/* void insertTableCell (in long aNumber, in boolean aAfter); */
NS_IMETHODIMP nsTableEditor::InsertTableCell(PRInt32 aNumber, PRBool aAfter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertTableColumn (in long aNumber, in boolean aAfter); */
NS_IMETHODIMP nsTableEditor::InsertTableColumn(PRInt32 aNumber, PRBool aAfter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertTableRow (in long aNumber, in boolean aAfter); */
NS_IMETHODIMP nsTableEditor::InsertTableRow(PRInt32 aNumber, PRBool aAfter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTable (); */
NS_IMETHODIMP nsTableEditor::DeleteTable()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTableCellContents (); */
NS_IMETHODIMP nsTableEditor::DeleteTableCellContents()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTableCell (in long aNumber); */
NS_IMETHODIMP nsTableEditor::DeleteTableCell(PRInt32 aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTableColumn (in long aNumber); */
NS_IMETHODIMP nsTableEditor::DeleteTableColumn(PRInt32 aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTableRow (in long aNumber); */
NS_IMETHODIMP nsTableEditor::DeleteTableRow(PRInt32 aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectTableCell (); */
NS_IMETHODIMP nsTableEditor::SelectTableCell()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectBlockOfCells (in nsIDOMElement aStartCell, in nsIDOMElement aEndCell); */
NS_IMETHODIMP nsTableEditor::SelectBlockOfCells(nsIDOMElement *aStartCell, nsIDOMElement *aEndCell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectTableRow (); */
NS_IMETHODIMP nsTableEditor::SelectTableRow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectTableColumn (); */
NS_IMETHODIMP nsTableEditor::SelectTableColumn()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectTable (); */
NS_IMETHODIMP nsTableEditor::SelectTable()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectAllTableCells (); */
NS_IMETHODIMP nsTableEditor::SelectAllTableCells()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement switchTableCellHeaderType (in nsIDOMElement aSourceCell); */
NS_IMETHODIMP nsTableEditor::SwitchTableCellHeaderType(nsIDOMElement *aSourceCell, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void joinTableCells (in boolean aMergeNonContiguousContents); */
NS_IMETHODIMP nsTableEditor::JoinTableCells(PRBool aMergeNonContiguousContents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void splitTableCell (); */
NS_IMETHODIMP nsTableEditor::SplitTableCell()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void normalizeTable (in nsIDOMElement aTable); */
NS_IMETHODIMP nsTableEditor::NormalizeTable(nsIDOMElement *aTable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCellIndexes (in nsIDOMElement aCell, out long aRowIndex, out long aColIndex); */
NS_IMETHODIMP nsTableEditor::GetCellIndexes(nsIDOMElement *aCell, PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getTableSize (in nsIDOMElement aTable, out long aRowCount, out long aColCount); */
NS_IMETHODIMP nsTableEditor::GetTableSize(nsIDOMElement *aTable, PRInt32 *aRowCount NS_OUTPARAM, PRInt32 *aColCount NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getCellAt (in nsIDOMElement aTable, in long aRowIndex, in long aColIndex); */
NS_IMETHODIMP nsTableEditor::GetCellAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCellDataAt (in nsIDOMElement aTable, in long aRowIndex, in long aColIndex, out nsIDOMElement aCell, out long aStartRowIndex, out long aStartColIndex, out long aRowSpan, out long aColSpan, out long aActualRowSpan, out long aActualColSpan, out boolean aIsSelected); */
NS_IMETHODIMP nsTableEditor::GetCellDataAt(nsIDOMElement *aTable, PRInt32 aRowIndex, PRInt32 aColIndex, nsIDOMElement * *aCell NS_OUTPARAM, PRInt32 *aStartRowIndex NS_OUTPARAM, PRInt32 *aStartColIndex NS_OUTPARAM, PRInt32 *aRowSpan NS_OUTPARAM, PRInt32 *aColSpan NS_OUTPARAM, PRInt32 *aActualRowSpan NS_OUTPARAM, PRInt32 *aActualColSpan NS_OUTPARAM, PRBool *aIsSelected NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode getFirstRow (in nsIDOMElement aTableElement); */
NS_IMETHODIMP nsTableEditor::GetFirstRow(nsIDOMElement *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode getNextRow (in nsIDOMNode aTableElement); */
NS_IMETHODIMP nsTableEditor::GetNextRow(nsIDOMNode *aTableElement, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelectionAfterTableEdit (in nsIDOMElement aTable, in long aRow, in long aCol, in long aDirection, in boolean aSelected); */
NS_IMETHODIMP nsTableEditor::SetSelectionAfterTableEdit(nsIDOMElement *aTable, PRInt32 aRow, PRInt32 aCol, PRInt32 aDirection, PRBool aSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getSelectedOrParentTableElement (out AString aTagName, out long aCount); */
NS_IMETHODIMP nsTableEditor::GetSelectedOrParentTableElement(nsAString & aTagName NS_OUTPARAM, PRInt32 *aCount NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 getSelectedCellsType (in nsIDOMElement aElement); */
NS_IMETHODIMP nsTableEditor::GetSelectedCellsType(nsIDOMElement *aElement, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getFirstSelectedCell (out nsIDOMRange aRange); */
NS_IMETHODIMP nsTableEditor::GetFirstSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getFirstSelectedCellInTable (out long aRowIndex, out long aColIndex); */
NS_IMETHODIMP nsTableEditor::GetFirstSelectedCellInTable(PRInt32 *aRowIndex NS_OUTPARAM, PRInt32 *aColIndex NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getNextSelectedCell (out nsIDOMRange aRange); */
NS_IMETHODIMP nsTableEditor::GetNextSelectedCell(nsIDOMRange * *aRange NS_OUTPARAM, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITableEditor_h__ */
