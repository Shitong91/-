// CheckProgress.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "CheckProgress.h"
#include "afxdialogex.h"


// CCheckProgress �Ի���

IMPLEMENT_DYNAMIC(CCheckProgress, CDialogEx)

CCheckProgress::CCheckProgress(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCheckProgress::IDD, pParent)
{

}

CCheckProgress::~CCheckProgress()
{
}

void CCheckProgress::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Check_Progress, m_Check_pro);
	//DDX_Control(pDX, IDC_Check_Progress, m_pp);
}


BEGIN_MESSAGE_MAP(CCheckProgress, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CheckFinish, &CCheckProgress::OnBnClickedButtonCheckfinish)
END_MESSAGE_MAP()


// CCheckProgress ��Ϣ�������


BOOL CCheckProgress::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	for(int j=0;j<500;j++) //������500
	m_Check_pro.StepIt();

			

		for(int k=0;k<500;k++)//������500
			m_Check_pro.StepIt(); //��������������

		if(m_Check_pro.GetPos()==1000) //��������������
		{
			jindu=1;
			CDialogEx::OnCancel();                     //������
		}
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}


void CCheckProgress::OnBnClickedButtonCheckfinish()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
    CDialogEx::OnCancel();
}
