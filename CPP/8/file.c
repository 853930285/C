#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE * fp;
	char fname[50];
	printf("回车确定文件名字:");
	scanf("%s",fname);
	fp = fopen(fname, "r");
	if(fp==NULL)
	{
		printf("BEY\n");
		exit(1);
	}
	while((ch=getc(fp))!=EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
