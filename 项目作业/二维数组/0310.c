#include<stdio.h>
int main (void)
{
	int a=0;
	int b=0;
	int arr[2][3]={{1,2,3},{1,2,3}};
	for(int a=0;a<3;a++)
	{
	printf("%d%d\n",a,b);
	printf("%d\n",arr[a][b]);
	b++;

	}
	return 0;
}
