// L052.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <Windows.h>
#pragma pack(4)
struct s
{
	char a;
	int b;
	char c;
	int d;
};

void f(s s1)
{
	printf("a=%d,b=%d,c=%d,d=%d\n", s1.a, s1.b, s1.c, s1.d);
}

void f1(char a,int b,char c,int d)
{
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
}

int main()
{
    printf("Hello World!\n");
	s temp;
	temp.a = 1;
	temp.b = 2;
	temp.c = 3;
	temp.d = 4;
	f(temp);
}
