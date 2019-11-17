#include<stdio.h>
int main()
{
	int gs,a;
	for(int hs=1;hs<=6;hs++)
	{
		
		for(gs=0,a=70;gs<hs;a--,gs++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}
