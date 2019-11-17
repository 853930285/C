#include<stdio.h>
int main(){
	int a[7];
	int c=0;
	while(c<8){
		scanf("%d",&a[c]);
		c++;
	}
	c=7;
	while(c>=0){
		printf("%d",a[c]);
		c--;
	}
	return 0;
}
