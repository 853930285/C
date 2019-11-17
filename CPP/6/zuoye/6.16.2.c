#include<stdio.h>
int main()
{
	int hs=1;
	for(;hs<=5;hs++)
	{
	for(int gs =1;gs<=hs;gs++)
		printf("$");
	printf("\n");
	}
	return 0;
}
