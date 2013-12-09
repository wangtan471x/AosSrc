#ifndef DLL_TEST_H  
#define DLL_TEST_H  

#ifndef DLL_API  
#define DLL_API _declspec(dllexport)  
//#else  
//#define DLL_API _declspec(dllimport)  
#endif  

class DLL_API CDllTest  
{  
public:  
	CDllTest();  
	~CDllTest();  

	int Sum(int a, int b);  
}; 

#endif
