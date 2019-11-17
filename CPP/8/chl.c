#include<stdio.h>
void p(char c,int h,int l);
int main()
{
	int ch;
	int hh,ll;
	printf("请输入要打印的字符以及行和列\n");
	while((ch=getchar())!='\n')
	{
		if(scanf("%d %d",&hh,&ll)!=2)
		{;
			break;
		}
		p(ch,hh,ll);
		while((ch=getchar())!='\n')
		{
			continue;
		}
	}
	return 0;
}
	void p(char c,int h,int l)
	{
		int i,j;
		for(i=0;i<h;i++)
		{
			for(j=0;j<l;j++)
			{
			
				putchar(c);
			}
			printf("\n");

		}
	}
