/*
 * =====================================================================================
 *
 *       Filename:  1029.c
 *
 *    Description:  
 *    "OK, you are not too bad, em... But you can never pass the next test." feng5166 says.
 *    "I will tell you an odd number N, and then N integers. There will be a special integer among them, you have to tell me which integer is the special one after I tell you all the integers." feng5166 says.
 *    "But what is the characteristic of the special integer?" Ignatius asks.
 *    "The integer will appear at least (N+1)/2 times. If you can't find the right integer, I will kill the Princess, and you will be my dinner, too. Hahahaha....." feng5166 says.
 *    Can you find the special integer for Ignatius?
 *    Input
 *    The input contains several test cases. Each test case contains two lines. The first line consists of an odd integer N(1<=N<=999999) which indicate the number of the integers feng5166 will tell our hero. The second line contains the N integers. The input is terminated by the end of file.
 *    Output
 *    For each test case, you have to output only one line which contains the special number you have found.
 *    Sample Input
 *    5
 *    1 3 2 3 3
 *    11
 *    1 1 1 1 1 5 5 5 5 5 5
 *    7
 *    1 1 1 1 1 1 1
 *    Sample Output
 *    3
 *    5
 *    1
 *
 *        Created:  03/31/2015 21:34:10
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(long *)a-*(long *)b;
}
long n,i,count,a[1000000];
int main(){
	while(scanf("%ld",&n)!=EOF){
		for(i=0;i<n;++i)
			scanf("%ld",&a[i]);
		qsort(a,n,sizeof(long),cmp);
		for(i=1,count=1;i<n;++i){
			while(a[i]==a[i-1]){
				++count;
				++i;
			}
			if(count>=(n+1)/2)
				break;
			else
				count=1;
		}
		printf("%ld\n",a[i-1]);
	}
	return 0;
}
