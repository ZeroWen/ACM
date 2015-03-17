/*
 * =====================================================================================
 *
 *       Filename:  5166.c
 *
 *    Description:  
 *    There is a permutation without two numbers in it, and now you know what numbers the permutation has. Please find the two numbers it lose.
 *    Input
 *    There is a number T shows there are T test cases below. (T≤10)
 *    For each test case , the first line contains a integers n , which means the number of numbers the permutation has. In following a line , there are n distinct postive integers.(1≤n≤1,000)
 *    Output
 *    For each case output two numbers , small number first.
 *    Sample Input
 *    2
 *    3
 *    3 4 5
 *    1
 *    1
 *    Sample Output
 *    1 2
 *    2 3
 *
 *        Created:  03/17/2015 23:16:08
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int t,i,n,tmp,a[1010],b[20];
	scanf("%d",&t);
	while(t--){
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&tmp);
			a[tmp]++;
		}
		for(i=1,tmp=0;i<n+3;i++)
			if(!a[i])
				b[tmp++]=i;
		for(i=0;i<tmp;i++)
			printf("%d%s",b[i],(i==tmp-1)?"\n":" ");
	}
	return 0;
}
