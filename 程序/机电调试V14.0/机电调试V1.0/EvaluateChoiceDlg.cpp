// EvaluateChoiceDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "EvaluateChoiceDlg.h"
#include "afxdialogex.h"


// CEvaluateChoiceDlg �Ի���

IMPLEMENT_DYNAMIC(CEvaluateChoiceDlg, CDialogEx)

CEvaluateChoiceDlg::CEvaluateChoiceDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CEvaluateChoiceDlg::IDD, pParent)
	//, Motor_Evaluate_Radio(0)
	, Motor_Evaluate_Radio(0)
{

}

CEvaluateChoiceDlg::~CEvaluateChoiceDlg()
{
}

void CEvaluateChoiceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_Motor_Evaluate, Motor_Evaluate_Radio);
}


BEGIN_MESSAGE_MAP(CEvaluateChoiceDlg, CDialogEx)

	ON_BN_CLICKED(IDC_OK_BUTTON, &CEvaluateChoiceDlg::OnBnClickedOkButton)
END_MESSAGE_MAP()


// CEvaluateChoiceDlg ��Ϣ�������



BOOL CEvaluateChoiceDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	Motor_Evaluate_Radio=0;
	//((CButton *)GetDlgItem(IDC_Motor_Evaluate))->SetCheck(TRUE);
    UpdateData(false);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

//����ѡ��ȷ��
void CEvaluateChoiceDlg::OnBnClickedOkButton()
{

    UpdateData(true);
	Evaluate_Mode_Choice = Motor_Evaluate_Radio;
	

	CDialogEx::OnCancel(); 

}
