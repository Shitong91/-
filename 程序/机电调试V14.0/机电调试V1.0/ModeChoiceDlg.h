#pragma once


// CModeChoiceDlg �Ի���

class CModeChoiceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModeChoiceDlg)

public:
	CModeChoiceDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CModeChoiceDlg();

// �Ի�������
	enum { IDD = IDD_ModeChoice_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int Motor_Radio;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedModeOkButton();
};
