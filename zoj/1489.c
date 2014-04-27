/*
 * =====================================================================================
 *
 *       Filename:  1489.c
 *
 *    Description:  
 *    Problem Description
 *    Give a number n, find the minimum x(x>0) that satisfies 2^x mod n = 1.
 *    Input
 *    One positive integer on each line, the value of n.
 *    Output
 *    If the minimum x exists, print a line with 2^x mod n = 1.
 *    Print 2^? mod n = 1 otherwise.
 *    You should replace x and n with specific numbers.
 *    Sample Input
 *    2
 *    5
 *    Sample Output
 *    2^? mod 2 = 1
 *    2^4 mod 5 = 1
 *
 *        Version:  1.0
 *        Created:  04/13/2014 01:14:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(){
	int n,i,s;
	while(scanf("%d",&n)!=EOF){
		if(n%2==0||n==1){
			printf("2^? mod %d = 1\n",n);
			continue;
		}
		for(i=1,s=2;;i++){
			s*=2;
			if(s==n+1)
				break;
			if(s>=n)
				s%=n;
		}
		printf("2^%d mod %d = 1\n",i+1,n);
	}
	return 0;
}
