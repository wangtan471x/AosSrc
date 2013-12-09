
// AosSrcView.cpp : CAosSrcView ���ʵ��
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CAosSrcView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CAosSrcView ����/����

CAosSrcView::CAosSrcView()
{
	// TODO: �ڴ˴���ӹ������

}

CAosSrcView::~CAosSrcView()
{
}

BOOL CAosSrcView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CAosSrcView ����

void CAosSrcView::OnDraw(CDC* /*pDC*/)
{
	CAosSrcDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CAosSrcView ��ӡ


void CAosSrcView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CAosSrcView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CAosSrcView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CAosSrcView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
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


// CAosSrcView ���

#ifdef _DEBUG
void CAosSrcView::AssertValid() const
{
	CView::AssertValid();
}

void CAosSrcView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAosSrcDoc* CAosSrcView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAosSrcDoc)));
	return (CAosSrcDoc*)m_pDocument;
}
#endif //_DEBUG


// CAosSrcView ��Ϣ�������
