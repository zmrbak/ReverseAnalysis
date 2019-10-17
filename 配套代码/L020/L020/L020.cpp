// L020.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int myAbs(int a)
{
	if (a < 0) return -a;
	else  return a;
}


int main()
{
	printf("Hello World!\n");
	myAbs(2);
}
