// Check_ProgressDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "Check_ProgressDlg.h"
#include "afxdialogex.h"


// Check_ProgressDlg �Ի���

IMPLEMENT_DYNAMIC(Check_ProgressDlg, CDialogEx)

Check_ProgressDlg::Check_ProgressDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Check_ProgressDlg::IDD, pParent)
{

}

Check_ProgressDlg::~Check_ProgressDlg()
{
}

void Check_ProgressDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Check_ProgressDlg, CDialogEx)
END_MESSAGE_MAP()


// Check_ProgressDlg ��Ϣ�������


BOOL Check_ProgressDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
