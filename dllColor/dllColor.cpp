// dllColor.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "dllColor.h"


// ���ǵ���������һ��ʾ��
DLLCOLOR_API int ndllColor=0;

// ���ǵ���������һ��ʾ����
DLLCOLOR_API int fndllColor(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� dllColor.h
CdllColor::CdllColor()
{
	return;
}
