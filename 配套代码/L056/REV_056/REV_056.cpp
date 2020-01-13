// REV_056.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <cstdint>
#include <time.h>

const uint32_t RNG_a = 1664525;
const uint32_t RNG_c = 1013904223;
uint32_t RNG_state;

void my_srand(uint32_t i)
{
	RNG_state = i;
}

uint32_t my_rand()
{
	RNG_state = RNG_state * RNG_a + RNG_c;
	return RNG_state;
}

struct float_as_struct
{
	unsigned int fraction : 23;
	unsigned int  exp : 8;
	unsigned int sign : 1;
};

union uint32_t_float
{
	float_as_struct t;
	uint32_t i;
	float f;
};

float float_rand()
{
	uint32_t_float tmp;
	//tmp.f = 1.987654;
	tmp.t.sign = 0;
	tmp.t.exp =0x7F;
	tmp.t.fraction = my_rand();

	return tmp.f-1;
}

int main()
{
	printf("Hello World!\n");
	my_srand(time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		float f = float_rand();
		printf("%f\n", f);
	}	
}
