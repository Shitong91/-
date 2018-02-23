// ModeChoiceDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "ModeChoiceDlg.h"
#include "afxdialogex.h"


// CModeChoiceDlg �Ի���

IMPLEMENT_DYNAMIC(CModeChoiceDlg, CDialogEx)

CModeChoiceDlg::CModeChoiceDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CModeChoiceDlg::IDD, pParent)
	, Motor_Radio(0)
{

}

CModeChoiceDlg::~CModeChoiceDlg()
{
}

void CModeChoiceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_Motor_Init_RADIO, Motor_Radio);
}


BEGIN_MESSAGE_MAP(CModeChoiceDlg, CDialogEx)
	ON_BN_CLICKED(IDC_Mode_OK_BUTTON, &CModeChoiceDlg::OnBnClickedModeOkButton)
END_MESSAGE_MAP()


// CModeChoiceDlg ��Ϣ�������


BOOL CModeChoiceDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Motor_Radio=1;
    UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}


void CModeChoiceDlg::OnBnClickedModeOkButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
   UpdateData(true);
	mode_choice=Motor_Radio;
	CDialogEx::OnCancel(); 
}
