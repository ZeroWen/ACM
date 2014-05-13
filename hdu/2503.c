/*
 * =====================================================================================
 *
 *       Filename:  2503.c
 *
 *    Description:  
 *    Problem Description
 *    给你2个分数，求他们的和，并要求和为最简形式。
 *    Input
 *    输入首先包含一个正整数T（T<=1000），表示有T组测试数据，然后是T行数据，每行包含四个正整数a,b,c,d（0<a,b,c,d<1000），表示两个分数a/b 和 c/d。
 *    Output
 *    对于每组测试数据，输出两个整数e和f，表示a/b + c/d的最简化结果是e/f，每组输出占一行。
 *    Sample Input
 *    2
 *    1 2 1 3
 *    4 3 2 3
 *    Sample Output
 *    5 6
 *    2 1
 *
 *        Created:  05/13/2014 16:47:11
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,a,b,c,d,e,f,t1,t2;
	while(scanf("%d",&t)!=EOF)
		while(t--){	
			scanf("%d%d%d%d",&a,&b,&c,&d);
			t1=e=a*d+b*c;
			t2=f=b*d;
			while(t1!=t2)
				if(t1>t2)
					t1-=t2;
				else if(t1<t2)
					t2-=t1;
			printf("%d %d\n",e/t1,f/t1);
		}
	return 0;
}
