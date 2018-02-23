// Evalute_Angle_Seris.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "Evalute_Angle_Seris.h"
#include "afxdialogex.h"
#include "CTChart.h"
#include "tchart1.h"
#include "CPanel.h"
#include "CGradient.h"
#include "CSeries.h"
#include "CAxes.h"
#include "CAxis.h"
#include "CScroll.h"


// Evalute_Angle_Seris �Ի���
double max6=0.0;
IMPLEMENT_DYNAMIC(Evalute_Angle_Seris, CDialogEx)

Evalute_Angle_Seris::Evalute_Angle_Seris(CWnd* pParent /*=NULL*/)
	: CDialogEx(Evalute_Angle_Seris::IDD, pParent)

	, yuzhi(0)
{

}

Evalute_Angle_Seris::~Evalute_Angle_Seris()
{
}

void Evalute_Angle_Seris::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TCHART1, m_chart_EvaluteAngle);
	DDX_Text(pDX, IDC_EDIT_Yuzhi, yuzhi);
	DDX_Control(pDX, IDC_EDIT_Yuzhi, Edit_yuzhi);
}


BEGIN_MESSAGE_MAP(Evalute_Angle_Seris, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_EvaluteStart, &Evalute_Angle_Seris::OnBnClickedButtonEvalutestart)
//	ON_BN_CLICKED(IDC_BUTTON2, &Evalute_Angle_Seris::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_Yuzhi, &Evalute_Angle_Seris::OnBnClickedButtonYuzhi)
END_MESSAGE_MAP()


// Evalute_Angle_Seris ��Ϣ�������


BOOL Evalute_Angle_Seris::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
((CGradient)((CPanel)m_chart_EvaluteAngle.get_Panel()).get_Gradient()).put_Visible(0);
  max6=0.0;
	
	return TRUE;  // return TRUE unless you set the focus to a control

	// �쳣: OCX ����ҳӦ���� FALSE
}
 double yuzhi1=0.0;

void Evalute_Angle_Seris::OnBnClickedButtonEvalutestart()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CWnd *h,*h2;
	double bia_sum,bia_aver;
	 CString bia_aver_Str;
	h=GetDlgItem(IDC_Evaluate_Result_STATIC);
	h2=GetDlgItem(IDC_Bia_Average_STATIC);
    CString str_Evaluate_Result=_T(" "); 
	CSeries lineSeries = (CSeries) m_chart_EvaluteAngle.Series(0);
    lineSeries.Clear();
	for(int i=0; i<8; i++)  
	 {
		 lineSeries.AddXY(Ang_Cacul[i][1],bia[i], NULL, RGB(255,0,255));
		// bia_sum+=bia[i];
		 if(bia[i]<0)
           bia[i]=- bia[i];
	 }
	//  bia_aver=bia_sum/ 8.0;
	for(int j=0;j<8;j++)
		{
			 //ͨ���ɼ����õ�ͨ����MVֵ
			if(max6<=bia[j]){max6=bia[j];} //������ֵ
		//	if(min6>=bia[i]){min6=bia[i];} //�����Сֵ
		              
		}
	  bia_aver_Str.Format(_T("%f"), max6);
	 // UpdateData(true);  
	h2->SetWindowText(bia_aver_Str);
	 // UpdateData(false);
	UpdateData(true);  
	  if(max6< yuzhi1)
     { str_Evaluate_Result=_T("�ϸ�");
	  h->SetWindowText(str_Evaluate_Result);//
	   UpdateData(true);  
	  }
	 else  
		 {str_Evaluate_Result=_T("���ϸ�");
   
	      h->SetWindowText(str_Evaluate_Result);//
		  UpdateData(true);
	  }

}




void Evalute_Angle_Seris::OnBnClickedButtonYuzhi()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CString tem;
   GetDlgItem(IDC_EDIT_Yuzhi)->GetWindowText(tem) ; 
	
	// Edit_yuzhi.GetWindowText(tem);
	 yuzhi1=_ttof(tem);

} 
