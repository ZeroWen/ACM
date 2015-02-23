/*
 * =====================================================================================
 *
 *       Filename:  1019.c
 *
 *    Description:  
 *    The least common multiple (LCM) of a set of positive integers is the smallest positive integer which is divisible by all the numbers in the set. For example, the LCM of 5, 7 and 15 is 105.
 *    Input
 *    Input will consist of multiple problem instances. The first line of the input will contain a single integer indicating the number of problem instances. Each instance will consist of a single line of the form m n1 n2 n3 ... nm where m is the number of integers in the set and n1 ... nm are the integers. All integers will be positive and lie within the range of a 32-bit integer.
 *    Output
 *    For each problem instance, output a single line containing the corresponding LCM. All results will lie in the range of a 32-bit integer.
 *    Sample Input
 *    2
 *    3 5 7 15
 *    6 4 10296 936 1287 792 1
 *    Sample Output
 *    105
 *    10296
 *
 *        Created:  02/23/2015 13:40:46
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
long gcd(long a,long b){
	long t,ta=(a<b)?a:b,tb;
	tb=(ta==a)?b:a;
	while(tb){
		t=ta%tb;
		ta=tb;
		tb=t;
	}
	return ta;
}
int main(){
	int m,n,i;
	long a,b;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		for(i=0,a=1;i<n;++i){
			scanf("%ld",&b);
			a*=b/gcd(a,b);
		}
		printf("%ld\n",a);
	}
	return 0;
}
