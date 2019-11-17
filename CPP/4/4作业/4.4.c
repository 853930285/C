#include<stdio.h>
int main ()
{
	float a;
	char name[20];
	printf("你好，请问你的法号是？\n");
	scanf("%s",name);
	printf("嗯呢，%s,那么请问你的身高是?\n",name);
	scanf("%f",&a);
	printf("哦？%s,你居然有%.3f那么高！\n",name,a);

	return 0;
}
