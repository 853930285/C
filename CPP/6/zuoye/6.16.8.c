#include<stdio.h>
float c(float,float);
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	for(int i;i!=0;i=scanf("%f%f",&a,&b)){
		float q=c(a,b);
		printf("000%f\n",q);
	}
	return 0;
}
float c(float a,float b){
	float w=(a-b)/(a*b);
	return w;
}
