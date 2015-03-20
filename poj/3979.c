/*
 * =====================================================================================
 *
 *       Filename:  3979.c
 *
 *    Description:  
 *    编写一个C程序，实现两个分数的加减法
 *    Input
 *    输入包含多行数据
 *    每行数据是一个字符串，格式是"a/boc/d"。
 *    其中a, b, c, d是一个0-9的整数。o是运算符"+"或者"-"。
 *    数据以EOF结束
 *    输入数据保证合法
 *    Output
 *    对于输入数据的每一行输出两个分数的运算结果。
 *    注意结果应符合书写习惯，没有多余的符号、分子、分母，并且化简至最简分数
 *    Sample Input
 *    1/8+3/8
 *    1/4-1/2
 *    1/3-1/3
 *    Sample Output
 *    1/2
 *    -1/4
 *    0
 *
 *        Created:  03/20/2015 22:13:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int main(){
	int a,b,c,d,t1,t2;
	char o;
	while(scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d)!=EOF){
		t1=b*d/gcd(b,d);
		a*=t1/b;
		c*=t1/d;
		a+=c;
		if(o=='-')
			a-=2*c;
		t2=a>0?a:-a;
		t2=gcd(t1,t2);
		a/=t2;
		t1/=t2;
		if(a%t1==0)
			printf("%d\n",a/t1);
		else
			printf("%d/%d\n",a,t1);
	}
	return 0;
}
