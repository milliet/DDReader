/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/embedding/components/find/public/nsIWebBrowserFind.idl
 */

#ifndef __gen_nsIWebBrowserFind_h__
#define __gen_nsIWebBrowserFind_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIWebBrowserFind */
#define NS_IWEBBROWSERFIND_IID_STR "2f977d44-5485-11d4-87e2-0010a4e75ef2"

#define NS_IWEBBROWSERFIND_IID \
  {0x2f977d44, 0x5485, 0x11d4, \
    { 0x87, 0xe2, 0x00, 0x10, 0xa4, 0xe7, 0x5e, 0xf2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebBrowserFind : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERFIND_IID)

  /* boolean findNext (); */
  NS_SCRIPTABLE NS_IMETHOD FindNext(PRBool *_retval NS_OUTPARAM) = 0;

  /* attribute wstring searchString; */
  NS_SCRIPTABLE NS_IMETHOD GetSearchString(PRUnichar * *aSearchString) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSearchString(const PRUnichar * aSearchString) = 0;

  /* attribute boolean findBackwards; */
  NS_SCRIPTABLE NS_IMETHOD GetFindBackwards(PRBool *aFindBackwards) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFindBackwards(PRBool aFindBackwards) = 0;

  /* attribute boolean wrapFind; */
  NS_SCRIPTABLE NS_IMETHOD GetWrapFind(PRBool *aWrapFind) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWrapFind(PRBool aWrapFind) = 0;

  /* attribute boolean entireWord; */
  NS_SCRIPTABLE NS_IMETHOD GetEntireWord(PRBool *aEntireWord) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEntireWord(PRBool aEntireWord) = 0;

  /* attribute boolean matchCase; */
  NS_SCRIPTABLE NS_IMETHOD GetMatchCase(PRBool *aMatchCase) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMatchCase(PRBool aMatchCase) = 0;

  /* attribute boolean searchFrames; */
  NS_SCRIPTABLE NS_IMETHOD GetSearchFrames(PRBool *aSearchFrames) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSearchFrames(PRBool aSearchFrames) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserFind, NS_IWEBBROWSERFIND_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERFIND \
  NS_SCRIPTABLE NS_IMETHOD FindNext(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSearchString(PRUnichar * *aSearchString); \
  NS_SCRIPTABLE NS_IMETHOD SetSearchString(const PRUnichar * aSearchString); \
  NS_SCRIPTABLE NS_IMETHOD GetFindBackwards(PRBool *aFindBackwards); \
  NS_SCRIPTABLE NS_IMETHOD SetFindBackwards(PRBool aFindBackwards); \
  NS_SCRIPTABLE NS_IMETHOD GetWrapFind(PRBool *aWrapFind); \
  NS_SCRIPTABLE NS_IMETHOD SetWrapFind(PRBool aWrapFind); \
  NS_SCRIPTABLE NS_IMETHOD GetEntireWord(PRBool *aEntireWord); \
  NS_SCRIPTABLE NS_IMETHOD SetEntireWord(PRBool aEntireWord); \
  NS_SCRIPTABLE NS_IMETHOD GetMatchCase(PRBool *aMatchCase); \
  NS_SCRIPTABLE NS_IMETHOD SetMatchCase(PRBool aMatchCase); \
  NS_SCRIPTABLE NS_IMETHOD GetSearchFrames(PRBool *aSearchFrames); \
  NS_SCRIPTABLE NS_IMETHOD SetSearchFrames(PRBool aSearchFrames); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERFIND(_to) \
  NS_SCRIPTABLE NS_IMETHOD FindNext(PRBool *_retval NS_OUTPARAM) { return _to FindNext(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchString(PRUnichar * *aSearchString) { return _to GetSearchString(aSearchString); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchString(const PRUnichar * aSearchString) { return _to SetSearchString(aSearchString); } \
  NS_SCRIPTABLE NS_IMETHOD GetFindBackwards(PRBool *aFindBackwards) { return _to GetFindBackwards(aFindBackwards); } \
  NS_SCRIPTABLE NS_IMETHOD SetFindBackwards(PRBool aFindBackwards) { return _to SetFindBackwards(aFindBackwards); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrapFind(PRBool *aWrapFind) { return _to GetWrapFind(aWrapFind); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapFind(PRBool aWrapFind) { return _to SetWrapFind(aWrapFind); } \
  NS_SCRIPTABLE NS_IMETHOD GetEntireWord(PRBool *aEntireWord) { return _to GetEntireWord(aEntireWord); } \
  NS_SCRIPTABLE NS_IMETHOD SetEntireWord(PRBool aEntireWord) { return _to SetEntireWord(aEntireWord); } \
  NS_SCRIPTABLE NS_IMETHOD GetMatchCase(PRBool *aMatchCase) { return _to GetMatchCase(aMatchCase); } \
  NS_SCRIPTABLE NS_IMETHOD SetMatchCase(PRBool aMatchCase) { return _to SetMatchCase(aMatchCase); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchFrames(PRBool *aSearchFrames) { return _to GetSearchFrames(aSearchFrames); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchFrames(PRBool aSearchFrames) { return _to SetSearchFrames(aSearchFrames); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERFIND(_to) \
  NS_SCRIPTABLE NS_IMETHOD FindNext(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindNext(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchString(PRUnichar * *aSearchString) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchString(aSearchString); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchString(const PRUnichar * aSearchString) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchString(aSearchString); } \
  NS_SCRIPTABLE NS_IMETHOD GetFindBackwards(PRBool *aFindBackwards) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFindBackwards(aFindBackwards); } \
  NS_SCRIPTABLE NS_IMETHOD SetFindBackwards(PRBool aFindBackwards) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFindBackwards(aFindBackwards); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrapFind(PRBool *aWrapFind) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrapFind(aWrapFind); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapFind(PRBool aWrapFind) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrapFind(aWrapFind); } \
  NS_SCRIPTABLE NS_IMETHOD GetEntireWord(PRBool *aEntireWord) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEntireWord(aEntireWord); } \
  NS_SCRIPTABLE NS_IMETHOD SetEntireWord(PRBool aEntireWord) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEntireWord(aEntireWord); } \
  NS_SCRIPTABLE NS_IMETHOD GetMatchCase(PRBool *aMatchCase) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMatchCase(aMatchCase); } \
  NS_SCRIPTABLE NS_IMETHOD SetMatchCase(PRBool aMatchCase) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMatchCase(aMatchCase); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchFrames(PRBool *aSearchFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchFrames(aSearchFrames); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchFrames(PRBool aSearchFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchFrames(aSearchFrames); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserFind : public nsIWebBrowserFind
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERFIND

  nsWebBrowserFind();

private:
  ~nsWebBrowserFind();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebBrowserFind, nsIWebBrowserFind)

nsWebBrowserFind::nsWebBrowserFind()
{
  /* member initializers and constructor code */
}

nsWebBrowserFind::~nsWebBrowserFind()
{
  /* destructor code */
}

/* boolean findNext (); */
NS_IMETHODIMP nsWebBrowserFind::FindNext(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute wstring searchString; */
NS_IMETHODIMP nsWebBrowserFind::GetSearchString(PRUnichar * *aSearchString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetSearchString(const PRUnichar * aSearchString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean findBackwards; */
NS_IMETHODIMP nsWebBrowserFind::GetFindBackwards(PRBool *aFindBackwards)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetFindBackwards(PRBool aFindBackwards)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean wrapFind; */
NS_IMETHODIMP nsWebBrowserFind::GetWrapFind(PRBool *aWrapFind)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetWrapFind(PRBool aWrapFind)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean entireWord; */
NS_IMETHODIMP nsWebBrowserFind::GetEntireWord(PRBool *aEntireWord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetEntireWord(PRBool aEntireWord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean matchCase; */
NS_IMETHODIMP nsWebBrowserFind::GetMatchCase(PRBool *aMatchCase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetMatchCase(PRBool aMatchCase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean searchFrames; */
NS_IMETHODIMP nsWebBrowserFind::GetSearchFrames(PRBool *aSearchFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetSearchFrames(PRBool aSearchFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebBrowserFindInFrames */
#define NS_IWEBBROWSERFINDINFRAMES_IID_STR "e0f5d182-34bc-11d5-be5b-b760676c6ebc"

#define NS_IWEBBROWSERFINDINFRAMES_IID \
  {0xe0f5d182, 0x34bc, 0x11d5, \
    { 0xbe, 0x5b, 0xb7, 0x60, 0x67, 0x6c, 0x6e, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebBrowserFindInFrames : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERFINDINFRAMES_IID)

  /* attribute nsIDOMWindow currentSearchFrame; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSearchFrame(nsIDOMWindow * *aCurrentSearchFrame) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCurrentSearchFrame(nsIDOMWindow *aCurrentSearchFrame) = 0;

  /* attribute nsIDOMWindow rootSearchFrame; */
  NS_SCRIPTABLE NS_IMETHOD GetRootSearchFrame(nsIDOMWindow * *aRootSearchFrame) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRootSearchFrame(nsIDOMWindow *aRootSearchFrame) = 0;

  /* attribute boolean searchSubframes; */
  NS_SCRIPTABLE NS_IMETHOD GetSearchSubframes(PRBool *aSearchSubframes) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSearchSubframes(PRBool aSearchSubframes) = 0;

  /* attribute boolean searchParentFrames; */
  NS_SCRIPTABLE NS_IMETHOD GetSearchParentFrames(PRBool *aSearchParentFrames) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSearchParentFrames(PRBool aSearchParentFrames) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserFindInFrames, NS_IWEBBROWSERFINDINFRAMES_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERFINDINFRAMES \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSearchFrame(nsIDOMWindow * *aCurrentSearchFrame); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentSearchFrame(nsIDOMWindow *aCurrentSearchFrame); \
  NS_SCRIPTABLE NS_IMETHOD GetRootSearchFrame(nsIDOMWindow * *aRootSearchFrame); \
  NS_SCRIPTABLE NS_IMETHOD SetRootSearchFrame(nsIDOMWindow *aRootSearchFrame); \
  NS_SCRIPTABLE NS_IMETHOD GetSearchSubframes(PRBool *aSearchSubframes); \
  NS_SCRIPTABLE NS_IMETHOD SetSearchSubframes(PRBool aSearchSubframes); \
  NS_SCRIPTABLE NS_IMETHOD GetSearchParentFrames(PRBool *aSearchParentFrames); \
  NS_SCRIPTABLE NS_IMETHOD SetSearchParentFrames(PRBool aSearchParentFrames); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERFINDINFRAMES(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSearchFrame(nsIDOMWindow * *aCurrentSearchFrame) { return _to GetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentSearchFrame(nsIDOMWindow *aCurrentSearchFrame) { return _to SetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootSearchFrame(nsIDOMWindow * *aRootSearchFrame) { return _to GetRootSearchFrame(aRootSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetRootSearchFrame(nsIDOMWindow *aRootSearchFrame) { return _to SetRootSearchFrame(aRootSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchSubframes(PRBool *aSearchSubframes) { return _to GetSearchSubframes(aSearchSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchSubframes(PRBool aSearchSubframes) { return _to SetSearchSubframes(aSearchSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchParentFrames(PRBool *aSearchParentFrames) { return _to GetSearchParentFrames(aSearchParentFrames); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchParentFrames(PRBool aSearchParentFrames) { return _to SetSearchParentFrames(aSearchParentFrames); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERFINDINFRAMES(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSearchFrame(nsIDOMWindow * *aCurrentSearchFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentSearchFrame(nsIDOMWindow *aCurrentSearchFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootSearchFrame(nsIDOMWindow * *aRootSearchFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootSearchFrame(aRootSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetRootSearchFrame(nsIDOMWindow *aRootSearchFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRootSearchFrame(aRootSearchFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchSubframes(PRBool *aSearchSubframes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchSubframes(aSearchSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchSubframes(PRBool aSearchSubframes) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchSubframes(aSearchSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchParentFrames(PRBool *aSearchParentFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchParentFrames(aSearchParentFrames); } \
  NS_SCRIPTABLE NS_IMETHOD SetSearchParentFrames(PRBool aSearchParentFrames) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchParentFrames(aSearchParentFrames); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserFindInFrames : public nsIWebBrowserFindInFrames
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERFINDINFRAMES

  nsWebBrowserFindInFrames();

private:
  ~nsWebBrowserFindInFrames();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebBrowserFindInFrames, nsIWebBrowserFindInFrames)

nsWebBrowserFindInFrames::nsWebBrowserFindInFrames()
{
  /* member initializers and constructor code */
}

nsWebBrowserFindInFrames::~nsWebBrowserFindInFrames()
{
  /* destructor code */
}

/* attribute nsIDOMWindow currentSearchFrame; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetCurrentSearchFrame(nsIDOMWindow * *aCurrentSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetCurrentSearchFrame(nsIDOMWindow *aCurrentSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMWindow rootSearchFrame; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetRootSearchFrame(nsIDOMWindow * *aRootSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetRootSearchFrame(nsIDOMWindow *aRootSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean searchSubframes; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetSearchSubframes(PRBool *aSearchSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetSearchSubframes(PRBool aSearchSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean searchParentFrames; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetSearchParentFrames(PRBool *aSearchParentFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetSearchParentFrames(PRBool aSearchParentFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserFind_h__ */
