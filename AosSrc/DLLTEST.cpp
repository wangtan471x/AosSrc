// DLLTEST.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AosSrc.h"
#include "DLLTEST.h"


// CDLLTEST �Ի���

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
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

BEGIN_MESSAGE_MAP(CDLLTEST, CDHtmlDialog)
END_MESSAGE_MAP()

BEGIN_DHTML_EVENT_MAP(CDLLTEST)
	DHTML_EVENT_ONCLICK(_T("ButtonOK"), OnButtonOK)
	DHTML_EVENT_ONCLICK(_T("ButtonCancel"), OnButtonCancel)
END_DHTML_EVENT_MAP()



// CDLLTEST ��Ϣ�������

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
