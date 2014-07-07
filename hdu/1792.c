/*
 * =====================================================================================
 *
 *       Filename:  1792.c
 *
 *    Description:  
 *
 *    Problem Description
 *    Now given two kinds of coins A and B,which satisfy that GCD(A,B)=1.Here you can assume that there are enough coins for both kinds.Please calculate the maximal value that you cannot pay and the total number that you cannot pay.
 *    Input
 *    The input will consist of a series of pairs of integers A and B, separated by a space, one pair of integers per line. 
 *    Output
 *    For each pair of input integers A and B you should output the the maximal value that you cannot pay and the total number that you cannot pay, and with one line of output for each line in input.
 *    Sample Input
 *    2 3
 *    3 4
 *    Sample Output
 *    1 1
 *    5 3
 *
 *    Created:  06/28/14 13:08:14
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,m,t;
	while(scanf("%d%d",&a,&b)!=EOF){
		m=a*b-a-b;
		t=(a-1)*(b-1)/2;
		printf("%d %d\n",m,t);
	}
	return 0;
}
