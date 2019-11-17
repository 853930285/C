#include<stdio.h>
int main()
{
	int MAX;
	int z[10];
	printf("《佩奇之死》\n");
	for(int i=0;i<10;i++)
	{
	printf("请输入%d只小猪的体重",i+1);
	scanf("%d",&z[i]);
	}
	MAX=z[0];
	for(int i=1;i<10;i++)
	{
	if(MAX<z[i])
	{
		MAX=z[i];
	}
	}
	printf("最重的重量为%d\n",MAX);
	return 0;
}
