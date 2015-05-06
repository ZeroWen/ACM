/*
 * =====================================================================================
 *
 *       Filename:  2637.c
 *
 *    Description:  
 *    You must be very familiar with derivative in math,and I guarantee that you can work out the derivative easily. Generally speaking,the last problem is the most difficult problem only a few can work out. However,it is not the case in this contest designed by Samuel. Give you 1 number n,and 2 extra numbers a and b you can work this problem out. For example,f(x)=ax^b,the 2 class derivative is f''=a*b*(b-1)x^(b-2),here n means n class. Here all the numbers are integers.
 *    Input
 *    The input consists 2 parts:
 *    test case number t,each of the test case contains 3 number n(n>=0),a,b(a,b will not be very large),the original one is like the format of f(x)=ax^b.
 *    Output
 *    Output the a after n times' work.
 *    Sample Input
 *    2
 *    1 2 3
 *    3 4 5 
 *    Sample Output
 *    6
 *    240
 *
 *        Created:  05/07/2015 01:16:18
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,i,n,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&a,&b);
		for(i=0;i<n;++i)
			a*=b-i;
		printf("%d\n",a);
	}
	return 0;
}
