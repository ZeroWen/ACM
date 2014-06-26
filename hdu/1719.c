/*
 * =====================================================================================
 *
 *       Filename:  1719.c
 *
 *    Description:  
 *    Problem Description
 *    Friend number are defined recursively as follows.
 *    (1) numbers 1 and 2 are friend number;
 *    (2) if a and b are friend numbers, so is ab+a+b;
 *    (3) only the numbers defined in (1) and (2) are friend number.
 *    Now your task is to judge whether an integer is a friend number.
 *    Input
 *    There are several lines in input, each line has a nunnegative integer a, 0<=a<=2^30.
 *    Output
 *    For the number a on each line of the input, if a is a friend number, output “YES!”, otherwise output “NO!”.
 *    Sample Input
 *    3
 *    13121
 *    12131
 *    Sample Output
 *    YES!
 *    YES!
 *    NO!
 *
 *        Created:  06/19/2014 12:55:47
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	__int64 n;
	while(scanf("%I64d",&n)!=EOF){
		if(!n){
			printf("NO!\n");
			continue;
		}
		++n;
		while(1){
			if(n%2==0)
				n/=2;
			else if(n%3==0)
				n/=3;
			else
				break;
		}
		printf("%s\n",(n==1)?"YES!":"NO!");
	}
	return 0;
}

//(2^x)*(3^y)-1
