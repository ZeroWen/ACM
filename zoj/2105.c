/*
 * =====================================================================================
 *
 *       Filename:  2105.c
 *
 *    Description:  
 *    A number sequence is defined as follows:
 *    f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.
 *    Given A, B, and n, you are to calculate the value of f(n).
 *    Input
 *    The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.
 *    Output
 *    For each test case, print the value of f(n) on a single line.
 *    Sample Input
 *    1 1 3
 *    1 2 10
 *    0 0 0
 *    Sample Output
 *    2
 *    5
 *     
 *        Created:  02/15/2015 18:09:37
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,c,d,t;
	long n,i;
	while(scanf("%d%d%ld",&a,&b,&n)&&a!=0){
		n=(n>48)?n%48:n;
		c=d=1;
		for(i=3;i<=n;++i){
			t=(a*d+b*c)%7;
			c=d;
			d=t;
		}
		printf("%d\n",d);
	}
	return 0;
}
