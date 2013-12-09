// DLLTEST.cpp : 实现文件
//

#include "stdafx.h"
#include "AosSrc.h"
#include "DLLTEST.h"


// CDLLTEST 对话框

IMPLEMENT_DYNCREATE(CDLLTEST, CDHtmlDialog)

CDLLTEST::CDLLTEST(CWnd* pParent /*=NULL*/)
	: CDHtmlDialog(CDLLTEST::IDD, CDLLTEST::IDH, pParent)
{

}

CDLLTEST::~CDLLTEST()
{
}

void CDLLTEST::DoDataExchange(CDataExchange* pDX)
{
	CDHtmlDialog::DoDataExchange(pDX);
}

BOOL CDLLTEST::OnInitDialog()
{
	CDHtmlDialog::OnInitDialog();
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

BEGIN_MESSAGE_MAP(CDLLTEST, CDHtmlDialog)
END_MESSAGE_MAP()

BEGIN_DHTML_EVENT_MAP(CDLLTEST)
	DHTML_EVENT_ONCLICK(_T("ButtonOK"), OnButtonOK)
	DHTML_EVENT_ONCLICK(_T("ButtonCancel"), OnButtonCancel)
END_DHTML_EVENT_MAP()



// CDLLTEST 消息处理程序

HRESULT CDLLTEST::OnButtonOK(IHTMLElement* /*pElement*/)
{
	OnOK();
	return S_OK;
}

HRESULT CDLLTEST::OnButtonCancel(IHTMLElement* /*pElement*/)
{
	OnCancel();
	return S_OK;
}
