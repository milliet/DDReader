/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/nsIPlacesImportExportService.idl
 */

#ifndef __gen_nsIPlacesImportExportService_h__
#define __gen_nsIPlacesImportExportService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsILocalFile; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIPlacesImportExportService */
#define NS_IPLACESIMPORTEXPORTSERVICE_IID_STR "47a4a09e-c708-4e68-b2f2-664d982ce026"

#define NS_IPLACESIMPORTEXPORTSERVICE_IID \
  {0x47a4a09e, 0xc708, 0x4e68, \
    { 0xb2, 0xf2, 0x66, 0x4d, 0x98, 0x2c, 0xe0, 0x26 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPlacesImportExportService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPLACESIMPORTEXPORTSERVICE_IID)

  /* void importHTMLFromFile (in nsILocalFile aFile, in boolean aIsInitialImport); */
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFile(nsILocalFile *aFile, PRBool aIsInitialImport) = 0;

  /* void importHTMLFromURI (in nsIURI aURI, in boolean aIsInitialImport); */
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromURI(nsIURI *aURI, PRBool aIsInitialImport) = 0;

  /* void importHTMLFromFileToFolder (in nsILocalFile aFile, in PRInt64 aFolder, in boolean aIsInitialImport); */
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFileToFolder(nsILocalFile *aFile, PRInt64 aFolder, PRBool aIsInitialImport) = 0;

  /* void exportHTMLToFile (in nsILocalFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD ExportHTMLToFile(nsILocalFile *aFile) = 0;

  /* void backupBookmarksFile (); */
  NS_SCRIPTABLE NS_IMETHOD BackupBookmarksFile(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPlacesImportExportService, NS_IPLACESIMPORTEXPORTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPLACESIMPORTEXPORTSERVICE \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFile(nsILocalFile *aFile, PRBool aIsInitialImport); \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromURI(nsIURI *aURI, PRBool aIsInitialImport); \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFileToFolder(nsILocalFile *aFile, PRInt64 aFolder, PRBool aIsInitialImport); \
  NS_SCRIPTABLE NS_IMETHOD ExportHTMLToFile(nsILocalFile *aFile); \
  NS_SCRIPTABLE NS_IMETHOD BackupBookmarksFile(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPLACESIMPORTEXPORTSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFile(nsILocalFile *aFile, PRBool aIsInitialImport) { return _to ImportHTMLFromFile(aFile, aIsInitialImport); } \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromURI(nsIURI *aURI, PRBool aIsInitialImport) { return _to ImportHTMLFromURI(aURI, aIsInitialImport); } \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFileToFolder(nsILocalFile *aFile, PRInt64 aFolder, PRBool aIsInitialImport) { return _to ImportHTMLFromFileToFolder(aFile, aFolder, aIsInitialImport); } \
  NS_SCRIPTABLE NS_IMETHOD ExportHTMLToFile(nsILocalFile *aFile) { return _to ExportHTMLToFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD BackupBookmarksFile(void) { return _to BackupBookmarksFile(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPLACESIMPORTEXPORTSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFile(nsILocalFile *aFile, PRBool aIsInitialImport) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportHTMLFromFile(aFile, aIsInitialImport); } \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromURI(nsIURI *aURI, PRBool aIsInitialImport) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportHTMLFromURI(aURI, aIsInitialImport); } \
  NS_SCRIPTABLE NS_IMETHOD ImportHTMLFromFileToFolder(nsILocalFile *aFile, PRInt64 aFolder, PRBool aIsInitialImport) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportHTMLFromFileToFolder(aFile, aFolder, aIsInitialImport); } \
  NS_SCRIPTABLE NS_IMETHOD ExportHTMLToFile(nsILocalFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExportHTMLToFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD BackupBookmarksFile(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BackupBookmarksFile(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPlacesImportExportService : public nsIPlacesImportExportService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPLACESIMPORTEXPORTSERVICE

  nsPlacesImportExportService();

private:
  ~nsPlacesImportExportService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPlacesImportExportService, nsIPlacesImportExportService)

nsPlacesImportExportService::nsPlacesImportExportService()
{
  /* member initializers and constructor code */
}

nsPlacesImportExportService::~nsPlacesImportExportService()
{
  /* destructor code */
}

/* void importHTMLFromFile (in nsILocalFile aFile, in boolean aIsInitialImport); */
NS_IMETHODIMP nsPlacesImportExportService::ImportHTMLFromFile(nsILocalFile *aFile, PRBool aIsInitialImport)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importHTMLFromURI (in nsIURI aURI, in boolean aIsInitialImport); */
NS_IMETHODIMP nsPlacesImportExportService::ImportHTMLFromURI(nsIURI *aURI, PRBool aIsInitialImport)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importHTMLFromFileToFolder (in nsILocalFile aFile, in PRInt64 aFolder, in boolean aIsInitialImport); */
NS_IMETHODIMP nsPlacesImportExportService::ImportHTMLFromFileToFolder(nsILocalFile *aFile, PRInt64 aFolder, PRBool aIsInitialImport)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exportHTMLToFile (in nsILocalFile aFile); */
NS_IMETHODIMP nsPlacesImportExportService::ExportHTMLToFile(nsILocalFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void backupBookmarksFile (); */
NS_IMETHODIMP nsPlacesImportExportService::BackupBookmarksFile()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPlacesImportExportService_h__ */
