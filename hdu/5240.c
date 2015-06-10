/*
 * =====================================================================================
 *
 *       Filename:  5240.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/10/2015 19:54:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main() {
	int cas, t, n, i, flag;
	long r, e, l;
	long long sum;
	scanf("%d", &t);
	for (cas = 0;cas < t;++cas) {
		scanf("%d", &n);
		sum = 0;
		flag = 1;
		for (i = 0;i < n;++i) {
			scanf("%ld%ld%ld",&r ,&e, &l);
			if (e - sum - r < 0) {
				flag = 0;
			}
			sum += e + l;
		}
		printf("Case #%d: %s\n", cas+1, flag?"YES":"NO");
	}
	return 0;
}
