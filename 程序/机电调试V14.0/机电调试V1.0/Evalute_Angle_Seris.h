#pragma once
#include "tchart1.h"
#include "afxwin.h"


// Evalute_Angle_Seris �Ի���

class Evalute_Angle_Seris : public CDialogEx
{
	DECLARE_DYNAMIC(Evalute_Angle_Seris)

public:
	Evalute_Angle_Seris(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Evalute_Angle_Seris();

// �Ի�������
	enum { IDD = IDD_Eval_Ang_Series_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CTchart1 m_chart_EvaluteAngle;
	double yuzhi;
	afx_msg void OnBnClickedButtonEvalutestart();
	CEdit Edit_yuzhi;

	afx_msg void OnBnClickedButtonYuzhi();
};
