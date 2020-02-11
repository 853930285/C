#include<stdio.h>
int main()
{
	int sz[]={1,2,[4]=4,5,6,7,8,9,[20]=20,21,22,23};
	for(int i=0;i<=24;i++)
	{
		printf("%d\t%d\n",i,sz[i]);
	}

	return 0;
}
