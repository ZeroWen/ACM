/*
 * =====================================================================================
 *
 *       Filename:  2163.c
 *
 *    Description:  
 *    Write a program to determine whether a word is a palindrome. A palindrome is a sequence of characters that is identical to the string when the characters are placed in reverse order. For example, the following strings are palindromes: “ABCCBA”, “A”, and “AMA”. The following strings are not palindromes: “HELLO”, “ABAB” and “PPA”.
 *    Input
 *    The input file will consist of up to 100 lines, where each line contains at least 1 and at most 52 characters. Your program should stop processing the input when the input string equals “STOP”. You may assume that input file consists of exclusively uppercase letters; no lowercase letters, punctuation marks, digits, or whitespace will be included within each word.
 *    Output
 *    A single line of output should be generated for each string. The line should include “#”, followed by the problem number, followed by a colon and a space, followed by the string “YES” or “NO”.
 *    Sample Input
 *    ABCCBA
 *    A
 *    HELLO
 *    ABAB
 *    AMA
 *    ABAB
 *    PPA
 *    STOP
 *
 *    Sample Output
 *    #1: YES
 *    #2: YES
 *    #3: NO
 *    #4: NO
 *    #5: YES
 *    #6: NO
 *    #7: NO
 *
 *        Created:  03/31/2015 17:34:28
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int is_palin(char *str){
	int i,len=strlen(str);
	for(i=0;i<len/2+1;++i)
		if(str[i]!=str[len-1-i])
			return 0;
	return 1;
}
int main(){
	char str[55],cas=0;
	while(scanf("%s",str)!=EOF){
		if(!strcmp(str,"STOP"))
			break;
		printf("#%d: %s\n",++cas,is_palin(str)?"YES":"NO");
	}
	return 0;
}
