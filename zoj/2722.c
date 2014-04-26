/*
 * =====================================================================================
 *
 *       Filename:  2722.c
 *
 *    Description:  
 *    Our school is planning to hold a new exciting computer programming contest. During each round of the contest, the competitors will be paired, and compete head-to-head. The loser will be eliminated, and the winner will advance to next round. It proceeds until there is only one competitor left, who is the champion. In a certain round, if the number of the remaining competitors is not even, one of them will be chosed randomly to advance to next round automatically, and then the others will be paired and fight as usual. The contest committee want to know how many rounds is needed to produce to champion, then they could prepare enough problems for the contest.
 *    Input
 *    The input consists of several test cases. Each case consists of a single line containing a integer N - the number of the competitors in total. 1 <= N <= 2,147,483,647. An input with 0(zero) signals the end of the input, which should not be processed.
 *    Output
 *    For each test case, output the number of rounds needed in the contest, on a single line.
 *    Sample Input
 *    8
 *    16
 *    15
 *    0
 *    Sample Output
 *    3
 *    4
 *    4
 *
 *        Created:  04/26/2014 01:51:12
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i;
	long n;
	while(scanf("%ld",&n),n){
		for(i=0;n!=1;i++)
			if(n%2)
				n=n/2+1;
			else
				n/=2;
		printf("%d\n",i);
	}
	return 0;
}
