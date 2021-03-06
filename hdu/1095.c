/*
 * =====================================================================================
 *
 *       Filename:  1095.c
 *
 *    Description:  
 *   Problem Description
 *    Your task is to Calculate a + b.
 *
 *    Input
 *    The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line. 
 *
 *    Output
 *    For each pair of input integers a and b you should output the sum of a and b, and followed by a blank line. 
 *
 *    Sample Input
 *    1 5
 *    10 20
 *
 *    Sample Output
 *    6
 *
 *    30
 *
 *        Version:  1.0
 *        Created:  04/11/2014 23:54:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n\n",a+b);
	return 0;
}
