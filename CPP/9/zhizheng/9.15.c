#include<stdio.h>
void hsz(int* a,int* b)
{
	int zjz;
	zjz=*a;
	*a=*b;
	*b=zjz;

}
int main()
{
	int i,j;
	i=10;
	j=40;
	printf("i=%d j=%d\n",i,j);
	hsz(&i,&j);
	printf("i=%d j=%d\n",i,j);
	return 0;
}
