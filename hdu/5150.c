/*
 * =====================================================================================
 *
 *       Filename:  5150.c
 *
 *    Description:  
 *    We call a positive number X P-number if there is not a positive number that is less than X and the greatest common divisor of these two numbers is bigger than 1.
 *    Now you are given a sequence of integers. You task is to calculate the sum of P-numbers of the sequence.
 *    Input
 *    There are several test cases.
 *    In each test case:
 *    The first line contains a integer N(1≤N≤1000). The second line contains N integers. Each integer is between 1 and 1000.
 *    Output
 *    For each test case, output the sum of P-numbers of the sequence.
 *    Sample Input
 *    3
 *    5
 *    6
 *    7
 *    1
 *    10
 *    Sample Output
 *    12
 *    0
 *
 *        Created:  03/15/2015 22:20:07
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int is_prime(int n){
	int i;
	for(i=2;i*i<=n;++i)
		if(n%i==0)
			return 0;
	return 1;
}
int main(){
	int n,i,j,k,tmp,prime[170]={1,2};
	long sum;
	for(i=3,j=2;i<998;++i)
		if(is_prime(i))
			prime[j++]=i;
	while(scanf("%d",&n)!=EOF){
		for(i=0,sum=0;i<n;++i){
			scanf("%d",&tmp);
			for(k=0;k<j;++k)
				if(tmp==prime[k]){
					sum+=tmp;
					break;
				}
		}
		printf("%ld\n",sum);
	}
	return 0;
}
