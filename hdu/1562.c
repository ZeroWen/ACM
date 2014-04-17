/*
 * =====================================================================================
 *
 *       Filename:  1562.c
 *
 *    Description:  
 *    Problem Description
 *    Happy new year to everybody!
 *    Now, I want you to guess a minimum number x betwwn 1000 and 9999 to let 
 *    (1) x % a = 0;
 *    (2) (x+1) % b = 0;
 *    (3) (x+2) % c = 0;
 *    and a, b, c are integers between 1 and 100.
 *    Given a,b,c, tell me what is the number of x ?
 *    Input
 *    The number of test cases c is in the first line of input, then c test cases followed.every test contains three integers a, b, c.
 *    Output
 *    For each test case your program should output one line with the minimal number x, you should remember that x is between 1000 and 9999. If there is no answer for x, output "Impossible".
 *    Sample Input
 *    2
 *    44 38 49
 *    25 56 3
 *    Sample Output
 *    Impossible
 *    2575
 *
 *        Created:  04/17/2014 16:35:32
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,x,a,b,c,sign;
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%d%d%d",&a,&b,&c);
			for(x=1000,sign=0;x<10000;x++)
				if(x%a==0&&(x+1)%b==0&&(x+2)%c==0){
					printf("%d\n",x);
					sign=1;
					break;
				}
			if(!sign)
				printf("Impossible\n");
		}
	return 0;
}
