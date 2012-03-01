/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/embedding/base/nsIWindowProvider.idl
 */

#ifndef __gen_nsIWindowProvider_h__
#define __gen_nsIWindowProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIWindowProvider */
#define NS_IWINDOWPROVIDER_IID_STR "f607bd66-08e5-4d2e-ad83-9f9f3ca17658"

#define NS_IWINDOWPROVIDER_IID \
  {0xf607bd66, 0x08e5, 0x4d2e, \
    { 0xad, 0x83, 0x9f, 0x9f, 0x3c, 0xa1, 0x76, 0x58 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWindowProvider : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWINDOWPROVIDER_IID)

  /* nsIDOMWindow provideWindow (in nsIDOMWindow aParent, in unsigned long aChromeFlags, in boolean aCalledFromJS, in boolean aPositionSpecified, in boolean aSizeSpecified, in nsIURI aURI, in AString aName, in AUTF8String aFeatures, out boolean aWindowIsNew); */
  NS_SCRIPTABLE NS_IMETHOD ProvideWindow(nsIDOMWindow *aParent, PRUint32 aChromeFlags, PRBool aCalledFromJS, PRBool aPositionSpecified, PRBool aSizeSpecified, nsIURI *aURI, const nsAString & aName, const nsACString & aFeatures, PRBool *aWindowIsNew NS_OUTPARAM, nsIDOMWindow * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWindowProvider, NS_IWINDOWPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWINDOWPROVIDER \
  NS_SCRIPTABLE NS_IMETHOD ProvideWindow(nsIDOMWindow *aParent, PRUint32 aChromeFlags, PRBool aCalledFromJS, PRBool aPositionSpecified, PRBool aSizeSpecified, nsIURI *aURI, const nsAString & aName, const nsACString & aFeatures, PRBool *aWindowIsNew NS_OUTPARAM, nsIDOMWindow * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWINDOWPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ProvideWindow(nsIDOMWindow *aParent, PRUint32 aChromeFlags, PRBool aCalledFromJS, PRBool aPositionSpecified, PRBool aSizeSpecified, nsIURI *aURI, const nsAString & aName, const nsACString & aFeatures, PRBool *aWindowIsNew NS_OUTPARAM, nsIDOMWindow * *_retval NS_OUTPARAM) { return _to ProvideWindow(aParent, aChromeFlags, aCalledFromJS, aPositionSpecified, aSizeSpecified, aURI, aName, aFeatures, aWindowIsNew, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWINDOWPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ProvideWindow(nsIDOMWindow *aParent, PRUint32 aChromeFlags, PRBool aCalledFromJS, PRBool aPositionSpecified, PRBool aSizeSpecified, nsIURI *aURI, const nsAString & aName, const nsACString & aFeatures, PRBool *aWindowIsNew NS_OUTPARAM, nsIDOMWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ProvideWindow(aParent, aChromeFlags, aCalledFromJS, aPositionSpecified, aSizeSpecified, aURI, aName, aFeatures, aWindowIsNew, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWindowProvider : public nsIWindowProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWINDOWPROVIDER

  nsWindowProvider();

private:
  ~nsWindowProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWindowProvider, nsIWindowProvider)

nsWindowProvider::nsWindowProvider()
{
  /* member initializers and constructor code */
}

nsWindowProvider::~nsWindowProvider()
{
  /* destructor code */
}

/* nsIDOMWindow provideWindow (in nsIDOMWindow aParent, in unsigned long aChromeFlags, in boolean aCalledFromJS, in boolean aPositionSpecified, in boolean aSizeSpecified, in nsIURI aURI, in AString aName, in AUTF8String aFeatures, out boolean aWindowIsNew); */
NS_IMETHODIMP nsWindowProvider::ProvideWindow(nsIDOMWindow *aParent, PRUint32 aChromeFlags, PRBool aCalledFromJS, PRBool aPositionSpecified, PRBool aSizeSpecified, nsIURI *aURI, const nsAString & aName, const nsACString & aFeatures, PRBool *aWindowIsNew NS_OUTPARAM, nsIDOMWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWindowProvider_h__ */
