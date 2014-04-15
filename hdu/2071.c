/*
 * =====================================================================================
 *
 *       Filename:  2071.c
 *
 *    Description:  
 *    Problem Description
 *    There are some students in a class, Can you help teacher find the highest student .
 *    Input
 *    There are some cases. The first line contains an integer t, indicate the cases; Each case have an integer n ( 1 ≤ n ≤ 100 ) , followed n students’ height.
 *    Output
 *    For each case output the highest height, the height to two decimal plases;
 *    Sample Input
 *    2
 *    3 170.00 165.00 180.00
 *    4 165.00 182.00 172.00 160.00
 *    Sample Output
 *    180.00
 *    182.00
 *
 *        Version:  1.0
 *        Created:  04/15/2014 19:31:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i;
	double h,max;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d",&n);
			for(i=0;i<n;i++){
				max=0;
				while(n--){
					scanf("%lf",&h);
					if(max<h)
						max=h;
				}
				printf("%.2lf\n",max);
			}
		}
	return 0;
}
