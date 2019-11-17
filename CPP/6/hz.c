#include<stdio.h>
double power (double n,int p);
int main()
{
	double x,xpow;
	int exp;
	printf("输入一个数字和正整数幂\n");
	printf("数字将被提升进入q退出\n");
	while(scanf("%lf%d",&x,&exp))
	{
	xpow=power(x,exp);
	printf("%.3g 的 %d 次幂是 %.5g \n",x,exp,xpow);
	return 0;
	}
}
double power(double n,int p)
{
	double pow =1;
	int i;
	for(i = 1;i<=p;i++)
	pow*=n;
	return pow;
}

