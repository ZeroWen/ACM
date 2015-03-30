/*
 * =====================================================================================
 *
 *       Filename:  1664.c
 *
 *    Description:  
 *    把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）5，1，1和1，5，1 是同一种分法。
 *    Input
 *    第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1<=M，N<=10。
 *    Output
 *    对输入的每组数据M和N，用一行输出相应的K。
 *    Sample Input
 *    1
 *    7 3
 *    Sample Output
 *    8
 *
 *        Created:  03/30/2015 17:55:00
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int dp[12][12];
int foo(int m,int n){
	if(m<0)
		return 0;
	if(n==1||m==0)
		return dp[m][n]=1;
	if(dp[m][n])
		return dp[m][n];
	else{
		int num=0,k=1;
		for(;;k++){
			num+=foo(m-k*n,n-1);
			if(m-k*n<=0)
				break;
		}
	    return dp[m][n]=foo(m,n-1)+num;
	}
}
int main(){
	int t,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&m,&n);
		printf("%d\n",foo(m,n));
	}
	return 0;
}
