/*
 * =====================================================================================
 *
 *       Filename:  4211.c
 *
 *    Description:  
 *    Problem Description
 *    Like many families with small children, my family’s refrigerator is adorned with a set of alphabet magnets: 26 separate magnets, each containing one letter of the alphabet. These magnets can be rearranged to create words and phrases. I feel it is my parental duty to use these magnets to create messages that are witty and insightful, yet at the same time caring and supportive. Unfortunately, I am somewhat hindered in this task by the fact that I can only make phrases that use each letter once.
 *    For example, a nice inspiring message to leave for the children might be, “I LOVE YOU.” Unfortunately, I cannot make this message using my magnets because it requires two letter "O"s. I can, however, make the message, “I LOVE MUSTARD.” Admittedly this message isn't as meaningful, but it does manage to not use any letters more than once.
 *    You are to write a program that will look at a list of possible phrases and report which phrases can be written using refrigerator magnets.
 *    Input
 *    The input will consist of one or more lines, ending with a line that contains only the word “END”.
 *    Each line will be 60 characters or less, and will consist of one or more words separated by a single space each, with words using only uppercase letters (A–Z). There will not be any leading or trailing whitespace, and there will not be any blank lines.
 *    Output
 *    Output only the lines which can be written in refrigerator magnets—that is, the lines which have no duplicate letters. Output them exactly the same as they were in the input—white spaces and all. Do not output the final “END” string.
 *    Sample Input
 *    I LOVE YOU
 *    I LOVE MUSTARD
 *    HAPPY BIRTHDAY
 *    GLAD U BORN
 *    SMILE
 *    IMAGINE
 *    WHATS UP DOC
 *    HAVE A NICE DAY
 *    END
 *    Sample Output
 *    I LOVE MUSTARD
 *    GLAD U BORN
 *    SMILE
 *    WHATS UP DOC
 *
 *        Created:  04/22/2014 16:18:28
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k,sign;
	char str[61];
	while(gets(str)&&strcmp(str,"END")){
		for(i=65,sign=1;i<91;i++){
			for(j=0,k=0;str[j]!='\0';j++)
				if(i==str[j])
					k++;
			if(k>1){
				sign=0;
				break;
			}
		}
		if(sign)
			printf("%s\n",str);
		for(i=0;i<61;i++)
			str[i]='\0';
	}
	return 0;
}

/*
 * 思路就是查找每个字母在字符串中的个数，如果大于1，则不输出
 */
