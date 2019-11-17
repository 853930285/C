#include<stdio.h>
int main(){
	char a = '$';
	int  s = 4;
	int  h = 8;
	for(int si = 1;si<=s;si++){
		for(int hi = 1;hi<=h;hi++)
			printf("%c",a);
		printf("\n");
	}
	return 0;
}

