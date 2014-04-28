/*
 * =====================================================================================
 *
 *       Filename:  3100.c
 *
 *    Description:  
 *    Given positive integers B and N, find an integer A such that AN is as close as possible to B. (The result A is an approximation to the Nth root of B.) Note that AN may be less than, equal to, or greater than B.
 *    Input: The input consists of one or more pairs of values for B and N. Each pair appears on a single line, delimited by a single space. A line specifying the value zero for both B and N marks the end of the input. The value of B will be in the range 1 to 1,000,000 (inclusive), and the value of N will be in the range 1 to 9 (inclusive).
 *    Output: For each pair B and N in the input, output A as defined above on a line by itself.
 *    Example Input:
 *    4 3
 *    5 3
 *    27 3
 *    750 5
 *    1000 5
 *    2000 5
 *    3000 5
 *    1000000 5
 *    0 0
 *    Example Output:
 *    1
 *    2
 *    3
 *    4
 *    4
 *    4
 *    5
 *    16
 *
 *        Created:  04/26/2014 01:54:54
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	double b,n;
	int a;
	while(scanf("%lf%lf",&b,&n)&&(b!=0.0||n!=0.0)){
		a=pow(b,1/n);
		printf("%d\n",a+(((b-pow(a,n))<(pow(a+1,n)-b))?0:1));
	}
	return 0;	
}
