/*
 * =====================================================================================
 *
 *       Filename:  1985.c
 *
 *    Description:  
 *    Conversion between the metric and English measurement systems is relatively simple. Often, it involves either multiplying or dividing by a constant. You must write a program that converts between the following units:
 *    Type	Metric	English	equivalent
 *    Weight	1.000	kilograms	2.2046 pounds
 *    Weight	0.4536	kilograms	1.0000 pound
 *    Volume	1.0000	liter	0.2642 gallons
 *    Volume	3.7854	liters	1.0000 gallon
 *    Input
 *    The first line of input contains a single integer N, (1 <= N <= 1000) which is the number of datasets that follow.
 *    Each dataset consists of a single line of input containing a floating point (double precision) number, a space and the unit specification for the measurement to be converted. The unit specification is one of kg, lb, l, or g referring to kilograms, pounds, liters and gallons respectively.
 *    Output
 *    For each dataset, you should generate one line of output with the following values: The dataset number as a decimal integer (start counting at one), a space, and the appropriately converted value rounded to 4 decimal places, a space and the unit specification for the converted value.
 *    Sample Input
 *    5
 *    1 kg
 *    2 l
 *    7 lb
 *    3.5 g
 *    0 l
 *    Sample Output
 *    1 2.2046 lb
 *    2 0.5284 g
 *    3 3.1752 kg
 *    4 13.2489 l
 *    5 0.0000 g
 *
 *        Created:  05/02/2014 12:11:29
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int i,n;
	double a;
	char unit[4];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf %s",&a,unit);
		printf("%d ",i);
		if(!strcmp(unit,"kg"))
			printf("%.4lf lb\n",a*2.2046);
		else if(!strcmp(unit,"l"))
			printf("%.4lf g\n",a*0.2642);
		else if(!strcmp(unit,"lb"))
			printf("%.4lf kg\n",a*0.4536);
		else if(!strcmp(unit,"g"))
			printf("%.4lf l\n",a*3.7854);
		}
	return 0;
}

/*
 * 这个题真坑
 * 只能写scanf("%d",&n);
 * 不能写while(scanf("%d",&n)!=EOF)
 * WA了四次
 */
