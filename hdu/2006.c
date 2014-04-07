/*
 * =====================================================================================
 *
 *       Filename:  2006.c
 *
 *    Description:  
 *    Problem Description
 *    给你n个整数，求他们中所有奇数的乘积。
 *
 *    Input
 *    输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。
 *
 *    Output
 *    输出每组数中的所有奇数的乘积，对于测试实例，输出一行。
 *
 *    Sample Input
 *    3 1 2 3
 *    4 2 3 4 5
 *
 *    Sample Output
 *    3
 *    15
 *
 *        Version:  1.0
 *        Created:  04/07/2014 23:36:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,s;
	while(scanf("%d",&n)!=EOF){
		s=1;
		while(n--){
			scanf("%d",&m);
			if(m%2)
				s*=m;
		}
		printf("%d\n",s);		
	}
	return 0;
}
