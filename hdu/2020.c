/*
 * =====================================================================================
 *
 *       Filename:  2020.c
 *
 *    Description:  
 *    Problem Description
 *    输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
 *    Input
 *    输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。 
 *    Output
 *    对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
 *    Sample Input
 *    3 3 -4 2
 *    4 0 1 2 -3
 *    0
 *    Sample Output
 *    -4 3 2
 *    -3 2 1 0
 *
 *        Version:  1.0
 *        Created:  04/09/2014 23:12:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int a[100],n,i,j,t;
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
				if(fabs(a[j])<fabs(a[j+1])){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		for(i=0;i<n;i++)
			printf("%d%s",a[i],(i==n-1)?"\n":" ");
	}
	return 0;
}
