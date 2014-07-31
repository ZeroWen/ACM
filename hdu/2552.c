/*
 * =====================================================================================
 *
 *       Filename:  2552.c
 *
 *    Description:  
 *    Input
 *    首先输入一个t,表示有t组数据，跟着t行：
 *    输入s, u (s <= 12^3, u <= 2^20 且 s, u, v > 0)
 *    且s,u,v均为实数
 *    Output
 *    输出 v*u-s*u-s*v 的值，为了简单起见，如果是小数，直接取整
 *    比如：答案是1.7 则输出 1
 *    Sample Input
 *    1
 *    1 2
 *
 *    Created:  07/10/14 20:55:25
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	double s,u;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf",&s,&u);
		printf("1\n");
	}
	return 0;
}
