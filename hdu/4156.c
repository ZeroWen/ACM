/*
 * =====================================================================================
 *
 *       Filename:  4156.c
 *
 *    Description:  
 *    Problem Description
 *    A long time ago, the Egyptians figured out that a triangle with sides of length 3, 4, and 5 had a right angle as its largest angle. You must determine if other triangles have a similar property.
 *    Input
 *    Input represents several test cases, followed by a line containing 0 0 0. Each test case has three positive integers, less than 30,000, denoting the lengths of the sides of a triangle.
 *    Output
 *    For each test case, a line containing "right" if the triangle is a right triangle, and a line containing "wrong" if the triangle is not a right triangle.
 *    Sample Input
 *    6 8 10
 *    25 52 60
 *    5 12 13
 *    0 0 0
 *    Sample Output
 *    right
 *    wrong
 *    right
 *
 *        Created:  05/06/2014 00:26:10
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
void swap(long *a,long *b){
	long t;
	t=*a;
	*a=*b;
	*b=t;
}
int main(){
	long a,b,c;
	while(scanf("%ld%ld%ld",&a,&b,&c)!=EOF){
		if(!a&&!b&&!c)
			break;
		if(a>b)
			swap(&a,&b);
		if(b>c)
			swap(&b,&c);
		if(a>c)
			swap(&a,&c);
		printf("%s\n",a*a+b*b==c*c?"right":"wrong");
	}
	return 0;
}
