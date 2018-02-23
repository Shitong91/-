// Angle_Evalu_list.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�������V1.0.h"
#include "Angle_Evalu_list.h"
#include "afxdialogex.h"
#include "Evalute_Angle_Seris.h"
CString str_Eva;	
// Angle_Evalu_list �Ի���

IMPLEMENT_DYNAMIC(Angle_Evalu_list, CDialogEx)

Angle_Evalu_list::Angle_Evalu_list(CWnd* pParent /*=NULL*/)
	: CDialogEx(Angle_Evalu_list::IDD, pParent)

	
{

}

Angle_Evalu_list::~Angle_Evalu_list()
{
}

void Angle_Evalu_list::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Angle_LIST, Angle_list);
	DDX_Control(pDX, IDC_EDIT2, m_Angle_list);



	//DDX_Control(pDX, IDC_Eva_An_TCHART3, m_Tchart_Angle);
	//DDX_Control(pDX, IDC_TCHART5, m_Tchart_Angle);
}


BEGIN_MESSAGE_MAP(Angle_Evalu_list, CDialogEx)
	ON_NOTIFY(NM_DBLCLK, IDC_Angle_LIST, &Angle_Evalu_list::OnNMClickAngleList)

	ON_EN_KILLFOCUS(IDC_EDIT2, &Angle_Evalu_list::OnEnKillfocusEdit2)
	ON_BN_CLICKED(IDC_Start_BUTTON, &Angle_Evalu_list::OnBnClickedStartButton)
	ON_BN_CLICKED(IDC_bia_BUTTON, &Angle_Evalu_list::OnBnClickedbiaButton)
END_MESSAGE_MAP()


// Angle_Evalu_list ��Ϣ�������


BOOL Angle_Evalu_list::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	str_Eva=_T("��ͣ");
	CRect rect;   
  
    // ��ȡ��������б���ͼ�ؼ���λ�úʹ�С   
    Angle_list.GetClientRect(&rect);   
  
    // Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
    Angle_list.SetExtendedStyle(Angle_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);   
  
    // Ϊ�б���ͼ�ؼ��������   
    Angle_list.InsertColumn(0, _T("���"), LVCFMT_CENTER, rect.Width()/5, 0);   
    Angle_list.InsertColumn(1, _T("������"), LVCFMT_CENTER, rect.Width()/5, 1);   
    Angle_list.InsertColumn(2, _T("�ⶨ��"), LVCFMT_CENTER, rect.Width()/5, 2); 
	Angle_list.InsertColumn(3, _T("׼��ֱ"), LVCFMT_CENTER, rect.Width()/5, 3);   
    Angle_list.InsertColumn(4, _T("����"), LVCFMT_CENTER, rect.Width()/5, 4);
  
    // ���б���ͼ�ؼ��в����б���������б������ı�   
    Angle_list.InsertItem(0, _T("1"));   
   // m_programLangList.SetItemText(0, 1, _T("1"));   
    //m_programLangList.SetItemText(0, 2, _T("1"));   
   Angle_list.InsertItem(1, _T("2"));   
   // m_programLangList.SetItemText(1, 1, _T("2"));   
   // m_programLangList.SetItemText(1, 2, _T("2"));   
    Angle_list.InsertItem(2, _T("3"));   
   // m_programLangList.SetItemText(2, 1, _T("3"));   
   // m_programLangList.SetItemText(2, 2, _T("6"));   
   Angle_list.InsertItem(3, _T("4"));   
  //  m_programLangList.SetItemText(3, 1, _T("4"));   
   // m_programLangList.SetItemText(3, 2, _T("3"))
   Angle_list.InsertItem(4, _T("5")); 

   Angle_list.InsertItem(5, _T("6")); 
   Angle_list.InsertItem(6, _T("7"));
   Angle_list.InsertItem(7, _T("8")); 
  // Angle_list.InsertItem(7, _T("9")); 
   
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

 int  m_Row  ; 
   int  m_Col;
