/*
 * =====================================================================================
 *
 *       Filename:  1701.c
 *
 *    Description:  
 *    Problem Description
 *    There are at least P% and at most Q% students of HDU are ACMers, now I want to know how many students HDU have at least?
 *    Input
 *    The input contains multiple test cases.
 *    The first line has one integer,represent the number of test cases.
 *    The following N lines each line contains two numbers P and Q(P < Q),which accurate up to 2 decimal places.
 *    Output
 *    For each test case, output the minumal number of students in HDU.
 *    Sample Input
 *    1
 *    13.00 14.10
 *    Sample Output
 *    15
 *
 *    Created:  06/28/14 11:11:52
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,t;
	double p,q;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf",&p,&q);
		for(i=1;;i++){
			t=(int)(i*q/100);
			if(i*p/100<t&&i*q/100>t)
				break;
		}
		printf("%d\n",i);
	}
	return 0;
}
