/*
 * =====================================================================================
 *
 *       Filename:  2538.c
 *
 *    Description:  
 *    A common typing error is to place the hands on the keyboard one row to the right of the correct position. So "Q" is typed as "W" and "J" is typed as "K" and so on. You are to decode a message typed in this manner.
 *    Input
 *    Input consists of several lines of text. Each line may contain digits, spaces, upper case letters (except Q, A, Z), or punctuation shown above [except back-quote (`)]. Keys labelled with words [Tab, BackSp, Control, etc.] are not represented in the input.
 *    Output
 *    You are to replace each letter or punctuation symbol by the one immediately to its left on the QWERTY keyboard shown above. Spaces in the input should be echoed in the output.
 *    Sample Input
 *    O S, GOMR YPFSU/
 *    Sample Output
 *    I AM FINE TODAY.
 *
 *        Created:  03/25/2015 21:34:19
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
char str[10000];
int main(){
	char key[]="SNVFRGHJOKL;,MP[WTDYIBECUX";
	while(gets(str)){
		int i,j,len=strlen(str);
		for(i=0;i<len;++i){
			if((str[i]>='A'&&str[i]<='Z')||str[i]==';'||str[i]==','||str[i]=='['){
				for(j=0;j<26;++j)
					if(str[i]==key[j]){
						str[i]=j+'A';
						break;
					}
			}
			else if(str[i]>'1'&&str[i]<='9')
				str[i]--;
			else{
				switch(str[i]){
					case '\\':str[i]=']';break;
					case ']':str[i]='[';break;
					case '/':str[i]='.';break;
					case '.':str[i]=',';break;
					case '=':str[i]='-';break;
					case '-':str[i]='0';break;
					case '0':str[i]='9';break;
					case '1':str[i]='`';break;
					case '\'':str[i]=';';break;
				}
			}
		}
		printf("%s\n",str);
	}
	return 0;
}
