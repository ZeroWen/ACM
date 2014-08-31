/*
 * =====================================================================================
 *
 *       Filename:  1999.c
 *
 *    Description:  
 *    Problem Description
 *    s(n)是正整数n的真因子之和，即小于n且整除n的因子和.例如s(12)=1+2+3+4+6=16.如果任何数m，s(m)都不等于n,则称n为不可摸数.
 *    Input
 *    包含多组数据，首先输入T,表示有T组数据.每组数据1行给出n(2<=n<=1000)是整数。
 *    Output
 *    如果n是不可摸数，输出yes，否则输出no
 *    Sample Input
 *    3
 *    2
 *    5
 *    8
 *    Sample Output
 *    yes
 *    yes
 *    no
 *
 *    Created:  08/31/14 20:49:09
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

nclude <stdio.h>
#define N 500000
__int64 a[N];
int sum[1000];
void ints(){
	int i,j,m;
	m=N/2;
	for(i=1;i<m;++i)
		for(j=i+i;j<N;j+=i)
			a[j]+=i;
	for(i=0;i<N;i++)
		if(a[i]<=1000)
			sum[a[i]]=1;
}
int main(){
	int n,t;
	ints();
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%s\n",sum[n]?"no":"yes");
	}
	return 0;
}
