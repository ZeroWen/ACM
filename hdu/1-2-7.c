/*
 * =====================================================================================
 *
 *       Filename:  1-2-7.c
 *
 *    Description:  
 *    Problem Description
 *    Since all we know the ASCII code, your job is simple: input numbers and output corresponding messages.
 *    Input
 *    The first line contains one integer T (1<=T<=1000).
 *    The input will contain T positive integers separated by whitespaces (spaces, newlines, TABs).
 *    The integers will be no less than 32.
 *
 *    Output
 *    Output the corresponding message in just one line.
 *    Warning: no extra characters are allowed.
 *
 *    Sample Input
 *    13
 *    72 101 108 108 111 44
 *    32 119 111 114 108 100 33
 *
 *    Sample Output
 *    Hello, world!
 *
 *        Version:  1.0
 *        Created:  04/02/2014 21:56:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,t;
	char str[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		str[i]=t;
	}
	printf("%s",str);
	return 0;
}

/*!!!!
 * NOTE:Remember this!
 * Output the corresponding message in just one line.
 * 
 * !!ONE LINE!!
 * /


/*
#include <stdio.h>
int main(){
	int n,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		printf("%c",t);
        }
	return 0;
}
 */
/*
#include <stdio.h>
int main(){
	int n,i,t;
	char str[1000];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&t);
			str[i]=t;
		}
		printf("%s",str);
	}
	return 0;
}
 */

