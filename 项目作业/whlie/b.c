#include<stdio.h>
int main()
{
	int jiu=0;
	int a=0;
	while(a<=100)
	{
		a++;
		if(a%7==0||a%10==7||a/10==7)
		{
		printf("嘿\n");
		}
		else
		{
		printf("%d\n",a);
		}
	}
	return 0;	
}
