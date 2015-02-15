/*
 * =====================================================================================
 *
 *       Filename:  1163.c
 *
 *    Description:  
 *    Problem Description
 *    The digital root of a positive integer is found by summing the digits of the integer. If the resulting value is a single digit then that digit is the digital root. If the resulting value contains two or more digits, those digits are summed and the process is repeated. This is continued as long as necessary to obtain a single digit.
 *    For example, consider the positive integer 24. Adding the 2 and the 4 yields a value of 6. Since 6 is a single digit, 6 is the digital root of 24. Now consider the positive integer 39. Adding the 3 and the 9 yields 12. Since 12 is not a single digit, the process must be repeated. Adding the 1 and the 2 yeilds 3, a single digit and also the digital root of 39.
 *    The Eddy's easy problem is that : give you the n,want you to find the n^n's digital Roots.
 *    Input
 *    The input file will contain a list of positive integers n, one per line. The end of the input will be indicated by an integer value of zero. Notice:For each integer in the input n(n<10000).
 *    Output
 *    Output n^n's digital root on a separate line of the output.
 *    Sample Input
 *    2
 *    4
 *    0
 *    Sample Output
 *    4
 *    4
 *
 *        Created:  04/24/2014 21:12:59
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,a[18]={1,4,9,4,2,9,7,1,9,1,5,9,4,7,9,7,8,9};
	while(scanf("%d",&n)&&n)
		printf("%d\n",a[(n%18?n%18:18)-1]);
	return 0;
}
