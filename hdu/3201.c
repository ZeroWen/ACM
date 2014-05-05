/*
 * =====================================================================================
 *
 *       Filename:  3201.c
 *
 *    Description:  
 *    There is a wall in your backyard. It is so long that you can’t see its endpoints. You want to build a fence of length L such that the area enclosed between the wall and the fence is maximized. The fence can be of arbitrary shape, but only its two endpoints may touch the wall.
 *    Input
 *    The input consists of several test cases.
 *    For every test case, there is only one integer L (1<=L<=100), indicating the length of the fence.
 *    The input ends with L=0.
 *    Output
 *    For each test case, output one line containing the largest area. Your answer should be rounded to 2 digits after the decimal point.
 *    Sample Input
 *    1
 *    100
 *    0
 *    Sample Output
 *    0.16
 *    1591.55
 *
 *        Created:  05/05/2014 22:37:56
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define PI 3.1415926
int main(){
	int l;
	while(scanf("%d",&l),l)
		printf("%.2lf\n",l*l/PI/2);
	return 0;
}
