/*
 * =====================================================================================
 *
 *       Filename:  1040.c
 *
 *    Description:  
 *    Problem Description
 *    These days, I am thinking about a question, how can I get a problem as easy as A+B? It is fairly difficulty to do such a thing. Of course, I got it after many waking nights.
 *    Give you some integers, your task is to sort these number ascending (升序).
 *    You should know how easy the problem is now!
 *    Good luck!
 *    Input
 *    Input contains multiple test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow. Each test case contains an integer N (1<=N<=1000 the number of integers to be sorted) and then N integers follow in the same line. 
 *    It is guarantied that all integers are in the range of 32-int.
 *    Output
 *    For each case, print the sorting result, and one line one case.
 *    Sample Input
 *    2
 *    3 2 1 3
 *    9 1 4 7 2 5 8 3 6 9
 *    Sample Output
 *    1 2 3
 *    1 2 3 4 5 6 7 8 9
 *
 *        Created:  04/25/2014 23:42:56
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i,j,k,a[1000];
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d",&n);
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(i=0;i<n;i++)
				for(j=n-1;j>i;j--)
					if(a[j]<a[j-1]){
						k=a[j];
						a[j]=a[j-1];
						a[j-1]=k;
					}
			for(i=0;i<n;i++)
				printf("%d%s",a[i],(i==n-1)?"\n":" ");
		}
	return 0;
}
