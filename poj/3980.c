/*
 * =====================================================================================
 *
 *       Filename:  3980.c
 *
 *    Description:  
 *    编写一个C函数mod(int n, int m),实现取模运算%
 *    Input
 *    输入包含多行数据
 *    每行数据是两个整数a, b (1 <= a, b <= 32767)
 *    数据以EOF结束
 *    Output
 *    于输入的每一行输出a%b
 *    Sample Input
 *    5 3
 *    100 2
 *    Sample Output
 *    2
 *    0
 *
 *        Created:  03/20/2015 22:53:08
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",a%b);
	return 0;
}
