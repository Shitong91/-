#pragma once


// CGotoNormalTipDlg �Ի���

class CGotoNormalTipDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CGotoNormalTipDlg)

public:
	CGotoNormalTipDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CGotoNormalTipDlg();

// �Ի�������
	enum { IDD = IDD_GotoNormal_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
