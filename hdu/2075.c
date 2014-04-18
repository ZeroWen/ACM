/*
 * =====================================================================================
 *
 *       Filename:  2075.c
 *
 *    Description:  
 *    Problem Description
 *    正整数A是否能被正整数B整除，不知道为什么xhd会研究这个问题，来帮帮他吧。
 *    Input
 *    输入数据的第一行是一个数据T，表示有T组数据。
 *    每组数据有两个正整数A和B(A,B<10^9)。
 *    Output
 *    对于每组输入数据，输出"YES"表示可以被整除，"NO"表示不能被整除。
 *    Sample Input
 *    2
 *    4 2
 *    5 3
 *    Sample Output
 *    YES
 *    NO
 *
 *        Created:  04/18/2014 15:46:36
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long a,b,t;
	while(scanf("%ld",&t)!=EOF)
		while(t--){
			scanf("%ld%ld",&a,&b);
			printf("%s\n",(a%b)?"NO":"YES");
		}
	return 0;
}
