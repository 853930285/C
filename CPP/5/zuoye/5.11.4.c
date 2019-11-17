#include<stdio.h>

#define INCH 2.54  // 1 inch = 2.54cm



int main(void)

{

 float cm;

 printf("Enter a height in centimeters:");

 scanf("%f",&cm);

 while(cm>0)
 {

  printf("%.1f cm = %d feet, %.1f inches\n",cm,(int)(cm/INCH/12),cm/INCH-(int)(cm/INCH/12)*12);

  printf("Enter a height in centimeters(<=0 to quit):");

  scanf("%f",&cm);

 }

 printf("bye\n");

 return(0);

}
