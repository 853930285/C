#include<stdio.h>

int num(char a)
{
	int q;
	if((a<='z')&&(a>='a'))
	{
		q=(a-96);
		return q;
	}
}


int main()
{
	char a;
	int c;
	while((scanf("%c",&a)==1)&&(a!='\n'))
	{
		c=num(a);
		printf("%c	%d\n",a,c);
	
	}
	
	
	return 0;
}
