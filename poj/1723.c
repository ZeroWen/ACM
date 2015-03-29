/*
 * =====================================================================================
 *
 *       Filename:  1723.c
 *
 *    Description:  
 *    N soldiers of the land Gridland are randomly scattered around the country.
 *    A position in Gridland is given by a pair (x,y) of integer coordinates. Soldiers can move - in one move, one soldier can go one unit up, down, left or right (hence, he can change either his x or his y coordinate by 1 or -1).
 *    The soldiers want to get into a horizontal line next to each other (so that their final positions are (x,y), (x+1,y), ..., (x+N-1,y), for some x and y). Integers x and y, as well as the final order of soldiers along the horizontal line is arbitrary.
 *    The goal is to minimise the total number of moves of all the soldiers that takes them into such configuration.
 *    Two or more soldiers must never occupy the same position at the same time.
 *    Input
 *    The first line of the input contains the integer N, 1 <= N <= 10000, the number of soldiers.
 *    The following N lines of the input contain initial positions of the soldiers : for each i, 1 <= i <= N, the (i+1)st line of the input file contains a pair of integers x[i] and y[i] separated by a single blank character, representing the coordinates of the ith soldier, -10000 <= x[i],y[i] <= 10000.
 *    Output
 *    The first and the only line of the output should contain the minimum total number of moves that takes the soldiers into a horizontal line next to each other.
 *    Sample Input
 *    5
 *    1 2
 *    2 2
 *    1 3
 *    3 -2
 *    3 3
 *    Sample Output
 *    8
 *
 *        Created:  03/23/2015 19:36:51
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	int i,n,s,x[10010],y[10010];
	scanf("%d",&n);
	for(i=0;i<n;++i)
		scanf("%d%d",&x[i],&y[i]);
	qsort(x,n,sizeof(int),cmp);
	qsort(y,n,sizeof(int),cmp);
	for(i=0;i<n;++i)
		x[i]-=i;
	qsort(x,n,sizeof(int),cmp);
	for(i=s=0;i<n/2;++i)
		s+=x[n-1-i]-x[i]+y[n-1-i]-y[i];
	printf("%d\n",s);
	return 0;
}
