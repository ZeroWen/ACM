/*
 * =====================================================================================
 *
 *       Filename:  5112.c
 *
 *    Description:  
 *     There is a curious man called Matt.
 *     One day, Matt's best friend Ted is wandering on the non-negative half of the number line. Matt finds it interesting to know the maximal speed Ted may reach. In order to do so, Matt takes records of Ted’s position. Now Matt has a great deal of records. Please help him to find out the maximal speed Ted may reach, assuming Ted moves with a constant speed between two consecutive records.
 *     Input
 *     The first line contains only one integer T, which indicates the number of test cases.
 *     For each test case, the first line contains an integer N (2 ≤ N ≤ 10000),indicating the number of records.
 *     Each of the following N lines contains two integers ti and xi (0 ≤ ti, xi ≤ 106), indicating the time when this record is taken and Ted’s corresponding position. Note that records may be unsorted by time. It’s guaranteed that all ti would be distinct.
 *     Output
 *     For each test case, output a single line “Case #x: y”, where x is the case number (starting from 1), and y is the maximal speed Ted may reach. The result should be rounded to two decimal places.
 *     Sample Input
 *     2
 *     3
 *     2 2
 *     1 1
 *     3 4
 *     3
 *     0 3
 *     1 5
 *     2 0
 *     Sample Output
 *     Case #1: 2.00
 *     Case #2: 5.00
 *
 *        Created:  03/17/2015 22:44:27
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
	long t,x;
}record;
record a[10010];
float speed[10010];
int cmp_rec(const void *a,const void *b){
	if((*(record *)a).t==(*(record *)b).t)
		return 0;
	return ((*(record *)a).t>(*(record *)b).t)?1:-1;
}
int cmp_speed(const void *a,const void *b){
	if(*(float *)b>*(float *)a)
		return 1;
	if(*(float *)b<*(float *)a)
		return -1;
	return 0;
}
int main(){
	int i,cas,t,n;
	scanf("%d",&t);
	for(cas=0;cas<t;++cas){
		scanf("%d",&n);
		for(i=0;i<n;++i)
			scanf("%ld%ld",&a[i].t,&a[i].x);
		qsort(a,n,sizeof(record),cmp_rec);
		for(i=0;i<n-1;++i)
			speed[i]=(float)abs(a[i+1].x-a[i].x)/(a[i+1].t-a[i].t);
		qsort(speed,n-1,sizeof(float),cmp_speed);
		printf("Case #%d: %.2f\n",cas+1,speed[0]);
	}
	return 0;
}
