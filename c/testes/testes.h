// testes.h : main header file for the TESTES application
//

#if !defined(AFX_TESTES_H__027C9A07_E060_4A7B_BDC4_796A17F9A524__INCLUDED_)
#define AFX_TESTES_H__027C9A07_E060_4A7B_BDC4_796A17F9A524__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestesApp:
// See testes.cpp for the implementation of this class
//

class CTestesApp : public CWinApp
{
public:
	CTestesApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestesApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTestesApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTES_H__027C9A07_E060_4A7B_BDC4_796A17F9A524__INCLUDED_)
