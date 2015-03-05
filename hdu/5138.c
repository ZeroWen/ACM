/*
 * =====================================================================================
 *
 *       Filename:  5138.c
 *
 *    Description:  
 *    Small W will take part in CET-6 test which will be held on December $20^{th}$. In order to pass it he must remember a lot of words.
 *    He remembers the words according to Ebbinghaus memory curve method.
 *    He separates the words into many lists. Every day he picks up a new list, and in the next $1^{st}, 2^{nd}, 4^{th}, 7^{th}, 15^{th}$ day, he reviews this list.
 *    So every day he has many lists to review. However he is so busy, he does not know which list should be reviewed in a certain day. Now he invites you to write a program to tell him which list should to be reviewed in a certain day.
 *    Lists are numbered from 1. For example list 1 should be reviewed in the $2^{nd}, 3^{rd}, 5^{th}, 8^{th}, 16^{th}$ day.
 *    Input
 *    Multi test cases (about 100), every case contains an integer n in a single line.
 *    Please process to the end of file.
 *    [Technical Specification]
 *    $2 \leq n \leq 100000$
 *    Output
 *    For each n，output the list which should be reviewed in the $n^{th}$ day in ascending order.
 *    Sample Input
 *    2
 *    100
 *    Sample Output
 *    1
 *    85 93 96 98 99
 *
 *        Created:  03/05/2015 16:36:20
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long n,i,a[5]={1,2,4,7,15};
	while(scanf("%ld",&n)!=EOF)
		for(i=5;i>=0;--i)
			if(n>a[i])
				printf("%ld%s",n-a[i],i?" ":"\n");
	return 0;
}
