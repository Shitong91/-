// MotorDataSaveDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "MotorDataSaveDlg.h"
#include "afxdialogex.h"


// CMotorDataSaveDlg �Ի���

IMPLEMENT_DYNAMIC(CMotorDataSaveDlg, CDialogEx)

CMotorDataSaveDlg::CMotorDataSaveDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMotorDataSaveDlg::IDD, pParent)
{

}

CMotorDataSaveDlg::~CMotorDataSaveDlg()
{
}

void CMotorDataSaveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMotorDataSaveDlg, CDialogEx)
	ON_BN_CLICKED(IDC_Save_OK_BUTTON, &CMotorDataSaveDlg::OnBnClickedSaveOkButton)
	ON_BN_CLICKED(IDC_Save_NO_BUTTON, &CMotorDataSaveDlg::OnBnClickedSaveNoButton)
	ON_BN_CLICKED(IDOK, &CMotorDataSaveDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CMotorDataSaveDlg ��Ϣ�������


void CMotorDataSaveDlg::OnBnClickedSaveOkButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

CDialogEx::OnOK(); 

}


void CMotorDataSaveDlg::OnBnClickedSaveNoButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMotorDataSaveDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
