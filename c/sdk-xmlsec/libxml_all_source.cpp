#include "stdafx_xmlsec.h"
#include "stdafx_xmlsec_base.h"

#include "libxml\xmlexports.h"

#include "libxml2-2.7.3\catalog.c"
#include "libxml2-2.7.3\debugXML.c"
#include "libxml2-2.7.3\dict.c"
#include "libxml2-2.7.3\DOCBparser.c"
#include "libxml2-2.7.3\encoding.c"

#undef growBufferReentrant
#include "libxml2-2.7.3\c14n.c"

#undef growBufferReentrant
#include "libxml2-2.7.3\entities.c"

#include "libxml2-2.7.3\error.c"
#include "libxml2-2.7.3\hash.c"


#include "libxml2-2.7.3\HTMLparser.c"
#include "libxml2-2.7.3\HTMLtree.c"
#include "libxml2-2.7.3\legacy.c"
#include "libxml2-2.7.3\list.c"
#include "libxml2-2.7.3\nanoftp.c"
#include "libxml2-2.7.3\nanohttp.c"
#include "libxml2-2.7.3\parserInternals.c"
#include "libxml2-2.7.3\pattern.c"
#include "libxml2-2.7.3\SAX2.c"
#include "libxml2-2.7.3\SAX.c"
#include "libxml2-2.7.3\schematron.c"
#include "libxml2-2.7.3\threads.c"
#include "libxml2-2.7.3\uri.c"
#include "libxml2-2.7.3\valid.c"
#include "libxml2-2.7.3\xinclude.c"
#include "libxml2-2.7.3\xlink.c"
#include "libxml2-2.7.3\xmlmemory.c"
#include "libxml2-2.7.3\xmlmodule.c"
#include "libxml2-2.7.3\xmlsave.c"
#include "libxml2-2.7.3\xmlunicode.c"
#include "libxml2-2.7.3\xmlwriter.c"
#include "libxml2-2.7.3\xmlstring.c"
#include "libxml2-2.7.3\tree.c"
#include "libxml2-2.7.3\xmlIO.c"
#include "libxml2-2.7.3\xmlschemastypes.c"
#include "libxml2-2.7.3\xpointer.c"


#include "libxml2-2.7.3\relaxng.c"

/*
coisas que a gente poderia irar, mas deixamos:
xmlWarnMsg 
xmlErrMemory 
__xmlRaiseError
__xmlSimpleError
xmlSchemaTypeErrMemory
xmlEncodingErr
fprintf
*/

extern "C" {
}

