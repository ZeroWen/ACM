/*
 * =====================================================================================
 *
 *       Filename:  2080.c
 *
 *    Description:  
 *    Problem Description
 *    这次xhd面临的问题是这样的：在一个平面内有两个点，求两个点分别和原点的连线的夹角的大小。
 *    注：夹角的范围[0，180]，两个点不会在圆心出现。
 *    Input
 *    输入数据的第一行是一个数据T，表示有T组数据。
 *    每组数据有四个实数x1,y1,x2,y2分别表示两个点的坐标,这些实数的范围是[-10000,10000]。
 *    Output
 *    对于每组输入数据，输出夹角的大小精确到小数点后两位。
 *    Sample Input
 *    2
 *    1 1 2 2
 *    1 1 1 0
 *    Sample Output
 *    0.00
 *    45.00
 *
 *        Created:  06/12/2014 11:43:29
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<math.h>
#define PI 3.14159263
int main(){
	int t;
	double x1,x2,y1,y2,a,b,c,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt(x1*x1+y1*y1);
		c=sqrt(x2*x2+y2*y2);
		m=(b*b+c*c-a*a)/(2*b*c);
		n=acos(m);
		printf("%.2lf\n",n*180.00/PI);
	}
	return 0;
}
