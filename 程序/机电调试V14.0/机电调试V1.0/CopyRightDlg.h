#pragma once


// CCopyRightDlg �Ի���

class CCopyRightDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCopyRightDlg)

public:
	CCopyRightDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCopyRightDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
