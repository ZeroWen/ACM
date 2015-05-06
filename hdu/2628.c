/*
 * =====================================================================================
 *
 *       Filename:  2628.c
 *
 *    Description:  
 *    Samuel only has the average data,Please use these figures to predicate ,if the total number reached or higher than the number is given,Samuel's hope will come true. 
 *    Input
 *    The first line of the input is t,which represents the number of the test cases.
 *    Each of the test cases only contains 2 parts:
 *    The average data of a week p(the unit is million people), the expected year's number q(the unit is million people too).Notice a year has only 52 weeks.
 *    Output
 *    If the number is reached,output “Oh,Samuel's hope will come true,thanks to the DcSLs.”
 *    else output“Unfortunately,Samuel's hope will not come true,more tourists are welcomed!”
 *    Sample Input
 *    3
 *    3 151
 *    2 105
 *    4 208
 *    Sample Output
 *    Oh,Samuel's hope will come true,thanks to the DcSLs.
 *    Unfortunately,Samuel's hope will not come true,more tourists are welcomed!
 *    Oh,Samuel's hope will come true,thanks to the DcSLs.
 *
 *        Created:  05/07/2015 00:43:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t;
	double p,q;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf",&p,&q);
		if(p*52<q)
			printf("Unfortunately,Samuel's hope will not come true,more tourists are welcomed!\n");
		else
			printf("Oh,Samuel's hope will come true,thanks to the DcSLs.\n");
	}
	return 0;
}
