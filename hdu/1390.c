/*
 * =====================================================================================
 *
 *       Filename:  1390.c
 *
 *    Description:  
 *    Example
 *    The positions of 1's in the binary representation of 13 are 0, 2, 3.
 *    Task
 *    Write a program which for each data set:
 *    reads a positive integer n,
 *    computes the positions of 1's in the binary representation of n,
 *    writes the result.
 *    Input
 *    The first line of the input contains exactly one positive integer d equal to the number of data sets, 1 <= d <= 10. The data sets follow.
 *    Each data set consists of exactly one line containing exactly one integer n, 1 <= n <= 10^6.
 *    Output
 *    The output should consists of exactly d lines, one line for each data set.
 *    Line i, 1 <= i <= d, should contain increasing sequence of integers separated by single spaces - the positions of 1's in the binary representation of the i-th input number.
 *    Sample Input
 *    1
 *    13
 *    Sample Output
 *    0 2 3
 *
 *        Created:  06/05/2014 21:09:07
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int d,i,j,a[50];
	long n;
	scanf("%d",&d);
	while(d--){
		scanf("%ld",&n);
		for(i=j=0;n;i++,n>>=1)
			if(n%2)
				a[j++]=i;
		for(i=0;i<j;i++)
			printf("%d%s",a[i],(i==j-1)?"\n":" ");
	}
	return 0;
}
