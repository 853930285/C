#include<stdio.h>
int main()
{
	printf("请分别输入10个高尔夫数值\n");
	int a[10];
	scanf("%d",&a);
//	for(int xh =0;xh<10;xh++)
//	{
//		printf("请输入第%d个值：",xh+1);
//		scanf("%d",&a[xh]);
//		printf("您输入的第%d个值是%d\n",xh+1,a[xh]);
//	}
	printf("您的分数分别为\n");
	for(int aq=0;aq<10;aq++)
	{
	printf("%d个分数为%d\n",aq+1,a[aq]);
	}
	int bb=0;
	for(int aqc=0;aqc<10;aqc++)
	{
	bb+=a[aqc];
	}
	printf("总分数为%d\n",bb);
	return 0;
}
