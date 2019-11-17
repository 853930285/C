#include<stdio.h>
int main ()
{
	int a=0;
	while(a <100)
	{
	a++;
	if(a%2 == 0)
	{
		printf("偶数%d\n",a);
	}
	else if(a%2 == 1)
	{
		printf("奇数%d\n",a);
	}
	}
	
	return 0;
}
