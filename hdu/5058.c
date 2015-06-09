/*
 * =====================================================================================
 *
 *       Filename:  5058.c
 *
 *    Description:  
 *    Small W gets two files. There are n integers in each file. Small W wants to know whether these two files are same. So he invites you to write a program to check whether these two files are same. Small W thinks that two files are same when they have the same integer set.
 *    For example file A contains (5,3,7,7),and file B contains (7,5,3,3). They have the same integer set (3,5,7), so they are same.
 *    Another sample file C contains(2,5,2,5), and file D contains (2,5,2,3).
 *    The integer set of C is (2,5),but the integer set of D is (2,3,5),so they are not same.
 *    Now you are expected to write a program to compare two files with size of n.
 *    Input
 *    Multi test cases (about 100). Each case contain three lines. The first line contains one integer n represents the size of file. The second line contains n integers a1,a2,a3,…,an - represents the content of the first file. The third line contains n integers b1,b2,b3,…,bn - represents the content of the second file.
 *    Process to the end of file.
 *    1≤n≤100
 *    1≤ai,bi≤1000000000
 *    Output
 *    For each case, output "YES" (without quote) if these two files are same, otherwise output "NO" (without quote).
 *    Sample Input
 *    3
 *    1 1 2
 *    1 2 2
 *    4
 *    5 3 7 7
 *    7 5 3 3
 *    4
 *    2 5 2 3
 *    2 5 2 5
 *    3
 *    1 2 3
 *    1 2 4
 *    Sample Output
 *    YES
 *    YES
 *    NO
 *    NO
 *
 *        Created:  06/10/2015 01:43:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
	return *(long *)a - *(long *)b;
}
int main() {
	int n, ans, i, j;
	long a[110], b[110], tmp;
	while (scanf("%d", &n) != EOF) {
		for (i = 0;i < n; ++i)
			scanf("%ld", &a[i]);
		for (i = 0;i < n; ++i)
			scanf("%ld", &b[i]);
		qsort(a, n, sizeof(long), cmp);
		qsort(b, n, sizeof(long), cmp);
		ans = 1;
		for (i = j = 0;i < n && j < n;++i, ++j) {
			if (a[i] != b[j]) {
				ans = 0;
				break;
			}
			while (i+1 < n && a[i] == a[i+1])
				++i;
			while (j+1 < n && b[j] == b[j+1])
				++j;
		}
		if (i != n || j != n) {
			ans = 0;
		}
		printf("%s\n", ans ? "YES":"NO");
	}
	return 0;
}
