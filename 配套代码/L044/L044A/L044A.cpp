// L044A.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <Windows.h>

int main()
{
	printf("Hello World!\n");

	HANDLE h = CreateFile(TEXT("file"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ,NULL,
		OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

}
