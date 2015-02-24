/*
 * =====================================================================================
 *
 *       Filename:  1143.c
 *
 *    Description:  
 *    In how many ways can you tile a 3xn rectangle with 2x1 dominoes? Here is a sample tiling of a 3x12 rectangle.
 *    Input
 *    Input consists of several test cases followed by a line containing -1. Each test case is a line containing an integer 0 ≤ n ≤ 30.
 *    Output
 *    For each test case, output one integer number giving the number of possible tilings.
 *    Sample Input
 *    2
 *    8
 *    12
 *    -1
 *    Sample Output
 *    3
 *    153
 *    2131
 *
 *        Created:  02/24/2015 00:51:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,n;
	long a[16]={1,3,11};
	for(i=3;i<16;++i)
		a[i]=4*a[i-1]-a[i-2];
	while(scanf("%d",&n)!=EOF&&n!=-1)
		printf("%ld\n",n%2?0:a[n/2]);
	return 0;
}
//n==0,1
