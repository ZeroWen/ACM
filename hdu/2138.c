/*
 * =====================================================================================
 *
 *       Filename:  2138.c
 *
 *    Description:  
 *    Problem Description
 *    Give you a lot of positive integers, just to find out how many prime numbers there are.
 *    Input
 *    There are a lot of cases. In each case, there is an integer N representing the number of integers to find. Each integer won’t exceed 32-bit signed integer, and each of them won’t be less than 2.
 *    Output
 *    For each case, print the number of prime numbers you have found out.
 *    Sample Input
 *    3
 *    2 3 4
 *    Sample Output
 *    2
 *
 *        Version:  1.0
 *        Created:  04/15/2014 18:36:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int i,j,n,m,p;
	while(scanf("%d",&n)!=EOF){
		p=0;
		while(n--){
			scanf("%d",&m);
			for(i=2,j=1;i<=sqrt(m);i++)
				if(m%i==0){
					j=0;
					break;
				}
			if(j)
				p++;
		}
		printf("%d\n",p);
	}
	return 0;
}
