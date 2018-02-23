// DataChoiceDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "DataChoiceDlg.h"
#include "afxdialogex.h"
#include "LockedMotorDlg.h"
#include "LockedDataDlg.h"
// CDataChoiceDlg �Ի���

IMPLEMENT_DYNAMIC(CDataChoiceDlg, CDialogEx)

CDataChoiceDlg::CDataChoiceDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDataChoiceDlg::IDD, pParent)
{

}

CDataChoiceDlg::~CDataChoiceDlg()
{
}

void CDataChoiceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDataChoiceDlg, CDialogEx)
	ON_BN_CLICKED(IDC_This_Data_BUTTON, &CDataChoiceDlg::OnBnClickedThisDataButton)
	ON_BN_CLICKED(IDC_Last_Data_BUTTON, &CDataChoiceDlg::OnBnClickedLastDataButton)
END_MESSAGE_MAP()


// CDataChoiceDlg ��Ϣ�������


void CDataChoiceDlg::OnBnClickedThisDataButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		 
	 CLockedMotorDlg ClickedThisDlg;
	 ClickedThisDlg.DoModal(); 
    CDialogEx::OnCancel(); 

}


void CDataChoiceDlg::OnBnClickedLastDataButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	 CLockedDataDlg CLockedThisDlg;
	 CLockedThisDlg.DoModal(); 


	 CDialogEx::OnCancel(); 
}
