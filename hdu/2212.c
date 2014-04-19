/*
 * =====================================================================================
 *
 *       Filename:  2212.c
 *
 *    Description:  
 *    Problem Description
 *    A DFS(digital factorial sum) number is found by summing the factorial of every digit of a positive integer. 
 *    For example ,consider the positive integer 145 = 1!+4!+5!, so it's a DFS number.
 *    Now you should find out all the DFS numbers in the range of int( [1, 2147483647] ).
 *    There is no input for this problem. Output all the DFS numbers in increasing order. The first 2 lines of the output are shown below.
 *    Input
 *    no input
 *    Output
 *    Output all the DFS number in increasing order.
 *    Sample Output
 *    1
 *    2
 *    ......
 *
 *        Created:  04/19/2014 10:31:20
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int factorial(int n){
	int f=1;
	for(;n>0;n--)
		f*=n;
	return f;
}
int main(){
	long i,j,k,sum,t,a[10];
	for(i=1;i<=40585;i++){
		for(j=0,t=i;t>0;j++){
			a[j]=t%10;
			t/=10;
		}
		for(k=0,sum=0;k<j;k++)
			sum+=factorial(a[k]);
		if(sum==i)
			printf("%ld\n",i);
	}
	return 0;
}
/*
#include<stdio.h>
int main(){
    printf("1\n2\n145\n40585\n");
    return 0;
}
*/
