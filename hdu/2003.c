/*
 * =====================================================================================
 *
 *       Filename:  2003.c
 *
 *    Description:  
 *    Problem Description
 *    求实数的绝对值。
 *    Input
 *    输入数据有多组，每组占一行，每行包含一个实数。
 *
 *    Output
 *    对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。
 *
 *    Sample Input
 *    123
 *    -234.00
 *
 *    Sample Output
 *    123.00
 *    234.00
 *
 *        Version:  1.0
 *        Created:  04/07/2014 23:13:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	double n;
	while(scanf("%lf",&n)!=EOF){
		if(n<0)
			n=-n;
		printf("%.2lf\n",n);
	}
	return 0;
}
