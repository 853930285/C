#include<stdio.h>
int main(){
	int a,b,s;
	int i=2;
	for(printf("输入两个整数 稍后将会进行计算:");i!=0;i=scanf("%d%d",&a,&b)){
	s=0;
	printf("输入两个整数 稍后将会进行计算:");
	for(int i=a;i<=b;i++)s+=i*i;
	printf("%d %d      %d\n",a,b,s);
	}
	return 0;
}
