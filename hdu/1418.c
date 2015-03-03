/*
 * =====================================================================================
 *
 *       Filename:  1418.c
 *
 *    Description:  
 *    如果平面上有n个点，并且每个点至少有2条曲线段和它相连，就是说，每条曲线都是封闭的，同时，我们规定：
 *    1）所有的曲线段都不相交；
 *    2）但是任意两点之间可以有多条曲线段。
 *    如果我们知道这些线段把平面分割成了m份，你能知道一共有多少条曲线段吗？
 *    Input
 *    输入数据包含n和m，n=0,m=0表示输入的结束，不做处理。
 *    所有输入数据都在32位整数范围内。
 *    Output
 *    输出对应的线段数目。
 *    Sample Input
 *    3 2
 *    0 0
 *    Sample Output
 *    3
 *
 *        Created:  03/02/2015 23:25:17
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */


#include <stdio.h>
int main(){
	long long n,m;
	while(scanf("%lld%lld",&n,&m)!=EOF){
		if(!n&&!m)
			break;
		printf("%lld\n",n-2+m);
	}
	return 0;
}
