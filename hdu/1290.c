/*
 * =====================================================================================
 *
 *       Filename:  1290.c
 *
 *    Description:  
 *    Problem Description
 *    吃蛋糕之前先考大家一个问题：如果校长大人在蛋糕上切了N刀（校长刀法极好，每一刀都是一个绝对的平面），最多可以把这个球形蛋糕切成几块呢？
 *    Input
 *    输入数据包含多个测试实例，每个实例占一行，每行包含一个整数n(1<=n<=1000)，表示切的刀数。
 *    Output
 *    对于每组输入数据，请输出对应的蛋糕块数，每个测试实例输出一行。
 *    Sample Input
 *    1
 *    2
 *    3
 *    Sample Output
 *    2
 *    4
 *    8
 *
 *    Created:  07/14/2014 09:14:20
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i;
	long r;
	while(scanf("%d",&n)!=EOF){
		r=(n*n*n+5*n)/6+1;
		printf("%ld\n",r);
	}
	return 0;
}
