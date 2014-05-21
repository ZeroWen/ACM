/*
 * =====================================================================================
 *
 *       Filename:  1196.c
 *
 *    Description:  
 *    Problem Description
 *    Given an positive integer A (1 <= A <= 100), output the lowest bit of A.
 *    For example, given A = 26, we can write A in binary form as 11010, so the lowest bit of A is 10, so the output should be 2.
 *    Another example goes like this: given A = 88, we can write A in binary form as 1011000, so the lowest bit of A is 1000, so the output should be 8.
 *    Input
 *    Each line of input contains only an integer A (1 <= A <= 100). A line containing "0" indicates the end of input, and this line is not a part of the input data.
 *    Output
 *    For each A in the input, output a line containing only its lowest bit.
 *    Sample Input
 *    26
 *    88
 *    0
 *    Sample Output
 *    2
 *    8
 *
 *        Created:  05/21/2014 15:17:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,c,n;
	while(scanf("%d",&a),a){
		for(c=0;!(a&1);c++)
			a>>=1;
		for(n=1;c;c--)
			n*=2;
		printf("%d\n",n);
	}
	return 0;
}
