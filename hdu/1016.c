/*
 * =====================================================================================
 *
 *       Filename:  1016.c
 *
 *    Description:  
 *    A ring is compose of n circles as shown in diagram. Put natural number 1, 2, ..., n into each circle separately, and the sum of numbers in two adjacent circles should be a prime.
 *    Note: the number of first circle should always be 1.
 *    Input
 *    n (0 < n < 20).
 *    Output
 *    The output format is shown as sample below. Each row represents a series of circle numbers in the ring beginning from 1 clockwisely and anticlockwisely. The order of numbers must satisfy the above requirements. Print solutions in lexicographical order.
 *    You are to write a program that completes above process.
 *    Print a blank line after each case.
 *    Sample Input
 *    6
 *    8
 *    Sample Output
 *    Case 1:
 *    1 4 3 2 5 6
 *    1 6 5 2 3 4
 *
 *    Case 2:
 *    1 2 3 8 5 6 7 4
 *    1 2 5 8 3 4 7 6
 *    1 4 7 6 5 8 3 2
 *    1 6 7 4 3 8 5 2
 *
 *        Created:  02/17/2015 14:46:27
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int vis[30]={0},a[30]={1},isp[50];
int is_prime(int n){
	int i;
	for(i=2;i*i<=n;++i)
		if(n%i==0)
			return 0;
	return 1;
}
void dfs(int cur,int n){
	if(cur==n&&isp[a[0]+a[n-1]]){
		int j;
		for(j=0;j<n;++j)
			printf("%d%s",a[j],(j==n-1)?"\n":" ");
	}
	else{
		int i;
		for(i=2;i<=n;++i)
			if(!vis[i]&&isp[i+a[cur-1]]){
				a[cur]=i;
				vis[i]=1;
				dfs(cur+1,n);
				vis[i]=0;
			}
	}
}
int main(){
	int n,i,count=0;
	for(i=2;i<40;++i)
		isp[i]=is_prime(i);
	while(scanf("%d",&n)!=EOF){
		printf("Case %d:\n",++count);
		if(n%2==0)
			dfs(1,n);
		printf("\n");
	}
	return 0;
}
