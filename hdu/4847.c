/*
 * =====================================================================================
 *
 *       Filename:  4847.c
 *
 *    Description:  
 *    Now, Doge wants to know how many words “doge” are there in a given article. Would you like to help Doge solve this problem?
 *    Input
 *    An article that Doge wants to know.
 *    The size of the article does not exceed 64KB. The article contains only ASCII characters.
 *    Output
 *    Please output the number of word “doge” (case-insensitive). Refer to the samples for more details.
 *    Sample Input
 *    adoge cutedo yourge blownDoge lovelyDooge Wow! Such Dooooooooooooooge!!! D0ge dOge DOGE dogedoge
 *    Sample Output
 *    6
 *    
 *        Created:  03/18/2015 22:18:48
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[64000];
void lower(char *str,int len){
	int i;
	for(i=0;i<len;++i)
		str[i]=tolower(str[i]);
}
int main(){
	int i,len,n=0;
	while(scanf("%s",str)!=EOF){
		len=strlen(str);
		lower(str,len);
		for(i=0;i<len-3;++i){
			if(str[i]=='d'&&str[i+1]=='o'&&str[i+2]=='g'&&str[i+3]=='e')
				++n;
		}
	}
	printf("%d\n",n);
	return 0;
}
