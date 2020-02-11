#include<stdio.h>

double qq(double a,int b)
{
	if(b>0)
        {
		return a*qq(a,--b);
	}
        else if(b==0)
        {
                return 1;
        }
        else if(b<0)
        {
		return 1/qq(a,-b);
		
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
