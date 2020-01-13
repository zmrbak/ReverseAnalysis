// L042.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

//char a[3][4];
//
//char getItem1(char array[3][4],int a,int b)
//{
//	return array[a][b];
//}
//
//char getItem2(char *array, int a, int b)
//{
//	return array[a * 4 + b];
//}
//
//char getItem3(char* array, int a, int b)
//{
//	return *(array + a * 4 + b);
//}

int a[10][20][30];

void SetItem(int x,int y,int z,int value)
{
	a[x][y][z] = value;
}


int main()
{
	printf("Hello World!\n");

	/*printf("%d\n", getItem1(a, 2, 3));
	printf("%d\n", getItem2((char*)a, 2, 3));
	printf("%d\n", getItem3((char*)a, 2, 3));*/

	////清空数组
	//for (size_t i = 0; i < 3; i++)
	//{
	//	for (size_t j = 0; j < 4; j++)
	//	{
	//		a[i][j] = 0;
	//	}
	//}

	//printf("Hello World!\n");

	////第二行赋值
	////以行优先的顺序填充数据
	///*for (size_t i = 0; i < 4; i++)
	//{
	//	a[1][i] = i;
	//}*/

	////第三列
	////以列优先的顺序填充数据
	//for (size_t i = 0; i < 3; i++)
	//{
	//	a[i][2] = i;
	//}
}
