#include<stdio.h>
#include<string.h>
int main ()
{
	printf("请输入您的姓氏");
	char surname[20];
	char name[20];
	scanf("%s",surname);
	printf("你好，%s先生，请问你的名字是",surname);
	scanf("%s",name);
	printf("你好，%s%s\n",surname,name);
	printf("\t%s\t%s\n",surname,name);
	int xs = strlen(surname);
	int ms = strlen(name);
	printf("\t%*d\t%*d\n",xs,xs,ms,ms);
	printf("\t%s\t%s\n",surname,name);
	printf("\t%-*d\t%-*d\n",xs,xs,ms,ms);
	return 0;
}
