#pragma once
#include "tchart1.h"
#include "afxwin.h"


// C�Ƕȴ�����Dlg �Ի���
#define WM_USERMESSAGE WM_USER+101 //WM_USERMESSAGEΪ�Լ��������Ϣ����
class C�Ƕȴ�����Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(C�Ƕȴ�����Dlg)

public:
	C�Ƕȴ�����Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C�Ƕȴ�����Dlg();

// �Ի�������
	enum { IDD = IDD_Angle_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

private:

	/*����������������Ӧ����*/
	CString m_Static_Enc_Angle;//�Ƕ�
	CString m_Edit_Enc_Qua;//����
	//CString m_Edit_Enc_Pre;//��λ�þ���
	CString m_Edit_Enc_P_C;//����ת
	//CString m_Edit_Enc_Eff;//��ϵ��װЧ��

	/*Բ��Ӧͬ������������Ӧ����*/
	CString m_Static_Rou_Angle;//�Ƕ�
	CString m_Edit_Rou_Qua;//����
	CString m_Edit_Rou_P_C;//����ת
	//CString m_Edit_Rou_Pre;//��λ�þ���
	//CString m_Edit_Rou_Eff;//��ϵ��װЧ��

	/*�༫��ת��ѹ����������Ӧ����*/
	CString m_Static_Mul_Angle;//�Ƕ�
	CString m_Edit_Mul_Qua;//����
	CString m_Edit_Mul_P_C;//����ת
	//CString m_Edit_Mul_Pre;//��λ�þ���
	//CString m_Edit_Mul_Eff;//��ϵ��װЧ��

public:

	afx_msg void OnTimer(UINT_PTR nIDEvent);

public:
	virtual BOOL OnInitDialog();

public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CTchart1 m_Tchart1;
	CTchart1 m_Tchart2;
	CTchart1 m_Tchart3;
	
public:
	double Mul_Angle_d;

	double Rou_Angle_d;

	double Enc_Angle_d;

	
	void DataDisplay( UINT IDD,double max,double sum,double min);

public:	
	void GraphDraw();
private:
	CTchart1 m_Chart_Graph;
public:
	
	DECLARE_EVENTSINK_MAP()
	void OnMouseMoveTchartGraph(long Shift, long X, long Y);
	

private:

	CButton m_Check_Rou;
	CButton m_Check_Enc;
	CButton m_Check_Mul;
public:
	//afx_msg void OnEnChangeEncPCEdit();
};
