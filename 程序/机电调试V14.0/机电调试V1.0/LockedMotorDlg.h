#pragma once


// CLockedMotorDlg �Ի���

class CLockedMotorDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLockedMotorDlg)

public:
	CLockedMotorDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLockedMotorDlg();

// �Ի�������
	enum { IDD = IDD_Locked_Motor_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLockedFinishButton();
};
