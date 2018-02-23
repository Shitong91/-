// C���Dlg.cpp : ʵ���ļ�

#include "stdafx.h"
#include "�������V1.0.h"
#include "C���Dlg.h"
#include "afxdialogex.h"
#include "�������V1.0Dlg.h"
#include "CTChart.h"
#include "tchart1.h"
#include "CPanel.h"
#include "CGradient.h"
#include "CSeries.h"
#include "CAxes.h"
#include "CAxis.h"
#include "CScroll.h"


int flag_cal_Mor=0;

// C���Dlg �Ի���

IMPLEMENT_DYNAMIC(C���Dlg, CDialogEx)

C���Dlg::C���Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C���Dlg::IDD, pParent)
	
	//, m_Edit_Tor_Pre(_T("0"))


	//, m_Edit_Star_Pre(_T("0"))

	
	//, m_Edit_Back_Pre(_T("0"))

	, m_Edit_Slip_Time(_T("0"))
	//, m_Edit_Slip_Pre(_T("0"))

	
	//, m_Edit_Ror_Pre(_T("0"))

	, m_Edit_Mor_Cur1(_T("0"))
	//, m_Edit_Cur_Pre1(_T("0"))
	, m_Edit_Mor_Cur2(_T("0"))
	//, m_Edit_Cur_Pre2(_T("0"))


	, m_Edit_Mor_Rev2(0)
	, m_Edit_Direc(_T("0"))

	, m_Edit_Star_Vol(0)
	, m_Edit_Back_Elec(0)
	, m_Edit_Mor_Rev1(0)
	, m_Edit_Tor_Coe(0)
	, m_Edit_Ror_Tor(0)
	, Edit_tor_Flu(0)
	
	, m_Edit_Mor_Eff(_T(""))
{

}

C���Dlg::~C���Dlg()
{
}

void C���Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);




	//DDX_Text(pDX, IDC_Tor_Pre_EDIT, m_Edit_Tor_Pre);


	//DDX_Text(pDX, IDC_Star_Pre_EDIT, m_Edit_Star_Pre);

	//DDX_Text(pDX, IDC_Back_Elec_EDIT, m_Edit_Back_Elec);
	//DDX_Text(pDX, IDC_Back_Pre_EDIT, m_Edit_Back_Pre);

	DDX_Text(pDX, IDC_Slip_Time_EDIT, m_Edit_Slip_Time);
	//DDX_Text(pDX, IDC_Slip_Pre_EDIT, m_Edit_Slip_Pre);

	//DDX_Text(pDX, IDC_Ror_Tor_EDIT, m_Edit_Ror_Tor);
	//DDX_Text(pDX, IDC_Ror_Pre_EDIT, m_Edit_Ror_Pre);

	DDX_Text(pDX, IDC_Mor_Cur1_EDIT, m_Edit_Mor_Cur1);
	//DDX_Text(pDX, IDC_Cur_Pre1_EDIT, m_Edit_Cur_Pre1);

	DDX_Text(pDX, IDC_Mor_Cur2_EDIT, m_Edit_Mor_Cur2);
	//DDX_Text(pDX, IDC_Cur_Pre2_EDIT, m_Edit_Cur_Pre2);

	//DDX_Text(pDX, IDC_Mor_Rev1_EDIT, m_Edit_Mor_Rev1);
	DDX_Text(pDX, IDC_Mor_Rev2_EDIT, m_Edit_Mor_Rev2);

	//DDX_Text(pDX, IDC_Tor_Flu_Pro_EDIT, m_Edit_Tor_Flu_Pro);
	//DDX_Text(pDX, IDC_Flu_Pre_EDIT, m_Edit_Flu_Pre);

	DDX_Control(pDX, IDC_Star_Vol_TCHART, m_Tchart_Star_Vol);//��
	DDX_Control(pDX, IDC_Tor_Coe_TCHART, m_Tchart_Tor_Coe);
	DDX_Control(pDX, IDC_Back_Elec_TCHART, m_Tchart_Back_Elec);
	DDX_Control(pDX, IDC_Slip_Time_TCHART, m_Tchart_Slip_Time);
	DDX_Control(pDX, IDC_Ror_Tor_TCHART, m_Tchart_Ror_Tor);
	DDX_Control(pDX, IDC_Mor_Cur1_TCHART, m_Tchart_Mor_Cur1);
	DDX_Control(pDX, IDC_Mor_Rev1_TCHART, m_Tchart_Mor_Rev1);

	DDX_Control(pDX, IDC_Mor_Rev_TCHART, m_Tchart_Mor_Rev2);//����
	DDX_Control(pDX, IDC_Mor_Cur2_TCHART, m_Tchart_Mor_Cur2);
	DDX_Control(pDX, IDC_Tor_Flu_Pro_TCHART, m_Tchart_Tor_Flu_Pro);
	DDX_Text(pDX, IDC_Star_Vol_EDIT, m_Edit_Star_Vol);
	DDX_Text(pDX, IDC_Back_Elec_EDIT, m_Edit_Back_Elec);
	DDX_Text(pDX, IDC_Mor_Rev1_EDIT, m_Edit_Mor_Rev1);
	DDX_Text(pDX, IDC_Tor_Coe_EDIT, m_Edit_Tor_Coe);
	DDX_Text(pDX, IDC_Ror_Tor_EDIT, m_Edit_Ror_Tor);
	DDX_Text(pDX, IDC_Tor_Flu_Pro_EDIT, Edit_tor_Flu);
	DDX_Text(pDX, IDC_Mor_Rev_Direc, m_Edit_Direc);
	DDX_Text(pDX, IDC_Mor_Eff_EDIT, m_Edit_Mor_Eff);
}


