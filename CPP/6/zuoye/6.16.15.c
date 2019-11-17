#include<stdio.h>
int main()
{
	double a,b;
	a=100;
	b=100;
	for(;a>=b;){
		a+=100*0.1;
		b+=b*0.05;
		printf("1");
	}
	printf("a   %lf   b    %lf\n",a,b);
	return 0;
}
