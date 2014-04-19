/*
 * =====================================================================================
 *
 *       Filename:  2162.c
 *
 *    Description:  
 *    Problem Description
 *    Write a program to determine the summation of several sets of integers.
 *    Input
 *    The input file will consist of up to 250 sets of integers, where each set contains at most 100 integers and the integer values will be between –16000 and + 16000. Each set of numbers is started with the number of integers in the set, n. The next n input lines will each contain one integer of the set. You should stop processing when the size of the set, n, is<= 0.
 *    Output
 *    A single line of output should be generated for each set of integers. The line should have format shown below.
 *    Sample Input
 *    4
 *    -1
 *    3
 *    1
 *    1
 *    2
 *    19
 *    17
 *    5
 *    -645
 *    952
 *    -1488
 *    -5456
 *    -9342
 *    -1
 *    Sample Output
 *    Sum of #1 is 4
 *    Sum of #2 is 36
 *    Sum of #3 is -15979
 *
 *        Created:  04/19/2014 10:22:59
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i=0,t;
	long sum;
	while(scanf("%d",&n)!=EOF){
		if(n<=0)
			break;
		sum=0;
		while(n--){
			scanf("%d",&t);
			sum+=t;
		}
		printf("Sum of #%d is %ld\n",++i,sum);
	}
	return 0;
}
