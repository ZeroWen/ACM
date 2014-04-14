/*
 * =====================================================================================
 *
 *       Filename:  2054.c
 *
 *    Description:  
 *    Problem Description
 *    Give you two numbers A and B, if A is equal to B, you should print "YES", or print "NO".
 *    Input
 *    each test case contains two numbers A and B.
 *
 *    Output
 *    for each case, if A is equal to B, you should print "YES", or print "NO".
 *
 *    Sample Input
 *    1 2
 *    2 2
 *    3 3
 *    4 3
 *
 *    Sample Output
 *    NO
 *    YES
 *    YES
 *    NO
 *
 *        Version:  1.0
 *        Created:  04/08/2014 00:20:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long double m,n;
	while(scanf("%Lf%Lf",&m,&n)!=EOF)
		if(m==n)
			printf("YES\n");
		else
			printf("NO\n");
	return 0;
}

/*
 * 有难度
 */
