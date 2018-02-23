#pragma once
#include "afxwin.h"



// CSerialDlg �Ի���


class CSerialDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSerialDlg)

public:
	CSerialDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSerialDlg();

// �Ի�������
	enum { IDD = IDD_SERIAL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	

	DECLARE_MESSAGE_MAP()
private:
	CComboBox m_comb1;
	CComboBox m_comb2;

private:
	CComboBox m_com_check;
	CComboBox m_com_data;
	CComboBox m_com_stop;
	
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOkButton();
	afx_msg void OnBnClickedCancelButton();
	afx_msg void OnBnClickedHexRadio();
	//extern int m_Radio;
};
