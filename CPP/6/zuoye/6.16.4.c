#include<stdio.h>
int main()
{
	int a,b,c,d;
	char ch;
	scanf("%c",&ch);
	for(a=1;a<=ch-64;a++){
		for(b=ch-64;b>a;b--){
			printf(" ");
		}
		for(c=65;c<65+a;c++){
			printf("%c",c);
		}
		for(d=90-(27-a);d>64;d--){
			printf("%c",d);
		}
		printf("\n");
	}
	return 0;
}
