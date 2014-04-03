/*
 * =====================================================================================
 *
 *       Filename:  2104.c
 *
 *    Description:  
 *    Problem Description
 *    The Children’s Day has passed for some days .Has you remembered something happened at your childhood? I remembered I often played a game called hide handkerchief with my friends.
 *    Now I introduce the game to you. Suppose there are N people played the game ,who sit on the ground forming a circle ,everyone owns a box behind them .Also there is a beautiful handkerchief hid in a box which is one of the boxes .
 *    Then Haha(a friend of mine) is called to find the handkerchief. But he has a strange habit. Each time he will search the next box which is separated by M-1 boxes from the current box. For example, there are three boxes named A,B,C, and now Haha is at place of A. now he decide the M if equal to 2, so he will search A first, then he will search the C box, for C is separated by 2-1 = 1 box B from the current box A . Then he will search the box B ,then he will search the box A.
 *    So after three times he establishes that he can find the beautiful handkerchief. Now I will give you N and M, can you tell me that Haha is able to find the handkerchief or not. If he can, you should tell me "YES", else tell me "POOR Haha".
 *
 *    Input
 *    There will be several test cases; each case input contains two integers N and M, which satisfy the relationship: 1<=M<=100000000 and 3<=N<=100000000. When N=-1 and M=-1 means the end of input case, and you should not process the data.
 *
 *    Output
 *    For each input case, you should only the result that Haha can find the handkerchief or not.
 *    
 *    Sample Input
 *    3 2
 *    -1 -1
 *
 *    Sample Output
 *    YES
 *
 *        Version:  1.0
 *        Created:  03/31/2014 23:46:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long m,n,t;
	while(scanf("%ld %ld",&n,&m)&&(m!=-1||n!=-1)){
		while(m!=0){
			t=n%m;
			n=m;
			m=t;
		}
		if(n!=1)
			printf("POOR Haha\n");
		else
			printf("YES\n");
	}
	return 0;
}
