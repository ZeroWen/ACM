/*
 * =====================================================================================
 *
 *       Filename:  2060.c
 *
 *    Description:  
 *    Problem Description
 *    There are another kind of Fibonacci numbers: F(0) = 7, F(1) = 11, F(n) = F(n-1) + F(n-2) (n>=2).
 *    Input
 *    Input consists of a sequence of lines, each containing an integer n. (n < 1,000,000).
 *    Output
 *    Print the word "yes" if 3 divide evenly into F(n).
 *    Print the word "no" if not.
 *    Sample Input
 *    0
 *    1
 *    2
 *    3
 *    4
 *    5
 *    Sample Output
 *    no
 *    no
 *    yes
 *    no
 *    no
 *    no
 *
 *        Created:  04/25/2014 22:55:58
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long n;
	while(scanf("%ld",&n)!=EOF)
		printf("%s\n",((n-2)%4)?"no":"yes");
	return 0;
}
