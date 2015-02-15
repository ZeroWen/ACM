/*
 * =====================================================================================
 *
 *       Filename:  1736.c
 *
 *    Description:  
 *    Problem Description
 *    请看下面两段文字：
 *    Kenny喊道："我来了!"
 *    Kenny喊道：“我来了！”
 *    前面一段文字中由于在中文中使用了英文标点，显得不太美观。本题中你的任务是让任意一段文字美观化。美观化具体要求为将以下字符（串）转换为对应的中文字符：
 *    英文 中文
 *    ,    ，
 *    .    。
 *    !    ！
 *    "    “或”
 *    <<   《
 *    >>    》
 *    ?    ？
 *    Input
 *    输入文字只有一段。文字中可能含有中英文、符号以及控制符（换行、空格、制表符等）。
 *    Output
 *    按照要求输出美化后的文字段。你不用翻译以上指定的符号之外的所有字符。
 *    Sample Input
 *    Kenny喊道："我来了!"
 *    Sample Output
 *    Kenny喊道：“我来了！” 
 *
 *        Created:  02/15/2015 18:21:14
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char c,s[10000],quote[3];
	int i,len,t,quote_sign;
	for(i=0;~(c=getchar());)
		s[i++]=c;
	for(len=i,i=quote_sign=0;i<len;++i){
		t=s[i];
		if(t<0){
			printf("%c%c",s[i],s[i+1]);
			quote[0]=s[i];
			quote[1]=s[i+1];
			quote[2]='\0';
			if(!strcmp(quote,"”"))
				quote_sign=0;
			else if(!strcmp(quote,"“"))
				quote_sign=1;
			++i;
		}
		else if(t=='!')
			printf("！");
		else if(t==',')
			printf("，");
		else if(t=='?')
			printf("？");
		else if(t=='.')
			printf("。");
		else if(t=='"'){
			if(!quote_sign){
				printf("“");
				quote_sign=1;
			}
			else if(quote_sign){
				printf("”");
				quote_sign=0;
			}
		}
		else if(t=='<'&&s[i+1]=='<'){
			printf("《");
			++i;
		}
		else if(t=='>'&&s[i+1]=='>'){
			printf("》");
			++i;
		}
		else
			printf("%c",t);
	}
	return 0;
}

