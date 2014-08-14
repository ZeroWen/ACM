/*
 * =====================================================================================
 *
 *       Filename:  2049.c
 *
 *    Description:  
 *    Problem Description
 *    假设一共有N对新婚夫妇,其中有M个新郎找错了新娘,求发生这种情况一共有多少种可能.
 *    Input
 *    输入数据的第一行是一个整数C,表示测试实例的个数，然后是C行数据，每行包含两个整数N和M(1<M<=N<=20)。
 *    Output
 *    对于每个测试实例，请输出一共有多少种发生这种情况的可能，每个实例的输出占一行。
 *    Sample Input
 *    2
 *    2 2
 *    3 2
 *    Sample Output
 *    1
 *    3
 *
 *    Created:  08/14/2014 14:48:55
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int m,n,c,t,i;
	__int64 key[20]={1,2},res;
	for(i=2;i<20;i++)
		key[i]=(key[i-1]+key[i-2])*(i+1);
	scanf("%d",&c);
	while(c--){
		scanf("%d%d",&n,&m);
		for(i=0,res=1;i<m;i++)
			res*=(n-i);
		for(i=0;i<m;i++)
			res/=(m-i);
		printf("%I64d\n",res*key[m-2]);
	}
	return 0;
}
