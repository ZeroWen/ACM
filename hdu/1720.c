/*
 * =====================================================================================
 *
 *       Filename:  1720.c
 *
 *    Description:  
 *    Problem Description
 *    Many classmates said to me that A+B is must needs.
 *    If you can’t AC this problem, you would invite me for night meal. ^_^
 *    Input
 *    Input may contain multiple test cases. Each case contains A and B in one line.
 *    A, B are hexadecimal number.
 *    Input terminates by EOF.
 *    Output
 *    Output A+B in decimal number in one line.
 *    Sample Input
 *    1 9
 *    A B
 *    a b
 *    Sample Output
 *    10
 *    21
 *    21
 *
 *        Created:  05/27/2014 13:43:47
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%x%x",&a,&b)!=EOF)
		printf("%d\n",a+b);
	return 0;
}
