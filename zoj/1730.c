/*
 * =====================================================================================
 *
 *       Filename:  1730.c
 *
 *    Description:  
 *    n participants of "crazy tea party" sit around the table. Each minute one pair of neighbors can change their places. Find the minimum time (in minutes) required for all participants to sit in reverse order (so that left neighbors would become right, and right - left).
 *    Input. The first line is the amount of tests. Each next line contains one integer n (1 <= n <= 32767) - the amount of crazy tea participants.
 *    Output. For each number n of participants to crazy tea party print on the standard output, on a separate line, the minimum time required for all participants to sit in reverse order.
 *    Sample Input
 *    3
 *    4
 *    5
 *    6
 *    Sample Output
 *    2
 *    4
 *    6
 *
 *       Created:  05/10/2014 21:10:35
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",n%2?((n/2)*(n/2 -1)/2+(n/2 +1)*(n/2)/2):(2*(n/2)*(n/2-1)/2));
	}
	return 0;
}
