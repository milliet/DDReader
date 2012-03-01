/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libpr0n/public/imgIDecoderObserver.idl
 */

#ifndef __gen_imgIDecoderObserver_h__
#define __gen_imgIDecoderObserver_h__


#ifndef __gen_imgIContainerObserver_h__
#include "imgIContainerObserver.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class imgIRequest; /* forward declaration */

class imgIContainer; /* forward declaration */

#include "nsRect.h"

/* starting interface:    imgIDecoderObserver */
#define IMGIDECODEROBSERVER_IID_STR "9f6bfbee-9e04-43a0-b8f6-2159973efec8"

#define IMGIDECODEROBSERVER_IID \
  {0x9f6bfbee, 0x9e04, 0x43a0, \
    { 0xb8, 0xf6, 0x21, 0x59, 0x97, 0x3e, 0xfe, 0xc8 }}

class NS_NO_VTABLE NS_SCRIPTABLE imgIDecoderObserver : public imgIContainerObserver {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMGIDECODEROBSERVER_IID)

  /* void onStartRequest (in imgIRequest aRequest); */
  NS_SCRIPTABLE NS_IMETHOD OnStartRequest(imgIRequest *aRequest) = 0;

  /* void onStartDecode (in imgIRequest aRequest); */
  NS_SCRIPTABLE NS_IMETHOD OnStartDecode(imgIRequest *aRequest) = 0;

  /* void onStartContainer (in imgIRequest aRequest, in imgIContainer aContainer); */
  NS_SCRIPTABLE NS_IMETHOD OnStartContainer(imgIRequest *aRequest, imgIContainer *aContainer) = 0;

  /* void onStartFrame (in imgIRequest aRequest, in unsigned long aFrame); */
  NS_SCRIPTABLE NS_IMETHOD OnStartFrame(imgIRequest *aRequest, PRUint32 aFrame) = 0;

  /* [noscript] void onDataAvailable (in imgIRequest aRequest, in boolean aCurrentFrame, [const] in nsIntRect aRect); */
  NS_IMETHOD OnDataAvailable(imgIRequest *aRequest, PRBool aCurrentFrame, const nsIntRect *aRect) = 0;

  /* void onStopFrame (in imgIRequest aRequest, in unsigned long aFrame); */
  NS_SCRIPTABLE NS_IMETHOD OnStopFrame(imgIRequest *aRequest, PRUint32 aFrame) = 0;

  /* void onStopContainer (in imgIRequest aRequest, in imgIContainer aContainer); */
  NS_SCRIPTABLE NS_IMETHOD OnStopContainer(imgIRequest *aRequest, imgIContainer *aContainer) = 0;

  /* void onStopDecode (in imgIRequest aRequest, in nsresult status, in wstring statusArg); */
  NS_SCRIPTABLE NS_IMETHOD OnStopDecode(imgIRequest *aRequest, nsresult status, const PRUnichar * statusArg) = 0;

  /* void onStopRequest (in imgIRequest aRequest, in boolean aIsLastPart); */
  NS_SCRIPTABLE NS_IMETHOD OnStopRequest(imgIRequest *aRequest, PRBool aIsLastPart) = 0;

  /* void onDiscard (in imgIRequest aRequest); */
  NS_SCRIPTABLE NS_IMETHOD OnDiscard(imgIRequest *aRequest) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(imgIDecoderObserver, IMGIDECODEROBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMGIDECODEROBSERVER \
  NS_SCRIPTABLE NS_IMETHOD OnStartRequest(imgIRequest *aRequest); \
  NS_SCRIPTABLE NS_IMETHOD OnStartDecode(imgIRequest *aRequest); \
  NS_SCRIPTABLE NS_IMETHOD OnStartContainer(imgIRequest *aRequest, imgIContainer *aContainer); \
  NS_SCRIPTABLE NS_IMETHOD OnStartFrame(imgIRequest *aRequest, PRUint32 aFrame); \
  NS_IMETHOD OnDataAvailable(imgIRequest *aRequest, PRBool aCurrentFrame, const nsIntRect *aRect); \
  NS_SCRIPTABLE NS_IMETHOD OnStopFrame(imgIRequest *aRequest, PRUint32 aFrame); \
  NS_SCRIPTABLE NS_IMETHOD OnStopContainer(imgIRequest *aRequest, imgIContainer *aContainer); \
  NS_SCRIPTABLE NS_IMETHOD OnStopDecode(imgIRequest *aRequest, nsresult status, const PRUnichar * statusArg); \
  NS_SCRIPTABLE NS_IMETHOD OnStopRequest(imgIRequest *aRequest, PRBool aIsLastPart); \
  NS_SCRIPTABLE NS_IMETHOD OnDiscard(imgIRequest *aRequest); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMGIDECODEROBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnStartRequest(imgIRequest *aRequest) { return _to OnStartRequest(aRequest); } \
  NS_SCRIPTABLE NS_IMETHOD OnStartDecode(imgIRequest *aRequest) { return _to OnStartDecode(aRequest); } \
  NS_SCRIPTABLE NS_IMETHOD OnStartContainer(imgIRequest *aRequest, imgIContainer *aContainer) { return _to OnStartContainer(aRequest, aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD OnStartFrame(imgIRequest *aRequest, PRUint32 aFrame) { return _to OnStartFrame(aRequest, aFrame); } \
  NS_IMETHOD OnDataAvailable(imgIRequest *aRequest, PRBool aCurrentFrame, const nsIntRect *aRect) { return _to OnDataAvailable(aRequest, aCurrentFrame, aRect); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopFrame(imgIRequest *aRequest, PRUint32 aFrame) { return _to OnStopFrame(aRequest, aFrame); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopContainer(imgIRequest *aRequest, imgIContainer *aContainer) { return _to OnStopContainer(aRequest, aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopDecode(imgIRequest *aRequest, nsresult status, const PRUnichar * statusArg) { return _to OnStopDecode(aRequest, status, statusArg); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopRequest(imgIRequest *aRequest, PRBool aIsLastPart) { return _to OnStopRequest(aRequest, aIsLastPart); } \
  NS_SCRIPTABLE NS_IMETHOD OnDiscard(imgIRequest *aRequest) { return _to OnDiscard(aRequest); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMGIDECODEROBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnStartRequest(imgIRequest *aRequest) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStartRequest(aRequest); } \
  NS_SCRIPTABLE NS_IMETHOD OnStartDecode(imgIRequest *aRequest) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStartDecode(aRequest); } \
  NS_SCRIPTABLE NS_IMETHOD OnStartContainer(imgIRequest *aRequest, imgIContainer *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStartContainer(aRequest, aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD OnStartFrame(imgIRequest *aRequest, PRUint32 aFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStartFrame(aRequest, aFrame); } \
  NS_IMETHOD OnDataAvailable(imgIRequest *aRequest, PRBool aCurrentFrame, const nsIntRect *aRect) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDataAvailable(aRequest, aCurrentFrame, aRect); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopFrame(imgIRequest *aRequest, PRUint32 aFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStopFrame(aRequest, aFrame); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopContainer(imgIRequest *aRequest, imgIContainer *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStopContainer(aRequest, aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopDecode(imgIRequest *aRequest, nsresult status, const PRUnichar * statusArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStopDecode(aRequest, status, statusArg); } \
  NS_SCRIPTABLE NS_IMETHOD OnStopRequest(imgIRequest *aRequest, PRBool aIsLastPart) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStopRequest(aRequest, aIsLastPart); } \
  NS_SCRIPTABLE NS_IMETHOD OnDiscard(imgIRequest *aRequest) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDiscard(aRequest); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public imgIDecoderObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMGIDECODEROBSERVER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, imgIDecoderObserver)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void onStartRequest (in imgIRequest aRequest); */
NS_IMETHODIMP _MYCLASS_::OnStartRequest(imgIRequest *aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStartDecode (in imgIRequest aRequest); */
NS_IMETHODIMP _MYCLASS_::OnStartDecode(imgIRequest *aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStartContainer (in imgIRequest aRequest, in imgIContainer aContainer); */
NS_IMETHODIMP _MYCLASS_::OnStartContainer(imgIRequest *aRequest, imgIContainer *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStartFrame (in imgIRequest aRequest, in unsigned long aFrame); */
NS_IMETHODIMP _MYCLASS_::OnStartFrame(imgIRequest *aRequest, PRUint32 aFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void onDataAvailable (in imgIRequest aRequest, in boolean aCurrentFrame, [const] in nsIntRect aRect); */
NS_IMETHODIMP _MYCLASS_::OnDataAvailable(imgIRequest *aRequest, PRBool aCurrentFrame, const nsIntRect *aRect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStopFrame (in imgIRequest aRequest, in unsigned long aFrame); */
NS_IMETHODIMP _MYCLASS_::OnStopFrame(imgIRequest *aRequest, PRUint32 aFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStopContainer (in imgIRequest aRequest, in imgIContainer aContainer); */
NS_IMETHODIMP _MYCLASS_::OnStopContainer(imgIRequest *aRequest, imgIContainer *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStopDecode (in imgIRequest aRequest, in nsresult status, in wstring statusArg); */
NS_IMETHODIMP _MYCLASS_::OnStopDecode(imgIRequest *aRequest, nsresult status, const PRUnichar * statusArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStopRequest (in imgIRequest aRequest, in boolean aIsLastPart); */
NS_IMETHODIMP _MYCLASS_::OnStopRequest(imgIRequest *aRequest, PRBool aIsLastPart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onDiscard (in imgIRequest aRequest); */
NS_IMETHODIMP _MYCLASS_::OnDiscard(imgIRequest *aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_imgIDecoderObserver_h__ */
