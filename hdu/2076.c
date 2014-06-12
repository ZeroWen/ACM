/*
 * =====================================================================================
 *
 *       Filename:  2076.c
 *
 *    Description:  
 *    Problem Description
 *    时间过的好快，一个学期就这么的过去了，xhd在傻傻的看着表，出于对数据的渴望，突然他想知道这个表的时针和分针的夹角是多少。现在xhd知道的只有时间，请你帮他算出这个夹角。
 *    注：夹角的范围[0，180]，时针和分针的转动是连续而不是离散的。
 *    Input
 *    输入数据的第一行是一个数据T，表示有T组数据。
 *    每组数据有三个整数h(0 <= h < 24)，m(0 <= m < 60)，s(0 <= s < 60)分别表示时、分、秒。
 *    Output
 *    对于每组输入数据，输出夹角的大小的整数部分。
 *    Sample Input
 *    2
 *    8 3 17
 *    5 13 30
 *    Sample Output
 *    138
 *    75
 *
 *        Created:  06/12/2014 10:37:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	double angel,h,m,s;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf",&h,&m,&s);
		if(h>12)
			h-=12;
		angel=h*30-11*m/2-11*s/120;
		if(angel<0)
			angel=-angel;
		if(angel>180)
			angel=360-angel;
		printf("%d\n",(int)angel);
	}
	return 0;
}
/*
 * 注意是24小时制的
 */
