#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	int a;
//	printf("请输入行数：");
//	scanf("%d",&a);
//	printf("\n");
	for(a;a<=100;a--)
	{
	srand((unsigned int)time(NULL));
	a =rand()%100+1;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a-i;j++)
		{
		printf(" ");
		}
		for(int k=1;k<=i*2-1;k++)
		{
		printf("*");
		}
		printf("\n");
	
	}
	}
	return 0;
}
