/*
 * =====================================================================================
 *
 *       Filename:  2104.c
 *
 *    Description:  
 *    Contest time again! How excited it is to see balloons floating around. But to tell you a secret, the judges' favorite time is guessing the most popular problem. When the contest is over, they will count the balloons of each color and find the result.
 *    This year, they decide to leave this lovely job to you.
 *    Input
 *    Input contains multiple test cases. Each test case starts with a number N (0 < N < 1000) -- the total number of balloons distributed. The next N lines contain one color each. The color of a balloon is a string of up to 15 lower-case letters.
 *    A test case with N = 0 terminates the input and this test case is not to be processed.
 *    Output
 *    For each case, print the color of balloon for the most popular problem on a single line. It is guaranteed that there is a unique solution for each test case.
 *    Sample Input
 *    5
 *    green
 *    red
 *    blue
 *    red
 *    red
 *    3
 *    pink
 *    orange
 *    pink
 *    0
 *    Sample Output
 *    red
 *    pink
 *
 *        Created:  05/04/2014 00:06:39
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,max,max_n;
	char c[1000][15];
	while(scanf("%d",&n),n){
		int d[1000]={0};
		for(i=0;i<n;i++){
			scanf("%s",c[i]);
			if(i)
				for(j=0;j<i;j++)
					if(!strcmp(c[j],c[i])){
						d[j]++;
						break;
					}
		}
		for(max=d[0],i=max_n=0;i<n;i++)
			if(max<d[i]){
				max=d[i];
				max_n=i;
			}
		printf("%s\n",c[max_n]);
	}
	return 0;
}
