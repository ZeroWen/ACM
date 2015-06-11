/*
 * =====================================================================================
 *
 *       Filename:  5230.c
 *
 *    Description:  
 *    How time flies! The graduation of this year is around the corner. N members of ZJU ACM/ICPC Team decided to hold a party in a restaurant. The restaurant is located in a skyscraper so they need to take an elevator to reach there.
 *    The elevator's maximum load is M kilograms. The weight of the i-th team member is Ai kilograms. If the total weight of people in the elevator exceeds the maximum load of the elevator, the elevator will raise the alarm and will not move.
 *    Please write a program to implement the weight detector of the elevator.
 *    Input
 *    There are multiple test cases. The first line of input is an integer T indicates the number of test cases. For each test case:
 *    The first line contains two integers N (1 <= N <= 20) and M (1 <= M <= 2000). The next line contains N integers Ai (1 <= Ai <= 500).
 *    Output
 *    For each test case, output "Safe" if no alarm will be raised. Otherwise, output "Warning".
 *    Sample Input
 *    2
 *    3 800
 *    50 60 70
 *    9 800
 *    50 55 60 60 60 60 65 70 360
 *    Sample Output
 *    Safe
 *    Warning
 *
 *        Created:  06/12/2015 00:22:21
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int t, n, m, sum, tmp;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		sum = 0;
		while (n--) {
			scanf("%d",&tmp);
			sum += tmp;
		}
		printf("%s\n", sum>m?"Warning":"Safe");
	}
	return 0;
}
