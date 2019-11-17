#include<stdio.h>
#include<stdbool.h>
int main(){
	long num;
	long yue=1;
	int a;
	bool i;
	printf("输入你需要取其约数的值：");
	while(yue<=1000000){
		for(a=yue,i=true;(a*a)<=num;a++){
			if(num%a==0){
				if((a*a)!=num){
					printf("%d      %lu              %lu\n",a,num/a,num);
				}
				else{
					printf("%d      %lu\n",a,num);
				}
				i=false;
			}
		}
		if(i){
			printf("%lu是一个素数\n",num);
		}
		yue++;
	}
	return 0;
}

