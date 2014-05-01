/*
 * =====================================================================================
 *
 *       Filename:  1151.c
 *
 *    Description:  
 *    For each list of words, output a line with each word reversed without changing the order of the words.
 *    This problem contains multiple test cases!
 *    The first line of a multiple input is an integer N, then a blank line followed by N input blocks. Each input block is in the format indicated in the problem description. There is a blank line between input blocks.
 *    The output format consists of N output blocks. There is a blank line between output blocks.
 *    Input
 *    You will be given a number of test cases. The first line contains a positive integer indicating the number of cases to follow. Each case is given on a line containing a list of words separated by one space, and each word contains only uppercase and lowercase letters.
 *    Output
 *    For each test case, print the output on one line.
 *    Sample Input
 *    1
 *
 *    3
 *    I am happy today
 *    To be or not to be
 *    I want to win the practice contest
 *    Sample Output
 *    I ma yppah yadot
 *    oT eb ro ton ot eb
 *    I tnaw ot niw eht ecitcarp tsetnoc
 *
 *        Created:  04/25/2014 21:56:17
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int m,n,i,j;
	char s[200],w[100];
	while(scanf("%d",&m)!=EOF){
		while(m--){
			scanf("%d",&n);
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
			if(m)
				putchar('\n');
		}
	}
	return 0;
}
