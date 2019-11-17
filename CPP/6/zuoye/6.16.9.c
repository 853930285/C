#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("请输入两个整数，将会计算其平方之间的每个数的和\n");
	scanf("%d%d",&a,&b);
	for(;c!=0;c=scanf("%d%d",&a,&b)){
		e=0;
		for(d=a*a;d<b*b;d++){
			e+=d;
		}
	printf("%d  %d      %d",a*a,b*b,e);
	}
	return 0;
}
