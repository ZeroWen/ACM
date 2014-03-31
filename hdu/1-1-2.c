/*
 * =====================================================================================
 *
 *       Filename:  1-1-2.c
 *
 *    Description:  
 *    Problem Description
 *    Your task is to Calculate a + b.
 *    
 *    Input
 *    Input contains an integer N in the first line, and then N lines follow. Each line consists of a pair of integers a and b, separated by a space, one pair of integers per line. 
 *    
 *    Output
 *    For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input. 
 *    
 *    Sample Input
 *    2
 *    1 5
 *    10 20
 *    
 *    Sample Output
 *    6
 *    30
 *    
 *
 *        Version:  1.0
 *        Created:  03/30/2014 21:36:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,a,b;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d%d",&a,&b);
			printf("%d\n",a+b);
		}
	}
	return 0;
}
