/*
 * =====================================================================================
 *
 *       Filename:  2835.c
 *
 *    Description:  
 *    In recreational mathematics, a magic square of n-degree is an arrangement of n2 numbers, distinct integers, in a square, such that the n numbers in all rows, all columns, and both diagonals sum to the same constant. For example, the picture below shows a 3-degree magic square using the integers of 1 to 9.
 *    Given a finished number square, we need you to judge whether it is a magic square.`
 *    Input
 *    The input contains multiple test cases.
 *    The first line of each case stands an only integer N (0 < N < 10), indicating the degree of the number square and then N lines follows, with N positive integers in each line to describe the number square. All the numbers in the input do not exceed 1000.
 *    A case with N = 0 denotes the end of input, which should not be processed.
 *    Output
 *    For each test case, print "Yes" if it's a magic square in a single line, otherwise print "No".
 *    Sample Input
 *    2
 *    1 2
 *    3 4
 *    2
 *    4 4
 *    4 4
 *    3
 *    8 1 6
 *    3 5 7
 *    4 9 2
 *    4
 *    16 9 6 3
 *    5 4 15 10
 *    11 14 1 8
 *    2 7 12 13
 *    0
 *    Sample Output
 *    No
 *    No
 *    Yes
 *    Yes
 *
 *        Created:  05/23/2014 14:35:30
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j,k,l,a[9][9],b,c,sign;
	while(scanf("%d",&n),n){
		sign=1;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				for(k=0;k<=i;k++)
					for(l=0;l<j;l++)
						if(a[k][l]==a[i][j])
							sign=0;
			}
		for(j=b=0;j<n;j++)
			b+=a[0][j];
		for(i=1;i<n;i++){
			c=0;
			for(j=0;j<n;j++)
				c+=a[i][j];
			if(c!=b){
				sign=0;
				break;
			}
		}
		for(i=c=0;sign&&i<n;i++)
			c+=a[i][i];
		if(c!=b)
			sign=0;
		for(i=c=0;sign&&i<n;i++)
			c+=a[i][n-1-i];
		if(c!=b)
			sign=0;
		printf("%s\n",sign?"Yes":"No");
	}
	return 0;
}
