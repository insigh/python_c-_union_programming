#include<stdio.h>
// c++ �б���c��ʽ�ĺ����������C���Ա���Ͳ���Ҫ���ļ���׺��.c��
// __declspec(dllexport) ��ʾ��������������
// ����Ƿ���windowsϵͳ��win32��win64��������_win��

#ifdef _WIN32
#define XLIB __declspec(dllexport)
#else 
#define XLIB
#endif

extern "C" XLIB void TestCtypesNumber(int x, float y, bool Num)
{
	printf("TestCtypesNumber %d %f %d\n", x, y, Num);
	if(Num) 
	{
		printf("True"); 
	}
	else 
	{
		printf("False");
	}
}
