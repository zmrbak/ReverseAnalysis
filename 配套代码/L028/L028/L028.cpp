// L028.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void memory_copy(unsigned char* dst,unsigned char* src,size_t count)
{
	size_t i;
	for (i = 0; i < count; i++)
	{
		dst[i] = src[i];
	}
}

int main()
{
    printf( "Hello World!\n");
}
