
// AosSrcView.cpp : CAosSrcView 类的实现
//

#include "stdafx.h"
#include "AosSrc.h"

#include "AosSrcDoc.h"
#include "AosSrcView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAosSrcView

IMPLEMENT_DYNCREATE(CAosSrcView, CView)

BEGIN_MESSAGE_MAP(CAosSrcView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CAosSrcView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CAosSrcView 构造/析构

CAosSrcView::CAosSrcView()
{
	// TODO: 在此处添加构造代码

}

CAosSrcView::~CAosSrcView()
{
}

BOOL CAosSrcView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CAosSrcView 绘制

void CAosSrcView::OnDraw(CDC* /*pDC*/)
{
	CAosSrcDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CAosSrcView 打印


void CAosSrcView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CAosSrcView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CAosSrcView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CAosSrcView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CAosSrcView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CAosSrcView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CAosSrcView 诊断

#ifdef _DEBUG
void CAosSrcView::AssertValid() const
{
	CView::AssertValid();
}

void CAosSrcView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAosSrcDoc* CAosSrcView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAosSrcDoc)));
	return (CAosSrcDoc*)m_pDocument;
}
#endif //_DEBUG


// CAosSrcView 消息处理程序
