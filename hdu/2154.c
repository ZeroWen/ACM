/*
 * =====================================================================================
 *
 *       Filename:  2154.c
 *
 *    Description:  
 *    Problem Description
 *    由于长期缺乏运动，小黑发现自己的身材臃肿了许多，于是他想健身，更准确地说是减肥。
 *    小黑买来一块圆形的毯子，把它们分成三等分，分别标上A,B,C，称之为“跳舞毯”，他的运动方式是每次都从A开始跳，每次都可以任意跳到其他块，但最后必须跳回A，且不能原地跳.为达到减肥效果，小黑每天都会坚持跳n次，有天他突然想知道当他跳n次时共几种跳法，结果想了好几天没想出来－_－
 *    现在就请你帮帮他，算出总共有多少跳法。
 *    Input
 *    测试输入包含若干测试用例。每个测试用例占一行，表示n的值(1<=n<=1000)。
 *    当n为0时输入结束。
 *    Output
 *    每个测试用例的输出占一行，由于跳法非常多，输出其对10000取模的结果.
 *    Sample Input
 *    2
 *    3
 *    4
 *    0
 *    Sample Output
 *    2
 *    2
 *    6
 *
 *    Created:  07/11/14 10:14:02
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define N 1001

int main(int argc, char *argv[]) {
	int n,i,p=(int)pow(2,4),a[N]={0,0,2,2,6};
	for (i=5;i<N;++i) {
		a[i]=p-a[i-1];
		a[i]%=10000;
		p*=2;
		if(p>30000)
			p%=30000;
	}
	while (scanf("%d",&n)!=EOF&&n) {
		printf("%d\n",a[n]);
	}
	return 0;
}
