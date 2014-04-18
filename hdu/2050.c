/*
 * =====================================================================================
 *
 *       Filename:  2050.c
 *
 *    Description:  
 *    Problem Description
 *    我们看到过很多直线分割平面的题目，今天的这个题目稍微有些变化，我们要求的是n条折线分割平面的最大数目。比如，一条折线可以将平面分成两部分，两条折线最多可以将平面分成7部分，具体如下所示。
 *    Input
 *    输入数据的第一行是一个整数C,表示测试实例的个数，然后是C 行数据，每行包含一个整数n(0<n<=10000),表示折线的数量。
 *    Output
 *    对于每个测试实例，请输出平面的最大分割数，每个实例的输出占一行。
 *    Sample Input
 *    2
 *    1
 *    2
 *    Sample Output
 *    2
 *    7
 *
 *        Created:  04/18/2014 15:35:13
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int c,n;
	while(scanf("%d",&c)!=EOF)
		while(c--){
			scanf("%d",&n);
			printf("%d\n",2*n*n-n+1);
		}
	return 0;
}
