#include<stdio.h>
//#include<conio.h>
int main()
{
	char ch;
	while((ch=getchar())!='#')
	{
		putchar(ch);
		printf("	%d\n",ch);
	}
	return 0;
}
