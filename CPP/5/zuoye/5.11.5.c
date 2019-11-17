#include<stdio.h>
int main ()
{
	printf("请输入天数：");
	int zday;
	scanf("%d",&zday);
	int sday=0;
	int qian=0;
	while(sday<=zday)
	{
		printf("第%d天，%d$\n",sday,qian);
		sday++;
		qian=qian+sday;

	}
	return 0;
}
