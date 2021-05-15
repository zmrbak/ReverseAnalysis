// REV_058A.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
typedef int(__cdecl* myFunc)(void const*, void const*);

int comp(void const* a, void const* b)
{
	int a1 = *((int*)a);
	int b1 = *((int*)b);

	if (a1 == b1)  return 0;
	if (a1 > b1) return 1;
	return -1;
}

typedef void(__cdecl* myPrint)(int);

void print1(int a)
{
	printf("%d\n", a);
}
void print11(int a)
{
	printf("%d\t", a);
}

void print2(int a, myPrint p)
{
	p(a);
}

int main()
{
	printf("Hello World!\n");
	int numbers[] = { 1,-2,3,-4,-5,6,7,8,9,-10,100,-11 };

	//myFunc mySort;
	//mySort = comp;
	qsort(numbers, sizeof(numbers) / sizeof(int), sizeof(int), comp);

	for (size_t i = 0; i < sizeof(numbers) / sizeof(int); i++)
	{
		//printf("%d,",numbers[i]);

		print2(numbers[i], print11);
	}
}
