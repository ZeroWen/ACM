/*
 * =====================================================================================
 *
 *       Filename:  2164.c
 *
 *    Description:  
 *    Rock, Paper, Scissors is a two player game, where each player simultaneously chooses one of the three items after counting to three. The game typically lasts a pre-determined number of rounds. The player who wins the most rounds wins the game. Given the number of rounds the players will compete, it is your job to determine which player wins after those rounds have been played.
 *    The rules for what item wins are as follows:
 *    ?Rock always beats Scissors (Rock crushes Scissors)
 *    ?Scissors always beat Paper (Scissors cut Paper)
 *    ?Paper always beats Rock (Paper covers Rock)
 *    Input
 *    The first value in the input file will be an integer t (0 < t < 1000) representing the number of test cases in the input file. Following this, on a case by case basis, will be an integer n (0 < n < 100) specifying the number of rounds of Rock, Paper, Scissors played. Next will be n lines, each with either a capital R, P, or S, followed by a space, followed by a capital R, P, or S, followed by a newline. The first letter is Player 1抯 choice; the second letter is Player 2抯 choice.
 *    Output
 *    For each test case, report the name of the player (Player 1 or Player 2) that wins the game, followed by a newline. If the game ends up in a tie, print TIE.
 *    Sample Input
 *    3
 *    2
 *    R P
 *    S R
 *    3
 *    P P
 *    R S
 *    S R
 *    1
 *    P R
 *    Sample Output
 *    Player 2
 *    TIE
 *    Player 1
 *
 *        Created:  03/27/2015 16:31:27
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i,p1,p2;
	char c1,c2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		getchar();
		for(i=p1=p2=0;i<n;++i){
			scanf("%c %c",&c1,&c2);
			getchar();
			if(c1==c2)
				continue;
			else if((c1=='R'&&c2=='S')||(c1=='S'&&c2=='P')||(c1=='P'&&c2=='R'))
				++p1;
			else
				++p2;
		}
		if(p1==p2)
			printf("TIE\n");
		else
			printf("Player %d\n",p1>p2?1:2);
	}
	return 0;
}
