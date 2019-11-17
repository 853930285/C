#include<stdio.h>
int main()
{
	const int HS = 60;
	int m ;
	int h ;
	int hs;
	printf("输入您要转化的分钟数(为0时退出)\n");
	scanf("%d",&m);
	while(m>0)
	{
	h=m/HS;
	hs=m%HS;
	printf("%d分钟里有%d时%d分钟\n",m,h,hs);
	printf("输入您要转化的分钟数(为0时退出)\n");
	scanf("%d",&m);
	}
	return 0;
}
