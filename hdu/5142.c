/*
 * =====================================================================================
 *
 *       Filename:  5142.c
 *
 *    Description:  
 *    A boy named NPY is learning FFT algorithm now.In that algorithm,he needs to do an operation called "reverse".
 *    For example,if the given number is 10.Its binary representaion is 1010.After reversing,the binary number will be 0101.And then we should ignore the leading zero.Then the number we get will be 5,whose binary representaion is 101.
 *    NPY is very interested in this operation.For every given number,he want to know what number he will get after reversing.Can you help him?
 *    Input
 *    The first line contains a integer T — the number of queries (1≤T≤100).
 *    The next T lines,each contains a integer X(0≤X≤231−1),the given number.
 *    Output
 *    For each query,print the reversed number in a separate line.
 *    Sample Input
 *    3
 *    6
 *    8
 *    1
 *    Sample Output
 *    3
 *    1
 *    1
 *
 *        Created:  03/15/2015 22:57:04
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,t,a[35];
	long n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		for(i=0;n;++i,n>>=1)
			a[i]=n&1;
		for(j=0;a[j]==0;j++);
		for(m=0;j<i;++j){
			m<<=1;
			if(a[j])
				m|=1;
		}
		printf("%ld\n",m);
	}
	return 0;
}
