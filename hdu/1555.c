/*
 * =====================================================================================
 *
 *       Filename:  1555.c
 *
 *    Description:  
 *    Problem Description
 *    8600的手机每天消费1元，每消费K元就可以获赠1元，一开始8600有M元，问最多可以用多少天？
 *    Input
 *    输入包括多个测试实例.每个测试实例包括2个整数M, k，（2 <= k <= M <= 1000).M = 0, k = 0代表输入结束.
 *    Output
 *    对于每个测试实例输出一个整数，表示M元可以用的天数。
 *    Sample Input
 *    2 2
 *    4 3
 *    0 0
 *    Sample Output
 *    3
 *    5
 *
 *        Version:  1.0
 *        Created:  04/13/2014 23:33:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int m,k,s;
	while(scanf("%d%d",&m,&k)!=EOF){
		if(m==0&&k==0)
			break;
		s=0;
		while(m>=k){
			s+=k;
			m-=k-1;
		}
		s+=m;
		printf("%d\n",s);
	}
	return 0;
}
