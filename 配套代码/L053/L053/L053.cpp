// L053.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
struct  in_s
{
	int a;
	int b;
};

struct ou_s
{
	char a;
	int b;
	in_s* c;
	char d;
	int e;
};


void f(ou_s s)
{
	printf("a=%d,b=%d,c.a=%d,c.b=%d,d=%d,e=%d",
		s.a,s.b,s.c->a,s.c->b,s.d,s.e);
}

int main()
{
	printf("Hello World!\n");

	ou_s s;

	in_s* c = new in_s{0};

	c->a = 3;
	c->b = 4;

	s.a = 1;
	s.b = 2;
	/*s.c->a = 3;
	s.c->b = 4;*/

	s.c = c;
	s.d = 5;
	s.e = 6;
	f(s);
	delete c;
}
