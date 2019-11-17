#include<stdio.h>
int lhb (int aa,int bb,int cc);//声明函数
int main ()
{
	printf("请输如三个数的值 稍后我们将会把他们相加：");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int z;
	z=lhb(a,b,c);//把对应的按对应的位置丢进过去
	printf("%d\n",z);
	return 0;
}
int lhb(int aa,int bb,int cc)//调用函数
{
	int qq=0;
	qq=aa+bb+cc;
	return qq;//返回值输出结果
}
