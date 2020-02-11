#include<stdio.h>


int sum(int *a,int *b)
{
	int q;
	while(a<b)
	{
		q+=*a;
		a++;
	}
	return q;


}



int main()
{
	int q[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",(sum(q,q+10)));


	return 0;
}
