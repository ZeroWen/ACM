/*
 * =====================================================================================
 *
 *       Filename:  1085.c
 *
 *    Description:  
 *    “Given some Chinese Coins (硬币) (three kinds-- 1, 2, 5), and their number is num_1, num_2 and num_5 respectively, please output the minimum value that you cannot pay with given coins.”
 *    You, super ACMer, should solve the problem easily, and don’t forget to take $25000000 from Bush!
 *    Input
 *    Input contains multiple test cases. Each test case contains 3 positive integers num_1, num_2 and num_5 (0<=num_i<=1000). A test case containing 0 0 0 terminates the input and this test case is not to be processed.
 *    Output
 *    Output the minimum positive value that one cannot pay with given coins, one line for one case.
 *    Sample Input
 *    1 1 3
 *    0 0 0
 *    Sample Output
 *    4
 *
 *        Created:  05/24/2014 12:42:54
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,c,d;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		if(!a&&!b&&!c)
			break;
		if(!a)
			d=0;
		else if(a<4&&(a+2*b<4))
			d=2*b;
		else
			d=2*b+5*c;
		printf("%d\n",d+1+a);
	}
	return 0;
}
