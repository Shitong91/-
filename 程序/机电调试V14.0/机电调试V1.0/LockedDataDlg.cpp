// LockedDataDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "LockedDataDlg.h"
#include "afxdialogex.h"
#include "GotoNormalTipDlg.h"

// CLockedDataDlg �Ի���

IMPLEMENT_DYNAMIC(CLockedDataDlg, CDialogEx)

CLockedDataDlg::CLockedDataDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLockedDataDlg::IDD, pParent)
	, m_Edit_Locked_vol(0)
	, m_Edit_Locked_Cur(0)
	, m_Edit_Motor_Res(0)
{

}

CLockedDataDlg::~CLockedDataDlg()
{
}

void CLockedDataDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Locked_Voltage_EDIT, m_Edit_Locked_vol);
	DDX_Text(pDX, IDC_Locked_Current_EDIT, m_Edit_Locked_Cur);
	DDX_Text(pDX, IDC_Motor_Resist_EDIT, m_Edit_Motor_Res);
}


BEGIN_MESSAGE_MAP(CLockedDataDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CLockedDataDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CLockedDataDlg ��Ϣ�������


BOOL CLockedDataDlg::OnInitDialog() //�Զ������ϴδ洢�Ķ�ת����
{
	CDialogEx::OnInitDialog();

	
	
	
//	ShellExecute(NULL, _T("open"), _T("��ת��ʼ������.txt"), NULL, NULL, SW_SHOW);
	
	CStdioFile file;
	file.Open(L"��ת��ʼ������.txt",CFile::modeRead);
	CString strLine,strBuffer1,strBuffer2,strBuffer3;
	int i=0;
	//double freq[100];
	//double val[100];
	for(int j=0;j<1;j++)
    file.ReadString(strLine);//MS�����������
  while(file.ReadString(strLine))
	{
	
	  i++;
		int nHeadPos = strLine.Find(_T(" "));//��֡ͷ
		if(i==1)
		strBuffer1=strLine.Mid(nHeadPos+3,8);
		if(i==2)
        strBuffer2=strLine.Mid(nHeadPos+3,8);
		if(i==3)
        strBuffer3=strLine.Mid(nHeadPos+3,8);
      
      
	}
    GetDlgItem(IDC_Locked_Voltage_EDIT)->SetWindowText(strBuffer1); //ָ��ؼ���caption
    GetDlgItem(IDC_Locked_Current_EDIT)->SetWindowText(strBuffer2); //ָ��ؼ���caption
    GetDlgItem(IDC_Motor_Resist_EDIT)->SetWindowText(strBuffer3); //ָ��ؼ���caption
    UpdateData(true);  
//h2;//�ı䰴ť����Ϊ�򿪴���double m_Edit_Locked_vol;
	double m_Edit_Locked_Cur = 0.0;
	double m_Edit_Motor_Res = 0.0;
	 Motor_locked_Vol= m_Edit_Locked_vol;//�����ѹ
     Motor_locked_Cur= m_Edit_Locked_Cur;//�������
     Motor_locked_Res=m_Edit_Motor_Res;//��ת�������

	//file.Close();

	// UpdateData(false);

	
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}


void CLockedDataDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	Motor_locked_Vol= m_Edit_Locked_vol;//�����ѹ
    Motor_locked_Cur= m_Edit_Locked_Cur;//�������
    Motor_locked_Res=m_Edit_Motor_Res;//��ת�������
	
	CGotoNormalTipDlg  NormalTip;
	
	INT_PTR nRes=NormalTip.DoModal();
	Motor_Resfinish_flg=1;		
	if(nRes==IDOK)
	{	 
		CDialogEx::OnCancel();
	}
		
}
