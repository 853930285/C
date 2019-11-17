#include<stdio.h>
int main ()
{
	int n = 0;
	size_t a;
	a = sizeof(int);
	printf("n = %d\n%zd\n%zd\n",n,sizeof n,a);
	return 0;
}
