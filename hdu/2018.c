/*
 * =====================================================================================
 *
 *       Filename:  2018.c
 *
 *    Description:  
 *    Problem Description
 *    有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
 *    Input
 *    输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
 *    n=0表示输入数据的结束，不做处理。
 *    Output
 *    对于每个测试实例，输出在第n年的时候母牛的数量。
 *    每个输出占一行。
 *    Sample Input
 *    2
 *    4
 *    5
 *    0
 *    Sample Output
 *    2
 *    4
 *    6
 *
 *        Version:  1.0
 *        Created:  04/13/2014 00:21:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int a[60],t;
int foo(int n){
	if(n<4)
		return n;
	else if(a[n])
		return a[n];
	else
		return t=foo(n-1)+foo(n-3);
	a[n]=t;
}
int main(){
	int n;
	while(scanf("%d",&n),n){
		printf("%d\n",foo(n));
	}
	return 0;
}
