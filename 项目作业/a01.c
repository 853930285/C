#include<stdio.h>
int main(void)
{
	double a;
	printf("请输入一个值");
	scanf("%le",&a);
	if(a>0)
	{
		printf("这是一个正数\n");
	}
	else if(a==0)
	{
		printf("值为0\n");
	}
	else
	{
		printf("这是一个负数\n");
	}
	return 0;

}
