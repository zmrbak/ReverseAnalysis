// L024A.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f(int a)
{
	switch (a)
	{
	case 0: printf("0"); break;
	case 1: printf("1"); break;
	case 2: printf("2"); break;
	case 3: printf("3"); break;
	case 4: printf("4"); break;
	case 5: printf("5"); break;
	default: printf("other");	break;
	}
}

int main()
{
    printf("Hello World!\n");
	f(2);
}
