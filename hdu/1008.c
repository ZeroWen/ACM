/*
 * =====================================================================================
 *
 *       Filename:  1008.c
 *
 *    Description:  
 *    The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.
 *    For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.
 *    Input
 *    There are multiple test cases. Each case contains a positive integer N, followed by N positive numbers. All the numbers in the input are less than 100. A test case with N = 0 denotes the end of input. This test case is not to be processed.
 *    Output
 *    Print the total time on a single line for each test case. 
 *    Sample Input
 *    1 2
 *    3 2 3 1
 *    0
 *    Sample Output
 *    17
 *    41
 *
 *        Version:  1.0
 *        Created:  04/12/2014 18:08:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,a[100],i,t,up,down;
	while(scanf("%d",&n),n){
		for(i=t=up=down=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>t)
				up+=a[i]-t;
			else
				down+=t-a[i];
			t=a[i];
		}
		printf("%d\n",6*up+5*n+4*down);
	}
	return 0;
}
