/*
 * =====================================================================================
 *
 *       Filename:  1395.c
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

#include <stdio.h>
int main(){
	long n,x,a;
	int flag;
	while(scanf("%d",&n)!=EOF){
		flag=0;
		if(n%2==0)
			flag=0;
		else
			for(x=1,a=2;x<n;x++)
				if(a%n==1){
					flag=1;
					break;
				}
				else
					a*=2;
		if(flag)
			printf("2^%d mod %d = 1\n",x,n);
		else
			printf("2^? mod %d = 1\n",n);
	}
	return 0;
}
