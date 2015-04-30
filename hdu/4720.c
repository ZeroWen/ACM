/*
 * =====================================================================================
 *
 *       Filename:  4720.c
 *
 *    Description:  
 *    Three wizards are doing a experiment. To avoid from bothering, a special magic is set around them. The magic forms a circle, which covers those three wizards, in other words, all of them are inside or on the border of the circle. And due to save the magic power, circle's area should as smaller as it could be.
 *    Naive and silly "muggles"(who have no talents in magic) should absolutely not get into the circle, nor even on its border, or they will be in danger.
 *    Given the position of a muggle, is he safe, or in serious danger?
 *    Input
 *    The first line has a number T (T <= 10) , indicating the number of test cases.
 *    For each test case there are four lines. Three lines come each with two integers xi and yi (|xi, yi| <= 10), indicating the three wizards' positions. Then a single line with two numbers qx and qy (|qx, qy| <= 10), indicating the muggle's position.
 *    Output
 *    For test case X, output "Case #X: " first, then output "Danger" or "Safe".
 *    Sample Input
 *    3
 *    0 0
 *    2 0
 *    1 2
 *    1 -0.5
 *
 *    0 0
 *    2 0
 *    1 2
 *    1 -0.6
 *
 *    0 0
 *    3 0
 *    1 1
 *    1 -1.5
 *    Sample Output
 *
 *    Case #1: Danger
 *    Case #2: Safe
 *    Case #3: Safe
 *
 *        Created:  05/01/2015 02:07:26
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int t,i,k,p[3][2];
	double q[2],o[2],a,b,c,r,d;
	scanf("%d",&t);
	for(k=0;k<t;++k){
		for(i=0;i<3;++i)
			scanf("%d%d",&p[i][0],&p[i][1]);
		scanf("%lf%lf",&q[0],&q[1]);
		a=sqrt(pow((p[0][0]-p[1][0]),2)+pow((p[0][1]-p[1][1]),2));
		b=sqrt(pow((p[1][0]-p[2][0]),2)+pow((p[1][1]-p[2][1]),2));
		c=sqrt(pow((p[2][0]-p[0][0]),2)+pow((p[2][1]-p[0][1]),2));
		for(i=0;i<2;++i)
			o[i]=(a*p[0][i]+b*p[1][i]+c*p[2][i])/(a+b+c);
		r=sqrt(pow((o[0]-p[0][0]),2)+pow((o[1]-p[0][1]),2));
		d=sqrt(pow((o[0]-q[0]),2)+pow((o[1]-q[1]),2));
		printf("Case #%d: %s\n",k+1,r>d||fabs(r-b)<0.0000001?"Danger":"Safe");
	}
	return 0;
}
