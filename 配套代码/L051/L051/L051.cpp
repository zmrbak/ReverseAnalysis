// L049.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <Windows.h>

int main()
{
	printf("Hello World!\n");

	WORD* t;
	t=(WORD*)malloc(16);

	if (t != 0)
	{
		GetSystemTime((SYSTEMTIME*)t);
		printf("The system time is: %02d:%02d\n", t[4], t[5]);
		free(t);
	}

	//SYSTEMTIME *pst;
	//pst=(SYSTEMTIME *)malloc(sizeof(SYSTEMTIME));

	//if (pst != 0)
	//{
	//	GetSystemTime(pst);
	//	printf("The system time is: %02d:%02d\n", pst->wHour, pst->wMinute);

	//	释放内存
	//	free(pst);
	//}	
}
