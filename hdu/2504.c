/*
 * =====================================================================================
 *
 *       Filename:  2504.c
 *
 *    Description:  
 *    Problem Description
 *    有三个正整数a,b,c(0<a,b,c<10^6)，其中c不等于b。若a和c的最大公约数为b，现已知a和b，求满足条件的最小的c。
 *    Input
 *    第一行输入一个n，表示有n组测试数据，接下来的n行，每行输入两个正整数a,b。
 *    Output
 *    输出对应的c，每组测试数据占一行。
 *    Sample Input
 *    2
 *    6 2
 *    12 4
 *    Sample Output
 *    4
 *    8
 *
 *        Created:  05/13/2014 17:07:12
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
long foo(long a,long b){
	return b==0?a:foo(b,a%b);
}
int main(){
	long t,a,b,c;
	scanf("%ld",&t);
	while(t--){
		scanf("%ld%ld",&a,&b);
		for(c=b;foo(b,c)!=b||foo(a,c)!=b||c==b;c+=b);
		printf("%ld\n",c);
	}
	return 0;
}
