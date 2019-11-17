#include<stdio.h>
#include<float.h>
int main()
{
	float  a;
	double b;
	a = 1.0/3.0;
	b = 1.0/3.0;
	printf("%.4f\t%.12f\t%.16f\n",a,a,a);
	printf("float	%d\n",FLT_DIG);
	printf("%.4f\t%.12f\t%.16f\n",b,b,b);
	printf("double	%d\n",DBL_DIG);

	return 0;
}
