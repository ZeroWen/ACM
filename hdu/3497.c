/*
 * =====================================================================================
 *
 *       Filename:  3497.c
 *
 *    Description:  
 *    Input
 *    Several cases are given until the end of input. Each line contains h and λ separated by a space.
 *    Output
 *    Print the minimum altitude angle of the star in degree. The value should be accurate to two decimal points. (There may be several result for one case, but only output the minimum altitude angle!)
 *    Sample Input
 *    0.5 20.0
 *    20.0 0.5
 *    Sample Output
 *    5.74
 *    0.00
 *    Hint
 *    Notice: When light reflected from a medium having an index of refraction greater than that of the medium in which it is traveling, a 180°phase change (or λ/2 shift ) occurs.
 *
 *        Created:  05/21/2014 14:49:08
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main(){
	double h,x,a;
	while(scanf("%lf%lf",&h,&x)!=EOF){
		a=asin(0.01*x/4/h);
		printf("%.2lf\n",180*a/PI);
	}
	return 0;
}
