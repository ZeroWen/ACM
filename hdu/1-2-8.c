/*
 * =====================================================================================
 *
 *       Filename:  1-2-8.c
 *
 *    Description:  
 *    Problem Description
 *    The "Vowel-Counting-Word"(VCW), complies with the following conditions.
 *    Each vowel in the word must be uppercase. 
 *    Each consonant (the letters except the vowels) must be lowercase.
 *    For example, "ApplE" is the VCW of "aPPle", "jUhUA" is the VCW of "Juhua".
 *    Give you some words; your task is to get the "Vowel-Counting-Word" of each word.
 *
 *    Input
 *    The first line of the input contains an integer T (T<=20) which means the number of test cases.
 *    For each case, there is a line contains the word (only contains uppercase and lowercase). The length of the word is not greater than 50.
 *
 *    Output
 *    For each case, output its Vowel-Counting-Word.
 *
 *    Sample Input
 *    4
 *    XYz
 *    application
 *    qwcvb
 *    aeioOa 
 *
 *    Sample Output
 *    xyz
 *    ApplIcAtIOn
 *    qwcvb
 *    AEIOOA
 *
 *        Version:  1.0
 *        Created:  04/02/2014 22:09:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
		while(n--){
			char str[50],*p=str;
			scanf("%s",p);
			for(;*p!='\0';p++){
				switch(*p){
					case('a'):
					case('e'):
					case('i'):
					case('o'):
					case('u'):*p-=32;
				}
				if(*p>='A'&&*p<='Z')
					switch(*p){
						case('A'):
						case('E'):
						case('I'):
						case('O'):
						case('U'):break;
						default:*p+=32;
					}
			}
			printf("%s\n",str);
		}
	return 0;		
}
