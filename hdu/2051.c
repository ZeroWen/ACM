/*
 * =====================================================================================
 *
 *       Filename:  2051.c
 *
 *    Description:  
 *    Problem Description
 *    Give you a number on base ten,you should output it on base two.(0 < n < 1000)
 *    Input
 *    For each case there is a postive number n on base ten, end of file.
 *    Output
 *    For each case output a number on base two.
 *    Sample Input
 *    1
 *    2
 *    3
 *    Sample Output
 *    1
 *    10
 *    11
 *
 *        Version:  1.0
 *        Created:  04/15/2014 18:17:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	int n,a[10],i,j;
	while(scanf("%d",&n)!=EOF){
		for(i=0;n;i++,n/=2)
			a[i]=n%2;
		for(j=i-1;j>=0;j--)
			printf("%d%s",a[j],!j?"\n":"");
	}
	return 0;
}
