/*
 * =====================================================================================
 *
 *       Filename:  2520.c
 *
 *    Description:  
 *    Problem Description
 *    lin2144是一只小菜鸟，都是笨鸟先飞，lin2144想来个菜鸟先飞，他从0点出发
 *    一开始的飞行速度为1m/s，每过一个单位时间lin2144的飞行速度比上一个单位时间的飞行速度快2m/s，问n (0 < n < 10^5)个单位时间之后lin2144飞了多远?
 *    Input
 *    输入一个T表示为有几组数据
 *    每组数据输入一个n，表示lin2144飞行的时间.
 *    Output
 *    输出lin2144飞行了多远，因为数字很大，所以对10000取模.
 *    Sample Input
 *    2
 *    1
 *    2
 *    Sample Output
 *    1
 *    4
 *
 *    Created:  07/02/14 18:00:26
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	long n,tmp;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		tmp=n%10000;
		printf("%ld\n",(tmp*tmp)%10000);
	}
	return 0;
}
