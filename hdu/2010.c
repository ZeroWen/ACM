/*
 * =====================================================================================
 *
 *       Filename:  2010.c
 *
 *    Description:  
 *    Problem Description
 *    春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
 *    “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
 *    现在要求输出所有在m和n范围内的水仙花数。
 *    Input
 *    输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）。
 *    Output
 *    对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开;
 *    如果给定的范围内不存在水仙花数，则输出no;
 *    每个测试实例的输出占一行。
 *    Sample Input
 *    100 120
 *    300 380
 *    Sample Output
 *    no
 *    370 371
 *
 *        Version:  1.0
 *        Created:  04/12/2014 18:47:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int foo(int n){
	int a,b,c;
	a=n/100;
	b=(n-a*100)/10;
	c=n%10;
	return (n==(a*a*a+b*b*b+c*c*c));
}
int main(){
	int a,b,i,t,sign;
	while(scanf("%d%d",&a,&b)!=EOF){
		int c[5]={0};
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		for(i=a,sign=0;i<=b;i++)
			if(foo(i))
				c[sign++]=i;
		if(sign)
			for(i=0;i<sign;i++)
				printf("%d%s",c[i],(i==sign-1)?"\n":" ");
		else
			printf("no\n");
	}
	return 0;
}
