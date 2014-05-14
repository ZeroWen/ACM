/*
 * =====================================================================================
 *
 *       Filename:  2156.c
 *
 *    Description:  
 *    Problem Description
 *    我们定义如下矩阵:
 *    1/1 1/2 1/3
 *    1/2 1/1 1/2
 *    1/3 1/2 1/1
 *    矩阵对角线上的元素始终是1/1，对角线两边分数的分母逐个递增。
 *    请求出这个矩阵的总和。
 *    Input
 *    每行给定整数N (N<50000)，表示矩阵为 N*N.当N为0时，输入结束。
 *    Output
 *    输出答案，保留2位小数。
 *    Sample Input
 *    1
 *    2
 *    3
 *    4
 *    0
 *    Sample Output
 *    1.00
 *    3.00
 *    5.67
 *    8.83
 *
 *        Created:  05/14/2014 17:26:52
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	double n,i,r;
	while(scanf("%lf",&n),n){
		for(i=2,r=0;i<=n;i++)
			r+=(n-i+1)/i;
		r=r*2+n;
		printf("%.2lf\n",r);
	}
	return 0;
}
