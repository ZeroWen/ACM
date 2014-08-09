/*
 * =====================================================================================
 *
 *       Filename:  4137.c
 *
 *    Description:  
 *    Problem Description
 *    Yet another sorting problem! In this one, you’re given a sequence S of N distinct integers and are asked to sort it with minimum cost using only one operation:
 *    The Manhattan swap!
 *    Let Si and Sj be two elements of the sequence at positions i and j respectively, applying the Manhattan swap operation to Si and Sj swaps both elements with a cost of |i-j|. For example, given the sequence {9,5,3}, we can sort the sequence with a single Manhattan swap operation by swapping the first and last elements for a total cost of 2 (absolute difference between positions of 9 and 3).
 *    Input
 *    The first line of input contains an integer T, the number of test cases. Each test case consists of 2 lines. The first line consists of a single integer (1 <= N <= 30), the length of the sequence S. The second line contains N space separated integers representing the elements of S. All sequence elements are distinct and fit in 32 bit signed integer.
 *    Output
 *    For each test case, output one line containing a single integer, the minimum cost of sorting the sequence using only the Manhattan swap operation.
 *    Sample Input
 *    2
 *    3
 *    9 5 3
 *    6
 *    6 5 4 3 2 1
 *    Sample Output
 *    Case #1: 2
 *    Case #2: 9
 *
 *    Created:  08/09/2014 14:56:35
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
	int t,n,i,j,k,tmp,res,a[30],b[30];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			b[j]=a[j];
		}
		for(j=0;j<n;j++)
			for(k=n-1;k>j;k--)
				if(a[k]<a[k-1]){
					tmp=a[k];
					a[k]=a[k-1];
					a[k-1]=tmp;
				}
		res=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				if(a[j]==b[k]){
					res+=abs(j-k);
					break;
				}
		printf("Case #%d: %d\n",i+1,res/2);
	}
	return 0;
}
