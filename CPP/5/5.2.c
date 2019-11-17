#include<stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main ()
{
	double shoe,foot;
	printf("\t鞋长\t脚长\n");
	shoe = 3.0;
	while(shoe < 18.5)
	{
	foot = SCALE*shoe+ADJUST;
	printf("\t%.1f\t%.2f\n",shoe,foot);
	shoe++;
	}
	return 0;
}
