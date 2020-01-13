// L040.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <cassert>
const char* month[] = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

const char* get_month(int month_num)
{
	assert(month_num >= 0);
	assert(month_num < 12);
	return month[month_num];
}

int main()
{
    printf( "Hello World 1!\n");
	printf("%s\n", get_month(-2));
	printf("Hello World 2!\n");
}
