/*
 * =====================================================================================
 *
 *       Filename:  1-1-6.c
 *
 *    Description:  
 *    Problem Description
 *    Your task is to calculate the sum of some integers.
 *
 *    Input
 *    Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line. 
 *
 *    Output
 *    For each test case you should output the sum of N integers in one line, and with one line of output for each line in input. 
 *
 *    Sample Input
 *    4 1 2 3 4
 *    5 1 2 3 4 5
 *    
 *    Sample Output
 *    10
 *    15
 *
 *        Version:  1.0
 *        Created:  03/31/2014 22:40:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(){
	int i,a,s,n;
	while(scanf("%d",&n)!=EOF){
		for(i=0,s=0;i<n;i++,s+=a)
			scanf("%d",&a);
		printf("%d\n",s);
	}
	return 0;
}
