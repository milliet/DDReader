/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsIFilePicker.idl
 */

#ifndef __gen_nsIFilePicker_h__
#define __gen_nsIFilePicker_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsILocalFile; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIFilePicker */
#define NS_IFILEPICKER_IID_STR "f2c0e216-5d07-4df4-bbcb-37683077ae7e"

#define NS_IFILEPICKER_IID \
  {0xf2c0e216, 0x5d07, 0x4df4, \
    { 0xbb, 0xcb, 0x37, 0x68, 0x30, 0x77, 0xae, 0x7e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFilePicker : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFILEPICKER_IID)

  enum { modeOpen = 0 };

  enum { modeSave = 1 };

  enum { modeGetFolder = 2 };

  enum { modeOpenMultiple = 3 };

  enum { returnOK = 0 };

  enum { returnCancel = 1 };

  enum { returnReplace = 2 };

  enum { filterAll = 1 };

  enum { filterHTML = 2 };

  enum { filterText = 4 };

  enum { filterImages = 8 };

  enum { filterXML = 16 };

  enum { filterXUL = 32 };

  enum { filterApps = 64 };

  enum { filterAllowURLs = 128 };

  enum { filterAudio = 256 };

  enum { filterVideo = 512 };

  /* void init (in nsIDOMWindow parent, in AString title, in short mode); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMWindow *parent, const nsAString & title, PRInt16 mode) = 0;

  /* void appendFilters (in long filterMask); */
  NS_SCRIPTABLE NS_IMETHOD AppendFilters(PRInt32 filterMask) = 0;

  /* void appendFilter (in AString title, in AString filter); */
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) = 0;

  /* attribute AString defaultString; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultString(nsAString & aDefaultString) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) = 0;

  /* attribute AString defaultExtension; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) = 0;

  /* attribute long filterIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetFilterIndex(PRInt32 *aFilterIndex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilterIndex(PRInt32 aFilterIndex) = 0;

  /* attribute nsILocalFile displayDirectory; */
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDirectory(nsILocalFile * *aDisplayDirectory) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDisplayDirectory(nsILocalFile *aDisplayDirectory) = 0;

  /* readonly attribute nsILocalFile file; */
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsILocalFile * *aFile) = 0;

  /* readonly attribute nsIURI fileURL; */
  NS_SCRIPTABLE NS_IMETHOD GetFileURL(nsIURI * *aFileURL) = 0;

  /* readonly attribute nsISimpleEnumerator files; */
  NS_SCRIPTABLE NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) = 0;

  /* attribute boolean addToRecentDocs; */
  NS_SCRIPTABLE NS_IMETHOD GetAddToRecentDocs(PRBool *aAddToRecentDocs) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAddToRecentDocs(PRBool aAddToRecentDocs) = 0;

  /* short show (); */
  NS_SCRIPTABLE NS_IMETHOD Show(PRInt16 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFilePicker, NS_IFILEPICKER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFILEPICKER \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMWindow *parent, const nsAString & title, PRInt16 mode); \
  NS_SCRIPTABLE NS_IMETHOD AppendFilters(PRInt32 filterMask); \
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultString(nsAString & aDefaultString); \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultString(const nsAString & aDefaultString); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension); \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension); \
  NS_SCRIPTABLE NS_IMETHOD GetFilterIndex(PRInt32 *aFilterIndex); \
  NS_SCRIPTABLE NS_IMETHOD SetFilterIndex(PRInt32 aFilterIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDirectory(nsILocalFile * *aDisplayDirectory); \
  NS_SCRIPTABLE NS_IMETHOD SetDisplayDirectory(nsILocalFile *aDisplayDirectory); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsILocalFile * *aFile); \
  NS_SCRIPTABLE NS_IMETHOD GetFileURL(nsIURI * *aFileURL); \
  NS_SCRIPTABLE NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles); \
  NS_SCRIPTABLE NS_IMETHOD GetAddToRecentDocs(PRBool *aAddToRecentDocs); \
  NS_SCRIPTABLE NS_IMETHOD SetAddToRecentDocs(PRBool aAddToRecentDocs); \
  NS_SCRIPTABLE NS_IMETHOD Show(PRInt16 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFILEPICKER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMWindow *parent, const nsAString & title, PRInt16 mode) { return _to Init(parent, title, mode); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFilters(PRInt32 filterMask) { return _to AppendFilters(filterMask); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) { return _to AppendFilter(title, filter); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultString(nsAString & aDefaultString) { return _to GetDefaultString(aDefaultString); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) { return _to SetDefaultString(aDefaultString); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) { return _to GetDefaultExtension(aDefaultExtension); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) { return _to SetDefaultExtension(aDefaultExtension); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterIndex(PRInt32 *aFilterIndex) { return _to GetFilterIndex(aFilterIndex); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterIndex(PRInt32 aFilterIndex) { return _to SetFilterIndex(aFilterIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDirectory(nsILocalFile * *aDisplayDirectory) { return _to GetDisplayDirectory(aDisplayDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisplayDirectory(nsILocalFile *aDisplayDirectory) { return _to SetDisplayDirectory(aDisplayDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsILocalFile * *aFile) { return _to GetFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileURL(nsIURI * *aFileURL) { return _to GetFileURL(aFileURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) { return _to GetFiles(aFiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddToRecentDocs(PRBool *aAddToRecentDocs) { return _to GetAddToRecentDocs(aAddToRecentDocs); } \
  NS_SCRIPTABLE NS_IMETHOD SetAddToRecentDocs(PRBool aAddToRecentDocs) { return _to SetAddToRecentDocs(aAddToRecentDocs); } \
  NS_SCRIPTABLE NS_IMETHOD Show(PRInt16 *_retval NS_OUTPARAM) { return _to Show(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFILEPICKER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMWindow *parent, const nsAString & title, PRInt16 mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(parent, title, mode); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFilters(PRInt32 filterMask) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendFilters(filterMask); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendFilter(title, filter); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultString(nsAString & aDefaultString) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultString(aDefaultString); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultString(aDefaultString); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultExtension(aDefaultExtension); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultExtension(aDefaultExtension); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterIndex(PRInt32 *aFilterIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilterIndex(aFilterIndex); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterIndex(PRInt32 aFilterIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterIndex(aFilterIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDirectory(nsILocalFile * *aDisplayDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisplayDirectory(aDisplayDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisplayDirectory(nsILocalFile *aDisplayDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisplayDirectory(aDisplayDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsILocalFile * *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileURL(nsIURI * *aFileURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileURL(aFileURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFiles(aFiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddToRecentDocs(PRBool *aAddToRecentDocs) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddToRecentDocs(aAddToRecentDocs); } \
  NS_SCRIPTABLE NS_IMETHOD SetAddToRecentDocs(PRBool aAddToRecentDocs) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAddToRecentDocs(aAddToRecentDocs); } \
  NS_SCRIPTABLE NS_IMETHOD Show(PRInt16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Show(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFilePicker : public nsIFilePicker
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFILEPICKER

  nsFilePicker();

private:
  ~nsFilePicker();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFilePicker, nsIFilePicker)

nsFilePicker::nsFilePicker()
{
  /* member initializers and constructor code */
}

nsFilePicker::~nsFilePicker()
{
  /* destructor code */
}

/* void init (in nsIDOMWindow parent, in AString title, in short mode); */
NS_IMETHODIMP nsFilePicker::Init(nsIDOMWindow *parent, const nsAString & title, PRInt16 mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendFilters (in long filterMask); */
NS_IMETHODIMP nsFilePicker::AppendFilters(PRInt32 filterMask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendFilter (in AString title, in AString filter); */
NS_IMETHODIMP nsFilePicker::AppendFilter(const nsAString & title, const nsAString & filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString defaultString; */
NS_IMETHODIMP nsFilePicker::GetDefaultString(nsAString & aDefaultString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetDefaultString(const nsAString & aDefaultString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString defaultExtension; */
NS_IMETHODIMP nsFilePicker::GetDefaultExtension(nsAString & aDefaultExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetDefaultExtension(const nsAString & aDefaultExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long filterIndex; */
NS_IMETHODIMP nsFilePicker::GetFilterIndex(PRInt32 *aFilterIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetFilterIndex(PRInt32 aFilterIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILocalFile displayDirectory; */
NS_IMETHODIMP nsFilePicker::GetDisplayDirectory(nsILocalFile * *aDisplayDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetDisplayDirectory(nsILocalFile *aDisplayDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsILocalFile file; */
NS_IMETHODIMP nsFilePicker::GetFile(nsILocalFile * *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI fileURL; */
NS_IMETHODIMP nsFilePicker::GetFileURL(nsIURI * *aFileURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator files; */
NS_IMETHODIMP nsFilePicker::GetFiles(nsISimpleEnumerator * *aFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean addToRecentDocs; */
NS_IMETHODIMP nsFilePicker::GetAddToRecentDocs(PRBool *aAddToRecentDocs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetAddToRecentDocs(PRBool aAddToRecentDocs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short show (); */
NS_IMETHODIMP nsFilePicker::Show(PRInt16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFilePicker_h__ */
