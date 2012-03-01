/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMComment.idl
 */

#ifndef __gen_nsIDOMComment_h__
#define __gen_nsIDOMComment_h__


#ifndef __gen_nsIDOMCharacterData_h__
#include "nsIDOMCharacterData.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMComment */
#define NS_IDOMCOMMENT_IID_STR "cea49a35-dac9-4c4d-9830-4660abb3b6bc"

#define NS_IDOMCOMMENT_IID \
  {0xcea49a35, 0xdac9, 0x4c4d, \
    { 0x98, 0x30, 0x46, 0x60, 0xab, 0xb3, 0xb6, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMComment : public nsIDOMCharacterData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCOMMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMComment, NS_IDOMCOMMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCOMMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCOMMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCOMMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMComment : public nsIDOMComment
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCOMMENT

  nsDOMComment();

private:
  ~nsDOMComment();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMComment, nsIDOMComment)

nsDOMComment::nsDOMComment()
{
  /* member initializers and constructor code */
}

nsDOMComment::~nsDOMComment()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMComment_h__ */
