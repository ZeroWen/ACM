/*
 * =====================================================================================
 *
 *       Filename:  1001.c
 *
 *    Description:  
 *    Problem Description
 *    In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
 *    
 *    Input
 *    The input will consist of a series of integers n, one integer per line.
 *    
 *    Output
 *    For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.
 *    
 *    Sample Input
 *    1
 *    100
 *    
 *    Sample Output
 *    1
 *    5050
 *    
 *
 *        Version:  1.0
 *        Created:  03/30/2014 21:21:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int i,sum=0;
		for(i=1;i<=n;i++)
			sum+=i;
		printf("%d\n\n",sum);
	}
	return 0;
}
