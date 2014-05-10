/*
 * =====================================================================================
 *
 *       Filename:  4029.c
 *
 *    Description:  
 *    Problem Description
 *    Pizza has always been a staple on college campuses. After the downturn in the economy, it is more important than ever to get the best deal, namely the lowest cost per square inch. Consider, for example, the following menu for a store selling circular pizzas of varying diameter and price:
 *    One could actually compute the costs per square inch, which would be approximately 10.2￠, 7.6￠, and 7.1￠ respectively, so the 12-inch pizza is the best value. However, if the 10-inch had been sold for $5, it would have been the best value, at approximately 6.4￠ per square inch.
 *    Your task is to analyze a menu and to report the diameter of the pizza that is the best value. Note that no two pizzas on a menu will have the same diameter or the same inherent cost per square inch.
 *    Input
 *    The input contains a series of one or more menus. Each menu starts with the number of options N, 1 ≤ N ≤ 10, followed by N lines, each containing two integers respectively designating a pizza's diameter D (in inches) and price P (in dollars), with 1 ≤ D ≤ 36 and 1 ≤ P ≤ 100. The end of the input will be designated with a line containing the number 0.
 *    Output
 *    For each menu, print a line identifying the menu number and the diameter D of the pizza with the best value, using the format shown below.
 *    Sample Input
 *    3
 *    5 2
 *    10 6
 *    12 8
 *    3
 *    5 2
 *    10 5
 *    12 8
 *    4
 *    1 1
 *    24 33
 *    13 11
 *    6 11
 *    0
 *    Sample Output
 *    Menu 1: 12
 *    Menu 2: 10
 *    Menu 3: 24
 *
 *        Created:  05/10/2014 16:18:46
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,d,p,i,j=1,nb_v;
	double b_v,t;
	while(scanf("%d",&n),n){
		for(i=1;i<=n;i++){
			scanf("%d%d",&d,&p);
			t=(double)p/(d*d);
			if(b_v>t||i==1){
				b_v=t;
				nb_v=d;
			}
		}
		printf("Menu %d: %d\n",j++,nb_v);
	}
	return 0;
}
