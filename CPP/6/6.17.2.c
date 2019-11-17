#include<stdio.h>
int main ()
{
	int zxz =26;
	for(int q =1 ;q<100;q++)
	{
		for(int b=0;b<zxz;b++)
		{
	
			for(char a = 'A'+b;a<'A'+26;)
			{
		
				printf("%c",a);
				a++;
			}
		printf("\n");
		}
	}
	return 0;
}
