/*
 * =====================================================================================
 *
 *       Filename:  3752.c
 *
 *    Description:  
 *    ErEr has big cake weighing m grams , at the same time he has n children . and every children want a part of the cake weighs even number(偶数) of grams. The children are extremely hungry and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the cake in the way they want. For sure, each of them should get a part of positive weight.
 *    Input
 *    The first line of input gives the number of cases, T (at most 100).
 *    each case has there numbers m,n. (1<=m<=10000，1<=n<=100)
 *    Output
 *    Print YES, if the boys can divide the cake into n parts, each of them weighing even number of kilos; and NO in the opposite case.
 *    Sample Input
 *    2
 *    10 2
 *    11 2
 *    Sample Output
 *    YES
 *    NO
 *
 *        Created:  05/09/2014 17:41:58
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,m,n,sign;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			sign=0;
			scanf("%d%d",&m,&n);
			if(m%2==0&&m>=2*n)
				sign=1;
			printf("%s\n",sign?"YES":"NO");
		}
	return 0;
}
