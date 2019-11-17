#include<stdio.h>
int main()
{
	int a ;
	int b ;
	int c ;
	int d ;
	a=10,b=20,c=30;
	c = a != b ?(c>b?c:b):(b>c?c:b);
	printf("%d\n",c);
	return 0;
}
