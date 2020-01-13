// L040.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
//#include <cassert>
const char month[12][10] = {
	{'J','a','n','u','a','r','y',0,0,0},
	{'F','e','b','r','u','a','r','y',0,0},
	{'M','a','r','c','h',0,0,0,0,0},
	{'A','p','r','i','l',0,0,0,0,0},
	{'M','a','y',0,0,0,0,0,0,0},
	{'J','u','n','e',0,0,0,0,0,0},
	{'J','u','l','y',0,0,0,0,0,0},
	{'A','u','g','u','s','t',0,0,0,0},
	{'S','e','p','t','e','m','b','e','r',0},
	{'O','c','t','o','b','e','r',0,0,0},
	{'N','o','v','e','m','b','e','r',0,0},
	{'D','e','c','e','m','b','e','r',0,0}
};

const char* get_month(int month_num)
{
	/*assert(month_num >= 0);
	assert(month_num < 12);*/
	return &month[month_num][0];
}

int main()
{
	printf("Hello World 1!\n");
	printf("%s\n", get_month(2));
	printf("Hello World 2!\n");
}
