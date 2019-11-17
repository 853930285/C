#include<stdio.h>
int main(){
	char ch;
	char k=' ';
	ch=getchar();
	while(ch!='\n'){
		if(ch!=k)
			putchar(ch);
		else
			putchar('*');
		ch=getchar();
	}
	return 0;
}
