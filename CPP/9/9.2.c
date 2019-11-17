#include<stdio.h>
#include<string.h>
#define DY "NICENICENICE"
#define DY2 "HAHAHAHHAHAH"
#define DY3 "BILIBALABIBALA"
#define WORD 40
#define KONG ' '
void showchar (char ch,int num);
int main()
{
	int sp;
	showchar('*',40);
	putchar('\n');
	showchar(KONG,12);
	printf("%s\n",DY);
	showchar(KONG,12);
	printf("%s\n",DY2);
	showchar(KONG,12);
	printf("%s\n",DY3);
	showchar('*',40);
	putchar('\n');

	return 0;
}

void showchar(char ch,int num)
{
	int count;
	for(count=1;count<=num;count++)
		putchar(ch);
}
