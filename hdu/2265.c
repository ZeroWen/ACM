/*
 * =====================================================================================
 *
 *       Filename:  2265.c
 *
 *    Description:  
 *    Problem Description
 *    You know many girls likes writing diaries,of course they have some secrets don’t want others to know.So this time, they asked you to encoding the diary.
 *    The rule is :
 *    Give you a string. Such as “ARE YOU AC?”
 *    Firstly , delete all spaces in this string.
 *    You will get “AREYOUAC?”
 *    String AREYOUAC?
 *    Index 123456789
 *    Secondly,print the characters who’s index are the multiple of 3.
 *    Thirdly, print the characters who’s index are the multiple of 2.If it has been printed,just ignore it .
 *    At last,print the characters that have not been printed.
 *    Input
 *    Each case will contain a string in one line.You may suppose the length of the string will not exceed 200.
 *    Output
 *    For each case, output the encoded string in one line.
 *    Sample Input
 *    ARE YOU AC?
 *    Sample Output
 *    EU?RYCAOA
 *
 *        Created:  06/15/2014 11:29:51
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j;
	while(1){
		i=0;
		char c,str[210];
		while((c=getchar())!='\n')
			if(c==EOF)
				return 0;
			else if(c!=' ')
				str[i++]=c;
		for(j=2;j<i;j+=3)
			putchar(str[j]);
		for(j=1;j<i;j+=2)
			if((j+1)%3)
				putchar(str[j]);
		for(j=0;j<i;++j)
			if((j+1)%2&&(j+1)%3)
				putchar(str[j]);
		putchar('\n');
	}
	return 0;
}
