
// AosSrcDoc.h : CAosSrcDoc ��Ľӿ�
//


#pragma once


class CAosSrcDoc : public CDocument
{
protected: // �������л�����
	CAosSrcDoc();
	DECLARE_DYNCREATE(CAosSrcDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CAosSrcDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


