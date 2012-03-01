// testesDlg.h : header file
//

#if !defined(AFX_TESTESDLG_H__1F679619_EDCB_4D48_9636_F325FF9F98C3__INCLUDED_)
#define AFX_TESTESDLG_H__1F679619_EDCB_4D48_9636_F325FF9F98C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "..\directshow\directshow.h"
#include "..\sapitts\sapitts.h"
#include "..\criptografia\cripto.h"


/////////////////////////////////////////////////////////////////////////////
// CTestesDlg dialog

class CTestesDlg : public CDialog
{
// Construction
public:
	CTestesDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTestesDlg)
	enum { IDD = IDD_TESTES_DIALOG };
	CListBox	m_listavozes;
	CString	m_arq_entrada;
	CString	m_arq_saida;
	CString	m_arq_senha;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestesDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	directshow m_directshow;
	sapitts m_sapitts;


	// Generated message map functions
	//{{AFX_MSG(CTestesDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void Ondebugar();
	afx_msg void Onvolume1();
	afx_msg void Onvolume0();
	afx_msg void Onvolume05();
	afx_msg void Ondebug2();
	afx_msg void Onvelmais();
	afx_msg void Onvelmeno();
	afx_msg void OnButton2();
	afx_msg void Onpreenchervozes();
	afx_msg void Onsetarvoz();
	afx_msg void OnBUTTONdescriptografar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTESDLG_H__1F679619_EDCB_4D48_9636_F325FF9F98C3__INCLUDED_)