BEGIN_MESSAGE_MAP(C���Dlg, CDialogEx)

	ON_WM_TIMER()
	
//	ON_STN_CLICKED(IDC_Tor_Flu_Pro_EDIT, &C���Dlg::OnStnClickedTorFluProEdit)
//	ON_STN_CLICKED(IDC_Mor_Rev2_EDIT, &C���Dlg::OnStnClickedMorRev2Edit)
END_MESSAGE_MAP()


// C���Dlg ��Ϣ�������



/************************************��ʼ��*********************************************/
BOOL C���Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	((CGradient)((CPanel)m_Tchart_Tor_Coe.get_Panel()).get_Gradient()).put_Visible(0);
	((CGradient)((CPanel)m_Tchart_Star_Vol.get_Panel()).get_Gradient()).put_Visible(0);
	((CGradient)((CPanel)m_Tchart_Back_Elec.get_Panel()).get_Gradient()).put_Visible(0); 
	((CGradient)((CPanel)m_Tchart_Slip_Time.get_Panel()).get_Gradient()).put_Visible(0);
	((CGradient)((CPanel)m_Tchart_Ror_Tor.get_Panel()).get_Gradient()).put_Visible(0);
	((CGradient)((CPanel)m_Tchart_Mor_Cur1.get_Panel()).get_Gradient()).put_Visible(0); 
	((CGradient)((CPanel)m_Tchart_Mor_Cur2.get_Panel()).get_Gradient()).put_Visible(0);
	((CGradient)((CPanel)m_Tchart_Tor_Flu_Pro.get_Panel()).get_Gradient()).put_Visible(0); 
	((CGradient)((CPanel)m_Tchart_Mor_Rev1.get_Panel()).get_Gradient()).put_Visible(0);
	((CGradient)((CPanel)m_Tchart_Mor_Rev2.get_Panel()).get_Gradient()).put_Visible(0); 
	jiaodu_flg=0;     //�Ƕȳ����ݲ�ִ�У�
	SetTimer(1, 1, NULL);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

/*****************************************��ʱ��******************************************/
void C���Dlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnTimer(nIDEvent);
		//C�������V10Dlg *pDia=C�������V10Dlg::motorDialog;
	
	if(Flag_Stop==0)//�򿪴���
	{  
	 
	  
	   MortorDataDisplay();//���������ʾ
       UpdateData(false);
	   GraphDraw_Motor();
      
	}
	 
}

