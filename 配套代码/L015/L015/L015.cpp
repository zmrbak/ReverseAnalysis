// L015.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>

int f(int a,int b,int c)
{
	return a * b + c;
}

int main()
{
	printf("%d\n",f(1,2,3));
	return 0;
}
