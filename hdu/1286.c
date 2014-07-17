/*
 * =====================================================================================
 *
 *       Filename:  1286.c
 *
 *    Description:  
 *    Problem Description
 *    新年快到了，“猪头帮协会”准备搞一个聚会，已经知道现有会员N人，把会员从1到N编号，其中会长的号码是N号，凡是和会长是老朋友的，那么该会员的号码肯定和N有大于1的公约数，否则都是新朋友，现在会长想知道究竟有几个新朋友？请你编程序帮会长计算出来。
 *    Input
 *    第一行是测试数据的组数CN（Case number，1<CN<10000），接着有CN行正整数N（1<n<32768），表示会员人数。
 *    Output
 *    对于每一个N，输出一行新朋友的人数，这样共有CN行输出。
 *    Sample Input
 *    2
 *    25608
 *    24027
 *    Sample Output
 *    7680
 *    16016
 *
 *    Created:  07/06/14 19:43:12
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int cn,n,i,j,k,r,a[15000];
	scanf("%d",&cn);
	while(cn--){
		scanf("%d",&n);
		for(i=2,j=0;i<n/2+1;i++)
			if(n%i==0)
				a[j++]=i;
		for(i=2,r=0;i<n;i++)
			for(k=0;k<j;k++)
				if(i%a[k]==0){
					++r;
					break;
				}
		printf("%d\n",n-r-1);
	}
	return 0;
}
