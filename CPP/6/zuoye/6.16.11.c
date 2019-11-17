#include<stdio.h>
int main()
{
	int s;
	printf("请输入你要循环的值：");
	scanf("%d",&s);
	printf("你输入的值为%d\n",s);
	double i=0;
	for(int a=1;a<=s;a++){
	i+=1.0/a;
	}
	double i2=0;
	int sig=1;
	for(int a=1.0;a<=s;a++,sig-=sig){
	i2+=sig*1.0/a;
	printf("a=%d   i2=%lf  sig=%d\n",a,i2,sig);
	}
	printf("输出的值为%lf\n",i);	
	return 0;
}
