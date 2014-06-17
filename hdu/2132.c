/*
 * =====================================================================================
 *
 *       Filename:  2132.c
 *
 *    Description:  
 *    Problem Description
 *    We once did a lot of recursional problem . I think some of them is easy for you and some if hard for you.
 *    Now there is a very easy problem . I think you can AC it.
 *    We can define sum(n) as follow:
 *    if i can be divided exactly by 3 sum(i) = sum(i-1) + i*i*i;else sum(i) = sum(i-1) + i;
 *    Is it very easy ? Please begin to program to AC it..-_-
 *    Input
 *    The input file contains multilple cases.
 *    Every cases contain only ont line, every line contains a integer n (n<=100000).
 *    when n is a negative indicate the end of file.
 *    Output
 *    output the result sum(n).
 *    Sample Input
 *    1
 *    2
 *    3
 *    -1
 *    Sample Output
 *    1
 *    3
 *    30
 *
 *        Created:  06/13/2014 13:47:29
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	__int64 n,i,sum[100002];
	for(i=1,sum[0]=0;i<=100002;i++){
		if(i%3)
			sum[i]=sum[i-1]+i;
		else
			sum[i]=sum[i-1]+i*i*i;
	}
	while(scanf("%I64d",&n)!=EOF){
		if(n<0)
			break;
		printf("%I64d\n",sum[n]);
	}
	return 0;
}
