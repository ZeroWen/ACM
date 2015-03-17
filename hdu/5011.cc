/*
 * =====================================================================================
 *
 *       Filename:  5011.c
 *
 *    Description:  
 *     Here is a game for two players. The rule of the game is described below:
 *     ● In the beginning of the game, there are a lot of piles of beads.
 *     ● Players take turns to play. Each turn, player choose a pile i and remove some (at least one) beads from it. Then he could do nothing or split pile i into two piles with a beads and b beads.(a,b > 0 and a + b equals to the number of beads of pile i after removing)
 *     ● If after a player's turn, there is no beads left, the player is the winner.
 *     Suppose that the two players are all very clever and they will use optimal game strategies. Your job is to tell whether the player who plays first can win the game.
 *     Input
 *     There are multiple test cases. Please process till EOF.
 *     For each test case, the first line contains a postive integer n(n < 105) means there are n piles of beads. The next line contains n postive integer, the i-th postive integer ai(ai < 231) means there are ai beads in the i-th pile.
 *     Output
 *     For each test case, if the first player can win the game, ouput "Win" and if he can't, ouput "Lose"
 *     Sample Input
 *     1
 *     1
 *     2
 *     1 1
 *     3
 *     1 2 3
 *     Sample Output
 *     Win
 *     Lose
 *     Lose
 *
 *        Created:  03/17/2015 20:10:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <cstdio>
int main(){
	int n,i;
	__int64 a,sum;
	while(scanf("%d",&n)!=EOF){
		sum=0;
		for(i=0;i<n;i++){
			scanf("%I64d",&a);
			sum^=a;
		}
		printf("%s\n",(sum)?"Win":"Lose");
	}
	return 0;
}
