#include<stdio.h>



int main(void)

{

 int lower,upper,sum,i;

 printf("Enter lower and upper integer limits:");

 scanf("%d%d",&lower,&upper);

 while(lower<upper )

 {

  for(i=lower,sum=0;i<=upper;i++)sum+=i*i;

  printf("The sums of the squates from %d to %d is %d\n",lower*lower,upper*upper,sum);

  printf("Enter next set of limits:");

  scanf("%d%d",&lower,&upper);

 }

 printf("Done\n");

 return(0);

}
