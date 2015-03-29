/*
 * =====================================================================================
 *
 *       Filename:  3720.c
 *
 *    Description:  
 *    Every fraction can be converted to a repeatin decimal. For example 1/2 = .5, 1/3 = .(3) and 1/6 = .1(6). Given an integer n, Tom wants to know how many digit k occurs totally in the repeating decimal presentation of 1/2, 1/3 ... 1/n.
 *    Input
 *    The input consists of several test cases. Each test case is a line containing two integers n (2 ≤ n ≤ 100) and k (0 ≤ k ≤ 9).
 *    Output
 *    Output the total occurrence of the digit.
 *    Sample Input
 *    3 5
 *    7 3
 *    7 0
 *    Sample Output
 *    1
 *    1
 *    0
 *
 *        Created:  03/29/2015 23:07:46
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int num[102][10];
int repeat[102];
int main(){
	int i,j,n,k,t,ans;
	memset(num,0,sizeof(num));
	for(i=2;i<101;i++){
		memset(repeat,-1,sizeof(repeat));
		j=t=1;
		repeat[j]=0;
		while(1){
			j*=10;
			num[i][j/i]++;
			j%=i;
			if(repeat[j]!=-1||j==0)
				break;
			repeat[j]=t++;
		}
	}
	while(scanf("%d%d",&n,&k)!=EOF){
        for(i=2,ans=0;i<=n;i++)
            ans+=num[i][k];
        printf("%d\n",ans);
	}
	return 0;
}
