/*
 * =====================================================================================
 *
 *       Filename:  2634.c
 *
 *    Description:  
 *    As far as Samuel is concerned,physics is very dull and doing the physics experiment is a waste of time. So Samuel only got a passing score in the experiment this semester. Dealing with the figures that get from the experiment requires a lot of energy and time,and it is not valuable to do it by press the calculator to get answer. So Samuel and his roommates often make up a program to work it out. Can you help Samuel make a program?
 *    The problem is not hard. You only need to figure out the average M of n number(double type x1,x2,x3...xn) (the precision set as 10).
 *    Input
 *    test cases t,each of a test case contains a number n(an integer) and n figures(double type).
 *    Output
 *    Output the average M by “The average M = m.”here m is a number.
 *    Sample Input
 *    1
 *    3 1.0 1.2 1.1
 *    Sample Output
 *    The average M = 1.1000000000.
 *
 *        Created:  05/06/2015 23:43:26
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i;
	double m,tmp;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0,m=0;i<n;++i){
			scanf("%lf",&tmp);
			m+=tmp;
		}
		m/=n;
		printf("The average M = %.10lf.\n",m);
	}
	return 0;
}
