#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main ()
{
	float weight,volume;
	int size,letters;
	char name[40];
	printf("你的法号是：");
	scanf("%s",name);
	printf("你的体重为：");
	scanf("%f",&weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("恩，%s,你的体积为%2.2f立方英尺\n",name,volume);
	printf("emm,你的名字有%d个字母\n",letters);
	printf("我们用了%d个字节来储存它\n",size);
	return 0;
}
