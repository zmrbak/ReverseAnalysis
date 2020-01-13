// REV_057.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <cstdint>

union uint_float
{
	uint32_t i;
	float f;
};

float calculate_machine_epsilon(float start)
{
	uint_float v;
	v.f = start;
	v.i++;
	return v.f - start;
}

int main()
{
    printf("Hello World!\n");
	printf("%g\n", calculate_machine_epsilon(1.0));
}
