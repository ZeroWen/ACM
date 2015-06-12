/*
 * =====================================================================================
 *
 *       Filename:  2420.c
 *
 *    Description:  
 *    A calendar is a system for measuring time, from hours and minutes, to months and days, and finally to years and centuries. The terms of hour, day, month, year and century are all units of time measurements of a calender system.
 *    According to the Gregorian calendar, which is the civil calendar in use today, years evenly divisible by 4 are leap years, with the exception of centurial years that are not evenly divisible by 400. Therefore, the years 1700, 1800, 1900 and 2100 are not leap years, but 1600, 2000, and 2400 are leap years.
 *    Given the number of days that have elapsed since January 1, 2000 A.D, your mission is to find the date and the day of the week.
 *    Input
 *    The input consists of lines each containing a positive integer, which is the number of days that have elapsed since January 1, 2000 A.D. The last line contains an integer -1, which should not be processed. You may assume that the resulting date won't be after the year 9999.
 *    Output
 *    For each test case, output one line containing the date and the day of the week in the format of "YYYY-MM-DD DayOfWeek", where "DayOfWeek" must be one of "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" and "Saturday".
 *    Sample Input
 *    1730
 *    1740
 *    1750
 *    1751
 *    -1
 *    Sample Output
 *    2004-09-26 Sunday
 *    2004-10-06 Wednesday
 *    2004-10-16 Saturday
 *    2004-10-17 Sunday
 *
 *        Created:  06/12/2015 20:41:47
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int isleap(int y) {
	return (y%400==0||(y%4==0&&y%100!=0));
}
int main() {
	int n, year, month, we;
	char week[8][10]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(scanf("%d", &n)!=EOF && n!=-1) {
		we = n % 7;
		for (year=2000;n - 365 - isleap(year) >= 0;++year) {
			n -= 365 + isleap(year);
		}
		n += 1;
		for (month=1;month<=12;++month) {
			if (month != 2) {
				if (n-mon[month]>0)
					n -= mon[month];
				else
					break;
			}
			else {
				if (n-mon[month]-isleap(year)>0)
					n -= mon[month]+isleap(year);
				else
					break;
			}
		}
		month %= 12;
		if (!month) {
			month = 12;
		}
		printf("%d-%02d-%02d %s\n", year, month, n, week[we]);
	}
	return 0;
}
