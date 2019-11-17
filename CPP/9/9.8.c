#include<stdio.h>
//转换2进制测试
void to_binary (unsigned long n)
{
	int r;
	r=n%2;//取余得到最后的值
	if(n>=2)//确定n不为1 
	{
		to_binary(n/2);
	}
	putchar('0'+r);
	return ;
}


int main()
{
	unsigned long num;
	printf("输入一个值 将会计算其二进制书：");
	while((scanf("%lu",&num))==1)
	{
	to_binary(num);
	printf("\n");
	}
	return 0;
}
