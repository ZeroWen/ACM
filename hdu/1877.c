/*
 * =====================================================================================
 *
 *       Filename:  1877.c
 *
 *    Description:  
 *    Problem Description
 *    输入两个不超过整型定义的非负10进制整数A和B(<=231-1)，输出A+B的m (1 < m <10)进制数。
 *    Input
 *    输入格式：测试输入包含若干测试用例。每个测试用例占一行，给出m和A，B的值。
 *    当m为0时输入结束。
 *    Output
 *    输出格式：每个测试用例的输出占一行，输出A+B的m进制数。
 *    Sample Input
 *    8 1300 48
 *    2 1 7
 *    0
 *    Sample Output
 *    2504
 *    1000
 *
 *    Created:  07/16/2014 19:00:24
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,m,r[25];
	long a,b;
	long long c;
	while(scanf("%d",&m),m){
		scanf("%ld%ld",&a,&b);
		c=a+b;
		i=0;
		while(1){
			r[i++]=c%m;
			c/=m;
			if(!c)
				break;
		}
		for(j=i-1;j>=0;--j)
			printf("%d%s",r[j],(!j)?"\n":"");
	}
	return 0;
}
