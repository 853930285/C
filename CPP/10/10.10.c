#include<stdio.h>
#define SIZE 10

int sum(int ar[],int n)
{
	int i;
	int total = 0;
	for(i=0;i<SIZE;i++)
		total+=ar[i];
	printf("函数内的数组大小%zd\n",sizeof ar);


}
int main()
{

	int mar[SIZE]={1,2,3,4,5,6,7,8,9,10};
	long answer=sum(mar,SIZE);
	printf("%zd		%zd\n",sizeof mar[0],sizeof mar);


	return 0;
}
