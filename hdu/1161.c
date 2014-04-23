/*
 * =====================================================================================
 *
 *       Filename:  1161.c
 *
 *    Description:  
 *    Problem Description
 *    Eddy usually writes articles ,but he likes mixing the English letter uses, for example "computer science" is written frequently "coMpUtEr scIeNce" by him, this mistakes lets Eddy's English teacher be extremely discontentment.Now please you to write a procedure to be able in the Bob article English letter to turn completely the small letter. 
 *    Input
 *    The input contains several test cases.each line consists a test case，Expressed Eddy writes in an article , by letter, blank space,numeral as well as each kind of punctuation composition, the writing length does not surpass 1000 characters.
 *    Output
 *    For each test case, you should output an only line, after namely the result of transforms the lowercase letter.
 *    Sample Input
 *    weLcOmE tO HDOj Acm 2005!
 *    Sample Output
 *    welcome to hdoj acm 2005!
 *
 *        Created:  04/24/2014 00:17:56
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char str[1000];
	int i;
	while(gets(str)){
		for(i=0;str[i]!='\0';i++)
			if(str[i]>='A'&&str[i]<='Z')
				str[i]+=32;
		printf("%s\n",str);
	}
	return 0;
}
