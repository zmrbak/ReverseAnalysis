// L037.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	printf("Hello World!\n");
	int a[20];
	int i;

	for (i = 0; i <20; i++)
	{
		a[i] = i * 2;
	}
	printf("i=%d\n",i);
	return 0;
	/*for (i = 0; i < 30; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}*/
}
