#include<stdio.h>
// c++ 中编译c格式的函数，如果用C语言编译就不需要（文件后缀名.c）
// __declspec(dllexport) 表示函数导出到库中
// 检查是否是windows系统，win32和win64都包含在_win中

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
