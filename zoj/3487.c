/*
 * =====================================================================================
 *
 *       Filename:  3487.c
 *
 *    Description:  
 *    Ordinal numbers refer to a position in a series. Common ordinals include zeroth, first, second, third, fourth and so on. Ordinals are not often written in words, they are written using digits and letters. An ordinal indicator is a sign adjacent to a numeral denoting that it is an ordinal number, rather than a cardinal number. In English, the suffixes -st (e.g. 21st), -nd (e.g. 22nd), -rd (e.g. 23rd), and -th (e.g. 24th) are used. The rules are as follows:
 *    If the tens digit of a number is 1, then write "th" after the number. For example: 13th, 19th, 112th, 9311th.
 *    If the tens digit is not equal to 1, then use "st" if the units digit is 1, "nd" if the units digit is 2, "rd" if the units digit is 3, and "th" otherwise: For example: 2nd, 7th, 20th, 23rd, 52nd, 135th, 301st.
 *    Input
 *    There are multiple test cases. The first line of input is an integer T ≈ 1000 indicating the number of test cases.
 *    Each test case consists of a cardinal number 0 ≤ n < 1,000,000,000.
 *    Output
 *    For each test case, output the corresponding ordinal number.
 *    Sample Input
 *    5
 *    1
 *    2
 *    3
 *    4
 *    1024
 *    Sample Output
 *    1st
 *    2nd
 *    3rd
 *    4th
 *    1024th
 *
 *        Created:  04/25/2014 23:16:29
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	long n;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%ld",&n);
			if((n/10)%10==1)
				printf("%ldth\n",n);
			else{
				switch(n%10){
					case(1):printf("%ldst\n",n);break;
					case(2):printf("%ldnd\n",n);break;
					case(3):printf("%ldrd\n",n);break;
					default:printf("%ldth\n",n);break;
				}
			}
		}
	return 0;
}
