// Check_ProgresDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "Check_ProgresDlg.h"
#include "afxdialogex.h"


// Check_ProgresDlg �Ի���

IMPLEMENT_DYNAMIC(Check_ProgresDlg, CDialogEx)

Check_ProgresDlg::Check_ProgresDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Check_ProgresDlg::IDD, pParent)
{

}

Check_ProgresDlg::~Check_ProgresDlg()
{
}

void Check_ProgresDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Check_Progress, m_Check_pro);
}


BEGIN_MESSAGE_MAP(Check_ProgresDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CheckFinish, &Check_ProgresDlg::OnBnClickedButtonCheckfinish)
END_MESSAGE_MAP()


// Check_ProgresDlg ��Ϣ�������


BOOL Check_ProgresDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
    m_Check_pro.SetRange(0,1000);
    m_Check_pro.SetStep(1);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
 if(jindu==0)
{   
	for(int j=0;j<500;j++) //������500
	m_Check_pro.StepIt();

			

		for(int k=0;k<500;k++)//������500
			m_Check_pro.StepIt(); //��������������
	//	jindu=1;
		if(m_Check_pro.GetPos()==1000) //��������������
		{
			jindu=1;
			//CDialogEx::OnCancel();                     //������
		}
 }
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}


void Check_ProgresDlg::OnBnClickedButtonCheckfinish()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	   CDialogEx::OnCancel();  
}
