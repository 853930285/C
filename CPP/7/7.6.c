#include<stdio.h>
#define L '.'
int main()
{
	int ch;
	int chr = 0;
	while((ch=getchar())!=L){
		if(ch!='"' && ch!='\'')
			chr++;
	}
	printf("这个句子包含了%d个字母不包括\"  \'  \n",chr);
	return 0;
}
