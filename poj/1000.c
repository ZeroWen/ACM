/*
 * =====================================================================================
 *
 *       Filename:  1000.c
 *
 *    Description:  
 * Calculate a+b
 * Input
 * Two integer a,b (0<=a,b<=10)
 * Output
 * Output a+b
 * Sample Input
 * 1 2
 * Sample Output
 * 3
 *    
 *
 *        Created:  03/30/2014 22:35:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",a+b);
	return 0;
}
