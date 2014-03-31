/*
 * =====================================================================================
 *
 *       Filename:  1-1-4.c
 *
 *    Description:  
 *    Problem Description
 *    Your task is to Calculate the sum of some integers.
 *    
 *    Input
 *    Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.
 *    
 *    Output
 *    For each group of input integers you should output their sum in one line, and with one line of output for each line in input. 
 *    
 *    Sample Input
 *    4 1 2 3 4
 *    5 1 2 3 4 5
 *    0 
 *    
 *    Sample Output
 *    10
 *    15
 *
 *        Version:  1.0
 *        Created:  03/30/2014 21:59:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */


#include<stdio.h>
int main(){
	int i,a,s,n;
	while(scanf("%d",&n),n){
		for(i=0,s=0;i<n;i++,s+=a)
			scanf("%d",&a);
		printf("%d\n",s);
	}
	return 0;
}
