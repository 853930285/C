#include<stdio.h>

void aa(int q,int w)
{
	double qw;
	printf("1\n");
	qw=(1/((((double)1/q)+((double)1/w))/(double)2));
	printf("2\n");
	printf("%lf\n",qw);
	printf("3\n");
}




int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	aa(a,b);
	printf("4\n");

	return 0;
}
