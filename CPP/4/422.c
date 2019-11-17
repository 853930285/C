#include<stdio.h>
#include<string.h>
#define L ""
int main ()
{
	char name[40];
	printf("你的名字是：");
	scanf("%s",name);
	printf("你好，%s，%s\n",name,L);
	
	return 0;
}
