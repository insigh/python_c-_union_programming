#include<stdio.h>
// c++ �б���c��ʽ�ĺ����������C���Ա���Ͳ���Ҫ���ļ���׺��.c��
// __declspec(dllexport) ��ʾ��������������

extern "C" __declspec(dllexport) void TestCtypes()
{
	printf("In C TestCtypes!\n");
}