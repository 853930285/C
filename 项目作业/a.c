#include<stdio.h>
int main(void)
{	
	printf("请依次输入三只小猪的重量（空格隔开后回车）\n");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a == b && a == c)
         {
		 printf("众生平等\n");
         }
	else if (a == b && a > c)
	{
		printf("AB一样重\n");
	}
	else if (a > b)
	{
		if (a > c)
		{
			printf("a重 ：%d\n", a);
		}
		else if(c > b)
		{
			printf("c重 : %d\n", c);
		}
		else if(c == a)
		{
			printf("CA一样重\n");
		}
	}
	else
	{
		if (b > c)
		{
			printf("b重 ：%d\n", b);
		}
		else if(b < c)
		{
			printf("c重 : %d\n", c);

		}
		else if(b == c)
		{
			printf("BC一样重\n");
		}
	}
	
	
	return 0;
}
