#include<stdio.h>
int main (void)
{
	int c=0;
	printf("请问需要响几声：");
	scanf("%d",&c);
	for(int a=0;a<=c;a++)
	{
	printf("1\007");
	}
	printf("\n");
	return 0;
}
