#pragma once
#include "afxcmn.h"


// Check_ProgresDlg �Ի���

class Check_ProgresDlg : public CDialogEx
{
	DECLARE_DYNAMIC(Check_ProgresDlg)

public:
	Check_ProgresDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Check_ProgresDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG_Check_Progress };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CProgressCtrl m_Check_pro;
	afx_msg void OnBnClickedButtonCheckfinish();
};
