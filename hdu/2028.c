/*
 * =====================================================================================
 *
 *       Filename:  2028.c
 *
 *    Description:  
 *    Problem Description
 *    求n个数的最小公倍数。
 *    Input
 *    输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数。
 *    Output
 *    为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。你可以假设最后的输出是一个32位的整数。
 *    Sample Input
 *    2 4 6
 *    3 2 5 7
 *    Sample Output
 *    12
 *    70
 *
 *        Created:  04/18/2014 14:39:28
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(){
	int n,m,i,j,k;
	while(scanf("%d",&n)!=EOF){
		for(i=0,k=1;i<n;i++){
			scanf("%d",&m);
			for(j=m;j%m!=0||j%k!=0;j++)
				;
			k=j;
		}
		printf("%d\n",k);
	}
	return 0;
}
