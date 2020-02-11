#include<stdio.h>

double min(double a,double b)
{
	if(a>b)
	{
		printf("%lf \n",a);
		return a;
	}
	else if(a<b)
	{
		printf("%lf \n",b);
		return b;
	}

}


int main()
{
	double a,b,c;
//	scanf("%lf",&a);
//	scanf("%lf",&b);
	scanf("%lf %lf",&a,&b);
	c=min(a,b);
	//printf("%lf \n",c);


	return 0;
}
