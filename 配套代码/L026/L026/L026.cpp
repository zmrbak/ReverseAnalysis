// L026.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#define R 1
#define W 2
#define RW 3

void f(int a)
{
	int read = 0;
	int write = 0;
	switch (a)
	{
	case RW:
		read = 1;
	case W:
		write = 1;
		break;

	case R:
		read = 1;
	default:
		break;
	}

	printf("read=%d,write=%d",read,write);
}


int main()
{
    printf("Hello World!\n");
	f(2);
}
