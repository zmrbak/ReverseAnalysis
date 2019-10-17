// L016A.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct MyStruct
{
	int a;
	int b;
	int c;
};

MyStruct f()
{
	/*MyStruct s;
	s.a = 1;
	s.b = 2;
	s.c = 3;
	return s;*/
	return (MyStruct s) { s.a = 1, s.b = 2, s.c = 3 };
}

int main()
{
	printf("Hello World!\n");

	MyStruct a = f();
	printf("%d", a.a);
	return 1;
}
