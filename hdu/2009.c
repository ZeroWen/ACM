/*
 * =====================================================================================
 *
 *       Filename:  2009.c
 *
 *    Description:  
 *    Problem Description
 *    数列的定义如下：
 *    数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
 *    Input
 *    输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。
 *    Output
 *    对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。
 *
 *    Sample Input
 *    81 4
 *    2 2
 *
 *    Sample Output
 *    94.73
 *    3.41
 *
 *        Version:  1.0
 *        Created:  04/08/2014 22:01:41
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
	int n,m,i;
	long double sum,c;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(c=sum=n,i=1;i<m;i++){
			c=sqrt(c);
			sum+=c;
		}
		printf("%.2Lf\n",sum);
	}
	return 0;
}
