/*
 * =====================================================================================
 *
 *       Filename:  2519.c
 *
 *    Description:  
 *    Problem Description
 *    开学了，杭电又迎来了好多新生。ACMer想为新生准备一个节目。来报名要表演节目的人很多，多达N个，但是只需要从这N个人中选M个就够了，一共有多少种选择方法？
 *    Input
 *    数据的第一行包括一个正整数T，接下来有T组数据，每组数据占一行。
 *    每组数据包含两个整数N（来报名的人数,1<=N<=30），M（节目需要的人数0<=M<=30）
 *    Output
 *    每组数据输出一个整数，每个输出占一行
 *    Sample Input
 *    5
 *    3 2
 *    5 3
 *    4 4
 *    3 6
 *    8 0
 *    Sample Output
 *    3
 *    10
 *    1
 *    0
 *    1
 *
 *        Created:  06/20/2014 23:01:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,m,i;
	double r;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		if(m>n)
			r=0;
		else if(n==m||!m)
			r=1;
		else{
			for(i=n-m+1,r=1;i<=n;i++)
				r*=i;
			for(i=1;i<=m;i++)
				r/=i;
		}
		printf("%.lf\n",r);
	}
}
