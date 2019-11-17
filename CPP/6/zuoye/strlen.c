#include<stdio.h>
#include<string.h>
int main(){
	printf("请输入一串字母 接下来将会以倒叙输出\n");
	char a[20];
	scanf("%s",a);
	for(int i=strlen(a);i>=0;i--)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}
