/*
 * =====================================================================================
 *
 *       Filename:  4011.c
 *
 *    Description:  
 *    In St Petersburg phone numbers are formatted as “XXX–XX–XX”, where the first three digits represent index of the Automated Telephone Exchange (ATE). Each ATE has exactly 10 000 unique phone numbers.
 *    Peter has just bought a new flat and now he wants to install a telephone line. He thinks that a phone number is lucky if the arithmetic expression represented by that phone number is equal to zero. For example, the phone number 102–40–62 is lucky (102 − 40 − 62 = 0), and the number 157–10–47 is not lucky (157−10−47 = 100 ̸= 0).
 *    Peter knows the index of the ATE that serves his house. To get an idea of his chances to get a lucky number he wants to know how many lucky numbers his ATE has.
 *    Input
 *    The input file contains a single integer number n — the index of Peter’s ATE (100 ≤ n ≤ 999). Output
 *    Output
 *    a single integer number — the number of lucky phone numbers Peter’s ATE has.
 *
 *        Created:  05/06/2015 19:47:11
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n > 198) {
		printf("0\n");
	}
	else {
		printf("%d\n", 2*(99-n/2)+!(n%2));
	}
	return 0;
}
