/*
 * =====================================================================================
 *
 *       Filename:  4764.c
 *
 *    Description:  
 *    Problem Description
 *    Tang and Jiang are good friends. To decide whose treat it is for dinner, they are playing a game. Specifically, Tang and Jiang will alternatively write numbers (integers) on a white board. Tang writes first, then Jiang, then again Tang, etc... Moreover, assuming that the number written in the previous round is X, the next person who plays should write a number Y such that 1 <= Y - X <= k. The person who writes a number no smaller than N first will lose the game. Note that in the first round, Tang can write a number only within range [1, k] (both inclusive). You can assume that Tang and Jiang will always be playing optimally, as they are both very smart students.
 *    Input
 *    There are multiple test cases. For each test case, there will be one line of input having two integers N (0 < N <= 10^8) and k (0 < k <= 100). Input terminates when both N and k are zero.
 *    Output
 *    For each case, print the winner's name in a single line.
 *    Sample Input
 *    1 1
 *    30 3
 *    10 2
 *    0 0
 *    Sample Output
 *    Jiang
 *    Tang
 *    Jiang
 *
 *        Created:  04/22/2014 17:54:50
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long n,k;
	while(scanf("%ld%ld",&n,&k)!=EOF){
		if(n==0&&k==0)
			break;
		;
		printf();
	}
}
