// CheckChoiceDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "CheckChoiceDlg.h"
#include "afxdialogex.h"


// CheckChoiceDlg �Ի���

IMPLEMENT_DYNAMIC(CheckChoiceDlg, CDialogEx)

CheckChoiceDlg::CheckChoiceDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CheckChoiceDlg::IDD, pParent)
	, Selftest_Radio(0)
{

}

CheckChoiceDlg::~CheckChoiceDlg()
{
}

void CheckChoiceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_Check_Moto_RADIO, Selftest_Radio);
}


BEGIN_MESSAGE_MAP(CheckChoiceDlg, CDialogEx)
	ON_BN_CLICKED(IDC_SelfCheck_BUTTON, &CheckChoiceDlg::OnBnClickedSelfcheckButton)
END_MESSAGE_MAP()


// CheckChoiceDlg ��Ϣ�������


BOOL CheckChoiceDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Selftest_Radio=0;            //��ʼ��״̬�£����Բ��Ӧ�Լ�״̬
    UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}


void CheckChoiceDlg::OnBnClickedSelfcheckButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	 UpdateData(true);
	Selftest_choice=Selftest_Radio;
	CDialogEx::OnCancel(); 
}
