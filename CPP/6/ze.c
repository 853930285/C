#include<stdio.h>
int main()
{
	int a=1;
	double b=1;
	double c=0;
	double q=2;
	for(printf("次数\t时间\t距离\n");q!=0;a++)
	{
	b*=2;
	c+=1/b;
	q/=2;
	printf("%d\t%f\t%f\n",a,c,q);
	}
	return 0;
}
