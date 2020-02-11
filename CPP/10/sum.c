#include<stdio.h>

int a[5]={1,1,1,1,1};

int sum(int *c)
{


	int i,j;
	for(i=0;i<5;i++)
	{
		j+=*(c+i);
		}
	return j;
}

int main()
{
	int q=0;
	int *w;
//	q=sum(a);
//	w=&q;
	w=&a;
	printf("%p %d	%p %d\n",&a,a[0],w,*w);
	

	return 0;
}
