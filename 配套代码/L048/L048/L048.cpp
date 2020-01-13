// L048.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#define RNG_a 1664525
#define RBG_c 10103904223

static unsigned int rand_state;

void my_srand(unsigned int init)
{
	rand_state = init;
}

int my_rand()
{
	rand_state *= RNG_a;
	rand_state += RBG_c;
	//rand_state &= 0x7fff; //0 - (2的15次方-1),32767
	return rand_state;
}

int main()
{
	printf("Hello World!\n");
	my_srand(0x1233);
	printf("%d\n", my_rand());
	printf("%d\n", my_rand());
	printf("%d\n", my_rand());
	printf("%d\n", my_rand());
}
