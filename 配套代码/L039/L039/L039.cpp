// L039.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <malloc.h>


void f()
{
	char* buffer = (char*)alloca(600);
	snprintf(buffer,600,"hi,%d %d %d %d",1,2,3,4);
	puts(buffer);
}

void f1(int size)
{
	int b[size];
	int* a= (int*)alloca(size*4);
	for (size_t i = 0; i < size; i++)
	{
		a[i] = i * 2;
	}
}

int main()
{
	printf("Hello World!\n");
	f1(5);
	//int a[20];
	//int i;

	//for (i = 0; i < 20; i++)
	//{
	//	a[i] = i * 2;
	//}
	//printf("i=%d\n", i);
	//return 0;
	///*for (i = 0; i < 30; i++)
	//{
	//	printf("a[%d]=%d\n", i, a[i]);
	//}*/
}
