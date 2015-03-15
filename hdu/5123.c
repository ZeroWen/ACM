/*
 * =====================================================================================
 *
 *       Filename:  5123.c
 *
 *    Description:  
 *    There are N people want to choose the best person. Each person select the best person ai, .John wants to know that who received the most number of votes.
 *    Input
 *    The first line contains a single integer T(1≤T≤50),indicating the number of test cases.
 *    Each test case begins with an integer N(1≤N≤100),indicating the number of person.
 *    Next N lines contains an integer ai(1≤ai≤N).
 *    Output
 *    For each case, output an integer means who is the best person. If there are multiple answers, print the minimum index.
 *    Sample Input
 *    2
 *    10
 *    1
 *    2
 *    3
 *    4
 *    5
 *    6
 *    7
 *    8
 *    9
 *    10
 *    5
 *    3
 *    3
 *    3
 *    3
 *    3
 *    Sample Output
 *    1
 *    3
 *
 *        Created:  03/15/2015 17:18:53
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int t,n,i,a[110],tmp,max;
	scanf("%d",&t);
	while(t--){
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		for(i=0;i<n;++i){
			scanf("%d",&tmp);
			++a[tmp];
		}
		for(i=0,max=0;i<n;++i){
			if(a[i]>a[max])
				max=i;
		}
		printf("%d\n",max);
	}
	return 0;
}
