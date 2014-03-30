/*
 * =====================================================================================
 *
 *       Filename:  1000.c
 *
 *    Description:  
 *    Problem Description
 *    Calculate A + B.
 * 
 * Input
 *    Each line will contain two integers A and B. Process to end of file.
 * 
 * Output
 *    For each case, output A + B in one line.
 *
 * Sample Input
 * 1 1
 * Sample Output
 * 2
 *    
 *
 *        Version:  1.0
 *        Created:  03/30/2014 21:17:03
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
		printf("%d\n",a+b);
	return 0;
}
