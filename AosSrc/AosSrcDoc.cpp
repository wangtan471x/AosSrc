
// AosSrcDoc.cpp : CAosSrcDoc 类的实现
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


// CAosSrcDoc 构造/析构

CAosSrcDoc::CAosSrcDoc()
{
	// TODO: 在此添加一次性构造代码

}

CAosSrcDoc::~CAosSrcDoc()
{
}

BOOL CAosSrcDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CAosSrcDoc 序列化

void CAosSrcDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CAosSrcDoc 诊断

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


// CAosSrcDoc 命令
