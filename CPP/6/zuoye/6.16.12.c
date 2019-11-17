#include<math.h>
#include<stdio.h>
int main()
{
	int a[7];
	int i;
	for(i = 0;i<8;i++){
		a[i]=pow(2,i);
	}
	i=0;
	do
		printf("%d\n",a[i]);
	while(++i<8);
	return 0;
}
