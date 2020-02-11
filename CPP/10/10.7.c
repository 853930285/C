#include<stdio.h>
#define MONTHS 12
#define YEARS 5
int main()
{
	const float rain[YEARS][MONTHS]=
	{
		{1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.11,1.11,1.12},
		{2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,2.11,2.11,2.12},
		{3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9,3.11,3.11,3.12},
		{4.1,4.2,4.3,4.4,4.5,4.6,4.7,4.8,4.9,4.11,4.11,4.12},
		{5.1,5.2,5.3,5.4,5.5,5.6,5.7,5.8,5.9,5.11,5.11,5.12}
	};
	printf("显示各个年份的平均降水量\n");
	int years,months;
	float zs;
	for(years=0,zs=0;years<YEARS;years++)
	{
		for(months=0;months<MONTHS;months++)
		{
			zs+=rain[years][months];
		}
		printf("200%d年	平均值为%f\n",years,zs/12);


	}
	printf("显示每年同月份的平均值\n");
	for(months=0,zs=0;months<MONTHS;months++)
	{
		for(years=0;years<YEARS;years++)
		{
			zs+=rain[years][months];
		}
		printf("%d月	平均值%f\n",months+1,zs/12);
	}



	return 0;
}
