#include<stdio.h>


double qq(double a,int b)
{
	double qw;
	if(b>0)
	{
		for(int i=1;i<b;i++)
		{
			a*=a;
		}
		return a;
	}
	else if(b==0)
	{
		return 1;
	}
	else if(b<0)
	{
		b=b*-1;
		for(int i=1;i<b;i++)
                {
                        a*=a;
                }
		a=(double)1/a;
		return a;
	}


	
}


int main()
{
	double a;
	int b;
	scanf("%lf %d",&a,&b);
	a=qq(a,b);
	printf("%lf\n",a);





	return 0;
}
