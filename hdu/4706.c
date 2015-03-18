/*
 * =====================================================================================
 *
 *       Filename:  4706.c
 *
 *    Description:  
 *    Today is Children's Day. Some children ask you to output a big letter 'N'. 'N' is constituted by two vertical linesand one diagonal. Each pixel of this letter is a character orderly. No tail blank is allowed.
 *    For example, this is a big 'N' start with 'a' and it's size is 3.
 *    a e
 *    bdf
 *    c g
 *    Your task is to write different 'N' from size 3 to size 10. The pixel character used is from 'a' to 'z' continuously and periodic('a' is reused after 'z').
 *    Input
 *    This problem has no input.
 *    Output
 *    Output different 'N' from size 3 to size 10. There is no blank line among output.
 *    Sample Output
 *    a e
 *    bdf
 *    c g
 *    h  n
 *    i mo
 *    jl p
 *    k  q
 *    .........
 *    r        j
 *
 *        Created:  03/18/2015 23:36:13
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int alphabet(int c){
	if(c>'z')
		return 'a'+(c-'z')%26-1;
	return c;
}
int main(){
	int t,i,j;
	int c='a';
	for(t=1;t<9;t++){
		for(i=0;i<2+t;++i){
			printf("%c",alphabet(c+i));
			if(i==0||i==t+1)
				for(j=0;j<t;++j)
					printf(" ");
			else{
				for(j=0;j<t-i;++j)
					printf(" ");
				printf("%c",alphabet(c+2*t+2-i));
				for(j=0;j<i-1;++j)
					printf(" ");
			}
			printf("%c\n",alphabet(c+2*t+2+i));
		}
		c=alphabet(c+3*t+4);
	}
	return 0;
}
