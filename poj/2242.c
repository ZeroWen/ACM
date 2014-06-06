/*
 * =====================================================================================
 *
 *       Filename:  2242.c
 *
 *    Description:  
 *    Problem Description
 *    To calculate the circumference of a circle seems to be an easy task - provided you know its diameter. But what if you don't? 
 *    You are given the cartesian coordinates of three non-collinear points in the plane.
 *    Your job is to calculate the circumference of the unique circle that intersects all three points. 
 *    Input
 *    The input file will contain one or more test cases. Each test case consists of one line containing six real numbers x1,y1, x2,y2,x3,y3, representing the coordinates of the three points. The diameter of the circle determined by the three points will never exceed a million. Input is terminated by end of file. 
 *    Output
 *    For each test case, print one line containing one real number telling the circumference of the circle determined by the three points. The circumference is to be printed accurately rounded to two decimals. The value of pi is approximately 3.141592653589793. 
 *    Sample Input
 *    0.0 -0.5 0.5 0.0 0.0 0.5
 *    0.0 0.0 0.0 1.0 1.0 1.0
 *    5.0 5.0 5.0 7.0 4.0 6.0
 *    0.0 0.0 -1.0 7.0 7.0 7.0
 *    50.0 50.0 50.0 70.0 40.0 60.0
 *    0.0 0.0 10.0 0.0 20.0 1.0
 *    0.0 -500000.0 500000.0 0.0 0.0 500000.0
 *    Sample Output
 *    3.14
 *    4.44
 *    6.28
 *    31.42
 *    62.83
 *    632.24
 *    3141592.65
 *
 *        Created:  06/06/2014 13:17:22
 *       Revision:  none
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
int main(){
	double x1,x2,x3,y1,y2,y3,a,b,c,d,e,f,x,y,r;
	while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
		a=2*(x2-x1);
		b=2*(y2-y1);
		c=x2*x2+y2*y2-x1*x1-y1*y1;
		d=2*(x3-x2);
		e=2*(y3-y2);
		f=x3*x3+y3*y3-x2*x2-y2*y2;
		x=(b*f-e*c)/(b*d-e*a);
		y=(d*c-a*f)/(b*d-e*a);
		r=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
		printf("%.2lf\n",2*PI*r);
	}
	return 0;
}

/*
 *  恶心的POJ！！！
 * 同样的代码用G++WA，用C++就能通过！
 */
