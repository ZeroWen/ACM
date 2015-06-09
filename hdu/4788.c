/*
 * =====================================================================================
 *
 *       Filename:  4788.c
 *
 *    Description:  
 *    Yesterday your dear cousin Coach Pang gave you a new 100MB hard disk drive (HDD) as a gift because you will get married next year.
 *    But you turned on your computer and the operating system (OS) told you the HDD is about 95MB. The 5MB of space is missing. It is known that the HDD manufacturers have a different capacity measurement. The manufacturers think 1 “kilo” is 1000 but the OS thinks that is 1024. There are several descriptions of the size of an HDD. They are byte, kilobyte, megabyte, gigabyte, terabyte, petabyte, exabyte, zetabyte and yottabyte. Each one equals a “kilo” of the previous one. For example 1 gigabyte is 1 “kilo” megabytes.
 *    Now you know the size of a hard disk represented by manufacturers and you want to calculate the percentage of the “missing part”.
 *    Input
 *    The first line contains an integer T, which indicates the number of test cases.
 *    For each test case, there is one line contains a string in format “number[unit]” where number is a positive integer within [1, 1000] and unit is the description of size which could be “B”, “KB”, “MB”, “GB”, “TB”, “PB”, “EB”, “ZB”, “YB” in short respectively.
 *    Output
 *    For each test case, output one line “Case #x: y”, where x is the case number (starting from 1) and y is the percentage of the “missing part”. The answer should be rounded to two digits after the decimal point.
 *    Sample Input
 *    2
 *    100[MB]
 *    1[B]
 *    Sample Output
 *    Case #1: 4.63%
 *    Case #2: 0.00%
 *
 *        Created:  06/10/2015 01:52:23
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int t, cas, i, len;
	char str[10], unit, key[10] = "BKMGTPEZY";
	double ans;
	scanf("%d", &t);
	for (cas = 0;cas < t;++cas) {
		scanf("%s",str);
		len = strlen(str);
		for (i = 0;i < len;++i)
			if (str[i] == '[')
				break;
		unit = str[i+1];
		for (i = 0;i < 10;++i)
			if (unit == key[i])
				break;
		ans = (1.0 - pow(0.9765625, i))*100;
		printf("Case #%d: %.2lf%%\n", cas+1, ans);
	}
	return 0;
}
