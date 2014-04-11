/*
 * =====================================================================================
 *
 *       Filename:  1108.c
 *
 *    Description:  
 *    Problem Description
 *    给定两个正整数，计算这两个数的最小公倍数。
 *    Input
 *    输入包含多组测试数据，每组只有一行，包括两个不大于1000的正整数.
 *    Output
 *    对于每个测试用例，给出这两个数的最小公倍数，每个实例输出一行。
 *    Sample Input
 *    10 14
 *    Sample Output
 *    70
 *
 *        Version:  1.0
 *        Created:  04/11/2014 21:06:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int foo(int a,int b){
	int t;
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(a!=b){
		t=a-b;
		if(t>b)
			a=t;
		else{
			a=b;
			b=t;
		}
	}
	return a;
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",a*b/foo(a,b));
	return 0;
}
