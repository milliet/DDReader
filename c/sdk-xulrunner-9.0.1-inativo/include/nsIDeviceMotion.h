/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/system/nsIDeviceMotion.idl
 */

#ifndef __gen_nsIDeviceMotion_h__
#define __gen_nsIDeviceMotion_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIDeviceMotionData */
#define NS_IDEVICEMOTIONDATA_IID_STR "1b406e32-cf42-471e-a470-6fd600bf4c7b"

#define NS_IDEVICEMOTIONDATA_IID \
  {0x1b406e32, 0xcf42, 0x471e, \
    { 0xa4, 0x70, 0x6f, 0xd6, 0x00, 0xbf, 0x4c, 0x7b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDeviceMotionData : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDEVICEMOTIONDATA_IID)

  enum { TYPE_ACCELERATION = 0U };

  enum { TYPE_ORIENTATION = 1U };

  /* readonly attribute unsigned long type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType) = 0;

  /* readonly attribute double x; */
  NS_SCRIPTABLE NS_IMETHOD GetX(double *aX) = 0;

  /* readonly attribute double y; */
  NS_SCRIPTABLE NS_IMETHOD GetY(double *aY) = 0;

  /* readonly attribute double z; */
  NS_SCRIPTABLE NS_IMETHOD GetZ(double *aZ) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDeviceMotionData, NS_IDEVICEMOTIONDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDEVICEMOTIONDATA \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetX(double *aX); \
  NS_SCRIPTABLE NS_IMETHOD GetY(double *aY); \
  NS_SCRIPTABLE NS_IMETHOD GetZ(double *aZ); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDEVICEMOTIONDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetX(double *aX) { return _to GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(double *aY) { return _to GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(double *aZ) { return _to GetZ(aZ); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDEVICEMOTIONDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint32 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetX(double *aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(double *aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(double *aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZ(aZ); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDeviceMotionData : public nsIDeviceMotionData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDEVICEMOTIONDATA

  nsDeviceMotionData();

private:
  ~nsDeviceMotionData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDeviceMotionData, nsIDeviceMotionData)

nsDeviceMotionData::nsDeviceMotionData()
{
  /* member initializers and constructor code */
}

nsDeviceMotionData::~nsDeviceMotionData()
{
  /* destructor code */
}

/* readonly attribute unsigned long type; */
NS_IMETHODIMP nsDeviceMotionData::GetType(PRUint32 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double x; */
NS_IMETHODIMP nsDeviceMotionData::GetX(double *aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double y; */
NS_IMETHODIMP nsDeviceMotionData::GetY(double *aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double z; */
NS_IMETHODIMP nsDeviceMotionData::GetZ(double *aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDeviceMotionListener */
#define NS_IDEVICEMOTIONLISTENER_IID_STR "f01774a2-3b7e-4630-954b-196dc178221f"

#define NS_IDEVICEMOTIONLISTENER_IID \
  {0xf01774a2, 0x3b7e, 0x4630, \
    { 0x95, 0x4b, 0x19, 0x6d, 0xc1, 0x78, 0x22, 0x1f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDeviceMotionListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDEVICEMOTIONLISTENER_IID)

  /* void onMotionChange (in nsIDeviceMotionData aMotionData); */
  NS_SCRIPTABLE NS_IMETHOD OnMotionChange(nsIDeviceMotionData *aMotionData) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDeviceMotionListener, NS_IDEVICEMOTIONLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDEVICEMOTIONLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnMotionChange(nsIDeviceMotionData *aMotionData); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDEVICEMOTIONLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnMotionChange(nsIDeviceMotionData *aMotionData) { return _to OnMotionChange(aMotionData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDEVICEMOTIONLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnMotionChange(nsIDeviceMotionData *aMotionData) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnMotionChange(aMotionData); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDeviceMotionListener : public nsIDeviceMotionListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDEVICEMOTIONLISTENER

  nsDeviceMotionListener();

private:
  ~nsDeviceMotionListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDeviceMotionListener, nsIDeviceMotionListener)

nsDeviceMotionListener::nsDeviceMotionListener()
{
  /* member initializers and constructor code */
}

nsDeviceMotionListener::~nsDeviceMotionListener()
{
  /* destructor code */
}

/* void onMotionChange (in nsIDeviceMotionData aMotionData); */
NS_IMETHODIMP nsDeviceMotionListener::OnMotionChange(nsIDeviceMotionData *aMotionData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDeviceMotion */
#define NS_IDEVICEMOTION_IID_STR "b6e5c463-aaa6-44e2-bd07-7a7dc6192e68"

#define NS_IDEVICEMOTION_IID \
  {0xb6e5c463, 0xaaa6, 0x44e2, \
    { 0xbd, 0x07, 0x7a, 0x7d, 0xc6, 0x19, 0x2e, 0x68 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDeviceMotion : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDEVICEMOTION_IID)

  /* void addListener (in nsIDeviceMotionListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDeviceMotionListener *aListener) = 0;

  /* void removeListener (in nsIDeviceMotionListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDeviceMotionListener *aListener) = 0;

  /* [noscript] void addWindowListener (in nsIDOMWindow aWindow); */
  NS_IMETHOD AddWindowListener(nsIDOMWindow *aWindow) = 0;

  /* [noscript] void removeWindowListener (in nsIDOMWindow aWindow); */
  NS_IMETHOD RemoveWindowListener(nsIDOMWindow *aWindow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDeviceMotion, NS_IDEVICEMOTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDEVICEMOTION \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDeviceMotionListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDeviceMotionListener *aListener); \
  NS_IMETHOD AddWindowListener(nsIDOMWindow *aWindow); \
  NS_IMETHOD RemoveWindowListener(nsIDOMWindow *aWindow); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDEVICEMOTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDeviceMotionListener *aListener) { return _to AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDeviceMotionListener *aListener) { return _to RemoveListener(aListener); } \
  NS_IMETHOD AddWindowListener(nsIDOMWindow *aWindow) { return _to AddWindowListener(aWindow); } \
  NS_IMETHOD RemoveWindowListener(nsIDOMWindow *aWindow) { return _to RemoveWindowListener(aWindow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDEVICEMOTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDeviceMotionListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDeviceMotionListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(aListener); } \
  NS_IMETHOD AddWindowListener(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWindowListener(aWindow); } \
  NS_IMETHOD RemoveWindowListener(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWindowListener(aWindow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDeviceMotion : public nsIDeviceMotion
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDEVICEMOTION

  nsDeviceMotion();

private:
  ~nsDeviceMotion();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDeviceMotion, nsIDeviceMotion)

nsDeviceMotion::nsDeviceMotion()
{
  /* member initializers and constructor code */
}

nsDeviceMotion::~nsDeviceMotion()
{
  /* destructor code */
}

/* void addListener (in nsIDeviceMotionListener aListener); */
NS_IMETHODIMP nsDeviceMotion::AddListener(nsIDeviceMotionListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in nsIDeviceMotionListener aListener); */
NS_IMETHODIMP nsDeviceMotion::RemoveListener(nsIDeviceMotionListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void addWindowListener (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsDeviceMotion::AddWindowListener(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void removeWindowListener (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsDeviceMotion::RemoveWindowListener(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDeviceMotionUpdate */
#define NS_IDEVICEMOTIONUPDATE_IID_STR "d3a56f08-b7b1-46bb-9dc1-fc3665a3631a"

#define NS_IDEVICEMOTIONUPDATE_IID \
  {0xd3a56f08, 0xb7b1, 0x46bb, \
    { 0x9d, 0xc1, 0xfc, 0x36, 0x65, 0xa3, 0x63, 0x1a }}

class NS_NO_VTABLE nsIDeviceMotionUpdate : public nsIDeviceMotion {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDEVICEMOTIONUPDATE_IID)

  /* void deviceMotionChanged (in unsigned long type, in double x, in double y, in double z); */
  NS_IMETHOD DeviceMotionChanged(PRUint32 type, double x, double y, double z) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDeviceMotionUpdate, NS_IDEVICEMOTIONUPDATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDEVICEMOTIONUPDATE \
  NS_IMETHOD DeviceMotionChanged(PRUint32 type, double x, double y, double z); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDEVICEMOTIONUPDATE(_to) \
  NS_IMETHOD DeviceMotionChanged(PRUint32 type, double x, double y, double z) { return _to DeviceMotionChanged(type, x, y, z); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDEVICEMOTIONUPDATE(_to) \
  NS_IMETHOD DeviceMotionChanged(PRUint32 type, double x, double y, double z) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeviceMotionChanged(type, x, y, z); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDeviceMotionUpdate : public nsIDeviceMotionUpdate
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDEVICEMOTIONUPDATE

  nsDeviceMotionUpdate();

private:
  ~nsDeviceMotionUpdate();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDeviceMotionUpdate, nsIDeviceMotionUpdate)

nsDeviceMotionUpdate::nsDeviceMotionUpdate()
{
  /* member initializers and constructor code */
}

nsDeviceMotionUpdate::~nsDeviceMotionUpdate()
{
  /* destructor code */
}

/* void deviceMotionChanged (in unsigned long type, in double x, in double y, in double z); */
NS_IMETHODIMP nsDeviceMotionUpdate::DeviceMotionChanged(PRUint32 type, double x, double y, double z)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDeviceMotion_h__ */
