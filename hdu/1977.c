/*
 * =====================================================================================
 *
 *       Filename:  1977.c
 *
 *    Description:  
 *    Problem Description
 *    Consecutive sum come again. Are you ready? Go ~~
 *    1    = 0 + 1
 *    2+3+4    = 1 + 8
 *    5+6+7+8+9  = 8 + 27
 *    …
 *    You can see the consecutive sum can be representing like that. The nth line will have 2*n+1 consecutive numbers on the left, the first number on the right equal with the second number in last line, and the sum of left numbers equal with two number’s sum on the right.
 *    Your task is that tell me the right numbers in the nth line.
 *    Input
 *    The first integer is T, and T lines will follow.
 *    Each line will contain an integer N (0 <= N <= 2100000).
 *    Output
 *    For each case, output the right numbers in the Nth line.
 *    All answer in the range of signed 64-bits integer.
 *    Sample Input
 *    3
 *    0
 *    1
 *    2
 *    Sample Output
 *    0 1
 *    1 8
 *    8 27
 *
 *        Created:  04/16/2014 13:25:21
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	__int64 n;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%I64d",&n);
			printf("%I64d %I64d\n",n*n*n,(n+1)*(n+1)*(n+1));
		}
	return 0;
}
