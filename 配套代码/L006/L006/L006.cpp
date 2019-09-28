// L006.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
int f(int a,int b)
{
	int c = a + b;
	return c;
}

int f1()
{
	f1();
}


int main()
{
	int a = 1;
	int b = 2;
	int c = f(a,b);
	printf("%d\n",c);
}
