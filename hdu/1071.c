/*
 * =====================================================================================
 *
 *       Filename:  1071.c
 *
 *    Description:  
 *    Ignatius bought a land last week, but he didn't know the area of the land because the land is enclosed by a parabola and a straight line. The picture below shows the area. Now given all the intersectant points shows in the picture, can you tell Ignatius the area of the land?
 *    Note: The point P1 in the picture is the vertex of the parabola.
 *    Input
 *    The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
 *    Each test case contains three intersectant points which shows in the picture, they are given in the order of P1, P2, P3. Each point is described by two floating-point numbers X and Y(0.0<=X,Y<=1000.0).
 *    Output
 *    For each test case, you should output the area of the land, the result should be rounded to 2 decimal places.
 *    Sample Input
 *    2
 *    5.000000 5.000000
 *    0.000000 0.000000
 *    10.000000 0.000000
 *    10.000000 10.000000
 *    1.000000 1.000000
 *    14.000000 8.222222
 *    Sample Output
 *    33.33
 *    40.69 
 *
 *        Created:  03/27/2015 22:34:37
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int i,j,t;
	double a[3][2],tmpx,tmpy,s;
	scanf("%d",&t);
	while(t--){
		for(i=0;i<3;++i)
			scanf("%lf%lf",&a[i][0],&a[i][1]);
		for(i=0;i<3;++i)
			for(j=1;j>=i;--j)
				if(a[j][0]<a[j+1][0]){
					tmpx=a[j][0];
					tmpy=a[j][1];
					a[j][0]=a[j+1][0];
					a[j][1]=a[j+1][1];
					a[j+1][0]=tmpx;
					a[j+1][1]=tmpy;
				}
		s=(a[0][1]-a[1][1])/pow((a[0][0]-a[1][0]),2)*pow((a[2][0]-a[0][0]),3)/6;
		printf("%.2lf\n",s);
	}
	return 0;
}
