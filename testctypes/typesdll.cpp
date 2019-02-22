#include<stdio.h>
// c++ 中编译c格式的函数，如果用C语言编译就不需要（文件后缀名.c）
// __declspec(dllexport) 表示函数导出到库中

extern "C" __declspec(dllexport) void TestCtypes()
{
	printf("In C TestCtypes!\n");
}