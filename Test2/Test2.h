// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� TEST2_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// TEST2_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef TEST2_EXPORTS
#define TEST2_API __declspec(dllexport)
#else
#define TEST2_API __declspec(dllimport)
#endif

// �����Ǵ� Test2.dll ������
class TEST2_API CTest2 {
public:
	CTest2(void);
	// TODO:  �ڴ�������ķ�����
};

extern TEST2_API int nTest2;

TEST2_API int fnTest2(void);
