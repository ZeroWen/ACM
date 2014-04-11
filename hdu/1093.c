/*
 * =====================================================================================
 *
 *       Filename:  1093.c
 *
 *    Description:  
 *    Problem Description
 *    Your task is to calculate the sum of some integers.
 *
 *    Input
 *    Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line. 
 *
 *    Output
 *    For each group of input integers you should output their sum in one line, and with one line of output for each line in input. 
 *
 *    Sample Input
 *    2
 *    4 1 2 3 4
 *    5 1 2 3 4 5
 *
 *    Sample Output
 *    10
 *    15
 *
 *        Version:  1.0
 *        Created:  04/11/2014 23:52:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int m,n,a,s,i,j;
	while(scanf("%d",&m)!=EOF)
		for(j=0;j<m;j++)
			while(scanf("%d",&n)!=EOF){
				for(i=0,s=0;i<n;i++,s+=a)
					scanf("%d",&a);
				printf("%d\n",s);
			}
	return 0;
}
