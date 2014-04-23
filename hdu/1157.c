/*
 * =====================================================================================
 *
 *       Filename:  1157.c
 *
 *    Description:  
 *    Problem Description
 *    FJ is surveying his herd to find the most average cow. He wants to know how much milk this 'median' cow gives: half of the cows give as much or more than the median; half give as much or less. 
 *    Given an odd number of cows N (1 <= N < 10,000) and their milk output (1..1,000,000), find the median amount of milk given such that at least half the cows give the same amount of milk or more and at least half give the same or less.
 *    Input
 *    * Line 1: A single integer N 
 *    * Lines 2..N+1: Each line contains a single integer that is the milk output of one cow.
 *    Output
 *    * Line 1: A single integer that is the median milk output.
 *    Sample Input
 *    5
 *    2
 *    4
 *    1
 *    3
 *    5
 *    Sample Output
 *    3
 *    Hint 
 *    INPUT DETAILS: 
 *    Five cows with milk outputs of 1..5 
 *    OUTPUT DETAILS: 
 *    1 and 2 are below 3; 4 and 5 are above 3.
 *
 *        Version:  1.0
 *        Created:  04/16/2014 00:05:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j;
	long a[10000],t;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		for(i=0;i<n;i++)
			for(j=n-1;j>i;j--)
				if(a[j]<a[j-1]){
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
		printf("%ld\n",a[n/2]);
	}
	return 0;
}
