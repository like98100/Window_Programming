
// 0329_mfc.h : 0329_mfc ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMy0329_mfcApp:
// �� Ŭ������ ������ ���ؼ��� 0329_mfc.cpp�� �����Ͻʽÿ�.
//

class CMy0329_mfcApp : public CWinApp
{
public:
	CMy0329_mfcApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0329_mfcApp theApp;
