#include<stdio.h>
int main(){
	int i;
	float b,c;
	scanf("%f%f",&b,&c);
	for(printf("输入两个浮数点 稍后将会计算其差除以其乘积的值\n");i!=0;i=scanf("%f%f",&b,&c)){
		printf("其差为%f 其乘积为%f 其差除乘积的值为%f\n",b-c,b*c,((b-c)/(b*c)));
	}
	return 0;
}