void Angle_Evalu_list::OnNMClickAngleList(NMHDR *pNMHDR, LRESULT *pResult)
{

	NM_LISTVIEW* pNMListView=(NM_LISTVIEW*)pNMHDR;  
    CRect rc;  
     m_Row = pNMListView->iItem;//���ѡ�е���  
     m_Col = pNMListView->iSubItem;//���ѡ����  
  
  
    if   (pNMListView->iSubItem != 0) //���ѡ���������;  
    {  
        Angle_list.GetSubItemRect(m_Row,m_Col,LVIR_LABEL,rc);//��������RECT��  
        m_Angle_list.SetParent(&Angle_list);//ת������Ϊ�б���е�����  
        m_Angle_list.MoveWindow(rc);//�ƶ�Edit��RECT���ڵ�λ��;  
        m_Angle_list.SetWindowText(Angle_list.GetItemText(m_Row,m_Col));//���������е�ֵ����Edit�ؼ��У�  
        m_Angle_list.ShowWindow(SW_SHOW);//��ʾEdit�ؼ���  
        m_Angle_list.SetFocus();//����Edit����  
        m_Angle_list.ShowCaret();//��ʾ���  
        m_Angle_list.SetSel(-1);//������ƶ������  
  
  
    }  
  
	*pResult = 0;
}




void Angle_Evalu_list::OnEnKillfocusEdit2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString tem;  
    m_Angle_list.GetWindowText(tem);    //�õ��û�������µ�����  
    Angle_list.SetItemText(m_Row,m_Col,tem);   //���ñ༭���������  
    m_Angle_list.ShowWindow(SW_HIDE); 
}


void Angle_Evalu_list::OnBnClickedStartButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_Start_BUTTON,str_Eva);
	CWnd *h1;
	h1=GetDlgItem(IDC_Start_BUTTON);		//ָ��ؼ���caption
  if(str_Eva==_T("��ͣ"))
	{ 
		str_Eva=_T("��ʼ");
		Flag_Stop=1;
		UpdateData(true);
	h1->SetWindowText(str_Eva);
	}
  else if(str_Eva==_T("��ʼ"))
	{
	    str_Eva=_T("��ͣ");
		Flag_Stop=0;
	UpdateData(true);
	h1->SetWindowText(str_Eva);
	}
	
	
	
	///UpdateData(true);
	//h1->SetWindowText(str_Eva);			//�ı䰴ť����Ϊ�����رմ��ڡ�
	
}

CString Angle;
void Angle_Evalu_list::OnBnClickedbiaButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	CString bia_str[8];
    int i=0;
	for(i=0;i<=7;i++)
	  for(int j=1;j<=3;j++)
	{
	  
		CString Angle =  Angle_list.GetItemText(i,j);
		Ang_Cacul[i][j]=_ttof(Angle);
	}
	
	  for(int k=0;k<=7;k++)
      //for(int l=1;l<=3;l++)
	  {  bia[k]=Ang_Cacul[k][1]-Ang_Cacul[k][2]-Ang_Cacul[k][3];
	    // Angle_list.InsertItem(k,3 _T("6"));
	     bia_str[k].Format(_T("%f"),  bia[k]);
		 Angle_list.SetItemText(k,4,(bia_str[k]));
		 
	  }
	  Evalute_Angle_Seris dlg;
	  dlg.DoModal();

	//((CSeries)Evalu_Angle_chart.Series(0)).Add(,_T(""),0);
	//for(int i=0; i<8; i++)  
   //((CSeries)Evalu_Angle_chart.Series(0)).AddXY(Ang_Cacul[i][1],bia[i], NULL, RGB(255,0,255));  //AddXY�����е�һ��������X������ݣ��ڶ���������Y������ݣ�  
//������������X���ǣ����ĸ�������ʾ��������ɫ��rand()%10,��ʾ����10���ڵ������  
}
