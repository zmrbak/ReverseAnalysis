// L022.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <cstdint>

int64_t myMax(int64_t a, int64_t b)
{
	if (a > b) return a;
	else return b;
}
int64_t myMin(int64_t a, int64_t b)
{
	if (a < b) return a;
	else return b;
}

int main()
{
	printf("Hello World!\n");

}
