/*
 * =====================================================================================
 *
 *       Filename:  1846.c
 *
 *    Description:  
 *    Problem Description
 *    各位勇敢者要玩的第一个游戏是什么呢？很简单，它是这样定义的：
 *    1、  本游戏是一个二人游戏;
 *    2、  有一堆石子一共有n个；
 *    3、  两人轮流进行;
 *    4、  每走一步可以取走1…m个石子；
 *    5、  最先取光石子的一方为胜；
 *    如果游戏的双方使用的都是最优策略，请输出哪个人能赢。
 *    Input
 *    输入数据首先包含一个正整数C(C<=100)，表示有C组测试数据。
 *    每组测试数据占一行，包含两个整数n和m（1<=n,m<=1000），n和m的含义见题目描述。
 *    Output
 *    如果先走的人能赢，请输出“first”，否则请输出“second”，每个实例的输出占一行。
 *    Sample Input
 *    2
 *    23 2
 *    4 3
 *    Sample Output
 *    first
 *    second
 *
 *        Created:  05/27/2014 14:00:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int c,n,m;
	scanf("%d",&c);
	while(c--){
		scanf("%d%d",&n,&m);
		printf("%s\n",n%(m+1)?"first":"second");
	}
	return 0;
}
