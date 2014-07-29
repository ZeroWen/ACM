/*
 * =====================================================================================
 *
 *       Filename:  2036.c
 *
 *    Description:  
 *    Problem Description
 *    Input
 *    输入数据包含多个测试实例，每个测试实例占一行，每行的开始是一个整数n(3<=n<=100)，它表示多边形的边数（当然也是顶点数），然后是按照逆时针顺序给出的n个顶点的坐标（x1, y1, x2, y2... xn, yn）,为了简化问题，这里的所有坐标都用整数表示。
 *    输入数据中所有的整数都在32位整数范围内，n=0表示数据的结束，不做处理。
 *    Output
 *    对于每个测试实例，请输出对应的多边形面积，结果精确到小数点后一位小数。
 *    每个实例的输出占一行。
 *    Sample Input
 *    3 0 0 1 0 0 1
 *    4 1 0 0 1 -1 0 0 -1
 *    0
 *    Sample Output
 *    0.5
 *    2.0
 *
 *    Created:  07/16/2014 19:25:26
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,x1,y1,x2,y2,x3,y3,sum;
	while(scanf("%d",&n),n){
		for(i=sum=0;i<n;i++){
			if(!i){
				scanf("%d%d",&x1,&y1);
				x3=x1,y3=y1;
			}
			else{
				scanf("%d%d",&x2,&y2);
				sum+=x1*y2-x2*y1;
				x1=x2,y1=y2;
			}
		}
		sum+=x1*y3-x3*y1;
		printf("%.1lf\n",0.5*(double)sum);
	}
	return 0;
}
