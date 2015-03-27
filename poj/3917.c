/*
 * =====================================================================================
 *
 *       Filename:  3917.c
 *
 *    Description:  
 *    Rock, Paper, Scissors is a classic hand game for two people. Each participant holds out either a fist (rock), open hand (paper), or two-finger V (scissors). If both players show the same gesture, they try again. They continue until there are two different gestures. The winner is then determined according to the table below:
 *    Rock	beats	Scissors
 *    Paper	beats	Rock
 *    Scissors	beats	Paper
 *    Your task is to take a list of symbols representing the gestures of two players and determine how many games each player wins.
 *    In the following example:
 *    Turn     : 1 2 3 4 5
 *    Player 1 : R R S R S
 *    Player 2 : S R S P S
 *    Player 1 wins at Turn 1 (Rock beats Scissors), Player 2 wins at Turn 4 (Paper beats Rock), and all the other turns are ties.
 *    Input
 *    The input contains between 1 and 20 pairs of lines, the first for Player 1 and the second for Player 2. Both player lines contain the same number of symbols from the set {'R', 'P', 'S'}. The number of symbols per line is between 1 and 75, inclusive. A pair of lines each containing the single character 'E' signifies the end of the input.
 *    Output
 *    For each pair of input lines, output a pair of output lines as shown in the sample output, indicating the number of games won by each player.
 *    Sample Input
 *    RRSRS
 *    SRSPS
 *    PPP
 *    SSS
 *    SPPSRR
 *    PSPSRS
 *    E
 *    E
 *    Sample Output
 *    P1: 1
 *    P2: 1
 *    P1: 0
 *    P2: 3
 *    P1: 2
 *    P2: 1
 *
 *        Created:  03/27/2015 16:04:20
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int foo(char a,char b){
	return ((a=='S'&&b=='P')||(a=='R'&&b=='S')||(a=='P'&&b=='R'))?1:-1;
}
int main(){
	char str1[80],str2[80];
	while(scanf("%s%s",str1,str2)!=EOF){
		if(str1[0]=='E'&&str2[0]=='E')
			break;
		int flag,p1,p2,i,len=strlen(str1);
		for(i=p1=p2=0;i<len;++i){
			if(str1[i]!=str2[i]){
				flag=foo(str1[i],str2[i]);
				if(flag==1)
					++p1;
				else
					++p2;
			}
		}
		printf("P1: %d\nP2: %d\n",p1,p2);
	}
	return 0;
}
