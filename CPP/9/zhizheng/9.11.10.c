#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	a=0;
	b=1;
	c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d \n",c);
	}


	return 0;
}
