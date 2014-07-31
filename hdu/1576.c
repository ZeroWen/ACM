/*
 * =====================================================================================
 *
 *       Filename:  1576.c
 *
 *    Description:  
 *    Problem Description
 *    要求(A/B)%9973，但由于A很大，我们只给出n(n=A%9973)(我们给定的A必能被B整除，且gcd(B,9973) = 1)。
 *    Input
 *    数据的第一行是一个T，表示有T组数据。
 *    每组数据有两个数n(0 <= n < 9973)和B(1 <= B <= 10^9)。
 *    Output
 *    对应每组数据输出(A/B)%9973。
 *    Sample Input
 *    2
 *    1000 53
 *    87 123456789
 *    Sample Output
 *    7922
 *    6060
 *
 *    Created:  07/25/2014 12:23:40
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	long long n;
	long b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%ld",&n,&b);
		b%=9973;
		while(n%b)
			n+=9973;
		printf("%lld\n",(n/b)%9973);
	}
	return 0;
}
