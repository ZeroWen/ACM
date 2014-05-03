/*
 * =====================================================================================
 *
 *       Filename:  1266.c
 *
 *    Description:  
 *    Specially, I give my best regards to all freshmen! You are the future of HDU ACM! And now, I must tell you that ACM problems are always not so easy, but, except this one... Ha-Ha!
 *    Give you an integer; your task is to output its reverse number. Here, reverse number is defined as follows:
 *    1. The reverse number of a positive integer ending without 0 is general reverse, for example, reverse (12) = 21;
 *    2. The reverse number of a negative integer is negative, for example, reverse (-12) = -21;
 *    3. The reverse number of an integer ending with 0 is described as example, reverse (1200) = 2100.
 *    Input
 *    Input file contains multiple test cases. There is a positive integer n (n<100) in the first line, which means the number of test cases, and then n 32-bit integers follow.
 *    Output
 *    For each test case, you should output its reverse number, one case per line.
 *    Sample Input
 *    3
 *    12
 *    -12
 *    1200
 *    Sample Output
 *    21
 *    -21
 *    2100
 *
 *        Created:  05/02/2014 11:33:09
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,zero,k;
	char str[100];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%s",str);
			if(str[0]=='-')
				putchar('-');
			for(i=strlen(str)-1,k=zero=0;i>0;i--){
				if(str[strlen(str)-1]=='0')
					while(str[i]=='0'&&k==0){
						zero++;
						i--;
					}
				if(zero)
					k=1;
				putchar(str[i]);
			}
			if(str[0]!='-')
				putchar(str[0]);
			while(zero--)
				putchar('0');
			putchar('\n');
		}
	return 0;
}
