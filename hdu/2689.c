/*
 * =====================================================================================
 *
 *       Filename:  2689.c
 *
 *    Description:  
 *    Problem Description
 *    You want to processe a sequence of n distinct integers by swapping two adjacent sequence elements until the sequence is sorted in ascending order. Then how many times it need.
 *    For example, 1 2 3 5 4, we only need one operation : swap 5 and 4.
 *    Input
 *    The input consists of a number of test cases. Each case consists of two lines: the first line contains a positive integer n (n <= 1000); the next line contains a permutation of the n integers from 1 to n.
 *    Output
 *    For each case, output the minimum times need to sort it in ascending order on a single line.
 *    Sample Input
 *    3
 *    1 2 3
 *    4 
 *    4 3 2 1 
 *    Sample Output
 *    0
 *    6
 *
 *        Created:  04/19/2014 14:21:18
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j,c,a[1000],t;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=c=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]>a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
					c++;
				}
		printf("%d\n",c);
	}
	return 0;
}
