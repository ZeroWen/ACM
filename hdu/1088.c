/*
 * =====================================================================================
 *
 *       Filename:  1088.c
 *
 *    Description:  
 *    Problem Description
 *    If you ever tried to read a html document on a Macintosh, you know how hard it is if no Netscape is installed. 
 *    Now, who can forget to install a HTML browser? This is very easy because most of the times you don't need one on a MAC because there is a Acrobate Reader which is native to MAC. But if you ever need one, what do you do? 
 *    Your task is to write a small html-browser. It should only display the content of the input-file and knows only the html commands (tags) <br> which is a linebreak and <hr> which is a horizontal ruler. Then you should treat all tabulators, spaces and newlines as one space and display the resulting text with no more than 80 characters on a line.
 *    Input
 *    The input consists of a text you should display. This text consists of words and HTML tags separated by one or more spaces, tabulators or newlines. 
 *    A word is a sequence of letters, numbers and punctuation. For example, "abc,123" is one word, but "abc, 123" are two words, namely "abc," and "123". A word is always shorter than 81 characters and does not contain any '<' or '>'. All HTML tags are either <br> or <hr>.
 *    Output
 *    You should display the the resulting text using this rules: 
 *    . If you read a word in the input and the resulting line does not get longer than 80 chars, print it, else print it on a new line.
 *    . If you read a <br> in the input, start a new line. 
 *    . If you read a <hr> in the input, start a new line unless you already are at the beginning of a line, display 80 characters of '-' and start a new line (again). 
 *    The last line is ended by a newline character.
 *    Sample Input
 *    Hallo, dies ist eine 
 *    ziemlich lange Zeile, die in Html
 *    aber nicht umgebrochen wird.
 *    <br>
 *    Zwei <br> <br> produzieren zwei Newlines. 
 *    Es gibt auch noch das tag <hr> was einen Trenner darstellt.
 *    Zwei <hr> <hr> produzieren zwei Horizontal Rulers.
 *    Achtung       mehrere Leerzeichen irritieren
 *    Html genauso wenig wie
 *
 *
 *    mehrere Leerzeilen.
 *
 *    Sample Output
 *    Hallo, dies ist eine ziemlich lange Zeile, die in Html aber nicht umgebrochen
 *    wird.
 *    Zwei
 *
 *    produzieren zwei Newlines. Es gibt auch noch das tag
 *    --------------------------------------------------------------------------------
 *    was einen Trenner darstellt. Zwei
 *    --------------------------------------------------------------------------------
 *    --------------------------------------------------------------------------------
 *    produzieren zwei Horizontal Rulers. Achtung mehrere Leerzeichen irritieren Html
 *    genauso wenig wie mehrere Leerzeilen.
 *
 *        Created:  04/16/2014 00:09:24
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char word[82];
	int i,len=0;
	while(scanf("%s",word)!=EOF){
		if(!strcmp("<br>",word)){
			printf("\n");
			len=0;
			continue;
		}
		else if(!strcmp("<hr>",word)){
			printf("%s",(!len)?"":"\n");
			for(i=0;i<80;++i)
				printf("-");
			printf("\n");
			len=0;
			continue;
		}
		len+=strlen(word);
		if(len>80){
			printf("\n");
			len=strlen(word);
		}
		printf("%s%s",(len==0||len==strlen(word))?"":" ",word);
		len+=(len>0);
	}
	printf("\n");
	return 0;
}
