// REV_055.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <vcruntime_string.h>

struct float_as_struct
{
	unsigned int fraction : 23;
	unsigned int  exp : 8;
	unsigned int sign : 1;
};

float f(float in)
{
	float f1 = in;
	float_as_struct t;
	memcpy(&t,&f1,sizeof(float));

	t.sign = 1;
	t.exp = t.exp + 2;
	memcpy(&f1, &t, sizeof(float));

	return f1;
}

int main()
{
	printf("Hello World!\n");
	printf("%f\n",f(123.456));
}
