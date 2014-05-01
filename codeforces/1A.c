/*
 * =====================================================================================
 *
 *       Filename:  1A.c
 *
 *    Description:  
 *    A. Theatre Square
 *    Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.
 *    What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
 *    Input
 *    The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 10^9).
 *    Output
 *    Write the needed number of flagstones.
 *    Sample test(s)
 *    input
 *    6 6 4
 *    output
 *    4
 *
 *        Created:  05/01/2014 22:39:41
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long long n,m,a,b,c;
	while(scanf("%lld%lld%lld",&n,&m,&a)!=EOF){
		b=n/a;
		c=m/a;
		if(n%a)
			b++;
		if(m%a)
			c++;
		printf("%lld\n",b*c);
	}
	return 0;
}
