#include<stdio.h>
int  main()
{
	char a[26];
	int b =97;
	for(int i=0;i<26;i++,b++)
	{
		a[i]=b;
	}
	for(int c =0;c<26;c++)
		printf("%c",a[c]);
	return 0;
}
