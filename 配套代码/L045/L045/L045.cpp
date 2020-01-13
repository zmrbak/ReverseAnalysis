// L045.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#define IS_SET(flag,bit) ((flag)&(bit))
#define SET_BIT(var,bit) ((var)|=(bit))
#define CLEAR_BIT(var, bit) ((var) &=~(bit))

int f(int a)
{
	int rt = a;
	SET_BIT(rt, 0x4000);
	CLEAR_BIT(rt, 0x200);

	rt >>= 2;
	rt <<= 3;
	return rt;
}

int main()
{
	printf("Hello World!\n");
	f(0x12345678);
}
