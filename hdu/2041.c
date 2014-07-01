/*
 * =====================================================================================
 *
 *       Filename:  2041.c
 *
 *    Description:  
 *    Problem Description
 *    有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
 *    Input
 *    输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数。
 *    Output
 *    对于每个测试实例，请输出不同走法的数量
 *    Sample Input
 *    2
 *    2
 *    3
 *    Sample Output
 *    1
 *    2
 *
 *        Version:  1.0
 *        Created:  04/15/2014 17:57:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,m,n;
	long a[42];;
	for(a[0]=a[1]=1,i=2;i<42;i++)
		a[i]=a[i-1]+a[i-2];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		printf("%ld\n",a[m-1]);
	}
	return 0;
}
/*
 * 2 1
 * 3 2
 * 4 3
 * 5 5
 */
