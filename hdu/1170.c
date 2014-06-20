/*
 * =====================================================================================
 *
 *       Filename:  1170.c
 *
 *    Description:  
 *    Problem Description
 *    The contest starts now! How excited it is to see balloons floating around. You, one of the best programmers in HDU, can get a very beautiful balloon if only you have solved the very very very... easy problem.
 *    Give you an operator (+,-,*, / --denoting addition, subtraction, multiplication, division respectively) and two positive integers, your task is to output the result. 
 *    Is it very easy? 
 *    Come on, guy! PLMM will send you a beautiful Balloon right now!
 *    Good Luck!
 *    Input
 *    Input contains multiple test cases. The first line of the input is a single integer T (0<T<1000) which is the number of test cases. T test cases follow. Each test case contains a char C (+,-,*, /) and two integers A and B(0<A,B<10000).Of course, we all know that A and B are operands and C is an operator. 
 *    Output
 *    For each case, print the operation result. The result should be rounded to 2 decimal places If and only if it is not an integer.
 *    Sample Input
 *    4
 *    + 1 2
 *    - 1 2
 *    * 1 2
 *    / 1 2
 *    Sample Output
 *    3
 *    -1
 *    2
 *    0.50
 *
 *        Created:  06/20/2014 23:54:39
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char op;
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		getchar();
		op=getchar();
		scanf("%d %d",&a,&b);
		switch(op){
			case('+'):printf("%d\n",a+b);break;
			case('-'):printf("%d\n",a-b);break;
			case('*'):printf("%d\n",a*b);break;
			case('/'):(a%b==0)?(printf("%d\n",a/b)):(printf("%.2lf\n",(double)a/b));break;
		}
	}
	return 0;
}
