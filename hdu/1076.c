/*
 * =====================================================================================
 *
 *       Filename:  1-2-2.c
 *
 *    Description:  
 *    Problem Description
 *    Ignatius was born in a leap year, so he want to know when he could hold his birthday party. Can you tell him?
 *    Given a positive integers Y which indicate the start year, and a positive integer N, your task is to tell the Nth leap year from year Y.
 *    Note: if year Y is a leap year, then the 1st leap year is year Y.
 *
 *    Input
 *    The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
 *    Each test case contains two positive integers Y and N(1<=N<=10000).
 *
 *    Output
 *    For each test case, you should output the Nth leap year from year Y.
 *
 *    Sample Input
 *    3
 *    2005 25
 *    1855 12
 *    2004 10000
 *
 *    Sample Output
 *    2108
 *    1904
 *    43236
 *
 *    Hint
 *    We call year Y a leap year only if (Y%4==0 && Y%100!=0) or Y%400==0.
 *
 *        Version:  1.0
 *        Created:  03/31/2014 23:50:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int y,n,i,j,t;
	while(scanf("%d",&t)!=EOF)
		for(i=0;i<t;i++){
			scanf("%d%d",&y,&n);
			for(j=0;j<n;y++)
				if((y%400==0)||(y%4==0&&y%100!=0))
					j++;
			printf("%d\n",y-1);
		}
	return 0;
}
