/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleProvider.idl
 */

#ifndef __gen_nsIAccessibleProvider_h__
#define __gen_nsIAccessibleProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAccessibleProvider */
#define NS_IACCESSIBLEPROVIDER_IID_STR "ac0639d5-f95b-4e2b-970c-9eab281fb6a5"

#define NS_IACCESSIBLEPROVIDER_IID \
  {0xac0639d5, 0xf95b, 0x4e2b, \
    { 0x97, 0x0c, 0x9e, 0xab, 0x28, 0x1f, 0xb6, 0xa5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleProvider : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLEPROVIDER_IID)

  enum { NoAccessible = 0 };

  enum { OuterDoc = 1 };

  enum { XULAlert = 4097 };

  enum { XULButton = 4098 };

  enum { XULCheckbox = 4099 };

  enum { XULColorPicker = 4100 };

  enum { XULColorPickerTile = 4101 };

  enum { XULCombobox = 4102 };

  enum { XULDropmarker = 4103 };

  enum { XULGroupbox = 4104 };

  enum { XULImage = 4105 };

  enum { XULLink = 4106 };

  enum { XULListbox = 4107 };

  enum { XULListCell = 4134 };

  enum { XULListHead = 4132 };

  enum { XULListHeader = 4133 };

  enum { XULListitem = 4108 };

  enum { XULMenubar = 4109 };

  enum { XULMenuitem = 4110 };

  enum { XULMenupopup = 4111 };

  enum { XULMenuSeparator = 4112 };

  enum { XULPane = 4113 };

  enum { XULProgressMeter = 4114 };

  enum { XULScale = 4115 };

  enum { XULStatusBar = 4116 };

  enum { XULRadioButton = 4117 };

  enum { XULRadioGroup = 4118 };

  enum { XULTab = 4119 };

  enum { XULTabs = 4120 };

  enum { XULTabpanels = 4121 };

  enum { XULText = 4122 };

  enum { XULTextBox = 4123 };

  enum { XULThumb = 4124 };

  enum { XULTree = 4125 };

  enum { XULTreeColumns = 4126 };

  enum { XULTreeColumnItem = 4127 };

  enum { XULToolbar = 4128 };

  enum { XULToolbarSeparator = 4129 };

  enum { XULTooltip = 4130 };

  enum { XULToolbarButton = 4131 };

  enum { XFormsContainer = 8192 };

  enum { XFormsLabel = 8193 };

  enum { XFormsOutput = 8194 };

  enum { XFormsTrigger = 8195 };

  enum { XFormsInput = 8196 };

  enum { XFormsInputBoolean = 8197 };

  enum { XFormsInputDate = 8198 };

  enum { XFormsSecret = 8199 };

  enum { XFormsSliderRange = 8200 };

  enum { XFormsSelect = 8201 };

  enum { XFormsChoices = 8208 };

  enum { XFormsSelectFull = 8209 };

  enum { XFormsItemCheckgroup = 8210 };

  enum { XFormsItemRadiogroup = 8211 };

  enum { XFormsSelectCombobox = 8212 };

  enum { XFormsItemCombobox = 8213 };

  enum { XFormsDropmarkerWidget = 8449 };

  enum { XFormsCalendarWidget = 8450 };

  enum { XFormsComboboxPopupWidget = 8451 };

  /* readonly attribute long accessibleType; */
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleType(PRInt32 *aAccessibleType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleProvider, NS_IACCESSIBLEPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLEPROVIDER \
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleType(PRInt32 *aAccessibleType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLEPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleType(PRInt32 *aAccessibleType) { return _to GetAccessibleType(aAccessibleType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLEPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAccessibleType(PRInt32 *aAccessibleType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccessibleType(aAccessibleType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleProvider : public nsIAccessibleProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLEPROVIDER

  nsAccessibleProvider();

private:
  ~nsAccessibleProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleProvider, nsIAccessibleProvider)

nsAccessibleProvider::nsAccessibleProvider()
{
  /* member initializers and constructor code */
}

nsAccessibleProvider::~nsAccessibleProvider()
{
  /* destructor code */
}

/* readonly attribute long accessibleType; */
NS_IMETHODIMP nsAccessibleProvider::GetAccessibleType(PRInt32 *aAccessibleType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleProvider_h__ */
