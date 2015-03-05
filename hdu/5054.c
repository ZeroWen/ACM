/*
 * =====================================================================================
 *
 *       Filename:  5054.c
 *
 *    Description:  
 *    Bob and Alice got separated in the Square, they agreed that if they get separated, they'll meet back at the coordinate point (x, y). Unfortunately they forgot to define the origin of coordinates and the coordinate axis direction. Now, Bob in the lower left corner of the Square, Alice in the upper right corner of the the Square. Bob regards the lower left corner as the origin of coordinates, rightward for positive direction of axis X, upward for positive direction of axis Y. Alice regards the upper right corner as the origin of coordinates, leftward for positive direction of axis X, downward for positive direction of axis Y. Assuming that Square is a rectangular, length and width size is N * M. 
 *    Bob and Alice with their own definition of the coordinate system respectively, went to the coordinate point (x, y). Can they meet with each other ?
 *    Note: Bob and Alice before reaching its destination, can not see each other because of some factors (such as buildings, time poor).
 *    Input
 *    There are multiple test cases. Please process till EOF. Each test case only contains four integers : N, M and x, y. The Square size is N * M, and meet in coordinate point (x, y). ( 0 < x < N <= 1000 , 0 < y < M <= 1000 ).
 *    Output
 *    If they can meet with each other, please output "YES". Otherwise, please output "NO".
 *    Sample Input
 *    10 10 5 5
 *    10 10 6 6
 *    Sample Output
 *    YES
 *    NO
 *
 *        Created:  03/05/2015 18:12:56
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int m,n,x,y;
	while(scanf("%d%d%d%d",&n,&m,&x,&y)!=EOF)
		printf("%s\n",(2*x==n&&2*y==m)?"YES":"NO");
	return 0;
}
