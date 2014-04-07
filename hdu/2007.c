/*
 * =====================================================================================
 *
 *       Filename:  2007.c
 *
 *    Description:  
 *    Problem Description
 *    给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
 *    Input
 *    输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
 *
 *    Output
 *    对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
 *    你可以认为32位整数足以保存结果。
 *
 *    Sample Input
 *    1 3
 *    2 5
 *
 *    Sample Output
 *    4 28
 *    20 152
 *
 *        Version:  1.0
 *        Created:  04/07/2014 23:53:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long m,n,i,t;
	long double x,y;
	while(scanf("%ld%ld",&m,&n)!=EOF){
		x=y=0;
		//考虑m和n的大小关系
		if(m>n){
			t=n;
			n=m;
			m=t;
		}
		for(i=m;i<=n;i++)
			if(i%2)
				y+=i*i*i;
			else
				x+=i*i;
		printf("%.0Lf %.0Lf\n",x,y);
	}
	return 0;
}

/*
 * 要考虑m和n的大小关系
 * what if m>n?
 */
