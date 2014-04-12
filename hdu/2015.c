/*
 * =====================================================================================
 *
 *       Filename:  2015.c
 *
 *    Description:  
 *    Problem Description
 *    有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。
 *    Input
 *    输入数据有多组，每组占一行，包含两个正整数n和m，n和m的含义如上所述。
 *    Output
 *    对于每组输入数据，输出一个平均值序列，每组输出占一行。
 *    Sample Input
 *    3 2
 *    4 2
 *    Sample Output
 *    3 6
 *    3 7
 *
 *        Version:  1.0
 *        Created:  04/12/2014 19:50:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,k,sum,a[100];
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=1,k=sum=0;i<=n;i++){
			sum+=2*i;
			if(i%m==0){
				a[k++]=sum/m;
				sum=0;
			}
			else
				if(i==n)
					a[k++]=sum/(i%m);
		}
		for(i=0;i<k;i++)
			printf("%d%s",a[i],(i==k-1)?"\n":" ");
	}
	return 0;
}
