/*
 * =====================================================================================
 *
 *       Filename:  5017.c
 *
 *    Description:  
 *    There are N little kids sitting in a circle, each of them are carrying some java beans in their hand. Their teacher want to select M kids who seated in M consecutive seats and collect java beans from them.
 *    The teacher knows the number of java beans each kids has, now she wants to know the maximum number of java beans she can get from M consecutively seated kids. Can you help her?
 *    Input
 *    There are multiple test cases. The first line of input is an integer T indicating the number of test cases.
 *    For each test case, the first line contains two integers N (1 ≤ N ≤ 200) and M (1 ≤ M ≤ N). Here N and M are defined in above description. The second line of each test case contains N integers Ci (1 ≤ Ci ≤ 1000) indicating number of java beans the ith kid have.
 *    Output
 *    For each test case, output the corresponding maximum java beans the teacher can collect.
 *    Sample Input
 *    2
 *    5 2
 *    7 3 1 3 9
 *    6 6
 *    13 28 12 10 20 75
 *    Sample Output
 *    16
 *    158
 *
 *        Created:  06/11/2015 23:23:01
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int t, n, m, i, j, tmp, max, a[210];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (i=0;i<n;++i) {
			scanf("%d", &a[i]);
		}
		max = 0;
		for (i=0;i<n;++i) {
			tmp = 0;
			for (j=0;j<m;++j) {
				tmp += a[(i+j)%n];
			}
			if (tmp > max) {
				max = tmp;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