void C���Dlg::MortorDataDisplay()
{
	C�������V10Dlg *pDia=C�������V10Dlg::motorDialog;
	
	m_Edit_Tor_Coe= pDia->Tor_Coe; //����ϵ��
	Tor_Coe_d= m_Edit_Tor_Coe;

    ((CSeries)m_Tchart_Tor_Coe.Series(0)).Add(Tor_Coe_d,_T(""),0);

 
	
	//Star_Vol_Str

    m_Edit_Star_Vol=pDia->Star_Vol; //������ѹ
	Star_Vol_d=m_Edit_Star_Vol;
	((CSeries)m_Tchart_Star_Vol.Series(0)).Add(Star_Vol_d,_T(""),0);




	m_Edit_Back_Elec=pDia->Back_Elec;//���綯��
	Back_Elec_d=m_Edit_Back_Elec;
	((CSeries)m_Tchart_Back_Elec.Series(0)).Add(Back_Elec_d,_T(""),0);

	//m_Edit_Back_Pre=pDia->Back_Pre;//���綯�ƾ���


	m_Edit_Slip_Time=pDia->Slip_Time;//����ʱ��
	Slip_Time_d=_ttof(m_Edit_Slip_Time);
	((CSeries)m_Tchart_Slip_Time.Series(0)).Add(Slip_Time_d,_T(""),0);

	//m_Edit_Slip_Pre=pDia->Slip_Pre;//����ʱ�侫��


	m_Edit_Ror_Tor=pDia->Ror_Tor;//��ת����
	Ror_Tor_d=m_Edit_Ror_Tor;
	((CSeries)m_Tchart_Ror_Tor.Series(0)).Add(Ror_Tor_d,_T(""),0);

	//m_Edit_Ror_Pre=pDia->Ror_Pre;//��ת���ؾ���

	
	m_Edit_Mor_Cur1=pDia->Mor_Cur;//�������
	Mor_Cur_d=_ttof(m_Edit_Mor_Cur1);
   ((CSeries)m_Tchart_Mor_Cur1.Series(0)).Add(Mor_Cur_d,_T(""),0);
	//m_Edit_Cur_Pre1=pDia->Cur_Pre;//�����������

	//m_Edit_Cur_Pre2=pDia->Cur_Pre;


	Edit_tor_Flu=pDia->Tor_Flu;//���ز�����
	Tor_Flu_d=Edit_tor_Flu;
	//((CSeries)m_Tchart_Tor_Flu_Pro.Series(0)).Add(Tor_Flu_d,_T(""),0);
	

//m_Edit_Flu_Pre=pDia->Flu_Pre;//���ز����Ծ���


	m_Edit_Mor_Rev1=pDia->Mor_Rev;//���ת��
	Mor_Rev_d=m_Edit_Mor_Rev1;
	((CSeries)m_Tchart_Mor_Rev1.Series(0)).Add(Mor_Rev_d,_T(""),0);

	m_Edit_Direc=pDia->Mor_Rev_Direc;//���ת��
	m_Edit_Mor_Rev2=m_Edit_Mor_Rev1;    
	//Mor_Rev_d=_ttof(m_Edit_Mor_Rev2);

	if(flag_Eff==1)   //��ת�ٲ�Ϊ0ʱ����ϵ��װ����
	{
		m_Edit_Mor_Eff=_T("����");
	}
	else
		m_Edit_Mor_Eff=_T("��");
	
}

void C���Dlg::GraphDraw_Motor()
{
 
	((CSeries)m_Tchart_Mor_Cur2.Series(0)).Add(Mor_Cur_d,_T(""),0);//��������
	//((CAxis)((CAxes)m_Tchart_Mor_Cur2.get_Axis()).get_Bottom()).Scroll(1.0,TRUE); //���������ƶ�
	if (((CSeries)m_Tchart_Mor_Cur2.Series(0)).get_Count()>500)
     ((CSeries)m_Tchart_Mor_Cur2.Series(0)).Clear();

	((CSeries)m_Tchart_Tor_Flu_Pro.Series(0)).Add(Tor_Flu_d,_T(""),0);//��������
	//((CAxis)((CAxes)m_Tchart_Tor_Flu_Pro.get_Axis()).get_Bottom()).Scroll(1.0,TRUE); //���������ƶ�
	if (((CSeries)m_Tchart_Tor_Flu_Pro.Series(0)).get_Count()>500)
     ((CSeries)m_Tchart_Tor_Flu_Pro.Series(0)).Clear();
	
	((CSeries)m_Tchart_Mor_Rev2.Series(0)).Add(Mor_Rev_d,_T(""),0);//��������
	//((CAxis)((CAxes)m_Tchart_Mor_Rev2.get_Axis()).get_Bottom()).Scroll(1.0,TRUE); //���������ƶ�
 
    if (((CSeries)m_Tchart_Mor_Rev2.Series(0)).get_Count()>500)
     ((CSeries)m_Tchart_Mor_Rev2.Series(0)).Clear();
}




