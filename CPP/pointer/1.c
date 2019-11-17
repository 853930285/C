#include<stdio.h>
int main()
{	
	int a=0;
	//int*是指针中的一种数据类型
	int* p=&a;
	printf("%p   %p\n",p,&a);
	//p是指针类型的变量 用来指定一个变量的地址
	//
	//
	*p = 200;
	printf("%d   %d\n",*p,a);
	//指针类型大小
	//在32位系统中所有指针类型大小都为4个字节
	//在64位系统中为8个字节
	//因为指针类型实际储存是内存地址编号
	printf("int*  %d\n",(sizeof(int*)));
	printf("char*  %d\n",(sizeof(char*)));
	printf("short*  %d\n",(sizeof(short*)));
	printf("long*  %d\n",(sizeof(long*)));
	printf("float*  %d\n",(sizeof(float*)));
	printf("double*  %d\n",(sizeof(double*)));
	printf("long long*  %d\n",(sizeof(long long*)));
	return 0;
}
