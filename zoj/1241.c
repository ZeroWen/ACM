/*
 * =====================================================================================
 *
 *       Filename:  1241.c
 *
 *    Description:  
 *    Mathematics can be so easy when you have a computer. Consider the following example. You probably know that in a right-angled triangle, the length of the three sides a, b, c (where c is the longest side, called the hypotenuse) satisfy the relation a*a+b*b=c*c. This is called Pythagora's Law.
 *    Here we consider the problem of computing the length of the third side, if two are given.
 *    Input
 *    The input contains the descriptions of several triangles. Each description consists of a line containing three integers a, b and c, giving the lengths of the respective sides of a right-angled triangle. Exactly one of the three numbers is equal to -1 (the 'unknown' side), the others are positive (the 'given' sides).
 *    A description having a=b=c=0 terminates the input.
 *    Output
 *    For each triangle description in the input, first output the number of the triangle, as shown in the sample output. Then print "Impossible." if there is no right-angled triangle, that has the 'given' side lengths. Otherwise output the length of the 'unknown' side in the format "s = l", where s is the name of the unknown side (a, b or c), and l is its length. l must be printed exact to three digits to the right of the decimal point.
 *    Print a blank line after each test case.
 *    Sample Input
 *    3 4 -1
 *    -1 2 7
 *    5 -1 3
 *    0 0 0
 *    Sample Output
 *    Triangle #1
 *    c = 5.000
 *
 *    Triangle #2
 *    a = 6.708
 *    
 *    Triangle #3
 *    Impossible.
 *
 *        Created:  04/26/2014 15:17:54
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int a[3],n=1,i;
	while(scanf("%d%d%d",&a[0],&a[1],&a[2])&&(a[0]!=0||a[1]!=0||a[2]!=0)){
		printf("Triangle #%d\n",n++);
		for(i=0;i<3&&a[i]!=-1;i++);
		if(i==0){
			if(a[2]<=a[1])
				printf("Impossible.\n\n");
			else
				printf("a = %.3lf\n\n",(double)sqrt(a[2]*a[2]-a[1]*a[1]));
		}
		else if(i==1){
			if(a[2]<=a[0])
				printf("Impossible.\n\n");
			else
				printf("b = %.3lf\n\n",(double)sqrt(a[2]*a[2]-a[0]*a[0]));
		}
		else if(i==2)
			printf("c = %.3lf\n\n",(double)sqrt(a[0]*a[0]+a[1]*a[1]));
	}
	return 0;
}
