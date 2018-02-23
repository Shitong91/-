// SerialDlg.cpp : ʵ���ļ�

#include "stdafx.h"
#include "�������V1.0.h"
#include "SerialDlg.h"
#include "afxdialogex.h"

//#include "�������V1.0Dlg.h"

// CSerialDlg �Ի���

IMPLEMENT_DYNAMIC(CSerialDlg, CDialogEx)

CSerialDlg::CSerialDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSerialDlg::IDD, pParent)
//	, m_Radio(0)
{

}

CSerialDlg::~CSerialDlg()
{
}

void CSerialDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_comb1);
	DDX_Control(pDX, IDC_COMBO2, m_comb2);
	DDX_Control(pDX, IDC_COMBO3, m_com_check);
	DDX_Control(pDX, IDC_COMBO4, m_com_data);
	DDX_Control(pDX, IDC_COMBO5, m_com_stop);
}


BEGIN_MESSAGE_MAP(CSerialDlg, CDialogEx)
	ON_BN_CLICKED(IDC_OK_BUTTON, &CSerialDlg::OnBnClickedOkButton)
	ON_BN_CLICKED(IDC_CANCEL_BUTTON, &CSerialDlg::OnBnClickedCancelButton)
	ON_BN_CLICKED(IDC_HEX_RADIO, &CSerialDlg::OnBnClickedHexRadio)
END_MESSAGE_MAP()
/****************************��ʼ��**********************************/

BOOL CSerialDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//// ����ѡ����Ͽ�
	CString str_com;
	int i;
	for(i=0;i<15;i++)
	{
		str_com.Format(_T("com %d"),i+1);
		m_comb1.InsertString(i,str_com);
	}
	m_comb1.SetCurSel(0);//Ԥ��COM��
	
//������ѡ����Ͽ�
	CString str1[]={_T("300"),_T("600"),_T("1200"),_T("2400"),_T("4800"),_T("9600"),
		            _T("19200"),_T("38400"),_T("43000"),_T("56000"),_T("57600"),_T("115200")};
	for(int i=0;i<12;i++)
	{
		int judge_tf=m_comb2.InsertString(i,str1[i]);
		if((judge_tf==CB_ERR)||(judge_tf==CB_ERRSPACE))
			MessageBox(_T("build baud error!"));
	}
	m_comb2.SetCurSel(11);//Ԥ�ò�����Ϊ"115200"

//У��λѡ����Ͽ�
	CString str2[]={_T("N"),_T("Odd"),_T("Even"),_T("Mark"),_T("Space")};
	for(int i=0;i<5;i++)
	{
		m_com_check.AddString(str2[i]);
	}
	m_com_check.SetCurSel(2);//Ԥ��У��λΪ"None"
//����λѡ����Ͽ�
	CString str3[]={_T("5"),_T("6"),_T("7"),_T("8")};
	for(int i=0;i<4;i++)
	{
		m_com_data.AddString(str3[i]);
	}
	m_com_data.SetCurSel(3);//Ԥ������λ��8
//ֹͣλѡ����Ͽ�
	CString str4[]={_T("1"),_T("1.5"),_T("2")};
	for(int i=0;i<3;i++)
	{
		m_com_stop.AddString(str4[i]);
	}
	m_com_stop.SetCurSel(0);//Ԥ��ֹͣλ��1

//	m_Radio=0;

	UpdateData(false);
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

/**************************************************************/

void CSerialDlg::OnBnClickedOkButton()
{
	 CString str1,str2,str3,str4;
	
	 com=(m_comb1.GetCurSel()+1);//[m_comb1�Ǵ��ںŶ�Ӧ�ı���]
	 m_comb2.GetLBText(m_comb2.GetCurSel(),str1);//ȡ����ѡ���ַ������������str1����[m_comb2�ǲ����ʶ�Ӧ�ı���]
	//m_comb2.SetCurSel(11)
	 m_com_check.GetLBText(m_com_check.GetCurSel(),str2);//ȡ����ѡ���ַ������������str1����
	 m_com_data.GetLBText(m_com_data.GetCurSel(),str3);//ȡ����ѡ���ַ������������str1����
	 m_com_stop.GetLBText(m_com_stop.GetCurSel(),str4);//ȡ����ѡ���ַ������������str1����
	 str5=str1+','+str2+','+str3+','+str4; //��仰�ܹؼ�
	 
	 UpdateData(true); //���ؼ���״̬����������ı���
	
	CDialogEx::OnCancel();

}


void CSerialDlg::OnBnClickedCancelButton()
{
	CDialogEx::OnCancel();
}


void CSerialDlg::OnBnClickedHexRadio()
{
	//m_Radio=1;
	//m_hex=m_Radio;
}
