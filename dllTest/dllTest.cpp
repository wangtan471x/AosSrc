// dllTest.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "dllTest.h"  

int CDllTest::Sum(int a, int b)  
{  
	int val = a+b;  
	return val*10;  
}  

CDllTest::CDllTest()  
{  

}  

CDllTest::~CDllTest()  
{  

} 
