/*
 * =====================================================================================
 *
 *       Filename:  2674.c
 *
 *    Description:  
 *    Problem Description
 *    Hint : 0! = 1, N! = N*(N-1)!
 *    Input
 *    Each line will contain one integer N(0 <= N<=10^9). Process to end of file.
 *    Output
 *    For each case, output N! mod 2009
 *    Sample Input
 *    4 
 *    5
 *    Sample Output
 *    24
 *    120
 *
 *    Created:  07/03/14 15:07:25
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long n,i,a[41]={1};
	for(i=1;i<41;i++)
		a[i]=a[i-1]*i%2009;
	while(scanf("%ld",&n)!=EOF)
		printf("%ld\n",(n>40)?0:a[n]);
	return 0;
}

//另外，刚好最近在学Python，附上Python版本
/*
while True:
	r=1
	n = long(raw_input())
	if n > 40:
		print 0
	else:
		for i in range( 1 , n + 1 ):
			r*=i;
		print r % 2009
*/
