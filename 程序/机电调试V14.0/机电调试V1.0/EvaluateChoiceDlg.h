#pragma once


// CEvaluateChoiceDlg �Ի���

class CEvaluateChoiceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CEvaluateChoiceDlg)

public:
	CEvaluateChoiceDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CEvaluateChoiceDlg();

// �Ի�������
	enum { IDD = IDD_Evaluate_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	//int Motor_Evaluate_Radio;

	afx_msg void OnBnClickedOkButton();
	int Motor_Evaluate_Radio;
};
