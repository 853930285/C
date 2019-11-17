#include<stdio.h>
int main(){
	double a=100;
	int i=1;
	for(;a>0;i++)
	{
		a+=a*0.08;
		a-=10;
	}
	printf("%d  %lf",i,a);
	return 0;
}
