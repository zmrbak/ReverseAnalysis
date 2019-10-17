// L027.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f1(int i)
{
	printf("f1(%d)\n",i);
}

int f2()
{
	int i = 0;
	for (i = 2; i < 1; i++)
	{
		f1(i);
	}

	return 0;
}


int main()
{
    printf( "Hello World!\n");
	f2();
}
