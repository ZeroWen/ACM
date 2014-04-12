/*
 * =====================================================================================
 *
 *       Filename:  2016.c
 *
 *    Description:  
 *    Problem Description
 *    输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
 *    Input
 *    输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。
 *    Output
 *    对于每组输入数据，输出交换后的数列，每组输出占一行。
 *    Sample Input
 *    4 2 1 3 4
 *    5 5 4 3 2 1
 *    0
 *    Sample Output
 *    1 2 3 4
 *    1 4 3 2 5
 *
 *        Version:  1.0
 *        Created:  04/13/2014 00:06:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,t,a[100];
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=m=0;i<n;i++)
			if(a[i]<a[m])
				m=i;
		t=a[0];
		a[0]=a[m];
		a[m]=t;
		for(i=0;i<n;i++)
			printf("%d%s",a[i],(i==n-1)?"\n":" ");
	}
	return 0;
}
