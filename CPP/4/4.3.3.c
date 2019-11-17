#include<stdio.h>
int main()
{
	printf("printf的转换说明修饰符\n");
	char a = 'H';
	printf("-号表示：\n有%-20c\n无%20c\n (%%-20c表示产生有20个空格那么宽的字段-号代表从左边开始)\n",a,a);
	float b = 3.15;
	float c = 4.15;
	printf("+号表示：%+4.2f 无+号表示：%4.2f\n",b,b);
	printf("有无空格表示：注意对齐\n% 4.2f\n% 4.2f\n",b,b-c);
	int d = 90;
	printf("%%#的用处：\n有#%#o\n无#%o(八进制数表示)\n 有%#2.0f\n 无%2.0f(保留小数点)\n",d,d,b,b);
	printf("有 %+#10.3E\n无 %+10.3E\n ",c,c);
	return 0;
}
