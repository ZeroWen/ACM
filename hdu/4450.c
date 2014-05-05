/*
 * =====================================================================================
 *
 *       Filename:  4450.c
 *
 *    Description:  
 *    Problem Description
 *    Wangpeng is good at drawing. Now he wants to say numbers like “521” to his girlfriend through the game draw something.
 *    Wangpeng can’t write the digit directly. So he comes up a way that drawing several squares and the total area of squares is the number he wants to say.
 *    Input all the square Wangpeng draws, what’s the number in the picture?
 *    Input
 *    There are multiple test cases.
 *    For each case, the first line contains one integer N(1≤N≤100) indicating the number of squares.
 *    Second line contains N integers ai(1≤ai≤100)represent the side length of each square. No squares will overlap.
 *    Input ends with N = 0.
 *    Output
 *    For each case, output the total area in one line.
 *    Sample Input
 *    4
 *    1 2 3 4
 *    3
 *    3 3 3
 *    0
 *    Sample Output
 *    30
 *    27
 *
 *        Created:  05/06/2014 01:17:48
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,t;
	long sum;
	while(scanf("%d",&n),n)
		for(sum=0;n--;){
			scanf("%d",&t);
			sum+=t*t;
			if(!n)
				printf("%ld\n",sum);
		}
	return 0;
}
