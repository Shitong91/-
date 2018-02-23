
// �������V1.0Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "mscomm1.h"
#include "afxcmn.h"
#include "C���Dlg.h"
#include "C�Ƕȴ�����Dlg.h"
 
#define WM_USERMESSAGE WM_USER+101 //WM_USERMESSAGEΪ�Լ��������Ϣ����
// C�������V10Dlg �Ի���
class C�������V10Dlg : public CDialogEx
{
// ����
public:
	C�������V10Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_V10_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:

	CComboBox m_comb1;
	CComboBox m_comb2;
public:
	CMscomm1 m_mscom;

	//afx_msg void OnBnClickedButtonOpen();
	//afx_msg void OnBnClickedButtonSend();
//	afx_msg void OnBnClickedButtonClear();
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	afx_msg void OnSetAbout();

	CTabCtrl m_tab;
	C���Dlg m_motorDlg;//�������tab�ĳ�Ա����
	C�Ƕȴ�����Dlg m_AngleDlg;//�Ƕȴ���������tab�ĳ�Ա����
	CStatusBar m_bar;
public:

	CString Tor_Coee;//����ϵ���м����
	CString Tor_Pre; //����ϵ�������м����

	CString Star_Vol_Str;//������ѹ�м����
	CString Star_Pre;//������ѹ�����м����
	CString Star_Voll;////////////////////////////////////
	//CString Back_Elec;//���綯���м����
	CString Back_Pre;//���綯�ƾ����м����

	CString Slip_Time;//����ʱ���м����
	CString Slip_Pre;//����ʱ�侫���м����

	CString Ror_Tor_Str;//��ת�����м����
	CString Ror_Pre;//��ת���ؾ����м����

	CString Mor_Cur;//��������м����
	CString Cur_Pre;//������������м����

	CString Tor_Flu_Str;//���ز������м����
	CString Flu_Pre;//���ز����Ծ����м����

	CString Mor_Rev_Str;//���ת���м����
	CString Mor_Rev_Direc;
	int    Flag_Save;   //��������
	double Star_Vol; //������ѹ
	double Back_Elec;//���綯��
	double Tor_Coe;  //����ϵ��
	double Mor_Rev;  //���ת��
	double Ror_Tor;    //��ת����
	double Tor_Flu;    //���ת��
	CString Mor_Vol;//�����ѹ�м����

public:

	CToolBar m_ToolBar;
	static C�������V10Dlg *motorDialog;  ////////////////////////1//����ָ��  
	void chuli();
	void Screen(char filename[]);
	void  SaveTxt(CString filename);
	void  LockedData_SaveTxt(CString filename);

	void DataAnalysis_Mul();
	void DataAnalysis_Rou();
	void DataAnalysis_Enc();
    void DataAnalysis_MotorLocked1();
	void DataAnalysis_MotorLocked2();
	void Moto_Mul_Check();
	void Xuanbian_Check();
    void Guangshan_Check();
public:

	/*����������������Ӧ����*/
	
	CString  Enc_Angle;//�Ƕ��м����
	CString  Enc_Qua;//�����м����
	CString  Enc_Pre;//��λ�þ����м����
	CString  Enc_Rev;//ת���м����
	CString  Enc_P_C;//����ת�м����
	CString  Enc_Eff;//��ϵ��װЧ���м����

	/*Բ��Ӧͬ������������Ӧ����*/
	
	CString Rou_Angle;//�Ƕ��м����
	CString Rou_Qua;//�����м����
	CString Rou_P_C;//����ת�м����
	CString Rou_Pre;//��λ�þ����м����
	CString Rou_Eff;//��ϵ��װЧ���м����

	/*�༫��ת��ѹ����������Ӧ����*/
	CString Mul_Angle_str;
	CString Mul_Angle;//�Ƕ��м����
	CString Mul_Qua;//�����м����
	CString Mul_P_C;//����ת�м����
	CString Mul_Pre;//��λ�þ����м����
	CString Mul_Eff;//��ϵ��װЧ���м����

public:

	CString m_shuju;
	static C�������V10Dlg *AngleDialog;  ////////////////////////1//����ָ��  
	CTime m_beginTime;//�������ʱ��
    CTime m_EndTime;//�������ʱ��

public:
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);

	afx_msg void OnCallSerial();
	afx_msg void OnSerialOpen();
	afx_msg void OnSerialClose();
	afx_msg void OnSaveData();
	afx_msg void OnCopyRight();
	afx_msg void OnOpentxt();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnClose();
	afx_msg void OnHelp();
	afx_msg void OnStnClickedStatic2();
	void OnAfterDrawTchart4();

//public:
//    CString Mul_Angle;
//
//	CString Rou_Angle;
//	CString Enc_Angle;


	afx_msg void OnCaptureScreen();
	afx_msg void OnClearData();
	afx_msg void OnLockedDataCalcu();
	CProgressCtrl m_pro;

public:


	CString  Motor_Vol_S;
	CString  Motor_Cur_S;
	CString  Motor_Res_S;
	//double Motor_Vol;//��ת�����ѹ
	//double Motor_Cur;//��ת�������
	//double Motor_Res;//��ת�������
	//afx_msg void OnMotorButton();
	afx_msg void OnTestObjButton();
	HICON m_hIcon_yes;

    HICON m_hIcon_no;

	
	CStatic IDC_MOTOR_POWER;
	
	CStatic IDC_Moto_Lim;
	afx_msg void OnOpenCheck();
	afx_msg void OnEvaluate();
	//CStatic IDC_Yuangan_POWER;
	//CStatic IDC_Yuangan_Angle;

	CStatic IDC_Xuanbian_Power;
	CStatic IDC_Xuanbian_Angle;
	CStatic IDC_Guangshan_Power;
	CStatic IDC_Guangshan_Angle;
	CStatic IDC_Yuangan_Power;
	CStatic IDC_Yuangan_Angle;
};
