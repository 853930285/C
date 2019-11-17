#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int num;
	srand((unsigned int)time(NULL));
	num =rand()%100+1;
	int q;
	while(1)
	{
		scanf("%d",&q);
		if(q>num)
			{
				printf("大\n");
			}
		else if(q<num)
			{
				printf("小\n");
			}
		else
			{
				printf("中奖\n");
				break;
			}
	
	}

	return 0;
}
