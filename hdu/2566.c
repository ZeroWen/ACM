/*
 * =====================================================================================
 *
 *       Filename:  2566.c
 *
 *    Description:  
 *    Problem Description
 *    假设一堆由1分、2分、5分组成的n个硬币总面值为m分，求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）。
 *    Input
 *    输入数据第一行有一个正整数T，表示有T组测试数据；
 *    接下来的T行，每行有两个数n,m，n和m的含义同上。
 *    Output
 *    对于每组测试数据，请输出可能的组合方式数；
 *    每组输出占一行。
 *    Sample Input
 *    2
 *    3 5
 *    4 8
 *    Sample Output
 *    1
 *    2
 *
 *        Created:  04/16/2014 22:25:39
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,m,c,i,j,k;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d%d",&n,&m);
			for(i=0,c=0;i<=m;i++)
				for(j=0;j<=m;j++){
					k=n-i-j;
					if(k>=0&&(i+j*2+k*5==m))
							c++;
				}
			printf("%d\n",c);
		}
	return 0;
}
