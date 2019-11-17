#include<stdio.h>
void Temperatures(double);
int main ()
{
	double hsd;
	printf("亲,输入华摄度值:");
	while(scanf("%lf",&hsd)==1)
	{
	Temperatures(hsd);
	printf("亲,输入华摄度值:");
	}
	printf("bey,bey\n");
	return 0;
}
void Temperatures(double hsd)
{
	printf("华氏度%.2f\t 摄氏度%.2f\t 绝对温度%.2f\n",hsd,hsd+32.0,hsd+32.0+237.16);
}

