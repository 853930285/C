#include<stdio.h>
const int MS = 60;
const int HS = 3600;
const double GZY = 0.62137;//每公里的英里数，公里转英里 
int main ()
{
	double distk,distm,rate,mtime;
	int min,sec,time,mmin,msec;
	printf("这个程序转换你参加公制比赛的时间\n跑完一英里达到你的平均水平\n速度（英里/小时）\n");
	printf("请输入以公里为单位的距离跑步\n");
	scanf("%lf",&distk);
	printf("下一步，输入以分钟和秒为单位的时间\n从输入分钟开始\n");
	scanf("%d",&min);
	printf("现在输入秒数\n");
	scanf("%d",&sec);
	time = MS * min + sec;
	distm = GZY * distk;
	rate = distm / time * HS;
	mtime = (double)time / distm;
	mmin = (int)mtime / MS;
	msec = (int)mtime % MS;
	printf("你共跑了%1.2f公里(%1.2f英里)耗时%d分%d秒\n",distk,distm,min,sec);
	printf("速度相当于%d分钟%d秒跑了1英里\n",mmin,msec);
	printf("你的平均速度是每小时%1.2f英里\n",rate);
	return 0;
}
