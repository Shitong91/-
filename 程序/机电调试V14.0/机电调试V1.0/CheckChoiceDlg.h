#pragma once


// CheckChoiceDlg �Ի���

class CheckChoiceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CheckChoiceDlg)

public:
	CheckChoiceDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CheckChoiceDlg();

// �Ի�������
	enum { IDD = IDD_CheckChoice_DIALOG  };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	int Selftest_Radio;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedSelfcheckButton();
};
