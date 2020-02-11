#include<stdio.h>


void chline(char a,int i,int j)
{
	int ii,jj;
	for(ii=0;ii<i;ii++)
	{
		for(jj=0;jj<j;jj++)
		{
			printf("%c",a);
		}
		printf("\n");
	}


}
int main()
{
	char a;
	int i,j;
	scanf("%c",&a);
	scanf("%d",&i);
	scanf("%d",&j);
	chline(a,i,j);	


	return 0;
}
