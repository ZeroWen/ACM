/*
 * =====================================================================================
 *
 *       Filename:  1722.c
 *
 *    Description:  
 *    Problem Description
 *    一次生日Party可能有p人或者q人参加,现准备有一个大蛋糕.问最少要将蛋糕切成多少块(每块大小不一定相等),才能使p人或者q人出席的任何一种情况,都能平均将蛋糕分食.
 *    Input
 *    每行有两个数p和q.
 *    Output
 *    输出最少要将蛋糕切成多少块.
 *    Sample Input
 *    2 3
 *    Sample Output
 *    4
 *    Hint
 *    将蛋糕切成大小分别为1/3,1/3,1/6,1/6的四块即满足要求.
 *    当2个人来时，每人可以吃1/3+1/6=1/2 , 1/2块。
 *    当3个人来时，每人可以吃1/6+1/6=1/3 , 1/3, 1/3块。
 *
 *        Created:  06/18/2014 15:18:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int  p,q,a,b;
	while(scanf("%d%d",&p,&q)!=EOF){
		a=p;
		b=q;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;
		}
		printf("%d\n",p+q-a);
	}
	return 0;
}
