/*
 * =====================================================================================
 *
 *       Filename:  1097.c
 *
 *    Description:  
 *    Problem Description
 *    lcy gives a hard puzzle to feng5166,lwg,JGShining and Ignatius: gave a and b,how to know the a^b.everybody objects to this BT problem,so lcy makes the problem easier than begin.
 *    this puzzle describes that: gave a and b,how to know the a^b's the last digit number.But everybody is too lazy to slove this problem,so they remit to you who is wise.
 *    Input
 *    There are mutiple test cases. Each test cases consists of two numbers a and b(0<a,b<=2^30)
 *    Output
 *    For each test case, you should output the a^b's last digit number.
 *    Sample Input
 *    7 66
 *    8 800
 *    Sample Output
 *    9
 *    6
 *
 *        Created:  05/22/2014 14:51:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long a,b;
	int c;
	while(scanf("%ld%ld",&a,&b)!=EOF){
		b%=4;
		if(!b)
			b=4;
		for(a%=10,c=1;b--;c%=10)
			c*=a;
		printf("%d\n",c);
	}
	return 0;
}
