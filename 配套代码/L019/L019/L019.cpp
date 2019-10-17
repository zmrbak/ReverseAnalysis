// L019.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f_singed(int a ,int b)
{
	if (a > b) printf("a>b\n");
	if (a == b) printf("a==b\n");
	if (a < b) printf("a<b\n");
}

void f_unsinged(unsigned int a, unsigned int b)
{
	if (a > b) printf("a>b\n");
	if (a == b) printf("a==b\n");
	if (a < b) printf("a<b\n");
}
int main()
{
    printf("Hello World!\n");
	f_singed(1,2);
	f_unsinged(1, 2);
}
