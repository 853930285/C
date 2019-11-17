#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	ch=getchar();
	while(ch!='\n'){
		if(isalpha(ch))
			putchar(ch);
		else
			putchar('.');
		ch=getchar();
	}
	putchar(ch);
	return 0;
}
