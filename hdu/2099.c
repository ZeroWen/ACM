/*
 * =====================================================================================
 *
 *       Filename:  2099.c
 *
 *    Description:  
 *    Problem Description
 *    一个整数，只知道前几位，不知道末二位，被另一个整数除尽了，那么该数的末二位该是什么呢？
 *    Input
 *    输入数据有若干组，每组数据包含二个整数a，b（0<a<10000, 10<b<100），若遇到0 0则处理结束。
 *    Output
 *    对应每组数据，将满足条件的所有尾数在一行内输出，格式见样本输出。同组数据的输出，其每个尾数之间空一格，行末没有空格。
 *    Sample Input
 *    200 40
 *    1992 95
 *    0 0
 *    Sample Output
 *    00 40 80
 *    15
 *
 *        Created:  06/18/2014 14:42:21
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,i,j,r[100];
	while(scanf("%d%d",&a,&b)!=EOF){
		if(!a&&!b)
			break;
		a*=100;
		for(i=j=0;i<100;i++)
			if((i+a)%b==0)
				r[j++]=i;
		for(i=0;i<j;i++)
			printf("%02d%s",r[i],(i==j-1)?"\n":" ");
	}
	return 0;
}
