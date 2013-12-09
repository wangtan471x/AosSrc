#pragma once

#ifdef _WIN32_WCE
#error "Windows CE 不支持 CDHtmlDialog。"
#endif 

// CDLLTEST 对话框

class CDLLTEST : public CDHtmlDialog
{
	DECLARE_DYNCREATE(CDLLTEST)

public:
	CDLLTEST(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDLLTEST();
// 重写
	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// 对话框数据
	enum { IDD = IDD_DLG_TEST, IDH = IDR_HTML_DLLTEST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
};
