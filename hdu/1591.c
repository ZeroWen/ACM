/*
 * =====================================================================================
 *
 *       Filename:  1591.c
 *
 *    Description:  
 *    After Gardon had got Angel's letter, he found it was encoded...Oh my god, why did she encode a love-letter?? But don't worry, she wrote the algorithm for encoding after the letter:
 *    Each charactor are changed to a corresponding charactor. If the keyword is "Angel", the rule will be:
 *    ABCDEFGHIJKLMNOPQRSTUVWXYZ
 *    ANGELZYXWVUTSRQPOMKJIHFDCB
 *    You may find that in the bottom line, charactors of the keyword come first. All other charactors will come in a reversed order.
 *    Now given another keyword, work the letter out!
 *    Can you write a program to translate the letter?
 *    Input
 *    The letter will begin with the keyword (All uppercase), then lines of text.
 *    Output
 *    Decode the letter and print it out. Please note that a upper-case charactor will be decoded to a upper-case charactor, while a lower-case charactor will be decoded to a lower-case charactor.
 *    Sample Input
 *    ANGEL
 *    Fxlr jxaj eac W xlam cqim hqwgl
 *    W xahl kqsl kplgwat zlltwry
 *    Tlj sl atfack jxwru W eqr'j farra zqmylj cqi
 *    W mlslsnlm aj jxl eac
 *    Cqi aml atfack qr sc swre
 *    Lhlrjxqiyx W vikj gar jxwru anqij cqi
 *    Wz jxl eac wr jxl zijiml
 *    Jxwk tqhl fwtt nlgqswry jmil
 *    W'hl rlhlm gxaryl sc swre jxaj
 *    W fwtt tqhl cqi zqmlhlm
 *    W eqr'j gaml xqf zqqt wj wk
 *    W fwtt tlj sc emlas gqsl jmil
 *    W fwtt jltt cqi kqsljxwry W farra tlj cqi urqf, W tlj cqi urqf
 *
 *    W tqhl cqi, tqhwry cqi, ak jxl sqikl tqhlk jxl mwgl
 *    Lhlr lhlmc eac xak kjqms, W fwtt atfack nc cqim kwel
 *    W swkk cqi, swkkwry cqi
 *    W eqr'j gaml xqf xame wj wk
 *    W vikj farj cqi jq nl xappc
 *    Lhlmcjxwry, W eq wj zqm cqi
 *
 *    Sample Output
 *    When that day I hear your voice
 *    I have some special feeling
 *    Let me always think I don't wanna forget you
 *    I remember at the day
 *    You are always on my mind
 *    Eventhough I just can think about you
 *    If the day in the future
 *    This love will becoming true
 *    I've never change my mind that I will love you forever
 *    I don't care how fool it is
 *    I will let my dream come true
 *    I will tell you something I wanna let you know, I let you know
 *
 *    I love you, loving you, as the mouse loves the rice
 *    Even every day has storm, I will always by your side
 *    I miss you, missing you
 *    I don't care how hard it is
 *    I just want you to be happy
 *    Everything, I do it for you
 *
 *        Created:  03/30/2015 22:10:36
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_instr(char c,char *str){
	int len=strlen(str),i;
	for(i=0;i<len;++i)
		if(c==str[i])
			return 1;
	return 0;
}
int main(){
	int i,len;
	char tmp[27],key[26],alpha,str[10000];
	scanf("%s",tmp);
	len=strlen(tmp);
	for(i=len,alpha='Z';i<26;--alpha)
		if(!is_instr(alpha,tmp)){
			tmp[i++]=alpha;
			tmp[i]='\0';
		}
	for(i=0;i<26;++i)
		key[tmp[i]-'A']=i+'A';
	getchar();
	while(gets(str)){
		len=strlen(str);
		for(i=0;i<len;++i)
			if(str[i]>='a'&&str[i]<='z')
				str[i]=key[str[i]-'a']+32;
			else if(str[i]>='A'&&str[i]<='Z')
				str[i]=key[str[i]-'A'];
		printf("%s\n",str);
	}
	return 0;
}
