#include<stdio.h>
int main()
{
	double a[8];
	double b[8];
	int i,o,c;
	for(i=0;i<8;i++)
		scanf("%lf",&a[i]);

	for(i=0;i<9;i++){
		for(o=0,c=0;o<i;o++){
			c+=a[o];
		}
		b[i]=c;
		printf("%lf  ",b[i]);

	}
	return 0;
}
