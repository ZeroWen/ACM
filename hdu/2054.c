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
int main(){
	int i,sign;
	char a[100000],b[100000],c;
	while(1){
		i=0;
		while((c=getchar())!=' ')
			a[i++]=c;
		a[i]='\0';
		i=0;
		while((c=getchar())!='\n')
			b[i++]=c;
		b[i]='\0';
		if(strlen(a)!=strlen(b))
			sign=1;
		else
			for(i=sign=0;a[i]!='\0'&&!sign;i++)
				if(a[i]!=b[i])
					sign=1;
		printf("%s\n",sign?"NO":"YES");
	}
	return 0;
}
