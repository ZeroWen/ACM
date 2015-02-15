/*
 * =====================================================================================
 *
 *       Filename:  2136.c
 *
 *    Description:  
 *    Problem Description
 *    Everybody knows any number can be combined by the prime number.
 *    Now, your task is telling me what position of the largest prime factor.
 *    The position of prime 2 is 1, prime 3 is 2, and prime 5 is 3, etc.
 *    Specially, LPF(1) = 0.
 *
 *    Input
 *    Each line will contain one integer n(0 < n < 1000000).
 *    Output
 *    Output the LPF(n).
 *
 *    Sample Input
 *    1
 *    2
 *    3
 *    4
 *    5
 *    Sample Output
 *    0
 *    1
 *    2
 *    1
 *    3
 *
 *        Created:  02/15/2015 00:20:55
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAX 1000000
int a[MAX]={0};
int main(){
	int n,i,j,k=1;
	for(i=2;i<MAX;i++){
		if(!a[i]){
			a[i]=k++;
			for(j=i+i;j<MAX;j+=i)
				a[j]=a[i];
		}
	}
	while(~scanf("%d",&n))
		printf("%d\n",a[n]);
	return 0;
}
