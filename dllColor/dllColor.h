// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DLLCOLOR_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DLLCOLOR_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DLLCOLOR_EXPORTS
#define DLLCOLOR_API __declspec(dllexport)
#else
#define DLLCOLOR_API __declspec(dllimport)
#endif

// �����Ǵ� dllColor.dll ������
class DLLCOLOR_API CdllColor {
public:
	CdllColor(void);
	// TODO: �ڴ�������ķ�����
};

extern DLLCOLOR_API int ndllColor;

DLLCOLOR_API int fndllColor(void);
