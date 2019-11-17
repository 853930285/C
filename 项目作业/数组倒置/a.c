#include<stdio.h>
int main ()
{
	int sz[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		printf("%d\n",sz[i]);
	}
	int i=0;
	int j=sizeof(sz)/sizeof(sz[0])-1;
	while(i<j)
	{
	int keng=sz[i];
	sz[i]=sz[j];
	sz[j]=keng;
	i++;
	j--;
	}
	for(int b=0;b<10;b++)
	{
		printf("%d\n",sz[b]);
	}
	return 0;
}
