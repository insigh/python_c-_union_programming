#include<stdio.h>
// c++ �б���c��ʽ�ĺ����������C���Ա���Ͳ���Ҫ���ļ���׺��.c��
// __declspec(dllexport) ��ʾ��������������
// �����Windows WIN32 _WIN32(��win32�win64)
#ifdef _WIN32
    #define XLIB __declspec(dllexport)
#else 
    #define XLIB
#endif

extern "C" XLIB void TestCtypes()
{
	printf("In C TestCtypes in linux!\n");
}
