#include<stdio.h>
int main()
{
	printf("输入两个值\n");
	int a ;
	int q ;
	int w ;
	scanf("%d%d",&q,&w);
	a=q+w;
	switch(a/10)
	{
	case 10:
	printf("满分%d\n",a);
	break;

	case 9:
	printf("优秀%d\n",a);
	break;

	case 8:
	printf("良好%d\n",a);
	break;

	case 7:
    	printf("良好%d\n",a);	
	break;

	case 6:
	printf("及格%d\n",a);
	break;

	default:
	printf("不及格\n");
	break;
	};

	return 0;
}
