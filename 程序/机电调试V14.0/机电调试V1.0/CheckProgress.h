#pragma once
#include "afxcmn.h"


// CCheckProgress �Ի���

class CCheckProgress : public CDialogEx
{
	DECLARE_DYNAMIC(CCheckProgress)

public:
	CCheckProgress(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCheckProgress();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	 CProgressCtrl m_Check_pro;
	//CProgressCtrl m_pp;
	 virtual BOOL OnInitDialog();
	 afx_msg void OnBnClickedButtonCheckfinish();
};
