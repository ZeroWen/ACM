/*
 * =====================================================================================
 *
 *       Filename:  2035.c
 *
 *    Description:  
 *    Problem Description
 *    求A^B的最后三位数表示的整数。
 *    说明：A^B的含义是“A的B次方”
 *    Input
 *    输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），如果A=0, B=0，则表示输入数据的结束，不做处理。
 *    Output
 *    对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。
 *    Sample Input
 *    2 3
 *    12 6
 *    6789 10000
 *    0 0
 *    Sample Output
 *    8
 *    984
 *    1
 *
 *        Created:  04/18/2014 15:13:53
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,c,i;
	while(scanf("%d%d",&a,&b)!=EOF&&(a!=0&&b!=0)){
		for(i=0,c=1;i<b;i++)
			c=c*a%1000;
		printf("%d\n",c);
	}
}
