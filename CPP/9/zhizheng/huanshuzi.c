#include<stdio.h>
int main()
{
	int* a;
	int i,j;
	i=20;
	j=40;
	*a=i;
	i=j;
	j=*a;
	printf("%d  %d\n",i,j);
	return 0 ;
}
