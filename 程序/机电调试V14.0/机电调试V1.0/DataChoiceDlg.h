#pragma once


// CDataChoiceDlg �Ի���

class CDataChoiceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDataChoiceDlg)

public:
	CDataChoiceDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDataChoiceDlg();

// �Ի�������
	enum { IDD = IDD_DataChoice_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedThisDataButton();
	afx_msg void OnBnClickedLastDataButton();
};
