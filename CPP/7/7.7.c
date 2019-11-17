#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main()
{
	char c;
	int zf=0;//统计字符
	char prve;//暂存
	int hs=0;//统计行数
	int word=0;//统计单词
	int bhs=0;//统计不完整的行数
	bool zj=false;//关于单词的判定
	char nn='\n';
	printf("请输入一段字符稍后将会测量他(输入'|')结束\n");
	while((c=getchar())!=STOP)
	{
		zf++;
		if(c=='\n')
			hs++;
		if(!isspace(c) && !zj)//单词开始时
		{
			zj=true;
			word++;
		}
		if(isspace(c) && zj)
		{
			zj=false;
			prve=c;
		}
	}
	if(prve=='\n')
		bhs++;
	printf("您输入的字符里有:\n字符数：%d\n行数：%d\n单词：%d\n不完整的句子：%d\n",zf,hs,word,bhs);

	return 0;
}
