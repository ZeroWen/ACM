/*
 * =====================================================================================
 *
 *       Filename:  2054.c
 *
 *    Description:  
 *    Problem Description
 *    Give you two numbers A and B, if A is equal to B, you should print "YES", or print "NO".
 *    Input
 *    each test case contains two numbers A and B.
 *    Output
 *    for each case, if A is equal to B, you should print "YES", or print "NO".
 *    Sample Input
 *    1 2
 *    2 2
 *    3 3
 *    4 3
 *    Sample Output
 *    NO
 *    YES
 *    YES
 *    NO
 *
 *        Created:  05/04/2014 00:15:08
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define foo(foo); \
	for(i=dot=0,len=strlen(foo);i<len&&!dot;++i) \
		dot=(foo[i]=='.'); \
	if(dot){ \
		for(i=len-1;foo[i]=='0';--i); \
		i-=(foo[i]=='.'); \
		foo[i+1]='\0'; \
	} 

int main(){
    int i,dot,len;
    char a[100000],b[100000];
    while(scanf("%s%s",a,b)!=EOF){
		foo(a);
		foo(b);
        printf("%s\n",strcmp(a,b)?"NO":"YES");
    }
    return 0;
}
