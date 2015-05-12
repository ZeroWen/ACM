/*
 * =====================================================================================
 *
 *       Filename:  5210.c
 *
 *    Description:  
 *    WLD likes playing with numbers. One day he is playing with N integers. He wants to delete K integers from them. He likes diversity, so he wants to keep the kinds of different integers as many as possible after the deletion. But he is busy pushing, can you help him?
 *    Input
 *    There are Multiple Cases. (At MOST 100)
 *    For each case:
 *    The first line contains one integer N(0<N≤100).
 *    The second line contains N integers a1,a2,...,aN(1≤ai≤N), denoting the integers WLD plays with.
 *    The third line contains one integer K(0≤K<N).
 *    Output
 *    For each case:
 *    Print one integer. It denotes the maximum of different numbers remain after the deletion.
 *    Sample Input
 *    4
 *    1 3 1 2 
 *    1
 *    Sample Output
 *    3
 *
 *        Created:  05/12/2015 22:36:58
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,k,count,flag,tmp,a[110],b[110],extra;
	while(scanf("%d",&n)!=EOF){
		memset(b,0,sizeof(b));
		extra=0;
		for(i=0,count=0;i<n;++i){
			scanf("%d",&tmp);
			for(j=0,flag=0;j<count&&!flag;++j)
				if(tmp==a[j])
					flag=1;
			if(flag)
				++extra;
			else
				a[count++]=tmp;
		}
		scanf("%d",&k);
		printf("%d\n",(extra-k)>=0?count:(count-(k-extra)));
	}
	return 0;
}
