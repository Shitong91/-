#pragma once


// Check_ProgressDlg �Ի���

class Check_ProgressDlg : public CDialogEx
{
	DECLARE_DYNAMIC(Check_ProgressDlg)

public:
	Check_ProgressDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Check_ProgressDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
