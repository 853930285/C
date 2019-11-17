#include<stdio.h>
int main(){
	int t,w;
a :
	printf("请分别输入一个最大值和最小值");
	scanf("%d%d",&w,&t);
	printf("您输入的最大值为%d最小值为%d\n",w,t);
	if(t<w){
		for(;t<w;t++){
			printf("%d\t%d\t%d\n",t,t*t,t*t*t);
		}
	}
	else{
	printf("您输入有误\n");
	goto a ;
	}
	
	return 0;
}
	
