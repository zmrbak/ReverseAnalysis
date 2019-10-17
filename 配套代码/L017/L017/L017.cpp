// L017.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f(int x, int y, int* sum, int* multi)
{
	*sum = x + y;
	*multi = x * y;
}


int main()
{
	int sum_result;
	int multi_result;

    printf("Hello World!\n");
	f(123,456,&sum_result,&multi_result);
	printf("sum_result=%d,multi_result=%d\n", sum_result, multi_result);
}
