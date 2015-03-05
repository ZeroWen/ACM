/*
 * =====================================================================================
 *
 *       Filename:  5104.c
 *
 *    Description:  
 *    Given a number n, please count how many tuple(p1, p2, p3) satisfied that p1<=p2<=p3, p1,p2,p3 are primes and p1 + p2 + p3 = n.
 *    Input
 *    Multiple test cases(less than 100), for each test case, the only line indicates the positive integer $n (n \leq 10000)$.
 *    Output
 *    For each test case, print the number of ways.
 *    Sample Input
 *    3
 *    9
 *    Sample Output
 *    0
 *    2
 *
 *        Created:  02/24/2015 12:04:58
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
	int i,j,k,l,n,prime[1300],a[10001]={0};
	for(i=2,l=0;i<9974;++i)
		if(is_prime(i))
			prime[l++]=i;
	for(i=0;i<l;++i)
		for(j=i;j<l;++j)
			for(k=j;k<l;++k){
				n=prime[i]+prime[j]+prime[k];
				if(n>10000)
					break;
				++a[n];
			}
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",a[n]);
	return 0;
}
