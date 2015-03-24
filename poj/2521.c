/*
 * =====================================================================================
 *
 *       Filename:  2521.c
 *
 *    Description:  
 *    Businessmen, of course, can make much money. However, sometimes, they would lose money in trading. For example, Jame, a businessman, brought in some goods each cost him 40 yuan and he decided to sell at the price of 70 yuan. Then a customer came to buy one, gave Jame 100 yuan, and of course got back 30 yuan. You may said, "Jame earned 30 yuan." But unfortunately, Jame found the 100 yuan from the customer was fake. What a poor man! In this case Jame lost 70 yuan (40 (the goods price) + 30 (the money paid back to the customer)).
 *    Now your task is to calculate how much Jame would lose in this kind of trade. Of course in this case, sometimes Jame may still earn.
 *    Input
 *    The input consists of several instances. Each instance contains four integers N, M, P and C, which are all in the range [0, 50000], separated by a single space.
 *    N is the cost price of Jame good.
 *    M is the sell price.
 *    P is the total fake money the customer gave Jame.
 *    C is how much Jame paid back to the customer.
 *    Here N < M. And P may be less than M, as customer may pay with some fake money and some true money.
 *    The input is terminated by a line containing 4 zeros.
 *    Output
 *    For one instance, output one line contains exactly one integer, which tells how much Jame lost in the trade. If Jame still earned, just output a negative integer, the absolute value of which tells the money Jame earned.
 *    Sample Input
 *    40 70 100 30
 *    40 70 50 20
 *    14604 32391 3902 153
 *    0 0 0 0
 *    Sample Output
 *    70
 *    20
 *    -13885
 *
 *        Created:  03/24/2015 12:59:05
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,p,c;
	while(scanf("%d%d%d%d",&n,&m,&p,&c)!=EOF){
		if(!n&&!m&&!p&&!c)
			break;
		printf("%d\n",n-m+p);
	}
	return 0;
}
