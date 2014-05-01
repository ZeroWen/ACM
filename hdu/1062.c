/*
 * =====================================================================================
 *
 *       Filename:  1062.c
 *
 *    Description:  
 *    Problem Description
 *    Ignatius likes to write words in reverse way. Given a single line of text which is written by Ignatius, you should reverse all the words and then output them.
 *    Input
 *    The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
 *    Each test case contains a single line with several words. There will be at most 1000 characters in a line.
 *    Output
 *    For each test case, you should output the text which is processed.
 *    Sample Input
 *    3
 *    olleh !dlrow
 *    m'I morf .udh
 *    I ekil .mca
 *    Sample Output
 *    hello world!
 *    I'm from hdu.
 *    I like acm.
 *    Hint
 *    Remember to use getchar() to read '\n' after the interger T, then you may use gets() to read a line and process it.
 *
 *        Created:  05/02/2014 02:39:10
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j;
	char s[1000],w[100];
	while(scanf("%d",&n)!=EOF){
		getchar();
		while(n--){
			gets(s);
			for(i=0;i<strlen(s);i++){
				for(j=0;s[i]!=' '&&s[i]!='\0';)
					w[j++]=s[i++];
				if(j)
					for(j--;j>=0;j--)
						putchar(w[j]);
				if(s[i]==' ')
					putchar(' ');
			}
			putchar('\n');
		}
	}
	return 0;
}
