/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/base/nsICycleCollectorListener.idl
 */

#ifndef __gen_nsICycleCollectorListener_h__
#define __gen_nsICycleCollectorListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICycleCollectorListener */
#define NS_ICYCLECOLLECTORLISTENER_IID_STR "3f3901bb-6a1c-4998-b32e-6f10a51db470"

#define NS_ICYCLECOLLECTORLISTENER_IID \
  {0x3f3901bb, 0x6a1c, 0x4998, \
    { 0xb3, 0x2e, 0x6f, 0x10, 0xa5, 0x1d, 0xb4, 0x70 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICycleCollectorListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICYCLECOLLECTORLISTENER_IID)

  /* void begin (); */
  NS_SCRIPTABLE NS_IMETHOD Begin(void) = 0;

  /* void noteRefCountedObject (in unsigned long long aAddress, in unsigned long aRefCount, in string aObjectDescription); */
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription) = 0;

  /* void noteGCedObject (in unsigned long long aAddress, in boolean aMarked, in string aObjectDescription); */
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, PRBool aMarked, const char * aObjectDescription) = 0;

  /* void noteEdge (in unsigned long long aToAddress, in string aEdgeName); */
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName) = 0;

  /* void beginResults (); */
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void) = 0;

  /* void describeRoot (in unsigned long long aAddress, in unsigned long aKnownEdges); */
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges) = 0;

  /* void describeGarbage (in unsigned long long aAddress); */
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress) = 0;

  /* void end (); */
  NS_SCRIPTABLE NS_IMETHOD End(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICycleCollectorListener, NS_ICYCLECOLLECTORLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICYCLECOLLECTORLISTENER \
  NS_SCRIPTABLE NS_IMETHOD Begin(void); \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription); \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, PRBool aMarked, const char * aObjectDescription); \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName); \
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void); \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges); \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress); \
  NS_SCRIPTABLE NS_IMETHOD End(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICYCLECOLLECTORLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Begin(void) { return _to Begin(); } \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription) { return _to NoteRefCountedObject(aAddress, aRefCount, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, PRBool aMarked, const char * aObjectDescription) { return _to NoteGCedObject(aAddress, aMarked, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName) { return _to NoteEdge(aToAddress, aEdgeName); } \
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void) { return _to BeginResults(); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges) { return _to DescribeRoot(aAddress, aKnownEdges); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress) { return _to DescribeGarbage(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD End(void) { return _to End(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICYCLECOLLECTORLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Begin(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Begin(); } \
  NS_SCRIPTABLE NS_IMETHOD NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteRefCountedObject(aAddress, aRefCount, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteGCedObject(PRUint64 aAddress, PRBool aMarked, const char * aObjectDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteGCedObject(aAddress, aMarked, aObjectDescription); } \
  NS_SCRIPTABLE NS_IMETHOD NoteEdge(PRUint64 aToAddress, const char * aEdgeName) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteEdge(aToAddress, aEdgeName); } \
  NS_SCRIPTABLE NS_IMETHOD BeginResults(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginResults(); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges) { return !_to ? NS_ERROR_NULL_POINTER : _to->DescribeRoot(aAddress, aKnownEdges); } \
  NS_SCRIPTABLE NS_IMETHOD DescribeGarbage(PRUint64 aAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->DescribeGarbage(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD End(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->End(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCycleCollectorListener : public nsICycleCollectorListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICYCLECOLLECTORLISTENER

  nsCycleCollectorListener();

private:
  ~nsCycleCollectorListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCycleCollectorListener, nsICycleCollectorListener)

nsCycleCollectorListener::nsCycleCollectorListener()
{
  /* member initializers and constructor code */
}

nsCycleCollectorListener::~nsCycleCollectorListener()
{
  /* destructor code */
}

/* void begin (); */
NS_IMETHODIMP nsCycleCollectorListener::Begin()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteRefCountedObject (in unsigned long long aAddress, in unsigned long aRefCount, in string aObjectDescription); */
NS_IMETHODIMP nsCycleCollectorListener::NoteRefCountedObject(PRUint64 aAddress, PRUint32 aRefCount, const char * aObjectDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteGCedObject (in unsigned long long aAddress, in boolean aMarked, in string aObjectDescription); */
NS_IMETHODIMP nsCycleCollectorListener::NoteGCedObject(PRUint64 aAddress, PRBool aMarked, const char * aObjectDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void noteEdge (in unsigned long long aToAddress, in string aEdgeName); */
NS_IMETHODIMP nsCycleCollectorListener::NoteEdge(PRUint64 aToAddress, const char * aEdgeName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginResults (); */
NS_IMETHODIMP nsCycleCollectorListener::BeginResults()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void describeRoot (in unsigned long long aAddress, in unsigned long aKnownEdges); */
NS_IMETHODIMP nsCycleCollectorListener::DescribeRoot(PRUint64 aAddress, PRUint32 aKnownEdges)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void describeGarbage (in unsigned long long aAddress); */
NS_IMETHODIMP nsCycleCollectorListener::DescribeGarbage(PRUint64 aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void end (); */
NS_IMETHODIMP nsCycleCollectorListener::End()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICycleCollectorListener_h__ */
