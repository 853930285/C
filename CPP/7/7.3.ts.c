#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if(isalpha(ch))
			putchar('0');
		else
			putchar(ch);
	
	}
	putchar('\n');
	return 0;
}
