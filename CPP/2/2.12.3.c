#include<stdio.h>
int main (void)
{
	int year=0;
	printf("请输入您的岁数：");
	scanf("%d",&year);
	printf("您目前为止共活了%d天，祝您长命百岁，再见。\n",year*365);
	return 0;
}
