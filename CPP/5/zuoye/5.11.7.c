#include<stdio.h>
float CC(float);
int main()
{
	float a;
	printf("请输入一个float类型的值\n");
	scanf("%f",&a);
	printf("此数的立方为%f\n",CC(a));
	return 0;
}
float CC(float a)
{
	return (a*a*a);
}
