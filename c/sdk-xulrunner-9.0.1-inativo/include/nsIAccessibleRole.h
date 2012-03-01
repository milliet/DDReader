/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleRole.idl
 */

#ifndef __gen_nsIAccessibleRole_h__
#define __gen_nsIAccessibleRole_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAccessibleRole */
#define NS_IACCESSIBLEROLE_IID_STR "f134da65-39a8-4330-843c-5bd42780b34c"

#define NS_IACCESSIBLEROLE_IID \
  {0xf134da65, 0x39a8, 0x4330, \
    { 0x84, 0x3c, 0x5b, 0xd4, 0x27, 0x80, 0xb3, 0x4c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleRole : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEROLE_IID)

  enum { ROLE_NOTHING = 0U };

  enum { ROLE_TITLEBAR = 1U };

  enum { ROLE_MENUBAR = 2U };

  enum { ROLE_SCROLLBAR = 3U };

  enum { ROLE_GRIP = 4U };

  enum { ROLE_SOUND = 5U };

  enum { ROLE_CURSOR = 6U };

  enum { ROLE_CARET = 7U };

  enum { ROLE_ALERT = 8U };

  enum { ROLE_WINDOW = 9U };

  enum { ROLE_INTERNAL_FRAME = 10U };

  enum { ROLE_MENUPOPUP = 11U };

  enum { ROLE_MENUITEM = 12U };

  enum { ROLE_TOOLTIP = 13U };

  enum { ROLE_APPLICATION = 14U };

  enum { ROLE_DOCUMENT = 15U };

  enum { ROLE_PANE = 16U };

  enum { ROLE_CHART = 17U };

  enum { ROLE_DIALOG = 18U };

  enum { ROLE_BORDER = 19U };

  enum { ROLE_GROUPING = 20U };

  enum { ROLE_SEPARATOR = 21U };

  enum { ROLE_TOOLBAR = 22U };

  enum { ROLE_STATUSBAR = 23U };

  enum { ROLE_TABLE = 24U };

  enum { ROLE_COLUMNHEADER = 25U };

  enum { ROLE_ROWHEADER = 26U };

  enum { ROLE_COLUMN = 27U };

  enum { ROLE_ROW = 28U };

  enum { ROLE_CELL = 29U };

  enum { ROLE_LINK = 30U };

  enum { ROLE_HELPBALLOON = 31U };

  enum { ROLE_CHARACTER = 32U };

  enum { ROLE_LIST = 33U };

  enum { ROLE_LISTITEM = 34U };

  enum { ROLE_OUTLINE = 35U };

  enum { ROLE_OUTLINEITEM = 36U };

  enum { ROLE_PAGETAB = 37U };

  enum { ROLE_PROPERTYPAGE = 38U };

  enum { ROLE_INDICATOR = 39U };

  enum { ROLE_GRAPHIC = 40U };

  enum { ROLE_STATICTEXT = 41U };

  enum { ROLE_TEXT_LEAF = 42U };

  enum { ROLE_PUSHBUTTON = 43U };

  enum { ROLE_CHECKBUTTON = 44U };

  enum { ROLE_RADIOBUTTON = 45U };

  enum { ROLE_COMBOBOX = 46U };

  enum { ROLE_DROPLIST = 47U };

  enum { ROLE_PROGRESSBAR = 48U };

  enum { ROLE_DIAL = 49U };

  enum { ROLE_HOTKEYFIELD = 50U };

  enum { ROLE_SLIDER = 51U };

  enum { ROLE_SPINBUTTON = 52U };

  enum { ROLE_DIAGRAM = 53U };

  enum { ROLE_ANIMATION = 54U };

  enum { ROLE_EQUATION = 55U };

  enum { ROLE_BUTTONDROPDOWN = 56U };

  enum { ROLE_BUTTONMENU = 57U };

  enum { ROLE_BUTTONDROPDOWNGRID = 58U };

  enum { ROLE_WHITESPACE = 59U };

  enum { ROLE_PAGETABLIST = 60U };

  enum { ROLE_CLOCK = 61U };

  enum { ROLE_SPLITBUTTON = 62U };

  enum { ROLE_IPADDRESS = 63U };

  enum { ROLE_ACCEL_LABEL = 64U };

  enum { ROLE_ARROW = 65U };

  enum { ROLE_CANVAS = 66U };

  enum { ROLE_CHECK_MENU_ITEM = 67U };

  enum { ROLE_COLOR_CHOOSER = 68U };

  enum { ROLE_DATE_EDITOR = 69U };

  enum { ROLE_DESKTOP_ICON = 70U };

  enum { ROLE_DESKTOP_FRAME = 71U };

  enum { ROLE_DIRECTORY_PANE = 72U };

  enum { ROLE_FILE_CHOOSER = 73U };

  enum { ROLE_FONT_CHOOSER = 74U };

  enum { ROLE_CHROME_WINDOW = 75U };

  enum { ROLE_GLASS_PANE = 76U };

  enum { ROLE_HTML_CONTAINER = 77U };

  enum { ROLE_ICON = 78U };

  enum { ROLE_LABEL = 79U };

  enum { ROLE_LAYERED_PANE = 80U };

  enum { ROLE_OPTION_PANE = 81U };

  enum { ROLE_PASSWORD_TEXT = 82U };

  enum { ROLE_POPUP_MENU = 83U };

  enum { ROLE_RADIO_MENU_ITEM = 84U };

  enum { ROLE_ROOT_PANE = 85U };

  enum { ROLE_SCROLL_PANE = 86U };

  enum { ROLE_SPLIT_PANE = 87U };

  enum { ROLE_TABLE_COLUMN_HEADER = 88U };

  enum { ROLE_TABLE_ROW_HEADER = 89U };

  enum { ROLE_TEAR_OFF_MENU_ITEM = 90U };

  enum { ROLE_TERMINAL = 91U };

  enum { ROLE_TEXT_CONTAINER = 92U };

  enum { ROLE_TOGGLE_BUTTON = 93U };

  enum { ROLE_TREE_TABLE = 94U };

  enum { ROLE_VIEWPORT = 95U };

  enum { ROLE_HEADER = 96U };

  enum { ROLE_FOOTER = 97U };

  enum { ROLE_PARAGRAPH = 98U };

  enum { ROLE_RULER = 99U };

  enum { ROLE_AUTOCOMPLETE = 100U };

  enum { ROLE_EDITBAR = 101U };

  enum { ROLE_ENTRY = 102U };

  enum { ROLE_CAPTION = 103U };

  enum { ROLE_DOCUMENT_FRAME = 104U };

  enum { ROLE_HEADING = 105U };

  enum { ROLE_PAGE = 106U };

  enum { ROLE_SECTION = 107U };

  enum { ROLE_REDUNDANT_OBJECT = 108U };

  enum { ROLE_FORM = 109U };

  enum { ROLE_IME = 110U };

  enum { ROLE_APP_ROOT = 111U };

  enum { ROLE_PARENT_MENUITEM = 112U };

  enum { ROLE_CALENDAR = 113U };

  enum { ROLE_COMBOBOX_LIST = 114U };

  enum { ROLE_COMBOBOX_OPTION = 115U };

  enum { ROLE_IMAGE_MAP = 116U };

  enum { ROLE_OPTION = 117U };

  enum { ROLE_RICH_OPTION = 118U };

  enum { ROLE_LISTBOX = 119U };

  enum { ROLE_FLAT_EQUATION = 120U };

  enum { ROLE_GRID_CELL = 121U };

  enum { ROLE_EMBEDDED_OBJECT = 122U };

  enum { ROLE_NOTE = 123U };

  enum { ROLE_LAST_ENTRY = 124U };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleRole, NS_IACCESSIBLEROLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEROLE \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEROLE(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEROLE(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleRole : public nsIAccessibleRole
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEROLE

  nsAccessibleRole();

private:
  ~nsAccessibleRole();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleRole, nsIAccessibleRole)

nsAccessibleRole::nsAccessibleRole()
{
  /* member initializers and constructor code */
}

nsAccessibleRole::~nsAccessibleRole()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleRole_h__ */
