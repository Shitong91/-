#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "tchart1.h"



// Angle_Evalu_list �Ի���

class Angle_Evalu_list : public CDialogEx
{
	DECLARE_DYNAMIC(Angle_Evalu_list)

public:
	Angle_Evalu_list(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Angle_Evalu_list();

// �Ի�������
	enum { IDD = IDD_Evaluate_List_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl Angle_list;
	virtual BOOL OnInitDialog();
	afx_msg void OnNMClickAngleList(NMHDR *pNMHDR, LRESULT *pResult);
	CEdit m_Angle_list;
	afx_msg void OnEnKillfocusEdit2();
	afx_msg void OnBnClickedStartButton();
	afx_msg void OnBnClickedbiaButton();
	


	CTchart1 m_Tchart_Angle;
};
