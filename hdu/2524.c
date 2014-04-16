/*
 * =====================================================================================
 *
 *       Filename:  2524.c
 *
 *    Description:  
 *    Problem Description
 *    给你一个高为n ，宽为m列的网格，计算出这个网格中有多少个矩形，下图为高为2，宽为4的网格.
 *    Input
 *    第一行输入一个t, 表示有t组数据，然后每行输入n,m,分别表示网格的高和宽 ( n < 100 , m < 100).
 *    Output
 *    每行输出网格中有多少个矩形.
 *    Sample Input
 *    2
 *    1 2
 *    2 4
 *    Sample Output
 *    3
 *    30
 *
 *        Created:  04/16/2014 18:14:28
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */


#include<stdio.h>
int main(){
	int m,n,t;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d%d",&m,&n);
			printf("%d\n",m*n*(m+1)*(n+1)/4);
		}
	return 0;
}
