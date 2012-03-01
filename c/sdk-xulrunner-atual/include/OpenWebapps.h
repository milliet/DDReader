/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/mozapps/webapps/OpenWebapps.idl
 */

#ifndef __gen_OpenWebapps_h__
#define __gen_OpenWebapps_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIOpenWebappsApplication */
#define NS_IOPENWEBAPPSAPPLICATION_IID_STR "3b937eb5-679b-41e9-aefa-543849fa61dd"

#define NS_IOPENWEBAPPSAPPLICATION_IID \
  {0x3b937eb5, 0x679b, 0x41e9, \
    { 0xae, 0xfa, 0x54, 0x38, 0x49, 0xfa, 0x61, 0xdd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsApplication : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSAPPLICATION_IID)

  /* attribute jsval manifest; */
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetManifest(const JS::Value & aManifest) = 0;

  /* attribute DOMString origin; */
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOrigin(const nsAString & aOrigin) = 0;

  /* attribute jsval install_data; */
  NS_SCRIPTABLE NS_IMETHOD GetInstall_data(JS::Value *aInstall_data) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInstall_data(const JS::Value & aInstall_data) = 0;

  /* attribute DOMString install_origin; */
  NS_SCRIPTABLE NS_IMETHOD GetInstall_origin(nsAString & aInstall_origin) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInstall_origin(const nsAString & aInstall_origin) = 0;

  /* attribute unsigned long install_time; */
  NS_SCRIPTABLE NS_IMETHOD GetInstall_time(PRUint32 *aInstall_time) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInstall_time(PRUint32 aInstall_time) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsApplication, NS_IOPENWEBAPPSAPPLICATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSAPPLICATION \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest); \
  NS_SCRIPTABLE NS_IMETHOD SetManifest(const JS::Value & aManifest); \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin); \
  NS_SCRIPTABLE NS_IMETHOD SetOrigin(const nsAString & aOrigin); \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_data(JS::Value *aInstall_data); \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_data(const JS::Value & aInstall_data); \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_origin(nsAString & aInstall_origin); \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_origin(const nsAString & aInstall_origin); \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_time(PRUint32 *aInstall_time); \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_time(PRUint32 aInstall_time); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSAPPLICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) { return _to GetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD SetManifest(const JS::Value & aManifest) { return _to SetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return _to GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrigin(const nsAString & aOrigin) { return _to SetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_data(JS::Value *aInstall_data) { return _to GetInstall_data(aInstall_data); } \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_data(const JS::Value & aInstall_data) { return _to SetInstall_data(aInstall_data); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_origin(nsAString & aInstall_origin) { return _to GetInstall_origin(aInstall_origin); } \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_origin(const nsAString & aInstall_origin) { return _to SetInstall_origin(aInstall_origin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_time(PRUint32 *aInstall_time) { return _to GetInstall_time(aInstall_time); } \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_time(PRUint32 aInstall_time) { return _to SetInstall_time(aInstall_time); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSAPPLICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetManifest(JS::Value *aManifest) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD SetManifest(const JS::Value & aManifest) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetManifest(aManifest); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrigin(nsAString & aOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrigin(const nsAString & aOrigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOrigin(aOrigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_data(JS::Value *aInstall_data) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstall_data(aInstall_data); } \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_data(const JS::Value & aInstall_data) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInstall_data(aInstall_data); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_origin(nsAString & aInstall_origin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstall_origin(aInstall_origin); } \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_origin(const nsAString & aInstall_origin) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInstall_origin(aInstall_origin); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstall_time(PRUint32 *aInstall_time) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstall_time(aInstall_time); } \
  NS_SCRIPTABLE NS_IMETHOD SetInstall_time(PRUint32 aInstall_time) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInstall_time(aInstall_time); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsApplication : public nsIOpenWebappsApplication
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSAPPLICATION

  nsOpenWebappsApplication();

private:
  ~nsOpenWebappsApplication();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsApplication, nsIOpenWebappsApplication)

nsOpenWebappsApplication::nsOpenWebappsApplication()
{
  /* member initializers and constructor code */
}

nsOpenWebappsApplication::~nsOpenWebappsApplication()
{
  /* destructor code */
}

/* attribute jsval manifest; */
NS_IMETHODIMP nsOpenWebappsApplication::GetManifest(JS::Value *aManifest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsApplication::SetManifest(const JS::Value & aManifest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString origin; */
NS_IMETHODIMP nsOpenWebappsApplication::GetOrigin(nsAString & aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsApplication::SetOrigin(const nsAString & aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval install_data; */
NS_IMETHODIMP nsOpenWebappsApplication::GetInstall_data(JS::Value *aInstall_data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsApplication::SetInstall_data(const JS::Value & aInstall_data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString install_origin; */
NS_IMETHODIMP nsOpenWebappsApplication::GetInstall_origin(nsAString & aInstall_origin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsApplication::SetInstall_origin(const nsAString & aInstall_origin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long install_time; */
NS_IMETHODIMP nsOpenWebappsApplication::GetInstall_time(PRUint32 *aInstall_time)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsApplication::SetInstall_time(PRUint32 aInstall_time)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsSuccessInstalled */
#define NS_IOPENWEBAPPSSUCCESSINSTALLED_IID_STR "fa3ac1bb-ad7d-44d7-8585-9ecdf3782d65"

#define NS_IOPENWEBAPPSSUCCESSINSTALLED_IID \
  {0xfa3ac1bb, 0xad7d, 0x44d7, \
    { 0x85, 0x85, 0x9e, 0xcd, 0xf3, 0x78, 0x2d, 0x65 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsSuccessInstalled : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSSUCCESSINSTALLED_IID)

  /* void handle (in nsIOpenWebappsApplication application); */
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication *application) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsSuccessInstalled, NS_IOPENWEBAPPSSUCCESSINSTALLED_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSSUCCESSINSTALLED \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication *application); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSSUCCESSINSTALLED(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication *application) { return _to Handle(application); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSSUCCESSINSTALLED(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication *application) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(application); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsSuccessInstalled : public nsIOpenWebappsSuccessInstalled
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSSUCCESSINSTALLED

  nsOpenWebappsSuccessInstalled();

private:
  ~nsOpenWebappsSuccessInstalled();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsSuccessInstalled, nsIOpenWebappsSuccessInstalled)

nsOpenWebappsSuccessInstalled::nsOpenWebappsSuccessInstalled()
{
  /* member initializers and constructor code */
}

nsOpenWebappsSuccessInstalled::~nsOpenWebappsSuccessInstalled()
{
  /* destructor code */
}

/* void handle (in nsIOpenWebappsApplication application); */
NS_IMETHODIMP nsOpenWebappsSuccessInstalled::Handle(nsIOpenWebappsApplication *application)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsSuccessList */
#define NS_IOPENWEBAPPSSUCCESSLIST_IID_STR "a8a83f45-4cbe-4806-b867-017554e30bd4"

#define NS_IOPENWEBAPPSSUCCESSLIST_IID \
  {0xa8a83f45, 0x4cbe, 0x4806, \
    { 0xb8, 0x67, 0x01, 0x75, 0x54, 0xe3, 0x0b, 0xd4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsSuccessList : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSSUCCESSLIST_IID)

  /* void handle ([array, size_is (count)] in nsIOpenWebappsApplication apps, in unsigned long count); */
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication **apps, PRUint32 count) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsSuccessList, NS_IOPENWEBAPPSSUCCESSLIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSSUCCESSLIST \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication **apps, PRUint32 count); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSSUCCESSLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication **apps, PRUint32 count) { return _to Handle(apps, count); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSSUCCESSLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsApplication **apps, PRUint32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(apps, count); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsSuccessList : public nsIOpenWebappsSuccessList
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSSUCCESSLIST

  nsOpenWebappsSuccessList();

private:
  ~nsOpenWebappsSuccessList();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsSuccessList, nsIOpenWebappsSuccessList)

nsOpenWebappsSuccessList::nsOpenWebappsSuccessList()
{
  /* member initializers and constructor code */
}

nsOpenWebappsSuccessList::~nsOpenWebappsSuccessList()
{
  /* destructor code */
}

/* void handle ([array, size_is (count)] in nsIOpenWebappsApplication apps, in unsigned long count); */
NS_IMETHODIMP nsOpenWebappsSuccessList::Handle(nsIOpenWebappsApplication **apps, PRUint32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsError */
#define NS_IOPENWEBAPPSERROR_IID_STR "75e44e3f-ccda-4497-af68-8abd3f5e1d7b"

#define NS_IOPENWEBAPPSERROR_IID \
  {0x75e44e3f, 0xccda, 0x4497, \
    { 0xaf, 0x68, 0x8a, 0xbd, 0x3f, 0x5e, 0x1d, 0x7b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsError : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSERROR_IID)

  /* attribute DOMString code; */
  NS_SCRIPTABLE NS_IMETHOD GetCode(nsAString & aCode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCode(const nsAString & aCode) = 0;

  /* attribute DOMString message; */
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMessage(const nsAString & aMessage) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsError, NS_IOPENWEBAPPSERROR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSERROR \
  NS_SCRIPTABLE NS_IMETHOD GetCode(nsAString & aCode); \
  NS_SCRIPTABLE NS_IMETHOD SetCode(const nsAString & aCode); \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage); \
  NS_SCRIPTABLE NS_IMETHOD SetMessage(const nsAString & aMessage); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSERROR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCode(nsAString & aCode) { return _to GetCode(aCode); } \
  NS_SCRIPTABLE NS_IMETHOD SetCode(const nsAString & aCode) { return _to SetCode(aCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage) { return _to GetMessage(aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetMessage(const nsAString & aMessage) { return _to SetMessage(aMessage); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSERROR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCode(nsAString & aCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCode(aCode); } \
  NS_SCRIPTABLE NS_IMETHOD SetCode(const nsAString & aCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCode(aCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsAString & aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessage(aMessage); } \
  NS_SCRIPTABLE NS_IMETHOD SetMessage(const nsAString & aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMessage(aMessage); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsError : public nsIOpenWebappsError
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSERROR

  nsOpenWebappsError();

private:
  ~nsOpenWebappsError();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsError, nsIOpenWebappsError)

nsOpenWebappsError::nsOpenWebappsError()
{
  /* member initializers and constructor code */
}

nsOpenWebappsError::~nsOpenWebappsError()
{
  /* destructor code */
}

/* attribute DOMString code; */
NS_IMETHODIMP nsOpenWebappsError::GetCode(nsAString & aCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsError::SetCode(const nsAString & aCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString message; */
NS_IMETHODIMP nsOpenWebappsError::GetMessage(nsAString & aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenWebappsError::SetMessage(const nsAString & aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsErrorCB */
#define NS_IOPENWEBAPPSERRORCB_IID_STR "8b29495e-a5e4-4e76-9af8-0f6fe97b8959"

#define NS_IOPENWEBAPPSERRORCB_IID \
  {0x8b29495e, 0xa5e4, 0x4e76, \
    { 0x9a, 0xf8, 0x0f, 0x6f, 0xe9, 0x7b, 0x89, 0x59 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsErrorCB : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSERRORCB_IID)

  /* void handle (in nsIOpenWebappsError error); */
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsError *error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsErrorCB, NS_IOPENWEBAPPSERRORCB_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSERRORCB \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsError *error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSERRORCB(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsError *error) { return _to Handle(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSERRORCB(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(nsIOpenWebappsError *error) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsErrorCB : public nsIOpenWebappsErrorCB
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSERRORCB

  nsOpenWebappsErrorCB();

private:
  ~nsOpenWebappsErrorCB();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsErrorCB, nsIOpenWebappsErrorCB)

nsOpenWebappsErrorCB::nsOpenWebappsErrorCB()
{
  /* member initializers and constructor code */
}

nsOpenWebappsErrorCB::~nsOpenWebappsErrorCB()
{
  /* destructor code */
}

/* void handle (in nsIOpenWebappsError error); */
NS_IMETHODIMP nsOpenWebappsErrorCB::Handle(nsIOpenWebappsError *error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsSuccessEmpty */
#define NS_IOPENWEBAPPSSUCCESSEMPTY_IID_STR "b86669ab-6a36-4ceb-a4bf-a980dd496144"

#define NS_IOPENWEBAPPSSUCCESSEMPTY_IID \
  {0xb86669ab, 0x6a36, 0x4ceb, \
    { 0xa4, 0xbf, 0xa9, 0x80, 0xdd, 0x49, 0x61, 0x44 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsSuccessEmpty : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSSUCCESSEMPTY_IID)

  /* void handle (); */
  NS_SCRIPTABLE NS_IMETHOD Handle(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsSuccessEmpty, NS_IOPENWEBAPPSSUCCESSEMPTY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSSUCCESSEMPTY \
  NS_SCRIPTABLE NS_IMETHOD Handle(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSSUCCESSEMPTY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(void) { return _to Handle(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSSUCCESSEMPTY(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsSuccessEmpty : public nsIOpenWebappsSuccessEmpty
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSSUCCESSEMPTY

  nsOpenWebappsSuccessEmpty();

private:
  ~nsOpenWebappsSuccessEmpty();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsSuccessEmpty, nsIOpenWebappsSuccessEmpty)

nsOpenWebappsSuccessEmpty::nsOpenWebappsSuccessEmpty()
{
  /* member initializers and constructor code */
}

nsOpenWebappsSuccessEmpty::~nsOpenWebappsSuccessEmpty()
{
  /* destructor code */
}

/* void handle (); */
NS_IMETHODIMP nsOpenWebappsSuccessEmpty::Handle()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsChangeCallback */
#define NS_IOPENWEBAPPSCHANGECALLBACK_IID_STR "a458afcf-eee9-42fb-bd90-75d5e41c0d9e"

#define NS_IOPENWEBAPPSCHANGECALLBACK_IID \
  {0xa458afcf, 0xeee9, 0x42fb, \
    { 0xbd, 0x90, 0x75, 0xd5, 0xe4, 0x1c, 0x0d, 0x9e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsChangeCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSCHANGECALLBACK_IID)

  /* void update (in DOMString what, [array, size_is (count)] in nsIOpenWebappsApplication apps, in unsigned long count); */
  NS_SCRIPTABLE NS_IMETHOD Update(const nsAString & what, nsIOpenWebappsApplication **apps, PRUint32 count) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsChangeCallback, NS_IOPENWEBAPPSCHANGECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSCHANGECALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Update(const nsAString & what, nsIOpenWebappsApplication **apps, PRUint32 count); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSCHANGECALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Update(const nsAString & what, nsIOpenWebappsApplication **apps, PRUint32 count) { return _to Update(what, apps, count); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSCHANGECALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Update(const nsAString & what, nsIOpenWebappsApplication **apps, PRUint32 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->Update(what, apps, count); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsChangeCallback : public nsIOpenWebappsChangeCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSCHANGECALLBACK

  nsOpenWebappsChangeCallback();

private:
  ~nsOpenWebappsChangeCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsChangeCallback, nsIOpenWebappsChangeCallback)

nsOpenWebappsChangeCallback::nsOpenWebappsChangeCallback()
{
  /* member initializers and constructor code */
}

nsOpenWebappsChangeCallback::~nsOpenWebappsChangeCallback()
{
  /* destructor code */
}

/* void update (in DOMString what, [array, size_is (count)] in nsIOpenWebappsApplication apps, in unsigned long count); */
NS_IMETHODIMP nsOpenWebappsChangeCallback::Update(const nsAString & what, nsIOpenWebappsApplication **apps, PRUint32 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebappsMgmt */
#define NS_IOPENWEBAPPSMGMT_IID_STR "f3ec76a6-abca-4d90-b8c9-e221033068ef"

#define NS_IOPENWEBAPPSMGMT_IID \
  {0xf3ec76a6, 0xabca, 0x4d90, \
    { 0xb8, 0xc9, 0xe2, 0x21, 0x03, 0x30, 0x68, 0xef }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebappsMgmt : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPSMGMT_IID)

  /* void launch (in DOMString origin, [optional] in nsIOpenWebappsSuccessEmpty onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) = 0;

  /* void list (in nsIOpenWebappsSuccessList onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
  NS_SCRIPTABLE NS_IMETHOD List(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror) = 0;

  /* void uninstall (in DOMString origin, in nsIOpenWebappsSuccessEmpty onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
  NS_SCRIPTABLE NS_IMETHOD Uninstall(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) = 0;

  /* long watchUpdates (in nsIOpenWebappsChangeCallback callback); */
  NS_SCRIPTABLE NS_IMETHOD WatchUpdates(nsIOpenWebappsChangeCallback *callback, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void clearWatch (in long watchId); */
  NS_SCRIPTABLE NS_IMETHOD ClearWatch(PRInt32 watchId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebappsMgmt, NS_IOPENWEBAPPSMGMT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPSMGMT \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror); \
  NS_SCRIPTABLE NS_IMETHOD List(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror); \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror); \
  NS_SCRIPTABLE NS_IMETHOD WatchUpdates(nsIOpenWebappsChangeCallback *callback, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ClearWatch(PRInt32 watchId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPSMGMT(_to) \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) { return _to Launch(origin, onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD List(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror) { return _to List(onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) { return _to Uninstall(origin, onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD WatchUpdates(nsIOpenWebappsChangeCallback *callback, PRInt32 *_retval NS_OUTPARAM) { return _to WatchUpdates(callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearWatch(PRInt32 watchId) { return _to ClearWatch(watchId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPSMGMT(_to) \
  NS_SCRIPTABLE NS_IMETHOD Launch(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->Launch(origin, onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD List(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->List(onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD Uninstall(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->Uninstall(origin, onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD WatchUpdates(nsIOpenWebappsChangeCallback *callback, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WatchUpdates(callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearWatch(PRInt32 watchId) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearWatch(watchId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebappsMgmt : public nsIOpenWebappsMgmt
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPSMGMT

  nsOpenWebappsMgmt();

private:
  ~nsOpenWebappsMgmt();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebappsMgmt, nsIOpenWebappsMgmt)

nsOpenWebappsMgmt::nsOpenWebappsMgmt()
{
  /* member initializers and constructor code */
}

nsOpenWebappsMgmt::~nsOpenWebappsMgmt()
{
  /* destructor code */
}

/* void launch (in DOMString origin, [optional] in nsIOpenWebappsSuccessEmpty onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
NS_IMETHODIMP nsOpenWebappsMgmt::Launch(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void list (in nsIOpenWebappsSuccessList onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
NS_IMETHODIMP nsOpenWebappsMgmt::List(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void uninstall (in DOMString origin, in nsIOpenWebappsSuccessEmpty onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
NS_IMETHODIMP nsOpenWebappsMgmt::Uninstall(const nsAString & origin, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long watchUpdates (in nsIOpenWebappsChangeCallback callback); */
NS_IMETHODIMP nsOpenWebappsMgmt::WatchUpdates(nsIOpenWebappsChangeCallback *callback, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearWatch (in long watchId); */
NS_IMETHODIMP nsOpenWebappsMgmt::ClearWatch(PRInt32 watchId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIOpenWebapps */
#define NS_IOPENWEBAPPS_IID_STR "cecd9de7-ea4e-45fd-8a01-a5861d9109ab"

#define NS_IOPENWEBAPPS_IID \
  {0xcecd9de7, 0xea4e, 0x45fd, \
    { 0x8a, 0x01, 0xa5, 0x86, 0x1d, 0x91, 0x09, 0xab }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOpenWebapps : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENWEBAPPS_IID)

  /* void install (in DOMString manifestURI, [optional] in jsval install_data, [optional] in nsIOpenWebappsSuccessEmpty onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestURI, const JS::Value & install_data, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) = 0;

  /* void amInstalled (in nsIOpenWebappsSuccessInstalled onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
  NS_SCRIPTABLE NS_IMETHOD AmInstalled(nsIOpenWebappsSuccessInstalled *onsuccess, nsIOpenWebappsErrorCB *onerror) = 0;

  /* void getInstalledBy (in nsIOpenWebappsSuccessList onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
  NS_SCRIPTABLE NS_IMETHOD GetInstalledBy(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror) = 0;

  /* readonly attribute nsIOpenWebappsMgmt mgmt; */
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(nsIOpenWebappsMgmt * *aMgmt) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenWebapps, NS_IOPENWEBAPPS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENWEBAPPS \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestURI, const JS::Value & install_data, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror); \
  NS_SCRIPTABLE NS_IMETHOD AmInstalled(nsIOpenWebappsSuccessInstalled *onsuccess, nsIOpenWebappsErrorCB *onerror); \
  NS_SCRIPTABLE NS_IMETHOD GetInstalledBy(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror); \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(nsIOpenWebappsMgmt * *aMgmt); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENWEBAPPS(_to) \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestURI, const JS::Value & install_data, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) { return _to Install(manifestURI, install_data, onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD AmInstalled(nsIOpenWebappsSuccessInstalled *onsuccess, nsIOpenWebappsErrorCB *onerror) { return _to AmInstalled(onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstalledBy(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror) { return _to GetInstalledBy(onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(nsIOpenWebappsMgmt * *aMgmt) { return _to GetMgmt(aMgmt); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENWEBAPPS(_to) \
  NS_SCRIPTABLE NS_IMETHOD Install(const nsAString & manifestURI, const JS::Value & install_data, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->Install(manifestURI, install_data, onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD AmInstalled(nsIOpenWebappsSuccessInstalled *onsuccess, nsIOpenWebappsErrorCB *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->AmInstalled(onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetInstalledBy(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstalledBy(onsuccess, onerror); } \
  NS_SCRIPTABLE NS_IMETHOD GetMgmt(nsIOpenWebappsMgmt * *aMgmt) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMgmt(aMgmt); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenWebapps : public nsIOpenWebapps
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENWEBAPPS

  nsOpenWebapps();

private:
  ~nsOpenWebapps();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOpenWebapps, nsIOpenWebapps)

nsOpenWebapps::nsOpenWebapps()
{
  /* member initializers and constructor code */
}

nsOpenWebapps::~nsOpenWebapps()
{
  /* destructor code */
}

/* void install (in DOMString manifestURI, [optional] in jsval install_data, [optional] in nsIOpenWebappsSuccessEmpty onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
NS_IMETHODIMP nsOpenWebapps::Install(const nsAString & manifestURI, const JS::Value & install_data, nsIOpenWebappsSuccessEmpty *onsuccess, nsIOpenWebappsErrorCB *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void amInstalled (in nsIOpenWebappsSuccessInstalled onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
NS_IMETHODIMP nsOpenWebapps::AmInstalled(nsIOpenWebappsSuccessInstalled *onsuccess, nsIOpenWebappsErrorCB *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getInstalledBy (in nsIOpenWebappsSuccessList onsuccess, [optional] in nsIOpenWebappsErrorCB onerror); */
NS_IMETHODIMP nsOpenWebapps::GetInstalledBy(nsIOpenWebappsSuccessList *onsuccess, nsIOpenWebappsErrorCB *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIOpenWebappsMgmt mgmt; */
NS_IMETHODIMP nsOpenWebapps::GetMgmt(nsIOpenWebappsMgmt * *aMgmt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_OpenWebapps_h__ */
