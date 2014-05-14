/*
 * =====================================================================================
 *
 *       Filename:  3279.c
 *
 *    Description:  
 *    Problem Description
 *    For this problem, you will write a program that prints the Nth largest value in a fixed sized array of integers. To make things simple, N will be 3 and the array will always be have 10 decimal integer values.
 *    Input
 *    The first line of input contains a single integer P, (1 ≤ P ≤ 1000), which is the number of data sets that follow. Each data set consists of a single line containing the data set number, followed by a space,followed by 10 space separated decimal integers whose values are between 1 and 1000 inclusive.
 *    Output
 *    For each data set, generate one line of output with the following values: The data set number as a decimal integer, a space, and the 3rd largest value of the corresponding 10 integers.
 *    Sample Input
 *    4
 *    1 1 2 3 4 5 6 7 8 9 1000
 *    2 338 304 619 95 343 496 489 116 98 127
 *    3 931 240 986 894 826 640 965 833 136 138
 *    4 940 955 364 188 133 254 501 122 768 408
 *    Sample Output
 *    1 8
 *    2 489
 *    3 931
 *    4 768
 *
 *        Created:  05/14/2014 16:31:37
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int p,a[11],i,j,t;
	scanf("%d",&p);
	while(p--){
		for(i=0;i<11;i++)
			scanf("%d",&a[i]);
		for(i=1;i<11;i++)
			for(j=10;j>i;j--)
				if(a[j]>a[j-1]){
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
		printf("%d %d\n",a[0],a[3]);
	}
	return 0;
}
