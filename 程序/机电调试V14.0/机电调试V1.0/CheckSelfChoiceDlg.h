#pragma once


// CCheckSelfChoiceDlg �Ի���

class CCheckSelfChoiceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCheckSelfChoiceDlg)

public:
	CCheckSelfChoiceDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCheckSelfChoiceDlg();

// �Ի�������
	enum { IDD = IDD_CheckSelfChoice_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
