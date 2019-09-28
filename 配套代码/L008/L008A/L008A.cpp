// L008A.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <stdio.h>
#include <malloc.h>
//int f(int a,int b)
//{
//	int c = 0;
//	c = a + b;
//	return c;
//}

//int main(int argc,char* argv[],char *envp[])
 //int main(int argc,char* argv[])
int main()
{
	/*int a = 1;
	int b = 2;
	int c = 0;*/
	char* buffer=(char*)alloca(600);
	//malloc();
	_snprintf(buffer,600,"hi %d,%d,%d\n",1,2,3);
	puts(buffer);
    //printf( "%d,%d,%d\n",12);
	/*c=f(a,b);
	printf("%d\n",c);*/
	//free();
}
