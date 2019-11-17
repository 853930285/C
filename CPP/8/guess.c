#include<stdio.h>
int main()
{
	int guess =1;
	printf("请猜一个字母:");
	while((getchar()!='y'))
	{
	printf("error %d \n",guess);
	guess++;
	}
	printf("yes!!! \n");
	return 0;
}
