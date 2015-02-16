/*
 * =====================================================================================
 *
 *       Filename:  1318.c
 *
 *    Description:  
 *    Input
 *    Input consists of strings (one per line) each of which will consist of one to twenty valid characters. There will be no invalid characters in any of the strings. Your program should read to the end of file.
 *    Output
 *    For each input string, you should print the string starting in column 1 immediately followed by exactly one of the following strings.
 *    " -- is not a palindrome."
 *    if the string is not a palindrome and is not a mirrored string
 *    " -- is a regular palindrome."
 *    if the string is a palindrome and is not a mirrored string
 *    " -- is a mirrored string."
 *    if the string is not a palindrome and is a mirrored string
 *    " -- is a mirrored palindrome."
 *    if the string is a palindrome and is a mirrored string
 *    Note that the output line is to include the -'s and spacing exactly as shown in the table above and demonstrated in the Sample Output below.
 *    In addition, after each output line, you must print an empty line.
 *    Sample Input
 *    NOTAPALINDROME
 *    ISAPALINILAPAS
 *    2A3MEAS
 *    ATOYOTA
 *    Sample Output
 *    NOTAPALINDROME -- is not a palindrome.
 *    ISAPALINILAPASI -- is a regular palindrome.
 *    2A3MEAS -- is a mirrored string.
 *    ATOYOTA -- is a mirrored palindrome.
 *
 *        Created:  02/16/2015 14:15:12
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int is_palindrome(char *str,int len){
	int i;
	for(i=0;i<len/2;++i)
		if(str[i]!=str[len-1-i])
			return 0;
	return 1;
}
int is_mirrored(char *str,int len){
	int i,j;
	char rev[]={"A***3**HIL*JM*O***2TUVWXY51SE*Z**8*"};
	for(i=0;i<len/2+1;++i){
		if(str[i]>='A'&&str[i]<='Z'){
			if(str[len-1-i]!=rev[str[i]-'A'])
				return 0;
		}
		if(str[i]>='1'&&str[i]<='9'){
			if(str[len-1-i]!=rev[str[i]-'1'+26])
				return 0;
		}
	}
	return 1;
}
int main(){
	char str[21],p,m;
	while(scanf("%s",str)!=EOF){
		int len=strlen(str);
		p=is_palindrome(str,len);
		m=is_mirrored(str,len);
		printf("%s -- is ",str);
		if(!p&&!m)
			printf("%s\n\n","not a palindrome.");
		else if(p&&m)
			printf("%s\n\n","a mirrored palindrome.");
		else if(p&&!m)
			printf("%s\n\n","a regular palindrome.");
		else if(!p&&m)
			printf("%s\n\n","a mirrored string.");
	}
	return 0;
}
