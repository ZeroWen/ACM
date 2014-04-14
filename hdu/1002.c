/*
 * =====================================================================================
 *
 *       Filename:  1002.c
 *
 *    Description:  
 *    Problem Description
 *    I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.
 *    
 *    Input
 *    The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
 *
 *    Output
 *    For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
 *
 *    Sample Input
 *    2
 *    1 2
 *    112233445566778899 998877665544332211
 *    
 *    Sample Output
 *    Case 1:
 *    1 + 2 = 3
 *    
 *    Case 2:
 *    112233445566778899 + 998877665544332211 = 1111111111111111110
 *
 *        Version:  1.0
 *        Created:  03/30/2014 22:18:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i;
	long double a,b;
	while(scanf("%d",&n)!=EOF)
		for(i=0;i<n;i++){
			scanf("%Lf%Lf",&a,&b);
			printf("Case %d:\n",i+1);
			printf("%.0Lf+%.0Lf=%.0Lf\n",a,b,a+b);
		}
	return 0;
}
