// L023A.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f(int a)
{
	//switch (a)
	//{
	//case 0:
	//	printf("0\n");
	//	break;
	//case 1:
	//	printf("1\n");
	//	break;
	//default:
	//	printf("3\n");
	//	break;
	//}

	if (a == 0) printf("0\n");
	else if(a==1) printf("0\n");
	else printf("3\n");
}

int main()
{
    printf("Hello World!\n");
	f(2);
}
