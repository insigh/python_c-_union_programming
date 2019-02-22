#include<stdio.h>
// c++ 中编译c格式的函数，如果用C语言编译就不需要（文件后缀名.c）
// __declspec(dllexport) 表示函数导出到库中
// 靠靠縒indows WIN32 _WIN32(靠win32縲in64)
// 这是
#ifdef _WIN32
    #define XLIB __declspec(dllexport)
#else 
    #define XLIB
#endif

extern "C" XLIB void TestCtypes()
{
	printf("In C TestCtypes in linux! By makefile\n");
}
