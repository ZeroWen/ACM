/*
 * =====================================================================================
 *
 *       Filename:  2393.c
 *
 *    Description:  
 *
 *    Problem Description
 *    You are building a house. You’d prefer if all the walls have a precise right angle relative to the ground, but you have no device to measure angles. A friend says he has a great idea how you could ensure that all walls are upright: All you need to do is step away a few feet from the wall, measure how far away you are from the wall, measure the height of the wall, and the distance from the upper edge of the wall to where you stand. You friend tells you to do these measurements for all walls, then he’ll tell you how to proceed. Sadly, just as you are done, a timber falls on your friend, and an ambulance brings him to the hospital. This is too bad, because now you have to figure out what to do with your measurements yourself.
 *    Given the three sides of a triangle, determine if the triangle is a right triangle, i.e. if one of the triangle’s angles is 90 degrees.
 *    Input
 *    The inputs start with a line containing a single integer n. Each of the n following lines contains one test case. Each test case consists of three integers 1 <= a, b, c <= 40000 separated by a space. The three integers are the lengths of the sides of a triangle.
 *    Output
 *    The output for every scenario begins with a line containing “Scenario #i:”, where i is the number of the scenario counting from 1. After that, output a single line containing either the string “yes” or the string “no”, depending on if the triangle in this test case has a right angle. Terminate each test case with an empty line.
 *    Sample Input
 *    2
 *    36 77 85
 *    40 55 69
 *    Sample Output
 *    Scenario #1:
 *    yes
 *
 *    Scenario #2:
 *    no
 *
 *    Created:  07/02/14 13:36:36
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	double a,b,c,tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		if(b>c){
			tmp=b;
			b=c;
			c=tmp;
		}
		printf("Scenario #%d:\n%s\n\n",i+1,(fabs(a*a+b*b-c*c)>0.0001)?"no":"yes");
	}
	return 0;
}
