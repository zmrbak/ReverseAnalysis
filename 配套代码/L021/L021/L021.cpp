// L021.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>


const char* f(int a)
{
	//return a == 10 ? "ten" : "not ten";

	if (a == 10) return "ten";
	else return "not ten";
}

int main()
{
	printf("Hello World!\n");

}
