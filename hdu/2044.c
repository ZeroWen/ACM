/*
 * =====================================================================================
 *
 *       Filename:  2044.c
 *
 *    Description:  
 *    Problem Description
 *    有一只经过训练的蜜蜂只能爬向右侧相邻的蜂房，不能反向爬行。请编程计算蜜蜂从蜂房a爬到蜂房b的可能路线数。
 *    其中，蜂房的结构如下所示。
 *    Input
 *    输入数据的第一行是一个整数N,表示测试实例的个数，然后是N 行数据，每行包含两个整数a和b(0<a<b<50)。
 *    Output
 *    对于每个测试实例，请输出蜜蜂从蜂房a爬到蜂房b的可能路线数，每个实例的输出占一行。
 *    Sample Input
 *    2
 *    1 2
 *    3 6
 *    Sample Output
 *    1
 *    3
 *
 *    Created:  07/06/14 00:33:00
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,a,b,i,tmp;
	double r[51];
	for(r[0]=r[1]=1,i=2;i<51;i++)
		r[i]=r[i-1]+r[i-2];
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		printf("%.0lf\n",r[b-a]);
	}
	return 0;
}
/*
 * 1 2 1
 * 1 3 2
 * 1 4 3
 * 1 5 5
 * 3 6 3
 * 2 3 1
 * 2 4 2
 * 1 1
 * 2 2
 * 3 3
 * 4 5
 * 5 8
 * Fibonacci
 */
