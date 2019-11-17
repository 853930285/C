#include<stdio.h>
int main()
{
	int a=0;
	int* q=0;
	while(a<=500)
	{
		a++;
		printf("%d %x  %p\n",a,*q,q);
	}
	return 0;
}
