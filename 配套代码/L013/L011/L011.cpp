// L011.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int x;

	printf("please input x:\n");

	if (scanf("%d", &x) == 1)
	{
		printf("you inputed:%d", x);
	}
	else
	{
		printf("wrong inputed");
	}

	return 0;
}
