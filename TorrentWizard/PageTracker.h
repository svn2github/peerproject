//
// PageTracker.h
//
// This file is part of PeerProject Torrent Wizard (peerproject.org) � 2008,2012
// Portions Copyright Shareaza Development Team, 2007.
//
// PeerProject Torrent Wizard is free software; you can redistribute it
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or later version (at your option).
//
// Torrent Wizard is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License 3.0
// along with PeerProject; if not, write to Free Software Foundation, Inc.
// 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA  (www.fsf.org)
//

#pragma once

#include "WizardSheet.h"


class CTrackerPage : public CWizardPage
{
	DECLARE_DYNCREATE(CTrackerPage)

// Construction
public:
	CTrackerPage();
	//virtual ~CTrackerPage();

	enum { IDD = IDD_TRACKER_PAGE };

// Dialog Data
public:
	//{{AFX_DATA(CTrackerPage)

	CComboBox	m_wndTracker;
	CComboBox	m_wndTracker2;
	CString 	m_sTracker;
	CString 	m_sTracker2;
	//}}AFX_DATA

protected:
	void	SaveTrackers();

// Overrides
protected:
	//{{AFX_VIRTUAL(CTrackerPage)
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardBack();
	virtual LRESULT OnWizardNext();
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CTrackerPage)
	afx_msg void OnClearTrackers();
	afx_msg void OnXButtonDown(UINT nFlags, UINT nButton, CPoint point);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};
