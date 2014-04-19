/*
 * =====================================================================================
 *
 *       Filename:  2178.c
 *
 *    Description:  
 *    Problem Description
 *    A有1数m，B来猜.B每猜一次，A就说"太大"，"太小"或"对了" 。 
 *    问B猜n次可以猜到的最大数。 
 *    Input
 *    第1行是整数T,表示有T组数据，下面有T行 
 *    每行一个整数n (1 ≤ n ≤ 30) 
 *    Output
 *    猜n次可以猜到的最大数
 *    Sample Input
 *    2
 *    1
 *    3
 *    Sample Output
 *    1
 *    7
 *
 *        Created:  04/19/2014 14:36:21
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(){
	int t,s,n;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			s=1;
			scanf("%d",&n);
			while(n--)
				s*=2;
			printf("%d\n",s-1);
		}
	return 0;
}
