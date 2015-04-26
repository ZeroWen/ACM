/*
 * =====================================================================================
 *
 *       Filename:  3878.c
 *
 *    Description:  
 *    Edward, a poor copy typist, is a user of the Dvorak Layout. But now he has only a QWERTY Keyboard with a broken Caps Lock key, so Edward never presses the broken Caps Lock key. Luckily, all the other keys on the QWERTY keyboard work well. Every day, he has a lot of documents to type. Thus he needs a converter to translate QWERTY into Dvorak. Can you help him?
 *    The QWERTY Layout and the Dvorak Layout are in the following:
 *    Qwerty Layout
 *    The QWERTY Layout
 *    Dvorak Layout
 *    The Dvorak Layout
 *    Input
 *    A QWERTY document Edward typed. The document has no more than 100 kibibytes. And there are no invalid characters in the document.
 *    Output
 *    The Dvorak document.
 *    
 *    Sample Input
 *    Jgw Gqm Andpw a H.soav Patsfk f;doe
 *    Nfk Gq.d slpt a X,dokt vdtnsaohe
 *    Kjd yspps,glu pgld; aod yso kd;kgluZ
 *    1234567890
 *    `~!@#$%^&*()}"']_+-=ZQqWEwe{[\|
 *    ANIHDYf.,bt/
 *    ABCDEFuvwxyz
 *    
 *    Sample Output
 *    Hi, I'm Abel, a Dvorak Layout user.
 *    But I've only a Qwerty keyboard.
 *    The following lines are for testing:
 *    1234567890
 *    `~!@#$%^&*()+_-={}[]:"'<>,.?/\|
 *    ABCDEFuvwxyz
 *    AXJE>Ugk,qf;
 *
 *        Created:  04/27/2015 00:35:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
char str[1000101];
int main(){
	char key1[80]="QWERTYUIOPASDFGHJKLZXCVBNM-_=+qwertyuiopasdfghjkl;'zxcvbnm,./:\"<>?[]{}";
	char key2[80]="\"<>PYFGCRLAOEUIDHTN:QJKXBM[{]}',.pyfgcrlaoeuidhtns-;qjkxbmwvzS_WVZ/=?+";
	int i,j,len,len_key=strlen(key1);
	while(gets(str)){
		len=strlen(str);
		for(i=0;i<len;++i)
			for(j=0;j<len_key;++j)
				if(str[i]==key1[j]){
					str[i]=key2[j];
					break;
				}
		printf("%s\n",str);
	}
	return 0;
}
