/*
 * =====================================================================================
 *
 *       Filename:  1259.c
 *
 *    Description:  
 *    Joe手上有7张卡片,每张卡片上有一个大写字母,分别是Z,J,U,T,A,C,M.现在他开始表演魔术,每次只交换其中的两张卡片.等表演结束后,请你指出含有字母J的那张卡片.
 *    Input
 *    第一行正整数N(1<=N<=1000)表示其后有N组测试数据.
 *    每组测试数据的第一行整数M(0<=M<=1000)表示M次交换操作;第二行有M对整数<x,y>表示交换自上而下,从1开始编号的第x和第y张卡片.开始的时候,自上而下7张卡片为ZJUTACM,即J卡片的位置是2.
 *    Output
 *    对于每组测试数据,输出J卡片的位置.
 *    Sample Input
 *    2
 *    2
 *    1 6 5 3
 *    1
 *    1 2
 *    Sample Output
 *    2
 *    1
 *
 *        Created:  05/14/2015 23:44:40
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,p,ta,tb;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		p=2;
		for(i=0;i<m;++i){
			scanf("%d%d",&ta,&tb);
			if(ta==p)
				p=tb;
			else if(tb==p)
				p=ta;
		}
		printf("%d\n",p);
	}
	return 0;
}
