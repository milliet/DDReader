/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsITaskbarPreviewController.idl
 */

#ifndef __gen_nsITaskbarPreviewController_h__
#define __gen_nsITaskbarPreviewController_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocShell; /* forward declaration */

class nsIDOMCanvasRenderingContext2D; /* forward declaration */

class nsITaskbarPreview; /* forward declaration */

class nsITaskbarPreviewButton; /* forward declaration */


/* starting interface:    nsITaskbarPreviewController */
#define NS_ITASKBARPREVIEWCONTROLLER_IID_STR "4fc0afbb-3e22-4fba-ac21-953350af0411"

#define NS_ITASKBARPREVIEWCONTROLLER_IID \
  {0x4fc0afbb, 0x3e22, 0x4fba, \
    { 0xac, 0x21, 0x95, 0x33, 0x50, 0xaf, 0x04, 0x11 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITaskbarPreviewController : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITASKBARPREVIEWCONTROLLER_IID)

  /* readonly attribute unsigned long width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth) = 0;

  /* readonly attribute unsigned long height; */
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight) = 0;

  /* readonly attribute float thumbnailAspectRatio; */
  NS_SCRIPTABLE NS_IMETHOD GetThumbnailAspectRatio(float *aThumbnailAspectRatio) = 0;

  /* boolean drawPreview (in nsIDOMCanvasRenderingContext2D ctx); */
  NS_SCRIPTABLE NS_IMETHOD DrawPreview(nsIDOMCanvasRenderingContext2D *ctx, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean drawThumbnail (in nsIDOMCanvasRenderingContext2D ctx, in unsigned long width, in unsigned long height); */
  NS_SCRIPTABLE NS_IMETHOD DrawThumbnail(nsIDOMCanvasRenderingContext2D *ctx, PRUint32 width, PRUint32 height, PRBool *_retval NS_OUTPARAM) = 0;

  /* void onClose (); */
  NS_SCRIPTABLE NS_IMETHOD OnClose(void) = 0;

  /* boolean onActivate (); */
  NS_SCRIPTABLE NS_IMETHOD OnActivate(PRBool *_retval NS_OUTPARAM) = 0;

  /* void onClick (in nsITaskbarPreviewButton button); */
  NS_SCRIPTABLE NS_IMETHOD OnClick(nsITaskbarPreviewButton *button) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITaskbarPreviewController, NS_ITASKBARPREVIEWCONTROLLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITASKBARPREVIEWCONTROLLER \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetThumbnailAspectRatio(float *aThumbnailAspectRatio); \
  NS_SCRIPTABLE NS_IMETHOD DrawPreview(nsIDOMCanvasRenderingContext2D *ctx, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DrawThumbnail(nsIDOMCanvasRenderingContext2D *ctx, PRUint32 width, PRUint32 height, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnClose(void); \
  NS_SCRIPTABLE NS_IMETHOD OnActivate(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnClick(nsITaskbarPreviewButton *button); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITASKBARPREVIEWCONTROLLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight) { return _to GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetThumbnailAspectRatio(float *aThumbnailAspectRatio) { return _to GetThumbnailAspectRatio(aThumbnailAspectRatio); } \
  NS_SCRIPTABLE NS_IMETHOD DrawPreview(nsIDOMCanvasRenderingContext2D *ctx, PRBool *_retval NS_OUTPARAM) { return _to DrawPreview(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DrawThumbnail(nsIDOMCanvasRenderingContext2D *ctx, PRUint32 width, PRUint32 height, PRBool *_retval NS_OUTPARAM) { return _to DrawThumbnail(ctx, width, height, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnClose(void) { return _to OnClose(); } \
  NS_SCRIPTABLE NS_IMETHOD OnActivate(PRBool *_retval NS_OUTPARAM) { return _to OnActivate(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnClick(nsITaskbarPreviewButton *button) { return _to OnClick(button); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITASKBARPREVIEWCONTROLLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetThumbnailAspectRatio(float *aThumbnailAspectRatio) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThumbnailAspectRatio(aThumbnailAspectRatio); } \
  NS_SCRIPTABLE NS_IMETHOD DrawPreview(nsIDOMCanvasRenderingContext2D *ctx, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DrawPreview(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DrawThumbnail(nsIDOMCanvasRenderingContext2D *ctx, PRUint32 width, PRUint32 height, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DrawThumbnail(ctx, width, height, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnClose(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnClose(); } \
  NS_SCRIPTABLE NS_IMETHOD OnActivate(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnActivate(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnClick(nsITaskbarPreviewButton *button) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnClick(button); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTaskbarPreviewController : public nsITaskbarPreviewController
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITASKBARPREVIEWCONTROLLER

  nsTaskbarPreviewController();

private:
  ~nsTaskbarPreviewController();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTaskbarPreviewController, nsITaskbarPreviewController)

nsTaskbarPreviewController::nsTaskbarPreviewController()
{
  /* member initializers and constructor code */
}

nsTaskbarPreviewController::~nsTaskbarPreviewController()
{
  /* destructor code */
}

/* readonly attribute unsigned long width; */
NS_IMETHODIMP nsTaskbarPreviewController::GetWidth(PRUint32 *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long height; */
NS_IMETHODIMP nsTaskbarPreviewController::GetHeight(PRUint32 *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float thumbnailAspectRatio; */
NS_IMETHODIMP nsTaskbarPreviewController::GetThumbnailAspectRatio(float *aThumbnailAspectRatio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean drawPreview (in nsIDOMCanvasRenderingContext2D ctx); */
NS_IMETHODIMP nsTaskbarPreviewController::DrawPreview(nsIDOMCanvasRenderingContext2D *ctx, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean drawThumbnail (in nsIDOMCanvasRenderingContext2D ctx, in unsigned long width, in unsigned long height); */
NS_IMETHODIMP nsTaskbarPreviewController::DrawThumbnail(nsIDOMCanvasRenderingContext2D *ctx, PRUint32 width, PRUint32 height, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onClose (); */
NS_IMETHODIMP nsTaskbarPreviewController::OnClose()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean onActivate (); */
NS_IMETHODIMP nsTaskbarPreviewController::OnActivate(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onClick (in nsITaskbarPreviewButton button); */
NS_IMETHODIMP nsTaskbarPreviewController::OnClick(nsITaskbarPreviewButton *button)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITaskbarPreviewController_h__ */
