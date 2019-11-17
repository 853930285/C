#include<stdio.h>
int main()
{

	int sc[5][3];
	int a=0;
	for(int xss=0;xss<5;xss++)
	{
		for(int cj=0;cj<3;cj++)
		{
			switch(cj)
			{
				case 0:
				a=0;
				printf("请输入%d位学生的语文成绩:",xss+1);
				scanf("%d",&sc[xss][cj]);
				a=a+sc[xss][cj];
				break;
				case 1:
				printf("请输入%d位学生的数学成绩：",xss+1);
				scanf("%d",&sc[xss][cj]);
				a=a+sc[xss][cj];
				break;
				case 2:
				printf("请输入%d位学生的外语成绩：",xss+1);
				scanf("%d",&sc[xss][cj]);
				a=a+sc[xss][cj];	
				a=a/3;
				printf("第%d位学生平均成绩为%d\n",xss+1,a);
				break;
			}
		}
	}
	
	return 0;
}
