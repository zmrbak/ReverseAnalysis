// REV_054.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <intrin.h>

struct CPUID_1_EAX
{
	unsigned int Stepping : 4;
	unsigned int Model : 4;
	unsigned int Family : 4;
	unsigned int ProcessorType : 2;
	unsigned int Reserved1 : 2;
	unsigned int ExtendedModel : 4;
	unsigned int ExtendedFamily : 8;
	unsigned int Reserved2 : 4;
};

int main()
{
    printf("Hello World!\n");
	CPUID_1_EAX* temp;
	int b[4];
	__cpuid(b,1);

	temp = (CPUID_1_EAX*)b;

	printf("Hello World!\n");
	CPUID_1_EAX* temp1= (CPUID_1_EAX*)&b;

	printf("Hello World!\n");
	CPUID_1_EAX* temp2 = (CPUID_1_EAX*)b[0];

	printf("Hello World!\n");
	CPUID_1_EAX* temp3= (CPUID_1_EAX*)&b[0];

	printf("Stepping=%d\n", temp->Stepping);
	printf("Model=%d\n", temp->Model);
	printf("Family=%d\n", temp->Family);
	printf("ProcessorType=%d\n", temp->ProcessorType);
	printf("Reserved1=%d\n", temp->Reserved1);
	printf("ExtendedModel=%d\n", temp->ExtendedModel);
	printf("ExtendedFamily=%d\n", temp->ExtendedFamily);
	printf("Reserved2=%d\n", temp->Reserved2);
	return 0;
}
