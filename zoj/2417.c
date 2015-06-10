/*
 * =====================================================================================
 *
 *       Filename:  2417.c
 *
 *    Description:  
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
 *        Created:  06/10/2015 18:09:13
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
	int n, ans;
	while (scanf("%d", &n)&&n) {
		ans = 1;
		while (!(n&1)) {
			ans <<= 1;
			n >>= 1;
		}
		printf("%d\n", ans);
	}
	return 0;
}
