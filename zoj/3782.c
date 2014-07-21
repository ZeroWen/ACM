/*
 * =====================================================================================
 *
 *       Filename:  3782.c
 *
 *    Description:  
 *    Complete the ternary calculation.
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T indicating the number of test cases. For each test case:
 *    There is a string in the form of "number1 operatora number2 operatorb number3". Each operator will be one of {'+', '-' , '*', '/', '%'}, and each number will be an integer in [1, 1000].
 *    Output
 *    For each test case, output the answer.
 *    Sample Input
 *    5
 *    1 + 2 * 3
 *    1 - 8 / 3
 *    1 + 2 - 3
 *    7 * 8 / 5
 *    5 - 8 % 3
 *    Sample Output
 *    7
 *    -1
 *    0
 *    11
 *    3
 *
 *    Created:  07/19/2014 21:40:23
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define highlev(c) (c=='*'||c=='/'||c=='%')
int cal(int a,int b,char c,int flag){
	int r;
	if(c=='*')
		r=a*b;
	else if(c=='/')
		r=a/b;
	else if(c=='%')
		r=a%b;
	if(flag){
		if(c=='+')
			r=a+b;
		else if(c=='-')
			r=a-b;
	}
	return r;
}
int main(){
	int t,n1,n2,n3,r;
	char o1,o2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n1);
		getchar();
		o1=getchar();
		getchar();
		scanf("%d",&n2);
		getchar();
		o2=getchar();
		getchar();
		scanf("%d",&n3);
		if(highlev(o1)){
			r=cal(n1,n2,o1,0);
			r=cal(r,n3,o2,1);
		}
		else if(highlev(o2)){
			r=cal(n2,n3,o2,0);
			r=cal(n1,r,o1,1);
		}
		else{
			r=cal(n1,n2,o1,1);
			r=cal(r,n3,o2,1);
		}
		printf("%d\n",r);
	}
	return 0;
}
