/*
 * =====================================================================================
 *
 *       Filename:  2561.c
 *
 *    Description:  
 *    Problem Description
 *    求n个整数中倒数第二小的数。
 *    每一个整数都独立看成一个数，比如，有三个数分别是1，1，3，那么，第二小的数就是1。
 *    Input
 *    输入包含多组测试数据。
 *    输入的第一行是一个整数C，表示有C测试数据；
 *    每组测试数据的第一行是一个整数n，表示本组测试数据有n个整数（2<=n<=10），接着一行是 n个整数 (每个数均小于100);
 *    Output
 *    请为每组测试数据输出第二小的整数，每组输出占一行。
 *    Sample Input
 *    2
 *    2
 *    1 2
 *    3
 *    1 1 3
 *    Sample Output
 *    2
 *    1
 *
 *        Created:  04/16/2014 19:54:51
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int c,n,i,a[10],min;
	while(scanf("%d",&c)!=EOF)
		while(c--){
			scanf("%d",&n);
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(i=min=0;i<n;i++)
				if(a[min]>a[i])
					min=i;
			a[min]=100;
			for(i=0,min=a[0];i<n;i++)
				if(min>a[i])
					min=a[i];
			printf("%d\n",min);
		}
	return 0;
}
