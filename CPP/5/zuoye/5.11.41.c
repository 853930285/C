#include<stdio.h>
int main()
{
	const float yc = 2.54;
	printf("请输入您的身高：");
	int sg;
	scanf("%d",&sg);
	while(sg>0)
	{
		printf("您的身高%dcm,%.1f英尺%.1f英寸\n",sg,(int)(sg/yc/12),sg/yc-(int)(sg/yc/12)*12);
		printf("请输入您的身高：");
		scanf("%d",&sg);
	}
	return 0;
}
