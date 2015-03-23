/*
 * =====================================================================================
 *
 *       Filename:  2656.c
 *
 *    Description:  
 *    Jinjin is a junior school student. Besides the classes in school, Jinjin's mother also arranges some supplementary classes for her. However, if Jinjin studies for more than eight hours a day, she will be unhappy on that day. On any day she gets unhappy, the more time she studies, the unhappier she will be. Now we got Jinjin's class schedule for the next several days and your task is to find out whether she will be unhappy on these days; if she will be unhappy, on which day she will be the unhappiest.
 *    Input
 *    There may be several test cases. In the first line of each test case, there is an integer N (1 <= N <= 7), which represents the number of days you should analyze. Then there comes N lines, each contains two non-negative integers (each smaller than 10). The first integer represents how many hours Jinjin studies at school on the day, and the second represents how many hours she studies in the supplementary classes on the same day.
 *    A case with N = 0 indicates the end of the input, and this case should not be processed.
 *    Output
 *    For each test case, output a line contains a single integer. If Jinjin will always be happy, the integer should be 0; otherwise, the integer should be a positive integer K, which means that Jinjin will be the unhappiest on the K-th day. If the unhappiest day is not unique, just output the earliest one among these unhappiest days.
 *    Sample Input
 *    7
 *    5 3
 *    6 2
 *    7 2
 *    5 3
 *    5 4
 *    0 4
 *    0 6
 *    1
 *    4 4
 *    0
 *    Sample Output
 *    3
 *    0
 *
 *        Created:  03/23/2015 21:26:59
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,n,a,b,d;
	while(scanf("%d",&n)!=EOF){
		if(!n)
			break;
		for(i=0,d=0;i<n;++i){
			scanf("%d%d",&a,&b);
			if(!d&&(a+b>8))
				d=i+1;
		}
		printf("%d\n",d);
	}
	return 0;
}
