/*
 * =====================================================================================
 *
 *       Filename:  1339.c
 *
 *    Description:  
 *    Problem Description
 *    Given a positive integer n and the odd integer o and the nonnegative integer p such that n = o2^p.
 *    Example
 *    For n = 24, o = 3 and p = 3.
 *    Task
 *    Write a program which for each data set:
 *    reads a positive integer n,
 *    computes the odd integer o and the nonnegative integer p such that n = o2^p,
 *    writes the result.
 *    Input
 *    The first line of the input contains exactly one positive integer d equal to the number of data sets, 1 <= d <= 10. The data sets follow.
 *    Each data set consists of exactly one line containing exactly one integer n, 1 <= n <= 10^6.
 *    Output
 *    The output should consists of exactly d lines, one line for each data set.
 *    Line i, 1 <= i <= d, corresponds to the i-th input and should contain two integers o and p separated by a single space such that n = o2^p.
 *    Sample Input
 *    1
 *    24
 *    Sample Output
 *    3 3
 *
 *        Created:  04/25/2014 22:28:22
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(){
	int n,a,b;
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%d",&a);
			for(b=0;a%2==0;b++)
				a/=2;
			printf("%d %d\n",a,b);
		}
	return 0;
}
