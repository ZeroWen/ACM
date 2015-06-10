/*
 * =====================================================================================
 *
 *       Filename:  2710.c
 *
 *    Description:  
 *    To improve the organization of his farm, Farmer John labels each of his N (1 <= N <= 5,000) cows with a distinct serial number in the range 1..20,000. Unfortunately, he is unaware that the cows interpret some serial numbers as better than others. In particular, a cow whose serial number has the highest prime factor enjoys the highest social standing among all the other cows.
 *    (Recall that a prime number is just a number that has no divisors except for 1 and itself. The number 7 is prime while the number 6, being divisible by 2 and 3, is not).
 *    Given a set of N (1 <= N <= 5,000) serial numbers in the range 1..20,000, determine the one that has the largest prime factor.
 *    Input
 *    * Line 1: A single integer, N
 *    * Lines 2..N+1: The serial numbers to be tested, one per line
 *    Output
 *    * Line 1: The integer with the largest prime factor. If there are more than one, output the one that appears earliest in the input file.
 *    Sample Input
 *    4
 *    36
 *    38
 *    40
 *    42
 *    Sample Output
 *    38
 *
 *        Created:  06/10/2015 20:42:51
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAXN 20010
int prime[MAXN] = {0};
int main() {
	int n, i, j, tmp, factor, maxfactor, maxtmp;
	prime[0] = 1;
	prime[1] = 0;
	for (i = 2;i < MAXN;++i) {
		if(!prime[i]){
			for (j = 2;i * j < MAXN;++j) {
				prime[i*j] = 1;
			}
		}
	}
	while (scanf("%d", &n)!=EOF) {
		maxfactor = maxtmp = 0;
		while (n--) {
			scanf("%d", &tmp);
			for (i = 1;i <= tmp;++i) {
				if (!prime[tmp/i]&&tmp%i==0) {
					factor = tmp/i;
					break;
				}
			}
			if (factor > maxfactor) {
				maxtmp = tmp;
				maxfactor = factor;
			}
		}
		printf("%d\n", maxtmp);
	}
	return 0;
}
