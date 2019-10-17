// L029.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int myStrLen(const char* str)
{
	const char* eos = str;
	while (*eos++);
	return eos - str - 1;
}

int main()
{
    printf( "Hello World!\n");
	return myStrLen("Hello World!");
}
