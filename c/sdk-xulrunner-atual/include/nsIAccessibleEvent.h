/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleEvent.idl
 */

#ifndef __gen_nsIAccessibleEvent_h__
#define __gen_nsIAccessibleEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAccessible; /* forward declaration */

class nsIAccessibleDocument; /* forward declaration */

class nsIDOMNode; /* forward declaration */

#define NS_ACCESSIBLE_EVENT_TOPIC "accessible-event"

/* starting interface:    nsIAccessibleEvent */
#define NS_IACCESSIBLEEVENT_IID_STR "fd1378c5-c606-4a5e-a321-8e7fc107e5cf"

#define NS_IACCESSIBLEEVENT_IID \
  {0xfd1378c5, 0xc606, 0x4a5e, \
    { 0xa3, 0x21, 0x8e, 0x7f, 0xc1, 0x07, 0xe5, 0xcf }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEEVENT_IID)

  enum { EVENT_SHOW = 1U };

  enum { EVENT_HIDE = 2U };

  enum { EVENT_REORDER = 3U };

  enum { EVENT_ACTIVE_DECENDENT_CHANGED = 4U };

  enum { EVENT_FOCUS = 5U };

  enum { EVENT_STATE_CHANGE = 6U };

  enum { EVENT_LOCATION_CHANGE = 7U };

  enum { EVENT_NAME_CHANGE = 8U };

  enum { EVENT_DESCRIPTION_CHANGE = 9U };

  enum { EVENT_VALUE_CHANGE = 10U };

  enum { EVENT_HELP_CHANGE = 11U };

  enum { EVENT_DEFACTION_CHANGE = 12U };

  enum { EVENT_ACTION_CHANGE = 13U };

  enum { EVENT_ACCELERATOR_CHANGE = 14U };

  enum { EVENT_SELECTION = 15U };

  enum { EVENT_SELECTION_ADD = 16U };

  enum { EVENT_SELECTION_REMOVE = 17U };

  enum { EVENT_SELECTION_WITHIN = 18U };

  enum { EVENT_ALERT = 19U };

  enum { EVENT_FOREGROUND = 20U };

  enum { EVENT_MENU_START = 21U };

  enum { EVENT_MENU_END = 22U };

  enum { EVENT_MENUPOPUP_START = 23U };

  enum { EVENT_MENUPOPUP_END = 24U };

  enum { EVENT_CAPTURE_START = 25U };

  enum { EVENT_CAPTURE_END = 26U };

  enum { EVENT_MOVESIZE_START = 27U };

  enum { EVENT_MOVESIZE_END = 28U };

  enum { EVENT_CONTEXTHELP_START = 29U };

  enum { EVENT_CONTEXTHELP_END = 30U };

  enum { EVENT_DRAGDROP_START = 31U };

  enum { EVENT_DRAGDROP_END = 32U };

  enum { EVENT_DIALOG_START = 33U };

  enum { EVENT_DIALOG_END = 34U };

  enum { EVENT_SCROLLING_START = 35U };

  enum { EVENT_SCROLLING_END = 36U };

  enum { EVENT_MINIMIZE_START = 37U };

  enum { EVENT_MINIMIZE_END = 38U };

  enum { EVENT_DOCUMENT_LOAD_COMPLETE = 39U };

  enum { EVENT_DOCUMENT_RELOAD = 40U };

  enum { EVENT_DOCUMENT_LOAD_STOPPED = 41U };

  enum { EVENT_DOCUMENT_ATTRIBUTES_CHANGED = 42U };

  enum { EVENT_DOCUMENT_CONTENT_CHANGED = 43U };

  enum { EVENT_PROPERTY_CHANGED = 44U };

  enum { EVENT_SELECTION_CHANGED = 45U };

  enum { EVENT_TEXT_ATTRIBUTE_CHANGED = 46U };

  enum { EVENT_TEXT_CARET_MOVED = 47U };

  enum { EVENT_TEXT_CHANGED = 48U };

  enum { EVENT_TEXT_INSERTED = 49U };

  enum { EVENT_TEXT_REMOVED = 50U };

  enum { EVENT_TEXT_UPDATED = 51U };

  enum { EVENT_TEXT_SELECTION_CHANGED = 52U };

  enum { EVENT_VISIBLE_DATA_CHANGED = 53U };

  enum { EVENT_TEXT_COLUMN_CHANGED = 54U };

  enum { EVENT_SECTION_CHANGED = 55U };

  enum { EVENT_TABLE_CAPTION_CHANGED = 56U };

  enum { EVENT_TABLE_MODEL_CHANGED = 57U };

  enum { EVENT_TABLE_SUMMARY_CHANGED = 58U };

  enum { EVENT_TABLE_ROW_DESCRIPTION_CHANGED = 59U };

  enum { EVENT_TABLE_ROW_HEADER_CHANGED = 60U };

  enum { EVENT_TABLE_ROW_INSERT = 61U };

  enum { EVENT_TABLE_ROW_DELETE = 62U };

  enum { EVENT_TABLE_ROW_REORDER = 63U };

  enum { EVENT_TABLE_COLUMN_DESCRIPTION_CHANGED = 64U };

  enum { EVENT_TABLE_COLUMN_HEADER_CHANGED = 65U };

  enum { EVENT_TABLE_COLUMN_INSERT = 66U };

  enum { EVENT_TABLE_COLUMN_DELETE = 67U };

  enum { EVENT_TABLE_COLUMN_REORDER = 68U };

  enum { EVENT_WINDOW_ACTIVATE = 69U };

  enum { EVENT_WINDOW_CREATE = 70U };

  enum { EVENT_WINDOW_DEACTIVATE = 71U };

  enum { EVENT_WINDOW_DESTROY = 72U };

  enum { EVENT_WINDOW_MAXIMIZE = 73U };

  enum { EVENT_WINDOW_MINIMIZE = 74U };

  enum { EVENT_WINDOW_RESIZE = 75U };

  enum { EVENT_WINDOW_RESTORE = 76U };

  enum { EVENT_HYPERLINK_END_INDEX_CHANGED = 77U };

  enum { EVENT_HYPERLINK_NUMBER_OF_ANCHORS_CHANGED = 78U };

  enum { EVENT_HYPERLINK_SELECTED_LINK_CHANGED = 79U };

  enum { EVENT_HYPERTEXT_LINK_ACTIVATED = 80U };

  enum { EVENT_HYPERTEXT_LINK_SELECTED = 81U };

  enum { EVENT_HYPERLINK_START_INDEX_CHANGED = 82U };

  enum { EVENT_HYPERTEXT_CHANGED = 83U };

  enum { EVENT_HYPERTEXT_NLINKS_CHANGED = 84U };

  enum { EVENT_OBJECT_ATTRIBUTE_CHANGED = 85U };

  enum { EVENT_PAGE_CHANGED = 86U };

  enum { EVENT_LAST_ENTRY = 87U };

  /* readonly attribute unsigned long eventType; */
  NS_SCRIPTABLE NS_IMETHOD GetEventType(PRUint32 *aEventType) = 0;

  /* readonly attribute nsIAccessible accessible; */
  NS_SCRIPTABLE NS_IMETHOD GetAccessible(nsIAccessible * *aAccessible) = 0;

  /* readonly attribute nsIAccessibleDocument accessibleDocument; */
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleDocument(nsIAccessibleDocument * *aAccessibleDocument) = 0;

  /* readonly attribute nsIDOMNode DOMNode; */
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode) = 0;

  /* readonly attribute boolean isFromUserInput; */
  NS_SCRIPTABLE NS_IMETHOD GetIsFromUserInput(PRBool *aIsFromUserInput) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleEvent, NS_IACCESSIBLEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetEventType(PRUint32 *aEventType); \
  NS_SCRIPTABLE NS_IMETHOD GetAccessible(nsIAccessible * *aAccessible); \
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleDocument(nsIAccessibleDocument * *aAccessibleDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode); \
  NS_SCRIPTABLE NS_IMETHOD GetIsFromUserInput(PRBool *aIsFromUserInput); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEventType(PRUint32 *aEventType) { return _to GetEventType(aEventType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessible(nsIAccessible * *aAccessible) { return _to GetAccessible(aAccessible); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleDocument(nsIAccessibleDocument * *aAccessibleDocument) { return _to GetAccessibleDocument(aAccessibleDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode) { return _to GetDOMNode(aDOMNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsFromUserInput(PRBool *aIsFromUserInput) { return _to GetIsFromUserInput(aIsFromUserInput); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEventType(PRUint32 *aEventType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventType(aEventType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessible(nsIAccessible * *aAccessible) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessible(aAccessible); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleDocument(nsIAccessibleDocument * *aAccessibleDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessibleDocument(aAccessibleDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOMNode(nsIDOMNode * *aDOMNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOMNode(aDOMNode); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsFromUserInput(PRBool *aIsFromUserInput) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFromUserInput(aIsFromUserInput); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleEvent : public nsIAccessibleEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEEVENT

  nsAccessibleEvent();

private:
  ~nsAccessibleEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleEvent, nsIAccessibleEvent)

nsAccessibleEvent::nsAccessibleEvent()
{
  /* member initializers and constructor code */
}

nsAccessibleEvent::~nsAccessibleEvent()
{
  /* destructor code */
}

/* readonly attribute unsigned long eventType; */
NS_IMETHODIMP nsAccessibleEvent::GetEventType(PRUint32 *aEventType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessible accessible; */
NS_IMETHODIMP nsAccessibleEvent::GetAccessible(nsIAccessible * *aAccessible)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIAccessibleDocument accessibleDocument; */
NS_IMETHODIMP nsAccessibleEvent::GetAccessibleDocument(nsIAccessibleDocument * *aAccessibleDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode DOMNode; */
NS_IMETHODIMP nsAccessibleEvent::GetDOMNode(nsIDOMNode * *aDOMNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isFromUserInput; */
NS_IMETHODIMP nsAccessibleEvent::GetIsFromUserInput(PRBool *aIsFromUserInput)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAccessibleStateChangeEvent */
#define NS_IACCESSIBLESTATECHANGEEVENT_IID_STR "9addd25d-8fa1-415e-94ec-6038f220d3e4"

#define NS_IACCESSIBLESTATECHANGEEVENT_IID \
  {0x9addd25d, 0x8fa1, 0x415e, \
    { 0x94, 0xec, 0x60, 0x38, 0xf2, 0x20, 0xd3, 0xe4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleStateChangeEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLESTATECHANGEEVENT_IID)

  /* readonly attribute unsigned long state; */
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState) = 0;

  /* boolean isExtraState (); */
  NS_SCRIPTABLE NS_IMETHOD IsExtraState(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean isEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleStateChangeEvent, NS_IACCESSIBLESTATECHANGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLESTATECHANGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState); \
  NS_SCRIPTABLE NS_IMETHOD IsExtraState(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLESTATECHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState) { return _to GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD IsExtraState(PRBool *_retval NS_OUTPARAM) { return _to IsExtraState(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return _to IsEnabled(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLESTATECHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRUint32 *aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD IsExtraState(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsExtraState(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEnabled(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleStateChangeEvent : public nsIAccessibleStateChangeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLESTATECHANGEEVENT

  nsAccessibleStateChangeEvent();

private:
  ~nsAccessibleStateChangeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleStateChangeEvent, nsIAccessibleStateChangeEvent)

nsAccessibleStateChangeEvent::nsAccessibleStateChangeEvent()
{
  /* member initializers and constructor code */
}

nsAccessibleStateChangeEvent::~nsAccessibleStateChangeEvent()
{
  /* destructor code */
}

/* readonly attribute unsigned long state; */
NS_IMETHODIMP nsAccessibleStateChangeEvent::GetState(PRUint32 *aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isExtraState (); */
NS_IMETHODIMP nsAccessibleStateChangeEvent::IsExtraState(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isEnabled (); */
NS_IMETHODIMP nsAccessibleStateChangeEvent::IsEnabled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAccessibleTextChangeEvent */
#define NS_IACCESSIBLETEXTCHANGEEVENT_IID_STR "21e0f8bd-5638-4964-870b-3c8e944ac4c4"

#define NS_IACCESSIBLETEXTCHANGEEVENT_IID \
  {0x21e0f8bd, 0x5638, 0x4964, \
    { 0x87, 0x0b, 0x3c, 0x8e, 0x94, 0x4a, 0xc4, 0xc4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleTextChangeEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLETEXTCHANGEEVENT_IID)

  /* readonly attribute long start; */
  NS_SCRIPTABLE NS_IMETHOD GetStart(PRInt32 *aStart) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* boolean isInserted (); */
  NS_SCRIPTABLE NS_IMETHOD IsInserted(PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute DOMString modifiedText; */
  NS_SCRIPTABLE NS_IMETHOD GetModifiedText(nsAString & aModifiedText) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleTextChangeEvent, NS_IACCESSIBLETEXTCHANGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLETEXTCHANGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetStart(PRInt32 *aStart); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD IsInserted(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetModifiedText(nsAString & aModifiedText); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLETEXTCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStart(PRInt32 *aStart) { return _to GetStart(aStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD IsInserted(PRBool *_retval NS_OUTPARAM) { return _to IsInserted(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetModifiedText(nsAString & aModifiedText) { return _to GetModifiedText(aModifiedText); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLETEXTCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetStart(PRInt32 *aStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStart(aStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD IsInserted(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsInserted(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetModifiedText(nsAString & aModifiedText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetModifiedText(aModifiedText); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleTextChangeEvent : public nsIAccessibleTextChangeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLETEXTCHANGEEVENT

  nsAccessibleTextChangeEvent();

private:
  ~nsAccessibleTextChangeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleTextChangeEvent, nsIAccessibleTextChangeEvent)

nsAccessibleTextChangeEvent::nsAccessibleTextChangeEvent()
{
  /* member initializers and constructor code */
}

nsAccessibleTextChangeEvent::~nsAccessibleTextChangeEvent()
{
  /* destructor code */
}

/* readonly attribute long start; */
NS_IMETHODIMP nsAccessibleTextChangeEvent::GetStart(PRInt32 *aStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsAccessibleTextChangeEvent::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isInserted (); */
NS_IMETHODIMP nsAccessibleTextChangeEvent::IsInserted(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString modifiedText; */
NS_IMETHODIMP nsAccessibleTextChangeEvent::GetModifiedText(nsAString & aModifiedText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAccessibleCaretMoveEvent */
#define NS_IACCESSIBLECARETMOVEEVENT_IID_STR "5675c486-a230-4d85-a4bd-33670826d5ff"

#define NS_IACCESSIBLECARETMOVEEVENT_IID \
  {0x5675c486, 0xa230, 0x4d85, \
    { 0xa4, 0xbd, 0x33, 0x67, 0x08, 0x26, 0xd5, 0xff }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleCaretMoveEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLECARETMOVEEVENT_IID)

  /* readonly attribute long caretOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleCaretMoveEvent, NS_IACCESSIBLECARETMOVEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLECARETMOVEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLECARETMOVEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset) { return _to GetCaretOffset(aCaretOffset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLECARETMOVEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCaretOffset(PRInt32 *aCaretOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCaretOffset(aCaretOffset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleCaretMoveEvent : public nsIAccessibleCaretMoveEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLECARETMOVEEVENT

  nsAccessibleCaretMoveEvent();

private:
  ~nsAccessibleCaretMoveEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleCaretMoveEvent, nsIAccessibleCaretMoveEvent)

nsAccessibleCaretMoveEvent::nsAccessibleCaretMoveEvent()
{
  /* member initializers and constructor code */
}

nsAccessibleCaretMoveEvent::~nsAccessibleCaretMoveEvent()
{
  /* destructor code */
}

/* readonly attribute long caretOffset; */
NS_IMETHODIMP nsAccessibleCaretMoveEvent::GetCaretOffset(PRInt32 *aCaretOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAccessibleTableChangeEvent */
#define NS_IACCESSIBLETABLECHANGEEVENT_IID_STR "df517997-ed52-4ea2-b310-2f8e0fe64572"

#define NS_IACCESSIBLETABLECHANGEEVENT_IID \
  {0xdf517997, 0xed52, 0x4ea2, \
    { 0xb3, 0x10, 0x2f, 0x8e, 0x0f, 0xe6, 0x45, 0x72 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleTableChangeEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLETABLECHANGEEVENT_IID)

  /* readonly attribute long rowOrColIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetRowOrColIndex(PRInt32 *aRowOrColIndex) = 0;

  /* readonly attribute long numRowsOrCols; */
  NS_SCRIPTABLE NS_IMETHOD GetNumRowsOrCols(PRInt32 *aNumRowsOrCols) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleTableChangeEvent, NS_IACCESSIBLETABLECHANGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLETABLECHANGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetRowOrColIndex(PRInt32 *aRowOrColIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetNumRowsOrCols(PRInt32 *aNumRowsOrCols); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLETABLECHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRowOrColIndex(PRInt32 *aRowOrColIndex) { return _to GetRowOrColIndex(aRowOrColIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumRowsOrCols(PRInt32 *aNumRowsOrCols) { return _to GetNumRowsOrCols(aNumRowsOrCols); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLETABLECHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRowOrColIndex(PRInt32 *aRowOrColIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRowOrColIndex(aRowOrColIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumRowsOrCols(PRInt32 *aNumRowsOrCols) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumRowsOrCols(aNumRowsOrCols); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleTableChangeEvent : public nsIAccessibleTableChangeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLETABLECHANGEEVENT

  nsAccessibleTableChangeEvent();

private:
  ~nsAccessibleTableChangeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleTableChangeEvent, nsIAccessibleTableChangeEvent)

nsAccessibleTableChangeEvent::nsAccessibleTableChangeEvent()
{
  /* member initializers and constructor code */
}

nsAccessibleTableChangeEvent::~nsAccessibleTableChangeEvent()
{
  /* destructor code */
}

/* readonly attribute long rowOrColIndex; */
NS_IMETHODIMP nsAccessibleTableChangeEvent::GetRowOrColIndex(PRInt32 *aRowOrColIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long numRowsOrCols; */
NS_IMETHODIMP nsAccessibleTableChangeEvent::GetNumRowsOrCols(PRInt32 *aNumRowsOrCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleEvent_h__ */
