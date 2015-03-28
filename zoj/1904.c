/*
 * =====================================================================================
 *
 *       Filename:  1904.c
 *
 *    Description:  
 *    When chomping a tree the beaver cuts a very specific shape out of the tree trunk. What is left in the tree trunk looks like two frustums of a cone joined by a cylinder with the diameter the same as its height. A very curious beaver tries not to demolish a tree but rather sort out what should be the diameter of the cylinder joining the frustums such that he chomped out certain amount of wood. You are to help him to do the calculations.
 *    We will consider an idealized beaver chomping an idealized tree. Let us assume that the tree trunk is a cylinder of diameter D and that the beaver chomps on a segment of the trunk also of height D. What should be the diameter d of the inner cylinder such that the beaver chomped out V cubic units of wood?
 *    Input
 *    Input contains multiple cases each presented on a separate line. Each line contains two integer numbers D and V separated by whitespace. D is the linear units and V is in cubic units. V will not exceed the maximum volume of wood that the beaver can chomp. A line with D=0 and V=0 follows the last case.
 *    Output
 *    For each case, one line of output should be produced containing one number rounded to three fractional digits giving the value of d measured in linear units.
 *    Sample Input
 *    10 250
 *    20 2500
 *    25 7000
 *    50 50000
 *    0 0
 *    Sample Output
 *    8.054
 *    14.775
 *    13.115
 *    30.901
 *
 *        Created:  03/28/2015 16:05:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.141592653589
#endif
int main(){
	int D,V;
	double d;
	while(scanf("%d%d",&D,&V)!=EOF){
		if(!D&&!V)
			break;
		d=pow((D*D*D*1.0-6.0*V/M_PI),1.0/3);
		printf("%.3lf\n",d);
	}
	return 0;
}

// 6*V=PI*(D^3-d^3)
