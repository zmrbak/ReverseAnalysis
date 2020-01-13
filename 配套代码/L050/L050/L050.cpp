// L049.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <Windows.h>

int main()
{
	printf("Hello World!\n");

	//SYSTEMTIME st;
	WORD st[8];
	GetSystemTime((LPSYSTEMTIME)st);

	printf("The system time is: %02d:%02d\n", st[4], st[5]);
}
