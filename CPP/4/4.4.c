#include<stdio.h>
#define PI 3.14159
int main ()
{
	float area,radius,circum;
	printf("请问您要多少寸的披萨：");
	scanf("%f",&radius);
	area = PI * radius *radius;
	circum = 2 * PI * radius;
	printf("您的披萨的三围如下：\n");
	printf("披萨的半径：%1.2f\n披萨的周长：%1.2f\n披萨的面积：%1.2f\n",radius,circum,area);
	float a = 10;
	return 1;
}
