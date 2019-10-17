// L025.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f(int a)
{
	switch (a)
	{
	case 1:
	case 2:
	case 7:
	case 10:
		printf("1,2,7,10");
		break;
	case 3:
	case 4:
	case 10000:
		printf("3、4、100");
		break;
	case 5:
	case 6:
		printf("5,6");
		break;
	case 8:
	case 9:
	case 20:
	case 21:
		printf("8、9、20、21");
		break;
	case 22:
		printf("22");
		break;
	default:
		printf("default");
		break;
	}
}

int main()
{
    printf( "Hello World!\n");
	f(2);
}
