#pragma once


// CMotorDataSaveDlg �Ի���

class CMotorDataSaveDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMotorDataSaveDlg)

public:
	CMotorDataSaveDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMotorDataSaveDlg();

// �Ի�������
	enum { IDD = IDD_MotorData_Save_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSaveOkButton();
	afx_msg void OnBnClickedSaveNoButton();
	afx_msg void OnBnClickedOk();
};
