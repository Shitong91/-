// GotoNormalTipDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "GotoNormalTipDlg.h"
#include "afxdialogex.h"


// CGotoNormalTipDlg �Ի���

IMPLEMENT_DYNAMIC(CGotoNormalTipDlg, CDialogEx)

CGotoNormalTipDlg::CGotoNormalTipDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CGotoNormalTipDlg::IDD, pParent)
{

}

CGotoNormalTipDlg::~CGotoNormalTipDlg()
{
}

void CGotoNormalTipDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CGotoNormalTipDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CGotoNormalTipDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CGotoNormalTipDlg ��Ϣ�������


void CGotoNormalTipDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
