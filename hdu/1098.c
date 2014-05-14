/*
 * =====================================================================================
 *
 *       Filename:  1098.c
 *
 *    Description:  
 *    Problem Description
 *    Ignatius is poor at math,he falls across a puzzle problem,so he has no choice but to appeal to Eddy. this problem describes that:f(x)=5*x^13+13*x^5+k*a*x,input a nonegative integer k(k<10000),to find the minimal nonegative integer a,make the arbitrary integer x ,65|f(x)if
 *    no exists that a,then print "no".
 *    Input
 *    The input contains several test cases. Each test case consists of a nonegative integer k, More details in the Sample Input.
 *    Output
 *    The output contains a string "no",if you can't find a,or you should output a line contains the a.More details in the Sample Output.
 *    Sample Input
 *    11
 *    100
 *    9999
 *    Sample Output
 *    22
 *    no
 *    43
 *
 *        Created:  05/14/2014 16:09:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>
int main(){
	int n,i,t;
	while(scanf("%d",&n)!=EOF){
		for(i=1,t=0;i<=65;i++)
			if((18+n*i)%65==0){
				printf("%d\n",i);
				t++;
			}
		if(!t)
			printf("no\n");
	}
	return 0;
}
