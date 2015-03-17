/*
 * =====================================================================================
 *
 *       Filename:  5062.c
 *
 *    Description:  
 *    A positive integer x can represent as (a1a2…akak…a2a1)10 or (a1a2…ak−1akak−1…a2a1)10 of a 10-based notational system, we always call x is a Palindrome Number. If it satisfies 0<a1<a2<…<ak≤9, we call x is a Beautiful Palindrome Number.
 *    Now, we want to know how many Beautiful Palindrome Numbers are between 1 and 10N.
 *    Input
 *    The first line in the input file is an integer T(1≤T≤7), indicating the number of test cases.
 *    Then T lines follow, each line represent an integer N(0≤N≤6).
 *    Output
 *    For each test case, output the number of Beautiful Palindrome Number.
 *    Sample Input
 *    2
 *    1
 *    6
 *    Sample Output
 *    9
 *    258
 *
 *        Created:  03/17/2015 20:58:26
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,a[8]={1,9,18,54,90,174,258,384};
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}
