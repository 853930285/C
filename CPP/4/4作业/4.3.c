#include<stdio.h>
int main ()
{
	printf("请输入一个值");
	float a;
	scanf("%f",&a);
	printf("a.%.1f	%.1e\nb.%+.3f	%.3E\n",a,a,a,a);
	return 0;
}
