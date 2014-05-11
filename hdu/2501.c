/*
 * =====================================================================================
 *
 *       Filename:  2501.c
 *
 *    Description:  
 *    Problem Description
 *    有一个大小是 2 x n 的网格，现在需要用2种规格的骨牌铺满，骨牌规格分别是 2 x 1 和 2 x 2，请计算一共有多少种铺设的方法。
 *    Input
 *    输入的第一行包含一个正整数T（T<=20），表示一共有 T组数据，接着是T行数据，每行包含一个正整数N（N<=30），表示网格的大小是2行N列。
 *    Output
 *    输出一共有多少种铺设的方法，每组数据的输出占一行。
 *    Sample Input
 *    3
 *    2
 *    8
 *    12
 *    Sample Output
 *    3
 *    171
 *    2731
 *
 *        Created:  05/11/2014 11:04:04
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,i,n,a[30]={1,3};
	for(i=2;i<30;i++)
		a[i]=a[i-1]+a[i-2]*2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",a[n-1]);
	}
	return 0;
}
