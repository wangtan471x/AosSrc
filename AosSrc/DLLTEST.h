#pragma once

#ifdef _WIN32_WCE
#error "Windows CE ��֧�� CDHtmlDialog��"
#endif 

// CDLLTEST �Ի���

class CDLLTEST : public CDHtmlDialog
{
	DECLARE_DYNCREATE(CDLLTEST)

public:
	CDLLTEST(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDLLTEST();
// ��д
	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// �Ի�������
	enum { IDD = IDD_DLG_TEST, IDH = IDR_HTML_DLLTEST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
};
