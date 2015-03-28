/*
 * =====================================================================================
 *
 *       Filename:  2590.c
 *
 *    Description:  
 *    One steps through integer points of the straight line. The length of a step must be nonnegative and can be by one bigger than, equal to, or by one smaller than the length of the previous step.
 *    What is the minimum number of steps in order to get from x to y? The length of the first and the last step must be 1.
 *    Input
 *    Input consists of a line containing n, the number of test cases.
 *    Output
 *    For each test case, a line follows with two integers: 0 <= x <= y < 2^31. For each test case, print a line giving the minimum number of steps to get from x to y.
 *    Sample Input
 *    3
 *    45 48
 *    45 49
 *    45 50
 *    Sample Output
 *    3
 *    3
 *    4
 *
 *        Created:  03/28/2015 17:05:23
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n;
	long i,j,x,y,key[100000]={0,1,2,3};
	for(i=2,j=4;j<100000;++i){
		key[j]=key[j-1]+i;
		++j;
		key[j]=key[j-1]+i;
		++j;
	}
	scanf("%d",&n);
	while(n--){
		scanf("%ld%ld",&x,&y);
		for(i=0;i<100000;++i)
			if(y-x<key[i]){
				printf("%ld\n",i-1);
				break;
			}
	}
	return 0;
}
