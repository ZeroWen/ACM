/*
 * =====================================================================================
 *
 *       Filename:  1061.c
 *
 *    Description:  
 *    Problem Description
 *    Given a positive integer N, you should output the most right digit of N^N.
 *    Input
 *    The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
 *    Each test case contains a single positive integer N(1<=N<=1,000,000,000).
 *    Output
 *    For each test case, you should output the rightmost digit of N^N.
 *    Sample Input
 *    2
 *    3
 *    4
 *    Sample Output
 *    7
 *    6
 *    Hint
 *    In the first case, 3 * 3 * 3 = 27, so the rightmost digit is 7.
 *    In the second case, 4 * 4 * 4 * 4 = 256, so the rightmost digit is 6.
 *
 *        Created:  04/24/2014 00:31:59
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,t,r;
	long n,sign;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%ld",&n);
			i=n%10;
			sign=(n/10)%2;
			switch(i){
				case(0):r=0;break;
				case(1):r=1;break;
				case(2):r=sign?6:4;break;
				case(3):r=sign?3:7;break;
				case(4):r=6;break;
				case(5):r=5;break;
				case(6):r=6;break;
				case(7):r=sign?7:3;break;
				case(8):r=sign?4:6;break;
				case(9):r=9;break;
			}
			printf("%d\n",r);
		}
	return 0;
}

//TEST CODE
/*
#include <stdio.h>
int main(){
	int i,t;
	unsigned long n,r;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%ld",&n);
			for(i=r=1;i<=n;i++){
				r*=n%10;
				if(r>9)
					r%=10;
			}
			printf("%ld\n",r);
		}
	return 0;
}

*/
//DATA
/*
 * 0 0
 * 1 1
 * 2 4/6
 * 3 7/3
 * 4 6
 * 5 5
 * 6 6
 * 7 3/7
 * 8 6/4
 * 9 9
 */
