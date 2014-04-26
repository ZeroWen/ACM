/*
 * =====================================================================================
 *
 *       Filename:  2478.c
 *
 *    Description:  
 *    Problem Description
 *    Given a string containing only 'A' - 'Z', we could encode it using the following method: 
 *    1. Each sub-string containing k same characters should be encoded to "kX" where "X" is the only character in this sub-string.
 *    2. If the length of the sub-string is 1, '1' should be ignored.
 *    Input
 *    The first line contains an integer N (1 <= N <= 100) which indicates the number of test cases. The next N lines contain N strings. Each string consists of only 'A' - 'Z' and the length is less than 10000.
 *    Output
 *    For each test case, output the encoded string in a line.
 *    Sample Input
 *    2
 *    ABC
 *    ABBCCC
 *    Sample Output
 *    ABC
 *    A2B3C
 *
 *        Created:  04/26/2014 16:55:46
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j;
	char c[10000];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%s",c);
			for(i=0;c[i]!='\0';i++){
				for(j=i;c[j]==c[j+1];j++);
				if(j!=i)
					printf("%d",j-i+1);
				putchar(c[i]);
				i=j;
			}
			putchar('\n');
		}
	return 0;
}
