/*
 * =====================================================================================
 *
 *       Filename:  2095.c
 *
 *    Description:  
 *    Problem Description
 *    In the new year party, everybody will get a "special present".Now it's your turn to get your special present, a lot of presents now putting on the desk, and only one of them will be yours.Each present has a card number on it, and your present's card number will be the one that different from all the others, and you can assume that only one number appear odd times.For example, there are 5 present, and their card numbers are 1, 2, 3, 2, 1.so your present will be the one with the card number of 3, because 3 is the number that different from all the others.
 *    Input
 *    The input file will consist of several cases. 
 *    Each case will be presented by an integer n (1<=n<1000000, and n is odd) at first. Following that, n positive integers will be given in a line, all integers will smaller than 2^31. These numbers indicate the card numbers of the presents.n = 0 ends the input.
 *    Output
 *    For each case, output an integer in a line, which is the card number of your present.
 *    Sample Input
 *    5
 *    1 1 3 2 2
 *    3
 *    1 2 1
 *    0
 *    Sample Output
 *    3
 *    2
 *    Hint
 *    use scanf to avoid Time Limit Exceeded
 *
 *        Created:  05/10/2014 22:13:04
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
int main(){
	int n,m,p;
	while(scanf("%d",&n),n){
		for(p=0;n--;p^=m)
			scanf("%d",&m);
		printf("%d\n",p);
	}
	return 0;
}
