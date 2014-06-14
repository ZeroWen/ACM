/*
 * =====================================================================================
 *
 *       Filename:  2105.c
 *
 *    Description:  
 *    Problem Description
 *    Everyone know the story that how Newton discovered the Universal Gravitation. One day, Newton walked leisurely, suddenly, an apple hit his head. Then Newton discovered the Universal Gravitation.From then on,people have sovled many problems by the the theory of the Universal Gravitation. What's more, wo also have known every object has its Center of Gravity.
 *    Now,you have been given the coordinates of three points of a triangle. Can you calculate the center of gravity of the triangle?
 *    Input
 *    The first line is an integer n,which is the number of test cases.
 *    Then n lines follow. Each line has 6 numbers x1,y1,x2,y2,x3,y3,which are the coordinates of three points.
 *    The input is terminated by n = 0.
 *    Output
 *    For each case, print the coordinate, accurate up to 1 decimal places.
 *    Sample Input
 *    2
 *    1.0 2.0 3.0 4.0 5.0 2.0
 *    1.0 1.0 4.0 1.0 1.0 5.0
 *    0
 *    Sample Output
 *    3.0 2.7
 *    2.0 2.3
 *
 *        Created:  06/14/2014 23:26:08
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n;
	double x1,y1,x2,y2,x3,y3,mx,my,gx,gy;
	while(scanf("%d",&n),n)
		while(n--){
			scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
			mx=(x2+x3)/2.0;
			my=(y2+y3)/2.0;
			gx=(x1+2*mx)/3.0;
			gy=(y1+2*my)/3.0;
			printf("%.1lf %.1lf\n",gx,gy);
		}
	return 0;
}
