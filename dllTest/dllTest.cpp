// dllTest.cpp : 定义 DLL 应用程序的导出函数。
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
