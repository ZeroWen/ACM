/*
 * =====================================================================================
 *
 *       Filename:  3978.c
 *
 *    Description:  
 *    A pretty straight forward task, calculate the number of primes between 2 integers.
 *    Given 2 integers A ≤ B < 105 what’s the number of primes in range from A to B inclusive.
 *    Note: A prime number is a positive integer greater than 1 and is divisible by 1 and itself only. For N to be prime it is enough to test the divisibility of numbers less than or equal to square root of N.
 *    Input
 *    As many as 1000 lines, each line contains 2 integers A and B separated by a space. Input is terminated when A = B = -1 (Do not process this line).
 *    Output
 *    For every line in input – except for the last line where A = B = -1 - print the number of prime numbers between A and B inclusive.
 *    Sample Input
 *    0 9999
 *    1 5
 *    -1 -1
 *    Sample Output
 *    1229
 *    3
 *
 *        Created:  03/31/2015 18:04:46
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100000
long a,b,i,j,prime[10000];
int c=0,count,*vis;
int main(){
	vis=(int *)malloc(sizeof(int)*(MAX+10));
	memset(vis,0,MAX+10);
	for(i=2;i<=MAX;++i)
		if(!vis[i]){
			prime[c++]=i;
			for(j=i*i;j<=MAX;j+=i)
				vis[j]=1;
		}
	while(scanf("%ld%ld",&a,&b)!=EOF){
		if(a==-1&&b==-1)
			break;
		for(i=count=0;prime[i]<=b;++i){
			if(prime[i]>=a&&prime[i]<=b)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
