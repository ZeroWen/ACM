/*
 * =====================================================================================
 *
 *       Filename:  2123.c
 *
 *    Description:  
 *    Problem Description
 *    In this problem you need to make a multiply table of N * N ,just like the sample out. The element in the ith row and jth column should be the product(乘积) of i and j.
 *    Input
 *    The first line of input is an integer C which indicate the number of test cases.
 *    Then C test cases follow.Each test case contains an integer N (1<=N<=9) in a line which mentioned above.
 *    Output
 *    For each test case, print out the multiply table.
 *    Sample Input
 *    2
 *    1
 *    4
 *    Sample Output
 *    1
 *    1 2 3 4
 *    2 4 6 8
 *    3 6 9 12
 *    4 8 12 16
 *    Hint
 *    There is no blank space at the end of each line.
 *
 *        Created:  04/19/2014 09:11:44
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int c,n,i,j;
	while(scanf("%d",&c)!=EOF)
		while(c--){
			scanf("%d",&n);
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					printf("%d%s",(i+1)*(j+1),(j==n-1)?"\n":" ");
		}
	return 0;
}
