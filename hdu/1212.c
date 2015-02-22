/*
 * =====================================================================================
 *
 *       Filename:  1212.c
 *
 *    Description:  
 *    Problem Description
 *    As we know, Big Number is always troublesome. But it's really important in our ACM. And today, your task is to write a program to calculate A mod B.
 *    To make the problem easier, I promise that B will be smaller than 100000.
 *    Is it too hard? No, I work it out in 10 minutes, and my program contains less than 25 lines.
 *    Input
 *    The input contains several test cases. Each test case consists of two positive integers A and B. The length of A will not exceed 1000, and B will be smaller than 100000. Process to the end of file.
 *    Output
 *    For each test case, you have to ouput the result of A mod B.
 *    Sample Input
 *    2 3
 *    12 7
 *    152455856554521 3250
 *    Sample Output
 *    2
 *    5
 *    1521
 *
 *    Created:  07/08/14 00:42:52
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char str[1002];
	long a,b;
	while(scanf("%s%ld",str,&b)!=EOF){
		int i,len=strlen(str);
		for(i=0,a=0;i<len;++i){
			a=a*10+str[i]-'0';
			a%=b;
		}
		printf("%ld\n",a);
	}
	return 0;
}
