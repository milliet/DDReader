/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/embedding/browser/webBrowser/nsIEmbeddingSiteWindow.idl
 */

#ifndef __gen_nsIEmbeddingSiteWindow_h__
#define __gen_nsIEmbeddingSiteWindow_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIEmbeddingSiteWindow */
#define NS_IEMBEDDINGSITEWINDOW_IID_STR "3e5432cd-9568-4bd1-8cbe-d50aba110743"

#define NS_IEMBEDDINGSITEWINDOW_IID \
  {0x3e5432cd, 0x9568, 0x4bd1, \
    { 0x8c, 0xbe, 0xd5, 0x0a, 0xba, 0x11, 0x07, 0x43 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEmbeddingSiteWindow : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEMBEDDINGSITEWINDOW_IID)

  enum { DIM_FLAGS_POSITION = 1U };

  enum { DIM_FLAGS_SIZE_INNER = 2U };

  enum { DIM_FLAGS_SIZE_OUTER = 4U };

  /* void setDimensions (in unsigned long flags, in long x, in long y, in long cx, in long cy); */
  NS_SCRIPTABLE NS_IMETHOD SetDimensions(PRUint32 flags, PRInt32 x, PRInt32 y, PRInt32 cx, PRInt32 cy) = 0;

  /* void getDimensions (in unsigned long flags, out long x, out long y, out long cx, out long cy); */
  NS_SCRIPTABLE NS_IMETHOD GetDimensions(PRUint32 flags, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *cx NS_OUTPARAM, PRInt32 *cy NS_OUTPARAM) = 0;

  /* void setFocus (); */
  NS_SCRIPTABLE NS_IMETHOD SetFocus(void) = 0;

  /* attribute boolean visibility; */
  NS_SCRIPTABLE NS_IMETHOD GetVisibility(PRBool *aVisibility) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVisibility(PRBool aVisibility) = 0;

  /* attribute wstring title; */
  NS_SCRIPTABLE NS_IMETHOD GetTitle(PRUnichar * *aTitle) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const PRUnichar * aTitle) = 0;

  /* [noscript] readonly attribute voidPtr siteWindow; */
  NS_IMETHOD GetSiteWindow(void **aSiteWindow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEmbeddingSiteWindow, NS_IEMBEDDINGSITEWINDOW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEMBEDDINGSITEWINDOW \
  NS_SCRIPTABLE NS_IMETHOD SetDimensions(PRUint32 flags, PRInt32 x, PRInt32 y, PRInt32 cx, PRInt32 cy); \
  NS_SCRIPTABLE NS_IMETHOD GetDimensions(PRUint32 flags, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *cx NS_OUTPARAM, PRInt32 *cy NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFocus(void); \
  NS_SCRIPTABLE NS_IMETHOD GetVisibility(PRBool *aVisibility); \
  NS_SCRIPTABLE NS_IMETHOD SetVisibility(PRBool aVisibility); \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(PRUnichar * *aTitle); \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const PRUnichar * aTitle); \
  NS_IMETHOD GetSiteWindow(void **aSiteWindow); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEMBEDDINGSITEWINDOW(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetDimensions(PRUint32 flags, PRInt32 x, PRInt32 y, PRInt32 cx, PRInt32 cy) { return _to SetDimensions(flags, x, y, cx, cy); } \
  NS_SCRIPTABLE NS_IMETHOD GetDimensions(PRUint32 flags, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *cx NS_OUTPARAM, PRInt32 *cy NS_OUTPARAM) { return _to GetDimensions(flags, x, y, cx, cy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocus(void) { return _to SetFocus(); } \
  NS_SCRIPTABLE NS_IMETHOD GetVisibility(PRBool *aVisibility) { return _to GetVisibility(aVisibility); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisibility(PRBool aVisibility) { return _to SetVisibility(aVisibility); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(PRUnichar * *aTitle) { return _to GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const PRUnichar * aTitle) { return _to SetTitle(aTitle); } \
  NS_IMETHOD GetSiteWindow(void **aSiteWindow) { return _to GetSiteWindow(aSiteWindow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEMBEDDINGSITEWINDOW(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetDimensions(PRUint32 flags, PRInt32 x, PRInt32 y, PRInt32 cx, PRInt32 cy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDimensions(flags, x, y, cx, cy); } \
  NS_SCRIPTABLE NS_IMETHOD GetDimensions(PRUint32 flags, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *cx NS_OUTPARAM, PRInt32 *cy NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDimensions(flags, x, y, cx, cy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocus(); } \
  NS_SCRIPTABLE NS_IMETHOD GetVisibility(PRBool *aVisibility) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVisibility(aVisibility); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisibility(PRBool aVisibility) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVisibility(aVisibility); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(PRUnichar * *aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const PRUnichar * aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_IMETHOD GetSiteWindow(void **aSiteWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSiteWindow(aSiteWindow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEmbeddingSiteWindow : public nsIEmbeddingSiteWindow
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEMBEDDINGSITEWINDOW

  nsEmbeddingSiteWindow();

private:
  ~nsEmbeddingSiteWindow();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEmbeddingSiteWindow, nsIEmbeddingSiteWindow)

nsEmbeddingSiteWindow::nsEmbeddingSiteWindow()
{
  /* member initializers and constructor code */
}

nsEmbeddingSiteWindow::~nsEmbeddingSiteWindow()
{
  /* destructor code */
}

/* void setDimensions (in unsigned long flags, in long x, in long y, in long cx, in long cy); */
NS_IMETHODIMP nsEmbeddingSiteWindow::SetDimensions(PRUint32 flags, PRInt32 x, PRInt32 y, PRInt32 cx, PRInt32 cy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDimensions (in unsigned long flags, out long x, out long y, out long cx, out long cy); */
NS_IMETHODIMP nsEmbeddingSiteWindow::GetDimensions(PRUint32 flags, PRInt32 *x NS_OUTPARAM, PRInt32 *y NS_OUTPARAM, PRInt32 *cx NS_OUTPARAM, PRInt32 *cy NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFocus (); */
NS_IMETHODIMP nsEmbeddingSiteWindow::SetFocus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean visibility; */
NS_IMETHODIMP nsEmbeddingSiteWindow::GetVisibility(PRBool *aVisibility)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEmbeddingSiteWindow::SetVisibility(PRBool aVisibility)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute wstring title; */
NS_IMETHODIMP nsEmbeddingSiteWindow::GetTitle(PRUnichar * *aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsEmbeddingSiteWindow::SetTitle(const PRUnichar * aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute voidPtr siteWindow; */
NS_IMETHODIMP nsEmbeddingSiteWindow::GetSiteWindow(void **aSiteWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEmbeddingSiteWindow_h__ */
