#include<stdio.h>

void test(int a)
{

	a++;
	printf("NO.hs   %d\n",a);
//	c=20;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 1;
	test(a);
	test(b);
	printf("NO.ma   %d\n",a);
	printf("NO.mb   %d\n",b);
	printf("NO.c   %d\n",c);
	return 0;
}
