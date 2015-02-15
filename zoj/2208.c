/*
 * =====================================================================================
 *
 *       Filename:  2208.c
 *
 *    Description:  
 *    Problem Description
 *    Mo and Larry have devised a way of encrypting messages. They first decide secretly on the number of columns and write the message (letters only) down the columns, padding with extra random letters so as to make a rectangular array of letters. For example, if the message is “There’s no place like home on a snowy night” and there are five columns, Mo would write down
 *    t o i o y
 *    h p k n n
 *    e l e a i
 *    r a h s g
 *    e c o n h
 *    s e m o t
 *    n l e w x
 *    Note that Mo includes only letters and writes them all in lower case. In this example, Mo used the character ‘x’ to pad the message out to make a rectangle, although he could have used any letter.
 *    Mo then sends the message to Larry by writing the letters in each row, alternating left-to-right and right-to-left. So, the above would be encrypted as
 *    toioynnkpheleaigshareconhtomesnlewx
 *    Your job is to recover for Larry the original message (along with any extra padding letters) from the encrypted one.
 *    Input
 *    There will be multiple input sets. Input for each set will consist of two lines. The first line will contain an integer in the range 2. . . 20 indicating the number of columns used. The next line is a string of up to 200 lower case letters. The last input set is followed by a line containing a single 0, indicating end of input.
 *    Output
 *    Each input set should generate one line of output, giving the original plaintext message, with no spaces.
 *    Sample Input
 *    5
 *    toioynnkpheleaigshareconhtomesnlewx
 *    3
 *    ttyohhieneesiaabss
 *    0
 *    Sample Output
 *    theresnoplacelikehomeonasnowynightx
 *    thisistheeasyoneab
 *
 *        Created:  04/24/2014 21:19:05
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char str[200];
	int n,i,j,len;
	while(scanf("%d",&n)&&n){
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<n;i++){
			putchar(str[i]);
			for(j=2;j*n<=len;j+=2){
				putchar(str[j*n-1-i]);
				if(j*n<len)
					putchar(str[j*n+i]);
			}
		}
		putchar('\n');
	}
	return 0;
}

/*
 * 1
 * 10  2*n
 * 11  2*n+1
 * 20 4*n
 * 21 4*n+1
 * 30 6*n
 * 31 6*n+1
 * 2
 * 9  2*n-1
 * 12  2*n+2
 * 
 *
 */
