/*
 * =====================================================================================
 *
 *       Filename:  2070.c
 *
 *    Description:  
 *    Problem Description
 *    Your objective for this question is to develop a program which will generate a fibbonacci number. The fibbonacci function is defined as such:
 *    f(0) = 0
 *    f(1) = 1
 *    f(n) = f(n-1) + f(n-2)
 *    Your program should be able to handle values of n in the range 0 to 50.
 *    Input
 *    Each test case consists of one integer n in a single line where 0≤n≤50. The input is terminated by -1.
 *    Output
 *    Print out the answer in a single line for each test case.
 *    Sample Input
 *    3
 *    4
 *    5
 *    -1
 *    Sample Output
 *    2
 *    3
 *    5
 *    Hint
 *    Note:
 *    you can use 64bit integer: __int64
 *
 *        Version:  1.0
 *        Created:  04/15/2014 19:32:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,n;
	__int64  a[50]={0,1};
	for(i=2;i<51;i++)
		a[i]=a[i-1]+a[i-2];
	while(scanf("%d",&n)!=EOF&&n!=-1)
		printf("%I64d\n",a[n]);
	return 0;
}
