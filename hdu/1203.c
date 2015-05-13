/*
 * =====================================================================================
 *
 *       Filename:  1203.c
 *
 *    Description:  
 *    Speakless很早就想出国，现在他已经考完了所有需要的考试，准备了所有要准备的材料，于是，便需要去申请学校了。要申请国外的任何大学，你都要交纳一定的申请费用，这可是很惊人的。Speakless没有多少钱，总共只攒了n万美元。他将在m个学校中选择若干的（当然要在他的经济承受范围内）。每个学校都有不同的申请费用a（万美元），并且Speakless估计了他得到这个学校offer的可能性b。不同学校之间是否得到offer不会互相影响。“I NEED A OFFER”，他大叫一声。帮帮这个可怜的人吧，帮助他计算一下，他可以收到至少一份offer的最大概率。（如果Speakless选择了多个学校，得到任意一个学校的offer都可以）。
 *    Input
 *    输入有若干组数据，每组数据的第一行有两个正整数n,m(0<=n<=10000,0<=m<=10000) 
 *    后面的m行，每行都有两个数据ai(整型),bi(实型)分别表示第i个学校的申请费用和可能拿到offer的概率。 
 *    输入的最后有两个0。
 *    Output
 *    每组数据都对应一个输出，表示Speakless可能得到至少一份offer的最大概率。用百分数表示，精确到小数点后一位。
 *    Sample Input
 *    10 3
 *    4 0.1
 *    4 0.2
 *    5 0.3
 *    0 0
 *    Sample Output
 *    44.0%
 *
 *        Created:  05/13/2015 19:06:08
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b))
int a[10002];
double b[10002];
double p[10002];
int n,m,i,j;
void dp(){
	memset(p,0,sizeof(p));
	for(i=0;i<m;++i)
		for(j=n;j>=a[i];--j)
			p[j]=max(p[j],1-(1-p[j-a[i]])*(1-b[i]));
}
int main(){
	while(scanf("%d%d",&n,&m)!=EOF){
		if(!n&&!m)
			break;
		for(i=0;i<m;++i)
			scanf("%d%lf",&a[i],&b[i]);
		dp();
		printf("%.1f%%\n",p[n]*100);
	}
	return 0;
}
