#include<stdio.h>
int main(){
	int a,b,i;
	i=2;
	for(printf("请输入两个值，稍后将会计算其平方的和\n请输入：");i!=0;i=scanf("%d%d",&a,&b))
		printf("您输入的两个值分别为%d%d，其中%d的为%d，%d的平方为%d，其平方的和为%d\n",a,b,a,a*a,b,b*b,(a*a)+(b*b));
	return 0;
}
