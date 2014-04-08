/*
 * =====================================================================================
 *
 *       Filename:  2005.c
 *
 *    Description:  
 *    Problem Description
 *    给定一个日期，输出这个日期是该年的第几天。
 *    Input
 *    输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。
 *
 *    Output
 *    对于每组输入数据，输出一行，表示该日期是该年的第几天。
 *    
 *    Sample Input
 *    1985/1/20
 *    2006/3/12
 *
 *    Sample Output
 *    20
 *    71
 *
 *        Version:  1.0
 *        Created:  04/07/2014 23:33:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define leap(year) (year%400==0||(year%4==0&&year%100!=0))
int main(){
	int year,month,day,n,i;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
		for(i=0,n=day;i<month-1;i++)
			n+=mon[i];
		if(leap(year)&&month>2)
			n++;
		printf("%d\n",n);
	}
	return 0;
}
