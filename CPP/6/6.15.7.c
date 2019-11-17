#include<stdio.h>
int main(){
	int i = 0;
	while(++i<4)
		printf("++i的值前值为%d 值为%d\n",i-1,i);
	do
		printf("i++前值为%d 值为%d\n",i-1,i);
	while(i++<8);
	return 0;
}
