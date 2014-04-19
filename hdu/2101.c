/*
 * =====================================================================================
 *
 *       Filename:  2101.c
 *
 *    Description:  
 *    Problem Description
 *    This problem is also a A + B problem,but it has a little difference,you should determine does (a+b) could be divided with 86.For example ,if (A+B)=98,you should output no for result.
 *    Input
 *    Each line will contain two integers A and B. Process to end of file.
 *    Output
 *    For each case, if(A+B)%86=0,output yes in one line,else output no in one line.
 *    Sample Input
 *    1 1
 *    8600 8600
 *    Sample Output
 *    no
 *    yes
 *
 *        Created:  04/19/2014 09:03:40
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	long a,b;
	while(scanf("%ld%ld",&a,&b)!=EOF)
		printf("%s\n",(a+b)%86?"no":"yes");
	return 0;
}
