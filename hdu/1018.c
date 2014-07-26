/*
 * =====================================================================================
 *
 *       Filename:  1018.c
 *
 *    Description:  
 *    Problem Description
 *    In many applications very large integers numbers are required. Some of these applications are using keys for secure transmission of data, encryption, etc. In this problem you are given a number, you have to determine the number of digits in the factorial of the number.
 *    Input
 *    Input consists of several lines of integer numbers. The first line contains an integer n, which is the number of cases to be tested, followed by n lines, one integer 1 ≤ n ≤ 107 on each line.
 *    Output
 *    The output contains the number of digits in the factorial of the integers appearing in the input.
 *    Sample Input
 *    2
 *    10
 *    20
 *    Sample Output
 *    7
 *    19
 *
 *        Created:  05/25/2014 10:49:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,d,n,i;
	double tmp;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=2,tmp=1,d=1;i<=n;i++){
			tmp*=i;
			while(tmp>=10){
				tmp/=10;
				d++;
			}
		}
		printf("%d\n",d);
	}
	return 0;
}

/*
 * tmp>=10不能写为tmp>9
 */
