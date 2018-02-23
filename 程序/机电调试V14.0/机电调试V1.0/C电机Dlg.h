#pragma once
#include "tchart1.h"


// C���Dlg �Ի���

class C���Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(C���Dlg)

public:
	C���Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C���Dlg();

// �Ի�������
	enum { IDD = IDD_MORTOR_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

//public:
//	afx_msg void OnBnClickedUpdateButton();
//	afx_msg void OnEnChangeRorPreEdit();

	
//	CString m_Edit_Mor_Eff;
	//��ϵ��װЧ��

	
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
private:
	//CString m_Edit_Tor_Coe;	//����ϵ��
	//CString m_Edit_Tor_Pre;//����ϵ������

	//CString m_Edit_Star_Vol;	//������ѹ
	//CString m_Edit_Star_Pre;//������ѹ����

	//CString m_Edit_Back_Elec;//���綯��
	//CString m_Edit_Back_Pre;//���綯�ƾ���

	CString m_Edit_Slip_Time;//����ʱ��
	//CString m_Edit_Slip_Pre;//����ʱ�侫��

	//CString m_Edit_Ror_Tor;//��ת����
	//CString m_Edit_Ror_Pre;//��ת���ؾ���

	CString m_Edit_Mor_Cur1;//�������1
	//CString m_Edit_Cur_Pre1;//�������1����

	CString m_Edit_Mor_Cur2;//�������2
	//CString m_Edit_Cur_Pre2;//�������2����

	//CString m_Edit_Mor_Rev1;//���ת��1
	//CString m_Edit_Mor_Rev2;//���ת��2
	
	//CString m_Edit_Tor_Flu_Pro;//���ز�����
	//CString m_Edit_Flu_Pre;//���ز����Ծ���
	CString m_Edit_Mor_Eff;//�����ϵ��װЧ��

	CTchart1 m_Tchart_Tor_Coe;//����ϵ����
	CTchart1 m_Tchart_Star_Vol;//������ѹ��
	CTchart1 m_Tchart_Back_Elec;//���綯�Ƽ�
	CTchart1 m_Tchart_Slip_Time;//����ʱ���
	CTchart1 m_Tchart_Ror_Tor;//��ת���ؼ�
	CTchart1 m_Tchart_Mor_Cur1;//�������1��
	CTchart1 m_Tchart_Mor_Rev1;//���ת��1��

	CTchart1 m_Tchart_Mor_Rev2;//���ת��2����
	CTchart1 m_Tchart_Mor_Cur2;//�������2����
	CTchart1 m_Tchart_Tor_Flu_Pro;//���ز���������

public:

	double Tor_Coe_d;//����ϵ��
	double Star_Vol_d;//������ѹ
	
//	double Star_Pre_d;//������ѹ����

	double Back_Elec_d;//���綯��
	//double Back_Pre_d;//���綯�ƾ���

	double Ror_Tor_d;//��ת����
//	double Ror_Pre_d;//��ת���ؾ���

	double Slip_Time_d;//����ʱ��
//	double Slip_Pre_d;//����ʱ�侫��

	double Mor_Cur_d;//�������
//	double Cur_Pre1_d;//�����������
//	double Cur_Pre2_d;//�����������

	double Mor_Rev_d;//���ת��
	
	double Tor_Flu_d;//���ز�����
	//double Flu_Pre_d;//���ز����Ծ���

public:
	void MortorDataDisplay();
	void GraphDraw_Motor();
	double m_Edit_Star_Vol;        
	double m_Edit_Back_Elec;
	double m_Edit_Mor_Rev1;
	double m_Edit_Mor_Rev2;//���ת��2
	double m_Edit_Tor_Coe;
	double m_Edit_Ror_Tor;
	double Edit_tor_Flu;

	CString m_Edit_Direc;


	//afx_msg void OnStnClickedTorFluProEdit();
	//afx_msg void OnStnClickedMorRev2Edit();
};
