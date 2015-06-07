/*
 * =====================================================================================
 *
 *       Filename:  5264.c
 *
 *    Description:  
 *    Pog has lots of strings. And he always mixes two equal-length strings. For example, there are two strings: "abcd" and "efgh". After mixing, a new string "aebfcgdh" is coming.
 *    However, szh thinks it is boring, so he reverses the second string, like changing "efgh" to "hgfe". Then mix them as usual, resulting in "ahbgcfde".
 *    Now, here comes a problem. Pog is given a string after mixing by szh, but he wants to find the original two strings. 
 *    Hint : In this question, it needs a linefeed at the end of line at hack time.
 *    Input
 *    The first line has an integer, T(1≤T≤100), indicating the number of cases.
 *    Then follows T lines. Every lines has a string S, whose length is even and not more than 100, and only consists of lower-case characters('a'~'z').
 *    Output
 *    For each cases, please output two lines, indicating two original strings.
 *    Sample Input
 *    1
 *    aabbca
 *    Sample Output
 *    abc
 *    aba
 *    For example, there are two strings: "abcd" and "efgh". After mixing, a new string "aebfcgdh" is coming. 
 *
 *        Created:  06/08/2015 00:34:45
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <cstdio>
#include <cstring>
#include <string>
int main() {
	int t,i,j;
	char str[110],a[55],b[55];
	scanf("%d",&t);
	while (t--) {
		scanf("%s",str);
		int len=strlen(str);
		for (i=j=0;i<len;i+=2,++j) {
			a[j]=str[i];
			b[j]=str[i+1];
		}
		a[j]=b[j]='\0';
		strrev(b);
		printf("%s\n%s\n",a,b);
	}
	return 0;
}
