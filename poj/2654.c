/*
 * =====================================================================================
 *
 *       Filename:  2654.c
 *
 *    Description:  
 *    Rock-Paper-Scissors is game for two players, A and B, who each choose, independently of the other, one of rock, paper, or scissors. A player chosing paper wins over a player chosing rock; a player chosing scissors wins over a player chosing paper; a player chosing rock wins over a player chosing scissors. A player chosing the same thing as the other player neither wins nor loses.
 *    A tournament has been organized in which each of n players plays k rock-scissors-paper games with each of the other players - k*n*(n-1)/2 games in total. Your job is to compute the win average for each player, defined as w / (w + l) where w is the number of games won, and l is the number of games lost, by the player.
 *    Input
 *    Input consists of several test cases. The first line of input for each case contains 1 <= n <= 100 1 <= k <= 100 as defined above. For each game, a line follows containing p1, m1, p2, m2. 1 <= p1 <= n and 1 <= p2 <= n are distinct integers identifying two players; m1 and m2 are their respective moves ("rock", "scissors", or "paper"). A line containing 0 follows the last test case.
 *    Output
 *    Output one line each for player 1, player 2, and so on, through player n, giving the player's win average rounded to three decimal places. If the win average is undefined, output "-". Output an empty line between cases.
 *    Sample Input
 *    2 4
 *    1 rock 2 paper
 *    1 scissors 2 paper
 *    1 rock 2 rock
 *    2 rock 1 scissors
 *    2 1
 *    1 rock 2 paper
 *    0
 *    Sample Output
 *    0.333
 *    0.667
 *
 *    0.000
 *    1.000
 *
 *        Created:  03/27/2015 16:26:27
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int foo(char a,char b){
	if(a==b)
		return 0;
	if((a=='r'&&b=='s')||(a=='s'&&b=='p')||(a=='p'&&b=='r'))
		return 1;
	return -1;
}
long n,first=1,k,i,flag,t1,t2,w[110],l[110];
int main(){
	char str1[15],str2[15];
	float rate;
	while(scanf("%ld",&n)!=EOF){
		if(!n)
			break;
		if(first)
			first=0;
		else
			printf("\n");
		scanf("%ld",&k);
		memset(w,0,sizeof(w));
		memset(l,0,sizeof(l));
		k*=n*(n-1)/2;
		for(i=0;i<k;++i){
			scanf("%ld%s%ld%s",&t1,str1,&t2,str2);
			flag=foo(str1[0],str2[0]);
			if(flag==1){
				++w[t1];
				++l[t2];
			}
			else if(flag==-1){
				++w[t2];
				++l[t1];
			}
		}
		for(i=1;i<=n;++i){
			if(w[i]+l[i]==0){
				printf("-\n");
				continue;
			}
			rate=(float)w[i]/(float)(w[i]+l[i]);
			printf("%.3f\n",rate);
		}
	}
	return 0;
}
