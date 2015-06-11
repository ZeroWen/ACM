/*
 * =====================================================================================
 *
 *       Filename:  3498.c
 *
 *    Description:  
 *    Javabeans are delicious. Javaman likes to eat javabeans very much.
 *    Javaman has n boxes of javabeans. There are exactly i javabeans in the i-th box (i = 1, 2, 3,...n). Everyday Javaman chooses an integer x. He also chooses several boxes where the numbers of javabeans are all at least x. Then he eats x javabeans in each box he has just chosen. Javaman wants to eat all the javabeans up as soon as possible. So how many days it costs for him to eat all the javabeans?
 *    Input
 *    There are multiple test cases. The first line of input is an integer T ≈ 100 indicating the number of test cases.
 *    Each test case is a line of a positive integer 0 < n < 231.
 *    Output
 *    For each test case output the result in a single line.
 *    Sample Input
 *    4
 *    1
 *    2
 *    3
 *    4
 *    Sample Output
 *    1
 *    2
 *    2
 *    3
 *
 *        Created:  06/12/2015 01:48:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	long n;
	int t, count;
	scanf("%d", &t);
	while (t--) {
		scanf("%ld", &n);
		for (count=0;n;++count) {
			n /= 2;
		}
		printf("%d\n", count);
	}
}
