#include<stdio.h>
void q(void);
void two(void);
int main (void)
{
	printf("staring now\n");
	q();
	printf("done!\n");
	return 0;
}
void q(void)
{
	printf("one\n");
	two();
	printf("\nthree\n");
}
void two(void)
{
	printf("two");
}
