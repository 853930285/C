#include<stdio.h>

long long sa(int a)
{
	long long test;
	if(a>0)
	{
		test=a*sa(a-1);
	}
	else
	{
		test =1;
	}
	return test;
}

int main()
{
	int num;
	printf("输入一个值 将会计算其阶乘:");
	scanf("%d",&num);
	printf("%d的阶乘是%lld\n",num,(sa(num)));
	return 0;
}
