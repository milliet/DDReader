/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMCharacterData.idl
 */

#ifndef __gen_nsIDOMCharacterData_h__
#define __gen_nsIDOMCharacterData_h__


#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMCharacterData */
#define NS_IDOMCHARACTERDATA_IID_STR "cb75c251-afc7-444f-b2d6-b9635555f3ed"

#define NS_IDOMCHARACTERDATA_IID \
  {0xcb75c251, 0xafc7, 0x444f, \
    { 0xb2, 0xd6, 0xb9, 0x63, 0x55, 0x55, 0xf3, 0xed }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMCharacterData : public nsIDOMNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCHARACTERDATA_IID)

  /* attribute DOMString data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetData(const nsAString & aData) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* DOMString substringData (in unsigned long offset, in unsigned long count) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD SubstringData(PRUint32 offset, PRUint32 count, nsAString & _retval NS_OUTPARAM) = 0;

  /* void appendData (in DOMString arg) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD AppendData(const nsAString & arg) = 0;

  /* void insertData (in unsigned long offset, in DOMString arg) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD InsertData(PRUint32 offset, const nsAString & arg) = 0;

  /* void deleteData (in unsigned long offset, in unsigned long count) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD DeleteData(PRUint32 offset, PRUint32 count) = 0;

  /* void replaceData (in unsigned long offset, in unsigned long count, in DOMString arg) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceData(PRUint32 offset, PRUint32 count, const nsAString & arg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCharacterData, NS_IDOMCHARACTERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCHARACTERDATA \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData); \
  NS_SCRIPTABLE NS_IMETHOD SetData(const nsAString & aData); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD SubstringData(PRUint32 offset, PRUint32 count, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AppendData(const nsAString & arg); \
  NS_SCRIPTABLE NS_IMETHOD InsertData(PRUint32 offset, const nsAString & arg); \
  NS_SCRIPTABLE NS_IMETHOD DeleteData(PRUint32 offset, PRUint32 count); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceData(PRUint32 offset, PRUint32 count, const nsAString & arg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCHARACTERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const nsAString & aData) { return _to SetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD SubstringData(PRUint32 offset, PRUint32 count, nsAString & _retval NS_OUTPARAM) { return _to SubstringData(offset, count, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendData(const nsAString & arg) { return _to AppendData(arg); } \
  NS_SCRIPTABLE NS_IMETHOD InsertData(PRUint32 offset, const nsAString & arg) { return _to InsertData(offset, arg); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteData(PRUint32 offset, PRUint32 count) { return _to DeleteData(offset, count); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceData(PRUint32 offset, PRUint32 count, const nsAString & arg) { return _to ReplaceData(offset, count, arg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCHARACTERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetData(nsAString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const nsAString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD SubstringData(PRUint32 offset, PRUint32 count, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubstringData(offset, count, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendData(const nsAString & arg) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendData(arg); } \
  NS_SCRIPTABLE NS_IMETHOD InsertData(PRUint32 offset, const nsAString & arg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertData(offset, arg); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteData(PRUint32 offset, PRUint32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteData(offset, count); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceData(PRUint32 offset, PRUint32 count, const nsAString & arg) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceData(offset, count, arg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCharacterData : public nsIDOMCharacterData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCHARACTERDATA

  nsDOMCharacterData();

private:
  ~nsDOMCharacterData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMCharacterData, nsIDOMCharacterData)

nsDOMCharacterData::nsDOMCharacterData()
{
  /* member initializers and constructor code */
}

nsDOMCharacterData::~nsDOMCharacterData()
{
  /* destructor code */
}

/* attribute DOMString data; */
NS_IMETHODIMP nsDOMCharacterData::GetData(nsAString & aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMCharacterData::SetData(const nsAString & aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMCharacterData::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString substringData (in unsigned long offset, in unsigned long count) raises (DOMException); */
NS_IMETHODIMP nsDOMCharacterData::SubstringData(PRUint32 offset, PRUint32 count, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendData (in DOMString arg) raises (DOMException); */
NS_IMETHODIMP nsDOMCharacterData::AppendData(const nsAString & arg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertData (in unsigned long offset, in DOMString arg) raises (DOMException); */
NS_IMETHODIMP nsDOMCharacterData::InsertData(PRUint32 offset, const nsAString & arg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteData (in unsigned long offset, in unsigned long count) raises (DOMException); */
NS_IMETHODIMP nsDOMCharacterData::DeleteData(PRUint32 offset, PRUint32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceData (in unsigned long offset, in unsigned long count, in DOMString arg) raises (DOMException); */
NS_IMETHODIMP nsDOMCharacterData::ReplaceData(PRUint32 offset, PRUint32 count, const nsAString & arg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCharacterData_h__ */
