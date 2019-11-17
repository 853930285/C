/*#include<stdio.h>
int main ()
{
	int a=0;
	do
	{
		a++;
		int q=0;
		int w=0;
		int e=0;
		q=a/100;
		w=a/10%10;
		e=a%10;
		if(q*q*q+w*w*w+e*e*e==a)
		{
			printf("%d\n",a);
		}
	}
	while(a<1000);

	return 0;
}
*/
#include<stdio.h>
int main()
{
	int a=0;
	for(int i=0;i<1000;i++)
	{
		a++;
                 int q=0;
                 int w=0;
                 int e=0;
                 q=a/100;
                 w=a/10%10;
                 e=a%10;
		 if(q*q*q+w*w*w+e*e*e==a)
                 {
                         printf("%d\n",a);
		 }

	
	}
	return 0;
}
