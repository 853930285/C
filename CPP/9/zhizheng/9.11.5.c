#include<stdio.h>

void larger(double* a,double* b)
{
	if(*a>*b)
	{
		*b=*a;
	}
	else if(*b>*a)
	{
		*a=*b;
	}
}



int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	printf("函数前ab值为a=%lf	b=%lf\n",a,b);
	larger(&a,&b);
	printf("函数后ab值为a=%lf        b=%lf\n",a,b);
	



	return 0;
}
