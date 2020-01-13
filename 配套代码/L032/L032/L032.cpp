// L032.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

double f( double a,double b)
{
	return a / 3.14 + b * 4.1;
}

int main()
{
   printf( "Hello World!\n");
   printf("%f\n",f(1.2,3.4));
}
