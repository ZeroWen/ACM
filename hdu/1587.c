/*
 * =====================================================================================
 *
 *       Filename:  1587.c
 *
 *    Description:  
 *    Problem Description
 *    As you know, Gardon trid hard for his love-letter, and now he's spending too much time on choosing flowers for Angel.
 *    When Gardon entered the flower shop, he was frightened and dazed by thousands kinds of flowers. 
 *    "How can I choose!" Gardon shouted out.
 *    Finally, Gardon-- a no-EQ man decided to buy flowers as many as possible.
 *    Can you compute how many flowers Gardon can buy at most?
 *    Input
 *    Input have serveral test cases. Each case has two lines.
 *    The first line contains two integers: N and M. M means how much money Gardon have.
 *    N integers following, means the prices of differnt flowers.
 *    Output
 *    For each case, print how many flowers Gardon can buy at most.
 *    You may firmly assume the number of each kind of flower is enough.
 *    Sample Input
 *    2 5
 *    2 3
 *    Sample Output
 *    2
 *    Hint
 *    Gardon can buy 5=2+3,at most 2 flower, but he cannot buy 3 flower with 5 yuan.
 *        
 *    Created:  06/27/14 23:17:13
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,tmp,min;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&tmp);
			if(!i)
				min=tmp;
			else if(tmp<min)
				min=tmp;
		}
		printf("%d\n",m/min);
	}
	return 0;
}
