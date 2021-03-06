//
// CtrlWizard.h
//
// This file is part of PeerProject (peerproject.org) � 2008-2012
// Portions copyright Shareaza Development Team, 2002-2007.
//
// PeerProject is free software. You may redistribute and/or modify it
// under the terms of the GNU Affero General Public License
// as published by the Free Software Foundation (fsf.org);
// version 3 or later at your option. (AGPLv3)
//
// PeerProject is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Affero General Public License 3.0 for details:
// (http://www.gnu.org/licenses/agpl.html)
//

#pragma once

#include "AlbumFolder.h"

class CXMLElement;

class CWizardCtrl : public CWnd
{
	DECLARE_DYNAMIC(CWizardCtrl)

public:
	CWizardCtrl();
	virtual ~CWizardCtrl();
friend class CCollectionExportDlg;

// Attributes
public:
	int		m_nCaptionWidth;
	int		m_nItemHeight;
	BOOL	m_bShowBorder;
	BOOL	m_bValid;
	CString	m_sXMLPath;
	CString	m_sMainFilePath;
	CString	m_sEvenFilePath;
	CString	m_sOddFilePath;
	CString	m_sEvenFile;
	CString	m_sOddFile;
	CMap< CString, const CString&, CString, CString& >	m_pItems;

protected:
	CAlbumFolder*		m_pFolder;
	CArray< CWnd* >		m_pControls;	// Holds all controls
	CArray< CString >	m_pCaptions;	// All label texts
	CArray< CString >	m_pFileDocs;	// All documents for each file
	CArray< CString >	m_pTemplatePaths;
	CArray< CString >	m_pImagePaths;
	int		m_nScroll;

// Operations
protected:
	void	Layout();
	void	SetFocusTo(CWnd* pCtrl);
	BOOL	CollectFiles(CXMLElement* pBase);
	BOOL	CollectImages(CXMLElement* pBase);
	BOOL	MakeControls(CXMLElement* pBase, std::vector< CLibraryFile* > pList);
	BOOL	PrepareDoc(CLibraryFile* pFile, LPCTSTR pszTemplate = _T("") );

public:
	void	ScrollBy(int nDelta);
	BOOL	OnTab();
	void	Clear();

// Overrides
public:
	//{{AFX_VIRTUAL(CWizardCtrl)
	virtual BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, LPCTSTR pszXMLPath, CAlbumFolder* pFolder);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CWizardCtrl)
	afx_msg void OnPaint();
	afx_msg void OnNcPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg int  OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
public:
	afx_msg void OnBtnPress();
	afx_msg void OnDestroy();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

#define IDC_WIZARD_CONTROL		100
