// L047.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <cstdint>

#define IS_SET(flag,bit) ((flag)&(bit))
//#define _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR       (1ULL << 1)

int f(unsigned int a)
{
	int count = 0;
	for (size_t i = 0; i < 32; i++)
	{
		if (IS_SET(a, 1 << i))
		{
			count++;
		}
	}
	return count;
}

int f1(uint64_t a)
{
	int count = 0;
	for (size_t i = 0; i < 64; i++)
	{
		if (IS_SET(a, 1ULL << i))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	printf("Hello World!\n");
	int i = f(0x12345678);
	printf("%d\n",i);
}
