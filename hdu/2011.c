/*
 * =====================================================================================
 *
 *       Filename:  2011.c
 *
 *    Description:  
 *    Problem Description
 *    多项式的描述如下：
 *    1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
 *    现在请你求出该多项式的前n项的和。
 *    Input
 *    输入数据由2行组成，首先是一个正整数m（m<100），表示测试实例的个数，第二行包含m个正整数，对于每一个整数(不妨设为n,n<1000），求该多项式的前n项的和。
 *
 *    Output
 *    对于每个测试实例n，要求输出多项式前n项的和。每个测试实例的输出占一行，结果保留2位小数。
 *
 *    Sample Input
 *    2
 *    1 2
 *
 *    Sample Output
 *    1.00
 *    0.50
 *
 *        Version:  1.0
 *        Created:  04/09/2014 22:38:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int m,n,i,sign;
	long double s,j;
	while(scanf("%d",&m)!=EOF)
		for(i=0;i<m;i++){
			scanf("%d",&n);
			for(s=0,j=1,sign=1;j<=n;j++,sign=-sign)
				s+=sign/j;
			printf("%.2Lf\n",s);
		}
	return 0;
}
