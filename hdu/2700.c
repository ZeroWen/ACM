/*
 * =====================================================================================
 *
 *       Filename:  2700.c
 *
 *    Description:  
 *    Problem Description
 *    A bit string has odd parity if the number of 1's is odd. A bit string has even parity if the number of 1's is even.Zero is considered to be an even number, so a bit string with no 1's has even parity. Note that the number of
 *    0's does not affect the parity of a bit string.
 *    Input
 *    The input consists of one or more strings, each on a line by itself, followed by a line containing only "#" that signals the end of the input. Each string contains 1–31 bits followed by either a lowercase letter 'e' or a lowercase letter 'o'.
 *    Output
 *    Each line of output must look just like the corresponding line of input, except that the letter at the end is replaced by the correct bit so that the entire bit string has even parity (if the letter was 'e') or odd parity (if the letter was 'o').
 *    Sample Input
 *    101e
 *    010010o
 *    1e
 *    000e
 *    110100101o
 *    #
 *    Sample Output
 *    1010
 *    0100101
 *    11
 *    0000
 *    1101001010
 *
 *        Created:  04/21/2014 23:34:21
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i=0;
	char c;
	while((c=getchar())!='#')
		if((c=='e'&&i%2)||(c=='o'&&i%2==0)){
			putchar('1');
			i=0;
		}
		else if((c=='o'&&i%2)||(c=='e'&&i%2==0)){
			putchar('0');
			i=0;
		}
		else{
			if(c=='1')
				i++;
			putchar(c);
		}
	return 0;
}
