#include<stdio.h>
int main()
{
	int sz[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		printf("%d\n",sz[i]);
	}
	int t=0;
	int w=sizeof(sz)/sizeof(0)-1;
	while(t<w)
	{
	int keng=0;
	sz[t]=sz[t]+sz[w];
	sz[w]=sz[t]-sz[w];
	sz[t]=sz[t]-sz[w];
	t++;
	w--;
	}
	for(int i=0;i<10;i++)
	{
	printf("%d\n",sz[i]);

	}

	return 0;
}
