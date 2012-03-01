/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/plugins/base/nsIPluginInstanceOwner.idl
 */

#ifndef __gen_nsIPluginInstanceOwner_h__
#define __gen_nsIPluginInstanceOwner_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nspluginroot_h__
#include "nspluginroot.h"
#endif

#ifndef __gen_nsIInputStream_h__
#include "nsIInputStream.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocument; /* forward declaration */

#include "npapi.h"
#include "nsNPAPIPluginInstance.h"
class nsPluginEvent;

/* starting interface:    nsIPluginInstanceOwner */
#define NS_IPLUGININSTANCEOWNER_IID_STR "17e89c1f-ae62-448e-83d5-c33fa6e07a19"

#define NS_IPLUGININSTANCEOWNER_IID \
  {0x17e89c1f, 0xae62, 0x448e, \
    { 0x83, 0xd5, 0xc3, 0x3f, 0xa6, 0xe0, 0x7a, 0x19 }}

class nsIPluginInstanceOwner : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPLUGININSTANCEOWNER_IID)

  /* void setInstance (in nsNPAPIPluginInstancePtr aInstance); */
  NS_IMETHOD SetInstance(nsNPAPIPluginInstance *aInstance) = 0;

  /* nsNPAPIPluginInstancePtr getInstance (); */
  NS_IMETHOD GetInstance(nsNPAPIPluginInstance **_retval NS_OUTPARAM) = 0;

  /* void getWindow (in NPWindowStarRef aWindow); */
  NS_IMETHOD GetWindow(NPWindow * & aWindow) = 0;

  /* readonly attribute PRInt32 mode; */
  NS_IMETHOD GetMode(PRInt32 *aMode) = 0;

  /* void createWidget (); */
  NS_IMETHOD CreateWidget(void) = 0;

    /**
   * Called when there is a valid target so that the proper
   * frame can be updated with new content. will not be called
   * with nsnull aTarget.
   */
  NS_IMETHOD
  GetURL(const char *aURL, const char *aTarget, 
         nsIInputStream *aPostStream,
         void *aHeadersData, PRUint32 aHeadersDataLen) = 0;
  /* void showStatus (in string aStatusMsg); */
  NS_IMETHOD ShowStatus(const char * aStatusMsg) = 0;

    NS_IMETHOD ShowStatus(const PRUnichar *aStatusMsg) = 0;
  /* readonly attribute nsIDocument document; */
  NS_IMETHOD GetDocument(nsIDocument * *aDocument) = 0;

  /* void invalidateRect (in NPRectPtr aRect); */
  NS_IMETHOD InvalidateRect(NPRect *aRect) = 0;

  /* void invalidateRegion (in NPRegion aRegion); */
  NS_IMETHOD InvalidateRegion(NPRegion aRegion) = 0;

  /* void forceRedraw (); */
  NS_IMETHOD ForceRedraw(void) = 0;

  /* void getNetscapeWindow (in voidPtr aValue); */
  NS_IMETHOD GetNetscapeWindow(void *aValue) = 0;

    virtual NPError ShowNativeContextMenu(NPMenu* menu, void* event) = 0;
  virtual NPBool  ConvertPoint(double sourceX, double sourceY, NPCoordinateSpace sourceSpace,
                               double *destX, double *destY, NPCoordinateSpace destSpace) = 0;
  /* void setEventModel (in PRInt32 eventModel); */
  NS_IMETHOD SetEventModel(PRInt32 eventModel) = 0;

    virtual void SendIdleEvent() = 0;
  /* void setWindow (); */
  NS_IMETHOD SetWindow(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPluginInstanceOwner, NS_IPLUGININSTANCEOWNER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPLUGININSTANCEOWNER \
  NS_IMETHOD SetInstance(nsNPAPIPluginInstance *aInstance); \
  NS_IMETHOD GetInstance(nsNPAPIPluginInstance **_retval NS_OUTPARAM); \
  NS_IMETHOD GetWindow(NPWindow * & aWindow); \
  NS_IMETHOD GetMode(PRInt32 *aMode); \
  NS_IMETHOD CreateWidget(void); \
  NS_IMETHOD ShowStatus(const char * aStatusMsg); \
  NS_IMETHOD GetDocument(nsIDocument * *aDocument); \
  NS_IMETHOD InvalidateRect(NPRect *aRect); \
  NS_IMETHOD InvalidateRegion(NPRegion aRegion); \
  NS_IMETHOD ForceRedraw(void); \
  NS_IMETHOD GetNetscapeWindow(void *aValue); \
  NS_IMETHOD SetEventModel(PRInt32 eventModel); \
  NS_IMETHOD SetWindow(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPLUGININSTANCEOWNER(_to) \
  NS_IMETHOD SetInstance(nsNPAPIPluginInstance *aInstance) { return _to SetInstance(aInstance); } \
  NS_IMETHOD GetInstance(nsNPAPIPluginInstance **_retval NS_OUTPARAM) { return _to GetInstance(_retval); } \
  NS_IMETHOD GetWindow(NPWindow * & aWindow) { return _to GetWindow(aWindow); } \
  NS_IMETHOD GetMode(PRInt32 *aMode) { return _to GetMode(aMode); } \
  NS_IMETHOD CreateWidget(void) { return _to CreateWidget(); } \
  NS_IMETHOD ShowStatus(const char * aStatusMsg) { return _to ShowStatus(aStatusMsg); } \
  NS_IMETHOD GetDocument(nsIDocument * *aDocument) { return _to GetDocument(aDocument); } \
  NS_IMETHOD InvalidateRect(NPRect *aRect) { return _to InvalidateRect(aRect); } \
  NS_IMETHOD InvalidateRegion(NPRegion aRegion) { return _to InvalidateRegion(aRegion); } \
  NS_IMETHOD ForceRedraw(void) { return _to ForceRedraw(); } \
  NS_IMETHOD GetNetscapeWindow(void *aValue) { return _to GetNetscapeWindow(aValue); } \
  NS_IMETHOD SetEventModel(PRInt32 eventModel) { return _to SetEventModel(eventModel); } \
  NS_IMETHOD SetWindow(void) { return _to SetWindow(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPLUGININSTANCEOWNER(_to) \
  NS_IMETHOD SetInstance(nsNPAPIPluginInstance *aInstance) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInstance(aInstance); } \
  NS_IMETHOD GetInstance(nsNPAPIPluginInstance **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstance(_retval); } \
  NS_IMETHOD GetWindow(NPWindow * & aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindow(aWindow); } \
  NS_IMETHOD GetMode(PRInt32 *aMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMode(aMode); } \
  NS_IMETHOD CreateWidget(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateWidget(); } \
  NS_IMETHOD ShowStatus(const char * aStatusMsg) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowStatus(aStatusMsg); } \
  NS_IMETHOD GetDocument(nsIDocument * *aDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocument(aDocument); } \
  NS_IMETHOD InvalidateRect(NPRect *aRect) { return !_to ? NS_ERROR_NULL_POINTER : _to->InvalidateRect(aRect); } \
  NS_IMETHOD InvalidateRegion(NPRegion aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->InvalidateRegion(aRegion); } \
  NS_IMETHOD ForceRedraw(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceRedraw(); } \
  NS_IMETHOD GetNetscapeWindow(void *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetscapeWindow(aValue); } \
  NS_IMETHOD SetEventModel(PRInt32 eventModel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEventModel(eventModel); } \
  NS_IMETHOD SetWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindow(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPluginInstanceOwner : public nsIPluginInstanceOwner
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPLUGININSTANCEOWNER

  nsPluginInstanceOwner();

private:
  ~nsPluginInstanceOwner();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPluginInstanceOwner, nsIPluginInstanceOwner)

nsPluginInstanceOwner::nsPluginInstanceOwner()
{
  /* member initializers and constructor code */
}

nsPluginInstanceOwner::~nsPluginInstanceOwner()
{
  /* destructor code */
}

/* void setInstance (in nsNPAPIPluginInstancePtr aInstance); */
NS_IMETHODIMP nsPluginInstanceOwner::SetInstance(nsNPAPIPluginInstance *aInstance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsNPAPIPluginInstancePtr getInstance (); */
NS_IMETHODIMP nsPluginInstanceOwner::GetInstance(nsNPAPIPluginInstance **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getWindow (in NPWindowStarRef aWindow); */
NS_IMETHODIMP nsPluginInstanceOwner::GetWindow(NPWindow * & aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt32 mode; */
NS_IMETHODIMP nsPluginInstanceOwner::GetMode(PRInt32 *aMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createWidget (); */
NS_IMETHODIMP nsPluginInstanceOwner::CreateWidget()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showStatus (in string aStatusMsg); */
NS_IMETHODIMP nsPluginInstanceOwner::ShowStatus(const char * aStatusMsg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDocument document; */
NS_IMETHODIMP nsPluginInstanceOwner::GetDocument(nsIDocument * *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void invalidateRect (in NPRectPtr aRect); */
NS_IMETHODIMP nsPluginInstanceOwner::InvalidateRect(NPRect *aRect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void invalidateRegion (in NPRegion aRegion); */
NS_IMETHODIMP nsPluginInstanceOwner::InvalidateRegion(NPRegion aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceRedraw (); */
NS_IMETHODIMP nsPluginInstanceOwner::ForceRedraw()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getNetscapeWindow (in voidPtr aValue); */
NS_IMETHODIMP nsPluginInstanceOwner::GetNetscapeWindow(void *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setEventModel (in PRInt32 eventModel); */
NS_IMETHODIMP nsPluginInstanceOwner::SetEventModel(PRInt32 eventModel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWindow (); */
NS_IMETHODIMP nsPluginInstanceOwner::SetWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPluginInstanceOwner_h__ */
