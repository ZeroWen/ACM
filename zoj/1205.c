/*
 * =====================================================================================
 *
 *       Filename:  1205.c
 *
 *    Description:  
 *    In the 22nd Century, scientists have discovered intelligent residents live on the Mars. Martians are very fond of mathematics. Every year, they would hold an Arithmetic Contest on Mars (ACM). The task of the contest is to calculate the sum of two 100-digit numbers, and the winner is the one who uses least time. This year they also invite people on Earth to join the contest.
 *    As the only delegate of Earth, you're sent to Mars to demonstrate the power of mankind. Fortunately you have taken your laptop computer with you which can help you do the job quickly. Now the remaining problem is only to write a short program to calculate the sum of 2 given numbers. However, before you begin to program, you remember that the Martians use a 20-based number system as they usually have 20 fingers. 
 *    Input:
 *    You're given several pairs of Martian numbers, each number on a line. 
 *    Martian number consists of digits from 0 to 9, and lower case letters from a to j (lower case letters starting from a to present 10, 11, ..., 19). 
 *    The length of the given number is never greater than 100.
 *    Output:
 *    For each pair of numbers, write the sum of the 2 numbers in a single line.
 *    Sample Input:
 *    1234567890
 *    abcdefghij
 *    99999jjjjj
 *    9999900001
 *    Sample Output:
 *    bdfi02467j
 *    iiiij00000
 *
 *        Created:  05/02/2014 01:18:02
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int msatoi(char c) {
	return isalpha(c)?(c-'a'+10):(c-'0');
}
int add(char *str1, char *str2, int len1, int len2) {
	int i, sum, carry = 0;
	for (i=0;i<len2;++i) {
		sum = msatoi(str1[len1-i-1]) + msatoi(str2[len2-i-1]) + carry;
		carry = sum / 20;
		sum %= 20;
		str1[len1-i-1] = sum > 9?(sum-10+'a'):(sum+'0');
	}
	while (i<len1 && carry) {
		sum = msatoi(str1[len1-i-1]) + carry;
		carry = sum / 20;
		sum %= 20;
		str1[len1-i-1] = sum > 9?(sum-10+'a'):(sum+'0');
		++i;
	}
	return carry;
}
int main(int argc, char *argv[]) {
	char str1[105], str2[105];
	while (scanf("%s%s", str1, str2)!=EOF) {
		int len1 = strlen(str1), len2 = strlen(str2);
		if (len1 >= len2) {
			if (add(str1, str2, len1, len2))
				printf("1");
		}
		else {
			if (add(str2, str1, len2, len1))
				printf("1");
		}
		printf("%s\n", len1>=len2?str1:str2);
	}
	return 0;
}
