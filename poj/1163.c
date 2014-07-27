/*
 * =====================================================================================
 *
 *       Filename:  1163.c
 *
 *    Description:  
 *            7
 *          3   8
 *        8   1   0
 *      2   7   4   4
 *    4   5   2   6   5
 *    (Figure 1)
 *    Figure 1 shows a number triangle. Write a program that calculates the highest sum of numbers passed on a route that starts at the top and ends somewhere on the base. Each step can go either diagonally down to the left or diagonally down to the right. 
 *    Input
 *    Your program is to read from standard input. The first line contains one integer N: the number of rows in the triangle. The following N lines describe the data of the triangle. The number of rows in the triangle is > 1 but <= 100. The numbers in the triangle, all integers, are between 0 and 99.
 *    Output
 *    Your program is to write to standard output. The highest sum is written as an integer.
 *    Sample Input
 *    5
 *    7
 *    3 8
 *    8 1 0 
 *    2 7 4 4
 *    4 5 2 6 5
 *    Sample Output
 *    30
 *
 *    Created:  07/27/2014 23:48:41
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define N 102
#define max(a,b) ((a)>(b)?(a):(b))
int a[N][N],dp[N][N];
int main(){
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			dp[n-1][i]=a[n-1][i];
		for(i=n-2;i>=0;i--)
			for(j=0;j<=i;j++)
				dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
		printf("%d\n",dp[0][0]);
	}
	return 0;
}
