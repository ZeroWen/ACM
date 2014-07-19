/*
 * =====================================================================================
 *
 *       Filename:  1017.c
 *
 *    Description:  
 *    Problem Description
 *    Given two integers n and m, count the number of pairs of integers (a,b) such that 0 < a < b < n and (a^2+b^2 +m)/(ab) is an integer.
 *    This problem contains multiple test cases!
 *    The first line of a multiple input is an integer N, then a blank line followed by N input blocks. Each input block is in the format indicated in the problem description. There is a blank line between input blocks.
 *    The output format consists of N output blocks. There is a blank line between output blocks.
 *    Input
 *    You will be given a number of cases in the input. Each case is specified by a line containing the integers n and m. The end of input is indicated by a case in which n = m = 0. You may assume that 0 < n <= 100.
 *    Output
 *    For each case, print the case number as well as the number of pairs (a,b) satisfying the given property. Print the output for each case on one line in the format as shown below.
 *    Sample Input
 *    1
 *
 *    10 1
 *    20 3
 *    30 4
 *    0 0
 *    Sample Output
 *    Case 1: 2
 *    Case 2: 4
 *    Case 3: 5
 *
 *        Created:  06/28/14 22:16:04
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,m,a,b,r,c;
	scanf("%d",&t);
	while(t--){
		c=0;
		while(1){
			scanf("%d%d",&n,&m);
			if(!n&&!m){
				if(t)
					printf("\n");
				break;
			}
			for(a=1,r=0;a<n;a++)
				for(b=a+1;b<n;b++)
					if((a*a+b*b+m)%(a*b)==0)
						++r;
			printf("Case %d: %d\n",++c,r);
		}
	}
	return 0;
}

/*
 * 就是一个考格式的题
 * 题目都没说明白
 */
