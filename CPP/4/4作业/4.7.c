#include<stdio.h>
#define S 3.785
#define GL 1.609
int main ()
{
	float XJL;
	float YLS;
	printf("请输入消耗的加仑");
	scanf("%f",&XJL);
	printf("请输入行驶英里数");
	scanf("%f",&YLS);
	printf("消耗每加仑行驶%g英里\n",XJL/YLS);
	float GLS = YLS * GL;
	float SS  = XJL * S ;
	printf("每100公里消耗%g升\n",SS/(100*GL));
	return 0;
}
