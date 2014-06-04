/*
 * =====================================================================================
 *
 *       Filename:  1005.c
 *
 *    Description:  
 *    Input Format: 
 *    The first line of input will be a positive integer indicating how many data sets will be included (N). 
 *    Each of the next N lines will contain the X and Y Cartesian coordinates of the land Fred is considering. These will be floating point numbers measured in miles. The Y coordinate will be non-negative. (0,0) will not be given.
 *    Output Format: 
 *    For each data set, a single line of output should appear. This line should take the form of: 
 *    ��Property N: This property will begin eroding in year Z.�� 
 *    Where N is the data set (counting from 1), and Z is the first year (start from 1) this property will be within the semicircle AT THE END OF YEAR Z. Z must be an integer. 
 *    After the last data set, this should print out ��END OF OUTPUT.��
 *    Notes: 
 *    1. No property will appear exactly on the semicircle boundary: it will either be inside or outside. 
 *    2. This problem will be judged automatically. Your answer must match exactly, including the capitalization, punctuation, and white-space. This includes the periods at the ends of the lines. 
 *    3. All locations are given in miles. 
 *    Sample Input: 
 *    2 
 *    1.0 1.0 
 *    25.0 0.0 
 *    Sample Output: 
 *    Property 1: This property will begin eroding in year 1. 
 *    Property 2: This property will begin eroding in year 20. 
 *    END OF OUTPUT.
 *
 *        Created:  06/04/2014 22:09:02
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
	int n,i,z;
	double x,y,l,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf %lf",&x,&y);
		l=sqrt(x*x+y*y)/10.0;
		for(z=1,t=sqrt(z/PI);t<=l;z++)
			t=sqrt((z+1)/PI);
		printf("Property %d: This property will begin eroding in year %d.\n",i,z);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}
