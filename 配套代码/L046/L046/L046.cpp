// L046.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

float my_abs(float i)
{
	unsigned int temp=(*((unsigned int*)&i)) & 0x7FFFFFFF;
	return *((float*)&temp);
}

float set_sign(float i)
{
	unsigned int temp = (*((unsigned int*)&i)) | 0x80000000;
	return *((float*)&temp);
}

float set_neg(float i)
{
	unsigned int temp = (*((unsigned int*)&i)) ^ 0x80000000;
	return *((float*)&temp);
}


int main()
{
	printf("Hello World!\n");
	printf("my_abs\n");
	printf("%f\n", my_abs(123.456));
	printf("%f\n", my_abs(-123.456));

	printf("set_sign\n");
	printf("%f\n", set_sign(123.456));
	printf("%f\n", set_sign(-123.456));

	printf("set_neg\n");
	printf("%f\n", set_neg(123.456));
	printf("%f\n", set_neg(-123.456));
}
