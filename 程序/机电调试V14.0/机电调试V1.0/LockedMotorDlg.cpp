// LockedMotorDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "LockedMotorDlg.h"
#include "afxdialogex.h"


// CLockedMotorDlg �Ի���

IMPLEMENT_DYNAMIC(CLockedMotorDlg, CDialogEx)

CLockedMotorDlg::CLockedMotorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLockedMotorDlg::IDD, pParent)
{

}

CLockedMotorDlg::~CLockedMotorDlg()
{
}

void CLockedMotorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLockedMotorDlg, CDialogEx)
	ON_BN_CLICKED(IDC_Locked_Finish_BUTTON, &CLockedMotorDlg::OnBnClickedLockedFinishButton)
END_MESSAGE_MAP()


// CLockedMotorDlg ��Ϣ�������


void CLockedMotorDlg::OnBnClickedLockedFinishButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	CDialogEx::OnCancel();


}
