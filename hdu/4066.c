/*
 * =====================================================================================
 *
 *       Filename:  4066.c
 *
 *    Description:  
 *    Problem Description
 *    There is a random sequence L whose element are all random numbers either -1 or 1 with the same possibility. Now we define MAVS, the abbreviate of Maximum Absolute Value Subsequence, to be any (if more than one) subsequences of L whose absolute value is maximum among all subsequences. Given the length of L, your task is to find the expectation of the absolute value of MAVS.
 *    Input
 *    There is only one input file. The first line is the number of test cases T. T positive integers follow, each of which contains one positive number not greater than 1500 denoted the length of L.
 *    Output
 *    For each test case, output the expectation you are required to calculate. Answers are rounded to 6 numbers after the decimal point.(as shown in the sample output)
 *    Sample Input
 *    3
 *    1
 *    5
 *    10
 *    Sample Output
 *    Case 1: 1.000000
 *    Case 2: 2.750000
 *    Case 3: 4.167969
 *
 *        Created:  05/09/2014 17:17:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,n,t,k;
	double a[2000],b[2000]; 
	for(i=k=2,a[1]=1;i<1510;i++)
		if(i%2){
			a[i]=a[i-1]*(2*k-1)/k;
			a[i]/=2;
			k++;
		}
		else
			a[i]=a[i-1];
	for(i=2,b[1]=1;i<1510;i++){
		b[i]=2*b[i-1]+a[i-1];
		b[i]/=2;
	}
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&n);
		printf("Case %d: %.6lf\n",i,b[n]);
	}
	return 0;
}
