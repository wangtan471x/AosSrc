
// AosSrcDoc.cpp : CAosSrcDoc ���ʵ��
//

#include "stdafx.h"
#include "AosSrc.h"

#include "AosSrcDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAosSrcDoc

IMPLEMENT_DYNCREATE(CAosSrcDoc, CDocument)

BEGIN_MESSAGE_MAP(CAosSrcDoc, CDocument)
END_MESSAGE_MAP()


// CAosSrcDoc ����/����

CAosSrcDoc::CAosSrcDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CAosSrcDoc::~CAosSrcDoc()
{
}

BOOL CAosSrcDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CAosSrcDoc ���л�

void CAosSrcDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CAosSrcDoc ���

#ifdef _DEBUG
void CAosSrcDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAosSrcDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CAosSrcDoc ����
