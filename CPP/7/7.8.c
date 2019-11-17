#include<stdio.h>
int main()
{
	printf("条件运算符?:\n");
	printf("请输入您要喷洒的面积（回车确认）:");
	int mj;
	int gs;
	while(scanf("%d",&mj)==1)
	{
		gs=mj/200;
		gs+=((mj%200==0)?0:1);
	}
	printf("需要用到%d罐\n",gs);
	return 0;
}
