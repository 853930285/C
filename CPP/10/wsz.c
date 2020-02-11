#include<stdio.h>


int ws(int *a,int n)
{
	int s=0;
	s=*(a+n);
	return s;



}

int main()
{
	int ll[]={1,2,3,4,5,6,7,8,9,10};

	printf("%d\n",ws(ll,2));
	
	

	return 0;
}
