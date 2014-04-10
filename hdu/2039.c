/*
 * =====================================================================================
 *
 *       Filename:  2039.c
 *
 *    Description:  
 *    Problem Description
 *    给定三条边，请你判断一下能不能组成一个三角形。
 *    Input
 *    输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;
 *    Output
 *    对于每个测试实例，如果三条边长A,B,C能组成三角形的话，输出YES，否则NO。
 *
 *    Sample Input
 *    2
 *    1 2 3
 *    2 2 2
 *
 *    Sample Output
 *    NO
 *    YES
 *
 *        Version:  1.0
 *        Created:  04/10/2014 23:15:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i;
	double a[3];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			for(i=0;i<3;i++)
				scanf("%lf",&a[i]);
			if(a[0]+a[1]>a[2]&&a[0]+a[2]>a[1]&&a[1]+a[2]>a[0])
				printf("YES\n");
			else
				printf("NO\n");
		}
	return 0;
}
