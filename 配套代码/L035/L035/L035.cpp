// L035.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
double d_max(double a,double b)
{
	if (a > b) return a;
	else return b;
}

int main()
{
    printf( "Hello World!\n");
	printf("%f\n",d_max(1.2,3.4));
	printf("%f\n", d_max(5.6, -7.8));
}
