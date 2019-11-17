#include<stdio.h>
int main()
{
	int guess =1;
	char c;
	printf("请确认(y)：");
	while(((c=getchar())!='y'))
	{
	if(c=='n')
	{
	printf("No.%d请确认(y)不可以NO:",guess);
	}
	else
	{
	printf("No.%d请确认(y):",guess);
	}
	guess++;
	while((getchar())!='\n');
	}
	printf("yes!!! \n");
	return 0;
}
